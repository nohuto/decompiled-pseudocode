/*
 * XREFs of ??KCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA?AV01@I@Z @ 0x180014F10
 * Callers:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180014190 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x18014DABC (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator/(_DWORD *a1, __int64 a2, unsigned int a3)
{
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)a2 = *a1 / a3;
  *(_DWORD *)(a2 + 4) = a1[1] / a3;
  *(_DWORD *)(a2 + 8) = a1[2] / a3;
  *(_DWORD *)(a2 + 12) = a1[3] / a3;
  *(_DWORD *)(a2 + 16) = a1[4] / a3;
  *(_DWORD *)(a2 + 20) = a1[5] / a3;
  return a2;
}
