/*
 * XREFs of NtResetWriteWatch @ 0x1404AF9A0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiObtainReferencedVadEx @ 0x14001B0F0 (MiObtainReferencedVadEx.c)
 *     MiMoveDirtyBitsToPfns @ 0x140023A70 (MiMoveDirtyBitsToPfns.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtResetWriteWatch(HANDLE ProcessHandle, PVOID BaseAddress, SIZE_T RegionSize)
{
  NTSTATUS v5; // ebp
  _KPROCESS *Process; // rdi
  char *v7; // r15
  void *v8; // r12
  int v9; // ebx
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rdi
  NTSTATUS result; // eax
  int v16; // [rsp+40h] [rbp-88h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v18[48]; // [rsp+50h] [rbp-78h] BYREF

  if ( (unsigned __int64)BaseAddress > 0x7FFFFFFEFFFFLL )
    return -1073741584;
  if ( 0x7FFFFFFF0000LL - (__int64)BaseAddress < RegionSize || !RegionSize )
    return -1073741583;
  v5 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = (char *)BaseAddress + RegionSize - 1;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    v8 = Process;
    v9 = 0;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)ProcessHandle,
               0x77576D4Du,
               (__int64)&BugCheckParameter1,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    v8 = (void *)BugCheckParameter1;
    v9 = 0;
    if ( Process != (_KPROCESS *)BugCheckParameter1 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v18);
      v9 = 1;
    }
  }
  v10 = MiObtainReferencedVadEx((unsigned __int64)BaseAddress, 0, &v16);
  v14 = (void *)v10;
  if ( v10 )
  {
    if ( (*(_DWORD *)(v10 + 48) & 7) == 4
      && (v12 = ((*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) << 12) | 0xFFF,
          (unsigned __int64)v7 <= v12) )
    {
      MiMoveDirtyBitsToPfns((unsigned __int64)BaseAddress, (unsigned __int64)v7, v10);
    }
    else
    {
      v5 = -1073741585;
    }
    MiUnlockAndDereferenceVad(v14, v11, v12, v13);
  }
  else
  {
    v5 = -1073741585;
  }
  if ( v9 )
    KiUnstackDetachProcess((__int64)v18, 0LL);
  if ( ProcessHandle != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(v8, 0x77576D4Du);
  return v5;
}
