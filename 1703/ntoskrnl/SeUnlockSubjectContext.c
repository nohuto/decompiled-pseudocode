/*
 * XREFs of SeUnlockSubjectContext @ 0x140531170
 * Callers:
 *     IopCreateSecurityCheck @ 0x140032804 (IopCreateSecurityCheck.c)
 *     SepTrustLevelCheck @ 0x14003E378 (SepTrustLevelCheck.c)
 *     SeAccessCheckWithHint @ 0x14008D7C0 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x1401326AC (SepCommonAccessCheckEx.c)
 *     CMFCheckAccess @ 0x14041F098 (CMFCheckAccess.c)
 *     PspIsContextAdmin @ 0x14045EEC4 (PspIsContextAdmin.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140469540 (ObpVerifyCreatorAccessCheck.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046B2C0 (SepAccessCheckAndAuditAlarm.c)
 *     ObCheckCreateObjectAccess @ 0x1404F3120 (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x1404F3890 (ObCheckObjectAccess.c)
 *     ObpCheckObjectReference @ 0x1404F44E8 (ObpCheckObjectReference.c)
 *     RtlpNewSecurityObject @ 0x14051EA30 (RtlpNewSecurityObject.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     CmpCheckKeyBodyAccess @ 0x14056C688 (CmpCheckKeyBodyAccess.c)
 *     ObpCheckTraverseAccess @ 0x1406C1408 (ObpCheckTraverseAccess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
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
