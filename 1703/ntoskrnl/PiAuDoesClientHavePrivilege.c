/*
 * XREFs of PiAuDoesClientHavePrivilege @ 0x140597CCC
 * Callers:
 *     PiCMQueryRemove @ 0x140597828 (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x1406A4EA8 (PiCMDeviceAction.c)
 *     PiCMSetDeviceProblem @ 0x1406A5BF4 (PiCMSetDeviceProblem.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     SePrivilegeCheck @ 0x140527F60 (SePrivilegeCheck.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 */

BOOLEAN __fastcall PiAuDoesClientHavePrivilege(unsigned int a1)
{
  KPROCESSOR_MODE PreviousMode; // bl
  BOOLEAN v2; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+28h] [rbp-48h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+48h] [rbp-28h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  RequiredPrivileges.Privilege[0].Attributes = 0;
  RequiredPrivileges.PrivilegeCount = 1;
  RequiredPrivileges.Control = 1;
  RequiredPrivileges.Privilege[0].Luid = (LUID)a1;
  SeCaptureSubjectContext(&SubjectContext);
  v2 = SePrivilegeCheck(&RequiredPrivileges, &SubjectContext, PreviousMode);
  SeReleaseSubjectContext(&SubjectContext);
  return v2;
}
