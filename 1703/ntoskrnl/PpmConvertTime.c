/*
 * XREFs of PpmConvertTime @ 0x1400890C4
 * Callers:
 *     PopGetIdleTimesCallback @ 0x140088D90 (PopGetIdleTimesCallback.c)
 *     PpmUpdateTimeAccumulation @ 0x14008A9C4 (PpmUpdateTimeAccumulation.c)
 *     PpmPerfAction @ 0x1400F2880 (PpmPerfAction.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x1400F3250 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmSnapPerformanceAccumulation @ 0x1400F3740 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x1400F4810 (PpmIdleExecuteTransition.c)
 *     PpmApplyIdlePolicy @ 0x14015F928 (PpmApplyIdlePolicy.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x14022864C (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x1402294AC (PpmSnapDripsAccountingSnapshot.c)
 *     PpmTraceExitLatency @ 0x14022973C (PpmTraceExitLatency.c)
 *     PopCalculateCsSummary @ 0x14022FD3C (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x1402300FC (PopCalculateIdleInformation.c)
 *     PpmConvertTimeTo @ 0x140233688 (PpmConvertTimeTo.c)
 *     PpmTranslateIdleAccounting @ 0x140233830 (PpmTranslateIdleAccounting.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x140233A64 (PpmTranslatePlatformIdleAccounting.c)
 *     PpmRegisterPerfStates @ 0x1405BF450 (PpmRegisterPerfStates.c)
 *     PpmInitIdlePolicy @ 0x1408208A4 (PpmInitIdlePolicy.c)
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
