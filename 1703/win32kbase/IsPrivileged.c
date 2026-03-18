/*
 * XREFs of IsPrivileged @ 0x1C008E9A0
 * Callers:
 *     _RegisterLogonProcess @ 0x1C008E8F0 (_RegisterLogonProcess.c)
 * Callees:
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 */

__int64 __fastcall IsPrivileged(PPRIVILEGE_SET RequiredPrivileges)
{
  BOOLEAN v2; // di
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  v2 = SePrivilegeCheck(RequiredPrivileges, &SubjectContext, 1);
  SePrivilegeObjectAuditAlarm(0LL, &SubjectContext, 0LL, RequiredPrivileges, v2, 1);
  SeUnlockSubjectContext(&SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  if ( !v2 )
    UserSetLastError(1314LL, v3, v4, v5);
  return v2;
}
