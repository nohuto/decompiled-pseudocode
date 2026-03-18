/*
 * XREFs of ?StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ @ 0x180183350
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016CB54 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@_N@Z @ 0x18016E84C (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@_N@Z.c)
 */

void __fastcall CInteractionTrackerPositionAnimation::StartInContactWorker(CInteractionTrackerPositionAnimation *this)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  int v4; // xmm6_4
  float CurrentValue; // xmm0_4
  char ShouldChainForAxis; // al

  v1 = *((_QWORD *)this + 29);
  v2 = 0LL;
  if ( v1 )
    v2 = *(_QWORD *)(v1 + 8);
  v4 = *(_DWORD *)(v2 + 576);
  CurrentValue = CInteractionTracker::GetCurrentValue(v2, *((_DWORD *)this + 57));
  ShouldChainForAxis = CInteractionTracker::ShouldChainForAxis(v2, *((_DWORD *)this + 57));
  *((float *)this + 95) = CurrentValue;
  *((float *)this + 142) = CurrentValue;
  *((_DWORD *)this + 143) = v4;
  CMotion::StartInContact((CInteractionTrackerPositionAnimation *)((char *)this + 336), ShouldChainForAxis);
}
