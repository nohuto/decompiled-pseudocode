/*
 * XREFs of VerifierKeLeaveCriticalRegion @ 0x1408263F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ViKeLogCriticalRegionStackTrace @ 0x1402AAEDC (ViKeLogCriticalRegionStackTrace.c)
 *     VerifierBugCheckIfAppropriate @ 0x14081D3A4 (VerifierBugCheckIfAppropriate.c)
 */

__int64 VerifierKeLeaveCriticalRegion()
{
  unsigned __int8 CurrentIrql; // al

  if ( (MmVerifierData & 2) != 0 && (MmVerifierData & 0x20000) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 1u )
      VerifierBugCheckIfAppropriate(0xC4u, 0x11BuLL, CurrentIrql, 0LL, 0LL);
  }
  if ( (MmVerifierData & 2) != 0 && KeGetCurrentThread()->KernelApcDisable > 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x3EuLL, 0LL, 0LL, 0LL);
  if ( (MmVerifierData & 0x400000) == 0 || (VfFlightOptions & 9) != 0 )
    ViKeLogCriticalRegionStackTrace();
  return ((__int64 (*)(void))pXdvKeLeaveCriticalRegion)();
}
