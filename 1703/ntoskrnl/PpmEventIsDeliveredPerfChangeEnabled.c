/*
 * XREFs of PpmEventIsDeliveredPerfChangeEnabled @ 0x140136124
 * Callers:
 *     PpmCheckUpdateDeliveredPerformanceIfTracingEnabled @ 0x140136100 (PpmCheckUpdateDeliveredPerformanceIfTracingEnabled.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 */

bool PpmEventIsDeliveredPerfChangeEnabled()
{
  char v0; // bl

  v0 = 0;
  if ( PpmEtwRegistered )
    return EtwEventEnabled(PpmEtwHandle, &PPM_ETW_DELIVERED_PERF_CHANGE) != 0;
  return v0;
}
