/*
 * XREFs of ??1CAnimationTracking@@QEAA@XZ @ 0x18013B548
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x18013B684 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ??1CIndependentRefreshRateScheduler@@UEAA@XZ @ 0x18013C224 (--1CIndependentRefreshRateScheduler@@UEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x1800BA214 (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 *     ?ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ @ 0x1801420EC (-ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ.c)
 */

void __fastcall CAnimationTracking::~CAnimationTracking(CAnimationTracking *this)
{
  while ( *((_DWORD *)this + 6) )
    CAnimationTracking::DeleteScenario(this, 0);
  *((_DWORD *)this + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this, 8u);
  CAnimationTracking::ClearAllLongtermScenarios(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this);
}
