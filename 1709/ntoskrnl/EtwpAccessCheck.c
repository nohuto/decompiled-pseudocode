/*
 * XREFs of EtwpAccessCheck @ 0x140490118
 * Callers:
 *     NtTraceEvent @ 0x140091AC0 (NtTraceEvent.c)
 *     EtwpCheckLoggerControlAccess @ 0x14048E46C (EtwpCheckLoggerControlAccess.c)
 *     EtwpAddRegEntryToGroup @ 0x1404901C0 (EtwpAddRegEntryToGroup.c)
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 *     EtwpNotifyGuid @ 0x1404EDE90 (EtwpNotifyGuid.c)
 *     EtwpCheckGuidAccess @ 0x1404EF040 (EtwpCheckGuidAccess.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x140751B88 (EtwpCheckCurrentUserProcessAccess.c)
 * Callees:
 *     SeAccessCheck @ 0x14007E440 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall EtwpAccessCheck(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ACCESS_MASK DesiredAccess,
        struct _SECURITY_SUBJECT_CONTEXT *a3)
{
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rdx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+90h] [rbp+18h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+98h] [rbp+20h] BYREF

  if ( a3 )
  {
    p_SubjectContext = a3;
  }
  else
  {
    SeCaptureSubjectContext(&SubjectContext);
    p_SubjectContext = &SubjectContext;
  }
  SeAccessCheck(
    SecurityDescriptor,
    p_SubjectContext,
    0,
    DesiredAccess,
    0,
    0LL,
    (PGENERIC_MAPPING)&EtwpGenericMapping,
    1,
    &GrantedAccess,
    &AccessStatus);
  if ( !a3 )
    SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)AccessStatus;
}
