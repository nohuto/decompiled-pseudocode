/*
 * XREFs of NtGetNextProcess @ 0x14057BB10
 * Callers:
 *     <none>
 * Callees:
 *     PspLockUnlockProcessExclusive @ 0x14002F5E0 (PspLockUnlockProcessExclusive.c)
 *     SepDeleteAccessState @ 0x1400EE7C0 (SepDeleteAccessState.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x1404995D0 (PsGetNextProcess.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     SeCreateAccessState @ 0x1404F4470 (SeCreateAccessState.c)
 *     ObOpenObjectByPointer @ 0x14050ED20 (ObOpenObjectByPointer.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtGetNextProcess(ULONG_PTR BugCheckParameter1, ACCESS_MASK a2, int a3, int a4, HANDLE *a5)
{
  ACCESS_MASK v5; // esi
  char AccessMode; // r12
  ULONG v8; // r14d
  __int64 v9; // rcx
  __int64 result; // rax
  _DWORD *NextProcess; // rdi
  bool v12; // r13
  struct _KTHREAD *CurrentThread; // rcx
  int v14; // esi
  PVOID Object; // [rsp+48h] [rbp-1F0h] BYREF
  _DWORD *v17; // [rsp+50h] [rbp-1E8h]
  HANDLE Handle; // [rsp+58h] [rbp-1E0h] BYREF
  struct _KTHREAD *v19; // [rsp+68h] [rbp-1D0h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+80h] [rbp-1B8h] BYREF
  _QWORD v21[28]; // [rsp+120h] [rbp-118h] BYREF

  v5 = a2;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  v8 = a3 & (AccessMode != 0 ? 7666 : 73714);
  if ( AccessMode )
  {
    v9 = (__int64)a5;
    if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v9 = *(_QWORD *)v9;
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
  NextProcess = (_DWORD *)PsGetNextProcess(Object);
  v17 = NextProcess;
  if ( !NextProcess )
    return 2147483674LL;
  v12 = SeSinglePrivilegeCheck(SeDebugPrivilege, AccessMode) != 0;
  CurrentThread = KeGetCurrentThread();
  v19 = CurrentThread;
  do
  {
    if ( (NextProcess[193] & 0x4000000) != 0
      || (PspLockUnlockProcessExclusive((__int64)NextProcess, (__int64)CurrentThread),
          (NextProcess[193] & 0x4000000) != 0) )
    {
      v14 = SeCreateAccessState(&PassedAccessState, v21, v5, (GENERIC_MAPPING *)((char *)PsProcessType + 76));
      if ( v14 < 0 )
        goto LABEL_18;
      if ( v12 )
      {
        if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
          PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
        else
          PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
        PassedAccessState.RemainingDesiredAccess = 0;
      }
      v14 = ObOpenObjectByPointer(
              NextProcess,
              v8,
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
        goto LABEL_18;
      }
      if ( v14 != -1073741790 )
        goto LABEL_18;
      v5 = a2;
    }
    NextProcess = (_DWORD *)PsGetNextProcess(NextProcess);
    v17 = NextProcess;
    CurrentThread = v19;
  }
  while ( NextProcess );
  v14 = -2147483622;
LABEL_18:
  if ( NextProcess )
    ObfDereferenceObjectWithTag(NextProcess, 0x6E457350u);
  return (unsigned int)v14;
}
