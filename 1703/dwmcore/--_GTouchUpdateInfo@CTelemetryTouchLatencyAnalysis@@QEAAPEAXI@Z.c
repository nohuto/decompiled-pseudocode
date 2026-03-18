/*
 * XREFs of ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x1800289FC
 * Callers:
 *     ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180065C28 (-UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180067C20 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x1800B3F28 (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ??1CFrameInfo@@QEAA@XZ @ 0x18013B5C0 (--1CFrameInfo@@QEAA@XZ.c)
 * Callees:
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z @ 0x180027FA4 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
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
