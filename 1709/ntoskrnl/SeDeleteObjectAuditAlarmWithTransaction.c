/*
 * XREFs of SeDeleteObjectAuditAlarmWithTransaction @ 0x14072CC00
 * Callers:
 *     NtMakeTemporaryObject @ 0x14046F18C (NtMakeTemporaryObject.c)
 *     NtDeleteKey @ 0x14047207C (NtDeleteKey.c)
 *     SeDeleteObjectAuditAlarm @ 0x14072CBE0 (SeDeleteObjectAuditAlarm.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14072A4B4 (SepAdtDeleteObjectAuditAlarm.c)
 */

void __stdcall SeDeleteObjectAuditAlarmWithTransaction(PVOID Object, HANDLE Handle, GUID *TransactionId)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  SeCaptureSubjectContext(&SubjectContext);
  SepAdtDeleteObjectAuditAlarm(
    (const UNICODE_STRING *)&SeSubsystemName,
    (unsigned __int64)Handle,
    (__int64 *)&SubjectContext,
    (__int64)Object,
    TransactionId,
    1);
  SeReleaseSubjectContext(&SubjectContext);
}
