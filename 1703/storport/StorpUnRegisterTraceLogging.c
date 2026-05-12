/*
 * XREFs of StorpUnRegisterTraceLogging @ 0x1C0065AB0
 * Callers:
 *     RaSqmAndEtwCleanup @ 0x1C0064824 (RaSqmAndEtwCleanup.c)
 * Callees:
 *     StorpUninitializePerfTelemetry @ 0x1C0045AC4 (StorpUninitializePerfTelemetry.c)
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
    dword_1C0055010 = 0;
    StorpUninitializePerfTelemetry();
    g_StorpTraceLoggingInitialized = 0;
  }
}
