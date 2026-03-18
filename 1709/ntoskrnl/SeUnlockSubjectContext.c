/*
 * XREFs of SeUnlockSubjectContext @ 0x1404B2450
 * Callers:
 *     SepTrustLevelCheck @ 0x14006A120 (SepTrustLevelCheck.c)
 *     SeAccessCheckWithHint @ 0x14007E4B0 (SeAccessCheckWithHint.c)
 *     IopCreateSecurityCheck @ 0x140129858 (IopCreateSecurityCheck.c)
 *     SepCommonAccessCheckEx @ 0x14014204C (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046A8D0 (SepAccessCheckAndAuditAlarm.c)
 *     ObpCheckObjectReference @ 0x140484944 (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x140486D00 (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x140487DB0 (ObCheckObjectAccess.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     RtlpNewSecurityObject @ 0x1404BCE00 (RtlpNewSecurityObject.c)
 *     PspIsContextAdmin @ 0x140512CA0 (PspIsContextAdmin.c)
 *     ObpVerifyCreatorAccessCheck @ 0x14054903C (ObpVerifyCreatorAccessCheck.c)
 *     CMFCheckAccess @ 0x1405D5B14 (CMFCheckAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x140692F64 (CmpCheckKeyBodyAccess.c)
 *     ObpCheckTraverseAccess @ 0x1406EFDB4 (ObpCheckTraverseAccess.c)
 *     EtwpCoverageUserIsAdmin @ 0x1406F7B1C (EtwpCoverageUserIsAdmin.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
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
