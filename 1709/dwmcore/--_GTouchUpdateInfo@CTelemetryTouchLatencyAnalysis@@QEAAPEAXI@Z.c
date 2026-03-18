/*
 * XREFs of ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x180126338
 * Callers:
 *     ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800115E8 (-UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180011EF0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x1800BE210 (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ??1CFrameInfo@@QEAA@XZ @ 0x180125DF0 (--1CFrameInfo@@QEAA@XZ.c)
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x180126750 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z @ 0x18012CE08 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z.c)
 */

CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *__fastcall CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(
        CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *this)
{
  CTelemetryTouchLatencyAnalysis *v2; // rcx

  v2 = (CTelemetryTouchLatencyAnalysis *)*((_QWORD *)this + 6);
  if ( v2 )
    CTelemetryTouchLatencyAnalysis::UnreferenceScenario(v2, *(_QWORD *)this, 0xFFFFFFFFFFFFFFFFuLL);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
