/*
 * XREFs of IsPrivileged @ 0x1C00C6ED0
 * Callers:
 *     xxxWrapSendMessageBSM @ 0x1C00C6F60 (xxxWrapSendMessageBSM.c)
 *     NtUserPostThreadMessage @ 0x1C00CBA30 (NtUserPostThreadMessage.c)
 *     _RegisterUserApiHook @ 0x1C00E3CBC (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C00E3EE4 (_RegisterDManipHook.c)
 *     NtUserRegisterBSDRWindow @ 0x1C01153A0 (NtUserRegisterBSDRWindow.c)
 *     ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C0116FBC (-InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     NtUserRegisterServicesProcess @ 0x1C01DE870 (NtUserRegisterServicesProcess.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall IsPrivileged(PPRIVILEGE_SET RequiredPrivileges)
{
  BOOLEAN v2; // di
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  v2 = SePrivilegeCheck(RequiredPrivileges, &SubjectContext, 1);
  SePrivilegeObjectAuditAlarm(0LL, &SubjectContext, 0LL, RequiredPrivileges, v2, 1);
  SeUnlockSubjectContext(&SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  if ( !v2 )
    UserSetLastError(1314LL);
  return v2;
}
