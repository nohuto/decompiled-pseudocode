/*
 * XREFs of SeAuditingFileEventsWithContext @ 0x1406F44C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingFileEventsWithContext(
        BOOLEAN AccessGranted,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext)
{
  return SeAuditingFileEventsWithContextEx(
           AccessGranted,
           (__int64)SecurityDescriptor,
           (__int64)SubjectSecurityContext,
           0LL);
}
