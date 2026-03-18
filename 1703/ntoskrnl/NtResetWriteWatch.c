/*
 * XREFs of NtResetWriteWatch @ 0x14001DB40
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiObtainReferencedVad @ 0x1400BDAC0 (MiObtainReferencedVad.c)
 *     RtlClearBitsEx @ 0x1400CDB30 (RtlClearBitsEx.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     MiLocateVadEvent @ 0x1400CE790 (MiLocateVadEvent.c)
 *     MiMoveDirtyBitsToPfns @ 0x1400D10C0 (MiMoveDirtyBitsToPfns.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406C0DE0 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtResetWriteWatch(HANDLE ProcessHandle, PVOID BaseAddress, SIZE_T RegionSize)
{
  HANDLE v5; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rbp
  _KPROCESS *v8; // r13
  int v9; // ebx
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 VadEvent; // r14
  unsigned __int64 v14; // r15
  __int64 SharedVm; // rdi
  KIRQL v16; // al
  __int64 v17; // r8
  KIRQL v18; // si
  __int64 v19; // r8
  __int64 v20; // rdx
  NTSTATUS v21; // edi
  NTSTATUS result; // eax
  PVOID Object; // [rsp+40h] [rbp-98h] BYREF
  char v24[8]; // [rsp+48h] [rbp-90h] BYREF
  unsigned __int64 v25; // [rsp+50h] [rbp-88h]
  HANDLE v26; // [rsp+58h] [rbp-80h]
  char v27[48]; // [rsp+60h] [rbp-78h] BYREF

  v26 = ProcessHandle;
  v5 = ProcessHandle;
  if ( (unsigned __int64)BaseAddress > 0x7FFFFFFDFFFFLL )
    return -1073741584;
  if ( 0x7FFFFFFE0000LL - (__int64)BaseAddress < RegionSize )
    return -1073741583;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    v8 = CurrentThread->ApcState.Process;
  }
  else
  {
    result = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               8u,
               (POBJECT_TYPE)PsProcessType,
               CurrentThread->PreviousMode,
               0x77576D4Du,
               &Object,
               0LL);
    if ( result < 0 )
      return result;
    v8 = (_KPROCESS *)Object;
  }
  v9 = 0;
  v10 = (unsigned __int64)BaseAddress + RegionSize - 1;
  if ( (unsigned __int64)BaseAddress > v10 )
  {
    v21 = -1073741583;
  }
  else
  {
    if ( Process != v8 )
    {
      KiStackAttachProcess((ULONG_PTR)v8);
      v9 = 1;
    }
    v25 = (((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    Object = (PVOID)(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v11 = MiObtainReferencedVad(BaseAddress, v24);
    v12 = v11;
    if ( v11 )
    {
      if ( (*(_DWORD *)(v11 + 48) & 7) == 4
        && v10 <= (((*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) << 12) | 0xFFF) )
      {
        VadEvent = MiLocateVadEvent(v11, 4LL);
        v14 = ((unsigned __int64)BaseAddress >> 12)
            - (*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32));
        SharedVm = MiGetSharedVm(&v8[1].IdealNode[12]);
        v16 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
        v17 = (__int64)Object - v25;
        *(_DWORD *)(SharedVm + 4) = 0;
        v18 = v16;
        RtlClearBitsEx(VadEvent + 8, v14, (v17 >> 3) + 1);
        LOBYTE(v19) = v18;
        MiMoveDirtyBitsToPfns(v25, Object, v19);
        LOBYTE(v20) = v18;
        MiUnlockWorkingSetExclusive(&v8[1].IdealNode[12], v20);
        v5 = v26;
        v21 = 0;
      }
      else
      {
        v21 = -1073741585;
      }
      MiUnlockAndDereferenceVad((PVOID)v12);
    }
    else
    {
      v21 = -1073741585;
    }
    if ( v9 )
      KiUnstackDetachProcess(v27, 0LL);
  }
  if ( v5 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(v8, 0x77576D4Du);
  return v21;
}
