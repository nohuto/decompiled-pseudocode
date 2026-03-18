/*
 * XREFs of PpmConvertTime @ 0x14008D4CC
 * Callers:
 *     PopGetIdleTimesCallback @ 0x14008D170 (PopGetIdleTimesCallback.c)
 *     PpmPerfAction @ 0x1400953A0 (PpmPerfAction.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140095700 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmSnapPerformanceAccumulation @ 0x140095B50 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x140096C70 (PpmIdleExecuteTransition.c)
 *     PpmUpdateTimeAccumulation @ 0x1401161A0 (PpmUpdateTimeAccumulation.c)
 *     PpmApplyIdlePolicy @ 0x14014DAD0 (PpmApplyIdlePolicy.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x14023B5B0 (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x14023C35C (PpmSnapDripsAccountingSnapshot.c)
 *     PpmTraceExitLatency @ 0x14023C5F8 (PpmTraceExitLatency.c)
 *     PopCalculateCsSummary @ 0x14024457C (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x140244980 (PopCalculateIdleInformation.c)
 *     PpmConvertTimeTo @ 0x1402489FC (PpmConvertTimeTo.c)
 *     PpmTranslateIdleAccounting @ 0x140248C50 (PpmTranslateIdleAccounting.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x140248E90 (PpmTranslatePlatformIdleAccounting.c)
 *     PpmRegisterPerfStates @ 0x1405B500C (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x1405B5958 (PpmCheckInitProcessors.c)
 *     PpmInitIdlePolicy @ 0x140852008 (PpmInitIdlePolicy.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PpmConvertTime(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9

  v3 = a1;
  if ( a1 && a2 && a2 != a3 )
  {
    if ( is_mul_ok(a1, a3) )
      return a1 * (unsigned __int128)a3 / a2;
    else
      return a3 * (a1 / a2) + a3 * (a1 % a2) / a2;
  }
  return v3;
}
