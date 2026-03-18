/*
 * XREFs of PpmCheckUpdateDeliveredPerformanceIfTracingEnabled @ 0x140136100
 * Callers:
 *     <none>
 * Callees:
 *     PpmEventIsDeliveredPerfChangeEnabled @ 0x140136124 (PpmEventIsDeliveredPerfChangeEnabled.c)
 */

char PpmCheckUpdateDeliveredPerformanceIfTracingEnabled()
{
  if ( (unsigned __int8)PpmEventIsDeliveredPerfChangeEnabled() )
    return PpmCheckSnapAllDeliveredPerformance();
  else
    return 1;
}
