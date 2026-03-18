/*
 * XREFs of ?StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ @ 0x18018A050
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016B958 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@_N@Z @ 0x18016EA3C (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@_N@Z.c)
 */

void __fastcall CInteractionTrackerPositionAnimation::StartInContactWorker(CInteractionTrackerPositionAnimation *this)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  int v4; // xmm6_4
  float CurrentValue; // xmm0_4
  char ShouldChainForAxis; // al

  v1 = *((_QWORD *)this + 35);
  v2 = 0LL;
  if ( v1 )
    v2 = *(_QWORD *)(v1 + 8);
  v4 = *(_DWORD *)(v2 + 608);
  CurrentValue = CInteractionTracker::GetCurrentValue(v2, *((_DWORD *)this + 69));
  ShouldChainForAxis = CInteractionTracker::ShouldChainForAxis(v2, *((_DWORD *)this + 69));
  *((float *)this + 109) = CurrentValue;
  *((float *)this + 144) = CurrentValue;
  *((_DWORD *)this + 145) = v4;
  CMotion::StartInContact((CInteractionTrackerPositionAnimation *)((char *)this + 392), ShouldChainForAxis);
}
