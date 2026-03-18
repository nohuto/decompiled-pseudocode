/*
 * XREFs of SeDeleteObjectAuditAlarmWithTransaction @ 0x140790EB0
 * Callers:
 *     NtMakeTemporaryObject @ 0x14053EC70 (NtMakeTemporaryObject.c)
 *     NtDeleteKey @ 0x14056D9C4 (NtDeleteKey.c)
 *     SeDeleteObjectAuditAlarm @ 0x140790E90 (SeDeleteObjectAuditAlarm.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14078E854 (SepAdtDeleteObjectAuditAlarm.c)
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
