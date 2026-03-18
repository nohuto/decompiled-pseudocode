/*
 * XREFs of PpmQueryTime @ 0x140087060
 * Callers:
 *     PpmIdleInitializeConcurrency @ 0x1405BFF64 (PpmIdleInitializeConcurrency.c)
 *     PdcPoCurrentPdcPhase @ 0x1406CB0E0 (PdcPoCurrentPdcPhase.c)
 *     PdcPoResiliencyClient @ 0x1406CB3C0 (PdcPoResiliencyClient.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER PpmQueryTime()
{
  return KeQueryPerformanceCounter(0LL);
}
