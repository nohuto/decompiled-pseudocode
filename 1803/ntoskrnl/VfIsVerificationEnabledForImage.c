/*
 * XREFs of VfIsVerificationEnabledForImage @ 0x1402A97FC
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x14074596C (KsepPatchDriverImportsTable.c)
 * Callees:
 *     ViIsDriverSuspectForVerifier @ 0x14080F52C (ViIsDriverSuspectForVerifier.c)
 *     VfDriverLock @ 0x14080F570 (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140815EE8 (VfDriverUnlock.c)
 */

__int64 __fastcall VfIsVerificationEnabledForImage(__int64 a1)
{
  VfDriverLock();
  LODWORD(a1) = ViIsDriverSuspectForVerifier(a1);
  VfDriverUnlock();
  return (unsigned int)a1;
}
