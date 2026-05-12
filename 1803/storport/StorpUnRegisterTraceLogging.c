/*
 * XREFs of StorpUnRegisterTraceLogging @ 0x1C00676DC
 * Callers:
 *     RaSqmAndEtwCleanup @ 0x1C00658D0 (RaSqmAndEtwCleanup.c)
 * Callees:
 *     StorpUninitializePerfTelemetry @ 0x1C0046E68 (StorpUninitializePerfTelemetry.c)
 */

void StorpUnRegisterTraceLogging()
{
  if ( g_StorpTraceLoggingInitialized == 1 )
  {
    KeCancelTimer(&g_StorpTraceLoggingHierarchicalResetTimer);
    KeCancelTimer(&g_StorpTraceLoggingDailyTimer);
    if ( g_StorpTraceLoggingPerformanceEnabled
      || g_StorpTraceLoggingErrorDataEnabled
      || g_StorpTraceLoggingDeviceHealthEnabled )
    {
      KeCancelTimer(&g_StorpTraceLoggingPerformanceTimer);
    }
    EtwUnregister(RegHandle);
    RegHandle = 0LL;
    dword_1C0056060 = 0;
    StorpUninitializePerfTelemetry();
    g_StorpTraceLoggingInitialized = 0;
  }
}
