/*
 * XREFs of NtGetNextProcess @ 0x14060E220
 * Callers:
 *     <none>
 * Callees:
 *     PspLockUnlockProcessExclusive @ 0x1400C5D40 (PspLockUnlockProcessExclusive.c)
 *     PsIsProcessInSilo @ 0x1400F0EC0 (PsIsProcessInSilo.c)
 *     PsGetCurrentServerSilo @ 0x1400F17B0 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     SepDeleteAccessState @ 0x140105150 (SepDeleteAccessState.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     SeCreateAccessState @ 0x1404D2BF0 (SeCreateAccessState.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     PsGetNextProcess @ 0x140538C80 (PsGetNextProcess.c)
 *     ObOpenObjectByPointer @ 0x14059A7F0 (ObOpenObjectByPointer.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 */

NTSTATUS __cdecl NtGetNextProcess(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Flags,
        PHANDLE NewProcessHandle)
{
  char AccessMode; // r15
  ULONG v7; // r14d
  __int64 v8; // rcx
  NTSTATUS result; // eax
  unsigned __int64 NextProcess; // rdi
  bool v11; // r13
  struct _KTHREAD *CurrentThread; // rsi
  __int64 CurrentServerSilo; // rax
  NTSTATUS AccessState; // esi
  PVOID Object; // [rsp+48h] [rbp-1F0h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-1E8h]
  __int64 v18; // [rsp+58h] [rbp-1E0h]
  HANDLE Handle; // [rsp+60h] [rbp-1D8h] BYREF
  struct _KTHREAD *v20; // [rsp+70h] [rbp-1C8h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+80h] [rbp-1B8h] BYREF
  _QWORD v22[28]; // [rsp+120h] [rbp-118h] BYREF

  AccessMode = KeGetCurrentThread()->PreviousMode;
  v7 = HandleAttributes & (AccessMode != 0 ? 7666 : 73714);
  if ( AccessMode )
  {
    v8 = (__int64)NewProcessHandle;
    if ( (unsigned __int64)NewProcessHandle >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  *NewProcessHandle = 0LL;
  if ( Flags )
    return -1073741811;
  if ( ProcessHandle )
  {
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)ProcessHandle,
               0,
               (__int64)PsProcessType,
               AccessMode,
               0x6E457350u,
               &Object,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
  }
  else
  {
    Object = 0LL;
  }
  NextProcess = PsGetNextProcess(Object);
  v17 = NextProcess;
  if ( !NextProcess )
    return -2147483622;
  v11 = SeSinglePrivilegeCheck(SeDebugPrivilege, AccessMode) != 0;
  CurrentThread = KeGetCurrentThread();
  v20 = CurrentThread;
  CurrentServerSilo = PsGetCurrentServerSilo();
  v18 = CurrentServerSilo;
  do
  {
    if ( (*(_DWORD *)(NextProcess + 772) & 0x4000000) == 0 )
    {
      PspLockUnlockProcessExclusive(NextProcess, (__int64)CurrentThread);
      if ( (*(_DWORD *)(NextProcess + 772) & 0x4000000) == 0 )
        goto LABEL_25;
      CurrentServerSilo = v18;
    }
    if ( PsIsProcessInSilo((struct _KPROCESS *)NextProcess, CurrentServerSilo) )
    {
      AccessState = SeCreateAccessState(
                      (int *)&PassedAccessState,
                      v22,
                      DesiredAccess,
                      (GENERIC_MAPPING *)((char *)PsProcessType + 76));
      if ( AccessState < 0 )
        goto LABEL_19;
      if ( v11 )
      {
        if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
          PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
        else
          PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
        PassedAccessState.RemainingDesiredAccess = 0;
      }
      AccessState = ObOpenObjectByPointer(
                      (PVOID)NextProcess,
                      v7,
                      &PassedAccessState,
                      0,
                      (POBJECT_TYPE)PsProcessType,
                      AccessMode,
                      &Handle);
      SepDeleteAccessState((__int64)&PassedAccessState);
      SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
      if ( AccessState >= 0 )
      {
        *NewProcessHandle = Handle;
        goto LABEL_19;
      }
      if ( AccessState != -1073741790 )
        goto LABEL_19;
      CurrentThread = v20;
    }
LABEL_25:
    NextProcess = PsGetNextProcess((_QWORD *)NextProcess);
    v17 = NextProcess;
    CurrentServerSilo = v18;
  }
  while ( NextProcess );
  AccessState = -2147483622;
LABEL_19:
  if ( NextProcess )
    ObfDereferenceObjectWithTag((PVOID)NextProcess, 0x6E457350u);
  return AccessState;
}
