/*
 * XREFs of PpmCheckUpdateDeliveredPerformanceIfTracingEnabled @ 0x1401313E0
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140095700 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmEventIsDeliveredPerfChangeEnabled @ 0x140131404 (PpmEventIsDeliveredPerfChangeEnabled.c)
 */

char PpmCheckUpdateDeliveredPerformanceIfTracingEnabled()
{
  if ( (unsigned __int8)PpmEventIsDeliveredPerfChangeEnabled() )
    return PpmCheckSnapAllDeliveredPerformance();
  else
    return 1;
}
