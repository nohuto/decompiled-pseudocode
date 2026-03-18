/*
 * XREFs of PpmEventIsDeliveredPerfChangeEnabled @ 0x140131404
 * Callers:
 *     PpmCheckUpdateDeliveredPerformanceIfTracingEnabled @ 0x1401313E0 (PpmCheckUpdateDeliveredPerformanceIfTracingEnabled.c)
 * Callees:
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 */

bool PpmEventIsDeliveredPerfChangeEnabled()
{
  char v0; // bl

  v0 = 0;
  if ( PpmEtwRegistered )
    return EtwEventEnabled(PpmEtwHandle, &PPM_ETW_DELIVERED_PERF_CHANGE) != 0;
  return v0;
}
