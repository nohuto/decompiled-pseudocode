/*
 * XREFs of VerifierExReleaseResourceAndLeavePriorityRegion @ 0x14077DAA0
 * Callers:
 *     <none>
 * Callees:
 *     ViResourceReleaseSanityChecks @ 0x14077DD24 (ViResourceReleaseSanityChecks.c)
 */

__int64 __fastcall VerifierExReleaseResourceAndLeavePriorityRegion(ULONG_PTR a1)
{
  ViResourceReleaseSanityChecks(a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExReleaseResourceAndLeavePriorityRegion)(a1);
}
