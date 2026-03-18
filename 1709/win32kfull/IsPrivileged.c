/*
 * XREFs of IsPrivileged @ 0x1C010BDF0
 * Callers:
 *     NtUserPostThreadMessage @ 0x1C009E440 (NtUserPostThreadMessage.c)
 *     _RegisterUserApiHook @ 0x1C010B46C (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C010B6C4 (_RegisterDManipHook.c)
 *     xxxWrapSendMessageBSM @ 0x1C010BD10 (xxxWrapSendMessageBSM.c)
 *     NtUserRegisterBSDRWindow @ 0x1C0120B70 (NtUserRegisterBSDRWindow.c)
 *     ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C0120CE0 (-InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     NtUserRegisterServicesProcess @ 0x1C01EA990 (NtUserRegisterServicesProcess.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall IsPrivileged(PPRIVILEGE_SET RequiredPrivileges)
{
  BOOLEAN v2; // di
  __int64 v3; // rdx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  v2 = SePrivilegeCheck(RequiredPrivileges, &SubjectContext, 1);
  SePrivilegeObjectAuditAlarm(0LL, &SubjectContext, 0LL, RequiredPrivileges, v2, 1);
  SeUnlockSubjectContext(&SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  if ( !v2 )
    UserSetLastError(1314LL, v3);
  return v2;
}
