/*
 * XREFs of SeCloseObjectAuditAlarm @ 0x14072CB50
 * Callers:
 *     ObCloseHandleTableEntry @ 0x1404B1D60 (ObCloseHandleTableEntry.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14072A2B0 (SepAdtCloseObjectAuditAlarm.c)
 */

void __fastcall SeCloseObjectAuditAlarm(__int64 a1, unsigned __int64 a2, char a3)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  if ( a3 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    SepAdtCloseObjectAuditAlarm((const UNICODE_STRING *)&SeSubsystemName, a2, &SubjectContext, a1, 1);
    SeReleaseSubjectContext(&SubjectContext);
  }
}
