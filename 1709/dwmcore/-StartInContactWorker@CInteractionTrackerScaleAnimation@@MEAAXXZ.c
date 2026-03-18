/*
 * XREFs of ?StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ @ 0x18018A5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016B958 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@_N@Z @ 0x18016EA3C (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@_N@Z.c)
 */

void __fastcall CInteractionTrackerScaleAnimation::StartInContactWorker(CInteractionTrackerScaleAnimation *this)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  float CurrentValue; // xmm0_4
  char ShouldChainForAxis; // al

  v1 = *((_QWORD *)this + 35);
  v2 = 0LL;
  if ( v1 )
    v2 = *(_QWORD *)(v1 + 8);
  CurrentValue = CInteractionTracker::GetCurrentValue(v2, 2);
  ShouldChainForAxis = CInteractionTracker::ShouldChainForAxis(v2, 2);
  *((float *)this + 136) = CurrentValue;
  *((float *)this + 109) = CurrentValue;
  CMotion::StartInContact((CInteractionTrackerScaleAnimation *)((char *)this + 392), ShouldChainForAxis);
}
