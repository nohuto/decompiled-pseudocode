/*
 * XREFs of SeDeleteObjectAuditAlarmWithTransaction @ 0x1406F51A0
 * Callers:
 *     NtMakeTemporaryObject @ 0x140422BEC (NtMakeTemporaryObject.c)
 *     NtDeleteKey @ 0x1404CF43C (NtDeleteKey.c)
 *     SeDeleteObjectAuditAlarm @ 0x1406F5190 (SeDeleteObjectAuditAlarm.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1406F2A24 (SepAdtDeleteObjectAuditAlarm.c)
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
