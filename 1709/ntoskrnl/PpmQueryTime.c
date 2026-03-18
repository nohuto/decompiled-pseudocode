/*
 * XREFs of PpmQueryTime @ 0x140092B40
 * Callers:
 *     PpmIdleInitializeConcurrency @ 0x1405B5B54 (PpmIdleInitializeConcurrency.c)
 *     PdcPoCurrentPdcPhase @ 0x1406FF060 (PdcPoCurrentPdcPhase.c)
 *     PdcPoResiliencyClient @ 0x1406FF380 (PdcPoResiliencyClient.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER PpmQueryTime()
{
  return KeQueryPerformanceCounter(0LL);
}
