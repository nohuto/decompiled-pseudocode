/*
 * XREFs of SeCheckPrivilegedObject @ 0x14046EE78
 * Callers:
 *     NtSetInformationThread @ 0x1404CD4F0 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     PspSetProcessPriorityClass @ 0x140595250 (PspSetProcessPriorityClass.c)
 *     PspAssignPrimaryToken @ 0x140716E70 (PspAssignPrimaryToken.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     SePrivilegeObjectAuditAlarm @ 0x14046D750 (SePrivilegeObjectAuditAlarm.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     SePrivilegeCheck @ 0x1404C45D0 (SePrivilegeCheck.c)
 */

BOOLEAN __fastcall SeCheckPrivilegedObject(LUID a1, __int64 a2, unsigned int a3, KPROCESSOR_MODE a4)
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
    SePrivilegeObjectAuditAlarm(a2, (__int64 *)&SubjectContext, a3, (int *)&RequiredPrivileges, v7, a4);
  SeReleaseSubjectContext(&SubjectContext);
  return v8;
}
