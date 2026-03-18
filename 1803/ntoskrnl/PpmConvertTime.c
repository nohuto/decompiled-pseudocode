/*
 * XREFs of PpmConvertTime @ 0x14003884C
 * Callers:
 *     PopGetIdleTimesCallback @ 0x1400384F0 (PopGetIdleTimesCallback.c)
 *     PpmUpdateTimeAccumulation @ 0x140038C88 (PpmUpdateTimeAccumulation.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x140109130 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140109AF0 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmSnapPerformanceAccumulation @ 0x140109F20 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x14010BC10 (PpmIdleExecuteTransition.c)
 *     PpmApplyIdlePolicy @ 0x140180C28 (PpmApplyIdlePolicy.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x140272AA4 (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x14027394C (PpmSnapDripsAccountingSnapshot.c)
 *     PpmTraceExitLatency @ 0x140273BDC (PpmTraceExitLatency.c)
 *     PopCalculateCsSummary @ 0x14027ACFC (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x14027B138 (PopCalculateIdleInformation.c)
 *     PpmConvertTimeTo @ 0x14027EA84 (PpmConvertTimeTo.c)
 *     PpmTranslateIdleAccounting @ 0x14027ECE0 (PpmTranslateIdleAccounting.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x14027EF20 (PpmTranslatePlatformIdleAccounting.c)
 *     PpmRegisterPerfStates @ 0x14063EACC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x14063F434 (PpmCheckInitProcessors.c)
 *     PpmInitIdlePolicy @ 0x1408C2BE8 (PpmInitIdlePolicy.c)
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
