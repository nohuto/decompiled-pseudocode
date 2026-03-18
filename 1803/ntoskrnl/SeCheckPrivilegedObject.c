/*
 * XREFs of SeCheckPrivilegedObject @ 0x1406138A4
 * Callers:
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 *     PspSetProcessPriorityClass @ 0x14057EB98 (PspSetProcessPriorityClass.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 *     PspAssignPrimaryToken @ 0x1406408AC (PspAssignPrimaryToken.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     SePrivilegeObjectAuditAlarm @ 0x1404D58C0 (SePrivilegeObjectAuditAlarm.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SePrivilegeCheck @ 0x1405B0D30 (SePrivilegeCheck.c)
 */

BOOLEAN __fastcall SeCheckPrivilegedObject(LUID a1, int a2, int a3, KPROCESSOR_MODE a4)
{
  BOOLEAN v7; // al
  BOOLEAN v8; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-58h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+50h] [rbp-38h] BYREF

  RequiredPrivileges.Privilege[0].Attributes = 0;
  RequiredPrivileges.Privilege[0].Luid = a1;
  RequiredPrivileges.PrivilegeCount = 1;
  RequiredPrivileges.Control = 1;
  SeCaptureSubjectContext(&SubjectContext);
  v7 = SePrivilegeCheck(&RequiredPrivileges, &SubjectContext, a4);
  v8 = v7;
  if ( a4 )
    SePrivilegeObjectAuditAlarm(a2, (__int64 *)&SubjectContext, a3, (__int64)&RequiredPrivileges, v7, a4);
  SeReleaseSubjectContext(&SubjectContext);
  return v8;
}
