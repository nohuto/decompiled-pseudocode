/*
 * XREFs of ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x180027984
 * Callers:
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z @ 0x1800279A0 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z.c)
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180027FD4 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ @ 0x1800286B0 (-TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ.c)
 *     ?EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAX_K0AEB_K@Z @ 0x1800288F4 (-EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAX_K0AEB_K@Z.c)
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000II0@Z @ 0x1800C3144 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000II0@Z.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ @ 0x180140FE0 (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ.c)
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

  v3 = *((_QWORD *)this + 283);
  result = 0LL;
  if ( v3 )
    return (a3 - a2) / v3;
  return result;
}
