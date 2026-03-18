/*
 * XREFs of NtProtectVirtualMemory @ 0x140497B10
 * Callers:
 *     <none>
 * Callees:
 *     MiMakeProtectionMask @ 0x14003D3F0 (MiMakeProtectionMask.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MmProtectVirtualMemory @ 0x140498B10 (MmProtectVirtualMemory.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     EtwTiLogProtectExecVm @ 0x1404D53CC (EtwTiLogProtectExecVm.c)
 *     VslDebugProtectSecureProcessMemory @ 0x1406B38C0 (VslDebugProtectSecureProcessMemory.c)
 */

NTSTATUS __stdcall NtProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        SIZE_T *NumberOfBytesToProtect,
        ULONG NewAccessProtection,
        PULONG OldAccessProtection)
{
  SIZE_T *v7; // r8
  ULONG_PTR v8; // r10
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  PVOID v14; // rcx
  SIZE_T v15; // r15
  int v16; // esi
  NTSTATUS result; // eax
  _BYTE *v18; // rbx
  NTSTATUS v19; // eax
  NTSTATUS v20; // edi
  unsigned int v21; // esi
  char PreviousMode; // [rsp+40h] [rbp-A8h]
  unsigned int v24; // [rsp+48h] [rbp-A0h] BYREF
  PVOID v25; // [rsp+50h] [rbp-98h] BYREF
  PVOID Object; // [rsp+58h] [rbp-90h] BYREF
  SIZE_T v27; // [rsp+60h] [rbp-88h] BYREF
  int ProtectionMask; // [rsp+68h] [rbp-80h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v29; // [rsp+70h] [rbp-78h] BYREF

  ProtectionMask = MiMakeProtectionMask(NewAccessProtection & 0x1FFFFFFF);
  if ( ProtectionMask == -1 )
    return -1073741755;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v11 = (__int64)BaseAddress;
    if ( (unsigned __int64)BaseAddress >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    v12 = (__int64)NumberOfBytesToProtect;
    if ( (unsigned __int64)NumberOfBytesToProtect >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v12 = *(_QWORD *)v12;
    v13 = (__int64)OldAccessProtection;
    if ( (unsigned __int64)OldAccessProtection >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v13 = *(_DWORD *)v13;
    v14 = *BaseAddress;
    v25 = *BaseAddress;
    v15 = *NumberOfBytesToProtect;
    v27 = *NumberOfBytesToProtect;
  }
  else
  {
    v15 = *v7;
    v27 = *v7;
    v14 = *BaseAddress;
    v25 = *BaseAddress;
  }
  if ( (unsigned __int64)v14 > 0x7FFFFFFEFFFFLL )
    return -1073741584;
  if ( 0x7FFFFFFEFFFFLL - (__int64)v14 < v15 || !v15 )
    return -1073741583;
  v16 = 0;
  result = ObpReferenceObjectByHandleWithTag(v8, 1984982349, (__int64)&Object, 0LL, 0LL);
  if ( result >= 0 )
  {
    v18 = Object;
    if ( Process != Object )
    {
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v29);
      v16 = 1;
    }
    if ( (v18[720] & 1) != 0 )
      v19 = VslDebugProtectSecureProcessMemory(
              (_DWORD)v18,
              (_DWORD)Process,
              (unsigned int)&v25,
              (unsigned int)&v27,
              NewAccessProtection,
              (__int64)&v24);
    else
      v19 = MmProtectVirtualMemory(
              (_DWORD)Process,
              (_DWORD)v18,
              (unsigned int)&v25,
              (unsigned int)&v27,
              NewAccessProtection,
              (__int64)&v24);
    v20 = v19;
    LODWORD(Object) = v19;
    if ( v16 )
      KiUnstackDetachProcess(&v29, 0LL);
    v21 = v24;
    if ( v20 >= 0
      && (((unsigned __int8)MiMakeProtectionMask(v24) | (unsigned __int8)ProtectionMask) & 2) != 0
      && PreviousMode == 1 )
    {
      EtwTiLogProtectExecVm((_DWORD)v18, (_DWORD)v25, v15, NewAccessProtection, v21);
    }
    ObfDereferenceObjectWithTag(v18, 0x76506D4Du);
    *NumberOfBytesToProtect = v27;
    *BaseAddress = v25;
    *OldAccessProtection = v21;
    return v20;
  }
  return result;
}
