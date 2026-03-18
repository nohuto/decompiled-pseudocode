/*
 * XREFs of SeUnlockSubjectContext @ 0x1405A5520
 * Callers:
 *     AdminlessTelemetryEnabled @ 0x14005E210 (AdminlessTelemetryEnabled.c)
 *     SepTrustLevelCheck @ 0x14005E4CC (SepTrustLevelCheck.c)
 *     IopCreateSecurityCheck @ 0x14009EA00 (IopCreateSecurityCheck.c)
 *     SeAccessCheckWithHint @ 0x1400D47B0 (SeAccessCheckWithHint.c)
 *     SeAccessCheck @ 0x140100B90 (SeAccessCheck.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140100CF0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140148E84 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     ObpCheckObjectReference @ 0x1404C05AC (ObpCheckObjectReference.c)
 *     RtlpNewSecurityObject @ 0x1404C43A0 (RtlpNewSecurityObject.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1404D7FE0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     PspIsContextAdmin @ 0x14052FBA0 (PspIsContextAdmin.c)
 *     ObCheckObjectAccess @ 0x14053E470 (ObCheckObjectAccess.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140540474 (ObpVerifyCreatorAccessCheck.c)
 *     ObCheckCreateObjectAccess @ 0x140561B00 (ObCheckCreateObjectAccess.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     CmpCheckKeyBodyAccess @ 0x1406F5E54 (CmpCheckKeyBodyAccess.c)
 *     ObpCheckTraverseAccess @ 0x140759244 (ObpCheckTraverseAccess.c)
 *     EtwpCoverageUserIsAdmin @ 0x1407A7264 (EtwpCoverageUserIsAdmin.c)
 *     CMFCheckAccess @ 0x1407C8194 (CMFCheckAccess.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 */

void __stdcall SeUnlockSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  ExReleaseResourceLite(*((PERESOURCE *)SubjectContext->PrimaryToken + 6));
  KeLeaveCriticalRegion();
  if ( SubjectContext->ClientToken )
  {
    ExReleaseResourceLite(*((PERESOURCE *)SubjectContext->ClientToken + 6));
    KeLeaveCriticalRegion();
  }
}
