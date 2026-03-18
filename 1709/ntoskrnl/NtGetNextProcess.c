/*
 * XREFs of NtGetNextProcess @ 0x14071C6A0
 * Callers:
 *     <none>
 * Callees:
 *     SepDeleteAccessState @ 0x140081E70 (SepDeleteAccessState.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     PsIsProcessInSilo @ 0x140089050 (PsIsProcessInSilo.c)
 *     PsGetCurrentServerSilo @ 0x140089070 (PsGetCurrentServerSilo.c)
 *     PspLockUnlockProcessExclusive @ 0x1401261EC (PspLockUnlockProcessExclusive.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     ObOpenObjectByPointer @ 0x1404C5930 (ObOpenObjectByPointer.c)
 *     SeCreateAccessState @ 0x1404C6430 (SeCreateAccessState.c)
 *     PsGetNextProcess @ 0x1404FD830 (PsGetNextProcess.c)
 */

__int64 __fastcall NtGetNextProcess(ULONG_PTR BugCheckParameter1, ACCESS_MASK a2, int a3, int a4, HANDLE *a5)
{
  char AccessMode; // r15
  ULONG v7; // r14d
  __int64 v8; // rcx
  __int64 result; // rax
  unsigned __int64 NextProcess; // rdi
  bool v11; // r13
  struct _KTHREAD *CurrentThread; // rsi
  __int64 CurrentServerSilo; // rax
  int v14; // esi
  PVOID Object; // [rsp+48h] [rbp-1F0h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-1E8h]
  __int64 v18; // [rsp+58h] [rbp-1E0h]
  HANDLE Handle; // [rsp+60h] [rbp-1D8h] BYREF
  struct _KTHREAD *v20; // [rsp+70h] [rbp-1C8h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+80h] [rbp-1B8h] BYREF
  _QWORD v22[28]; // [rsp+120h] [rbp-118h] BYREF

  AccessMode = KeGetCurrentThread()->PreviousMode;
  v7 = a3 & (AccessMode != 0 ? 7666 : 73714);
  if ( AccessMode )
  {
    v8 = (__int64)a5;
    if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  *a5 = 0LL;
  if ( a4 )
    return 3221225485LL;
  if ( BugCheckParameter1 )
  {
    result = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               0,
               (__int64)PsProcessType,
               AccessMode,
               1850045264,
               &Object,
               0LL,
               0LL);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    Object = 0LL;
  }
  NextProcess = PsGetNextProcess(Object);
  v17 = NextProcess;
  if ( !NextProcess )
    return 2147483674LL;
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
        goto LABEL_27;
      CurrentServerSilo = v18;
    }
    if ( PsIsProcessInSilo((struct _KPROCESS *)NextProcess, CurrentServerSilo) )
    {
      v14 = SeCreateAccessState(&PassedAccessState, v22, a2, (GENERIC_MAPPING *)((char *)PsProcessType + 76));
      if ( v14 < 0 )
        goto LABEL_29;
      if ( v11 )
      {
        if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
          PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
        else
          PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
        PassedAccessState.RemainingDesiredAccess = 0;
      }
      v14 = ObOpenObjectByPointer(
              (PVOID)NextProcess,
              v7,
              &PassedAccessState,
              0,
              (POBJECT_TYPE)PsProcessType,
              AccessMode,
              &Handle);
      SepDeleteAccessState((__int64)&PassedAccessState);
      SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
      if ( v14 >= 0 )
      {
        *a5 = Handle;
        goto LABEL_29;
      }
      if ( v14 != -1073741790 )
        goto LABEL_29;
      CurrentThread = v20;
    }
LABEL_27:
    NextProcess = PsGetNextProcess((_QWORD *)NextProcess);
    v17 = NextProcess;
    CurrentServerSilo = v18;
  }
  while ( NextProcess );
  v14 = -2147483622;
LABEL_29:
  if ( NextProcess )
    ObfDereferenceObjectWithTag((PVOID)NextProcess, 0x6E457350u);
  return (unsigned int)v14;
}
