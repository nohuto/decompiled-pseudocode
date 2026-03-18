/*
 * XREFs of EtwpCoverageUserIsAdmin @ 0x1407A7264
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x14056F324 (EtwSetProcessTelemetryCoverage.c)
 *     EtwQueryProcessTelemetryCoverage @ 0x1407A69D0 (EtwQueryProcessTelemetryCoverage.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     SeTokenIsAdmin @ 0x1404DFBC0 (SeTokenIsAdmin.c)
 *     SeLockSubjectContext @ 0x1405A4DC0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1405A5520 (SeUnlockSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 */

BOOLEAN EtwpCoverageUserIsAdmin()
{
  PACCESS_TOKEN PrimaryToken; // rcx
  BOOLEAN IsAdmin; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  IsAdmin = SeTokenIsAdmin(PrimaryToken);
  SeUnlockSubjectContext(&SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  return IsAdmin;
}
