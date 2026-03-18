/*
 * XREFs of PpmEventIsDeliveredPerfChangeEnabled @ 0x14014D104
 * Callers:
 *     PpmCheckUpdateDeliveredPerformanceIfTracingEnabled @ 0x14014D0E0 (PpmCheckUpdateDeliveredPerformanceIfTracingEnabled.c)
 * Callees:
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 */

bool PpmEventIsDeliveredPerfChangeEnabled()
{
  char v0; // bl

  v0 = 0;
  if ( PpmEtwRegistered )
    return EtwEventEnabled(PpmEtwHandle, &PPM_ETW_DELIVERED_PERF_CHANGE) != 0;
  return v0;
}
