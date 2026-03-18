/*
 * XREFs of ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x18012B94C
 * Callers:
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z @ 0x18012A448 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z.c)
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000II0@Z @ 0x18012A9F4 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000II0@Z.c)
 *     ?EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAX_K0AEB_K@Z @ 0x18012B638 (-EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAX_K0AEB_K@Z.c)
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18012B968 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ @ 0x18012C37C (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ.c)
 *     ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ @ 0x18012CD34 (-TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(
        CTelemetryTouchLatencyAnalysis *this,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 result; // rax

  v3 = *((_QWORD *)this + 273);
  result = 0LL;
  if ( v3 )
    return (a3 - a2) / v3;
  return result;
}
