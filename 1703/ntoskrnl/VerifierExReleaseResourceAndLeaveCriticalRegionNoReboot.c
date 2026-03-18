/*
 * XREFs of VerifierExReleaseResourceAndLeaveCriticalRegionNoReboot @ 0x14077DA70
 * Callers:
 *     <none>
 * Callees:
 *     ViResourceReleaseSanityChecks @ 0x14077DD24 (ViResourceReleaseSanityChecks.c)
 */

__int64 __fastcall VerifierExReleaseResourceAndLeaveCriticalRegionNoReboot(ULONG_PTR a1)
{
  ViResourceReleaseSanityChecks(a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExReleaseResourceAndLeaveCriticalRegion)(a1);
}
