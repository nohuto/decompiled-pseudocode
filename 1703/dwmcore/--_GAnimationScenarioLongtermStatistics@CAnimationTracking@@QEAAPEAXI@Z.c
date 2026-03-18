/*
 * XREFs of ??_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x1801420C8
 * Callers:
 *     ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x1800B96A8 (-UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z.c)
 *     ?ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ @ 0x1801420EC (-ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ.c)
 *     ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x18014236C (-SendLongtermStatistics@CAnimationTracking@@AEAAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void **__fastcall CAnimationTracking::AnimationScenarioLongtermStatistics::`scalar deleting destructor'(void **this)
{
  WPF::ProcessHeapImpl::Free(this[2]);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
