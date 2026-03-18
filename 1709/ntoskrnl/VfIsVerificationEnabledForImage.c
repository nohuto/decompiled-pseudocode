/*
 * XREFs of VfIsVerificationEnabledForImage @ 0x1402766D8
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x1405ECBF0 (KsepPatchDriverImportsTable.c)
 * Callees:
 *     ViIsDriverSuspectForVerifier @ 0x1407A24EC (ViIsDriverSuspectForVerifier.c)
 *     VfDriverLock @ 0x1407A2530 (VfDriverLock.c)
 *     VfDriverUnlock @ 0x1407A8EB0 (VfDriverUnlock.c)
 */

__int64 __fastcall VfIsVerificationEnabledForImage(__int64 a1)
{
  VfDriverLock();
  LODWORD(a1) = ViIsDriverSuspectForVerifier(a1);
  VfDriverUnlock();
  return (unsigned int)a1;
}
