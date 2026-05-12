/*
 * XREFs of StorpTraceLoggingTelemetryTimerDpcRoutine @ 0x1C0002810
 * Callers:
 *     <none>
 * Callees:
 *     StorpLogStatistics @ 0x1C0004218 (StorpLogStatistics.c)
 */

void __fastcall StorpTraceLoggingTelemetryTimerDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int16 v5; // di
  __int64 v6; // rbx
  __int64 v7; // r8
  struct _KDPC *v8; // rbx
  LARGE_INTEGER v9; // rdx
  struct _KTIMER *v10; // rcx
  ULONG v11; // r9d

  v5 = 0;
  v6 = MEMORY[0xFFFFF78000000320];
  v7 = v6 * (int)KeQueryTimeIncrement();
  v8 = &g_StorpTraceLoggingPerformanceTimerDpc;
  WPP_MAIN_CB.SecurityDescriptor = (void *)(v7 / 10000000);
  if ( Dpc == &g_StorpTraceLoggingPerformanceTimerDpc )
  {
    if ( g_StorpTraceLoggingPerformanceEnabled )
      v5 = 4;
    if ( g_StorpTraceLoggingErrorDataEnabled )
      v5 |= 0x10u;
    if ( g_StorpTraceLoggingDeviceHealthEnabled )
      v5 |= 0x80u;
    StorpLogStatistics((unsigned __int16)v5 | 0x60u);
    v9.QuadPart = -36000000000LL;
    v10 = &g_StorpTraceLoggingPerformanceTimer;
    v11 = 300000;
    goto LABEL_9;
  }
  v8 = &g_StorpTraceLoggingHierarchicalResetTimerDpc;
  if ( Dpc == &g_StorpTraceLoggingHierarchicalResetTimerDpc )
  {
    StorpLogStatistics(3LL);
    v9.QuadPart = -138000000000LL;
    v10 = &g_StorpTraceLoggingHierarchicalResetTimer;
    v11 = 300000;
    goto LABEL_9;
  }
  v8 = &g_StorpTraceLoggingDailyTimerDpc;
  if ( Dpc == &g_StorpTraceLoggingDailyTimerDpc )
  {
    StorpLogStatistics(8LL);
    v9.QuadPart = -864000000000LL;
    v10 = &g_StorpTraceLoggingDailyTimer;
    v11 = 900000;
LABEL_9:
    KeSetCoalescableTimer(v10, v9, 0, v11, v8);
  }
}
