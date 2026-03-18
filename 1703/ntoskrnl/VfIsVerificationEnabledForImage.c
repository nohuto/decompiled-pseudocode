/*
 * XREFs of VfIsVerificationEnabledForImage @ 0x14024FED8
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x140599AB8 (KsepPatchDriverImportsTable.c)
 * Callees:
 *     ViIsDriverSuspectForVerifier @ 0x14076250C (ViIsDriverSuspectForVerifier.c)
 *     VfDriverLock @ 0x140762550 (VfDriverLock.c)
 *     VfDriverUnlock @ 0x14076730C (VfDriverUnlock.c)
 */

__int64 __fastcall VfIsVerificationEnabledForImage(__int64 a1)
{
  VfDriverLock();
  LODWORD(a1) = ViIsDriverSuspectForVerifier(a1);
  VfDriverUnlock();
  return (unsigned int)a1;
}
