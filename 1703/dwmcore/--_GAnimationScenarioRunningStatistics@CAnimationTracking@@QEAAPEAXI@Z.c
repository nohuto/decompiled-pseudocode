/*
 * XREFs of ??_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x1800BACCC
 * Callers:
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x1800BA214 (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 *     ?EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGIPEBU_GUID@@AEBUTelFrameInfo@1@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x1800BA2F4 (-EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_IN.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

CAnimationTracking::AnimationScenarioRunningStatistics *__fastcall CAnimationTracking::AnimationScenarioRunningStatistics::`scalar deleting destructor'(
        CAnimationTracking::AnimationScenarioRunningStatistics *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 19);
  if ( v2 )
    WPF::ProcessHeapImpl::Free(v2);
  v3 = (void *)*((_QWORD *)this + 17);
  if ( v3 && *((_QWORD *)this + 18) )
    WPF::ProcessHeapImpl::Free(v3);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 20);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
