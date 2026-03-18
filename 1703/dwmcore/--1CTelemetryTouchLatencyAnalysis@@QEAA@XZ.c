/*
 * XREFs of ??1CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x18013B998
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x18013B684 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ??1CIndependentRefreshRateScheduler@@UEAA@XZ @ 0x18013C224 (--1CIndependentRefreshRateScheduler@@UEAA@XZ.c)
 * Callees:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180027FD4 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ @ 0x180140FE0 (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::~CTelemetryTouchLatencyAnalysis(CTelemetryTouchLatencyAnalysis *this)
{
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v2; // rdi
  __int64 v3; // rsi
  void *v4; // rcx
  void *v5; // rcx

  v2 = (CTelemetryTouchLatencyAnalysis *)((char *)this + 8);
  v3 = 10LL;
  do
  {
    CTelemetryTouchLatencyAnalysis::RetireScenario(this, v2, 1, 0);
    v2 = (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)((char *)v2 + 200);
    --v3;
  }
  while ( v3 );
  CTelemetryTouchLatencyAnalysis::SendInteractionSummary(this);
  v4 = (void *)*((_QWORD *)this + 252);
  if ( v4 )
    WPF::ProcessHeapImpl::Free(v4);
  v5 = (void *)*((_QWORD *)this + 253);
  if ( v5 )
    WPF::ProcessHeapImpl::Free(v5);
}
