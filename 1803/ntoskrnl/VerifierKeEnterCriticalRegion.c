/*
 * XREFs of VerifierKeEnterCriticalRegion @ 0x140826170
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ViKeLogCriticalRegionStackTrace @ 0x1402AAEDC (ViKeLogCriticalRegionStackTrace.c)
 *     VerifierBugCheckIfAppropriate @ 0x14081D3A4 (VerifierBugCheckIfAppropriate.c)
 */

void VerifierKeEnterCriticalRegion()
{
  unsigned __int8 CurrentIrql; // al

  if ( (MmVerifierData & 2) != 0 && (MmVerifierData & 0x20000) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 1u )
      VerifierBugCheckIfAppropriate(0xC4u, 0x11AuLL, CurrentIrql, 0LL, 0LL);
  }
  ((void (*)(void))pXdvKeEnterCriticalRegion)();
  if ( (MmVerifierData & 0x400000) == 0 || (VfFlightOptions & 9) != 0 )
    ViKeLogCriticalRegionStackTrace();
}
