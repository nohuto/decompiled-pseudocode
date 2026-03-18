/*
 * XREFs of NtProtectVirtualMemory @ 0x14051D2E0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiMakeProtectionMask @ 0x1400CE440 (MiMakeProtectionMask.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     EtwTiLogProtectExecVm @ 0x1404C9998 (EtwTiLogProtectExecVm.c)
 *     MmProtectVirtualMemory @ 0x14051A990 (MmProtectVirtualMemory.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     VslDebugProtectSecureProcessMemory @ 0x140687AFC (VslDebugProtectSecureProcessMemory.c)
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
  _KPROCESS *v18; // rbx
  char v19; // al
  NTSTATUS v20; // eax
  NTSTATUS v21; // edi
  unsigned int v22; // esi
  char PreviousMode; // [rsp+40h] [rbp-A8h]
  unsigned int v25; // [rsp+48h] [rbp-A0h] BYREF
  PVOID v26; // [rsp+50h] [rbp-98h] BYREF
  PVOID Object; // [rsp+58h] [rbp-90h] BYREF
  SIZE_T v28; // [rsp+60h] [rbp-88h] BYREF
  int ProtectionMask; // [rsp+68h] [rbp-80h]
  $5BC46E0569261879018906DEC3127961 v30; // [rsp+70h] [rbp-78h] BYREF

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
    v26 = *BaseAddress;
    v15 = *NumberOfBytesToProtect;
    v28 = *NumberOfBytesToProtect;
  }
  else
  {
    v15 = *v7;
    v28 = *v7;
    v14 = *BaseAddress;
    v26 = *BaseAddress;
  }
  if ( (unsigned __int64)v14 > 0x7FFFFFFEFFFFLL )
    return -1073741584;
  if ( 0x7FFFFFFEFFFFLL - (__int64)v14 < v15 || !v15 )
    return -1073741583;
  v16 = 0;
  result = ObpReferenceObjectByHandleWithTag(v8, 1984982349, (__int64)&Object, 0LL, 0LL);
  if ( result >= 0 )
  {
    v18 = (_KPROCESS *)Object;
    if ( Process == Object )
    {
      v19 = 1;
    }
    else
    {
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v30);
      v19 = 1;
      v16 = 1;
    }
    if ( !v18->SecurePid )
      v19 = 0;
    if ( v19 )
      v20 = VslDebugProtectSecureProcessMemory(
              (_DWORD)v18,
              (_DWORD)Process,
              (unsigned int)&v26,
              (unsigned int)&v28,
              NewAccessProtection,
              (__int64)&v25);
    else
      v20 = MmProtectVirtualMemory(
              (__int64)Process,
              (__int64)v18,
              (unsigned __int64 *)&v26,
              (__int64 *)&v28,
              NewAccessProtection,
              &v25);
    v21 = v20;
    LODWORD(Object) = v20;
    if ( v16 )
      KiUnstackDetachProcess(&v30, 0LL);
    v22 = v25;
    if ( v21 >= 0
      && (((unsigned __int8)MiMakeProtectionMask(v25) | (unsigned __int8)ProtectionMask) & 2) != 0
      && PreviousMode == 1 )
    {
      EtwTiLogProtectExecVm(v18, (__int64)v26, v15, NewAccessProtection, v22);
    }
    ObfDereferenceObjectWithTag(v18, 0x76506D4Du);
    *NumberOfBytesToProtect = v28;
    *BaseAddress = v26;
    *OldAccessProtection = v22;
    return v21;
  }
  return result;
}
