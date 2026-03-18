/*
 * XREFs of VerifierExReleaseResourceAndLeavePriorityRegion @ 0x14082CF60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ViResourceReleaseSanityChecks @ 0x14082D20C (ViResourceReleaseSanityChecks.c)
 */

__int64 __fastcall VerifierExReleaseResourceAndLeavePriorityRegion(ULONG_PTR a1)
{
  ViResourceReleaseSanityChecks(a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExReleaseResourceAndLeavePriorityRegion)(a1);
}
