/*
 * XREFs of ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXMPEAVCExpressionValueStack@@_K_N@Z @ 0x1801BF740
 * Callers:
 *     <none>
 * Callees:
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x180193928 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801943B8 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801944B4 (-GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z @ 0x1801944DC (-GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z.c)
 *     ?GetBoundedEndpoint@CScrollAnimation@@QEBAMXZ @ 0x1801BE0F8 (-GetBoundedEndpoint@CScrollAnimation@@QEBAMXZ.c)
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x1801BE2A0 (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 *     ?StartInertia@CPositionMotion@@QEAAXMMMMMM_N0@Z @ 0x1801C541C (-StartInertia@CPositionMotion@@QEAAXMMMMMM_N0@Z.c)
 *     ?IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x1801CA004 (-IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z.c)
 */

void __fastcall CInteractionTrackerPositionAnimation::StartInertiaWorker(
        CInteractionTrackerPositionAnimation *this,
        float a2,
        struct CExpressionValueStack *a3,
        __int64 a4,
        bool a5)
{
  __int64 v5; // rsi
  float MostRecentCenterPoint; // xmm10_4
  float BoundedEndpoint; // xmm8_4
  char IsInertiaEnabledForAxis; // di
  float InertiaDecayRate; // xmm7_4
  __int64 v11; // rcx
  float CurrentValue; // xmm6_4
  float Velocity; // xmm0_4

  v5 = *((_QWORD *)this + 37);
  if ( v5 )
    v5 = *(_QWORD *)(v5 + 8);
  MostRecentCenterPoint = CInteractionTracker::GetMostRecentCenterPoint(v5, 2, *((_DWORD *)this + 73));
  BoundedEndpoint = 0.0;
  if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)v5) )
    BoundedEndpoint = CScrollAnimation::GetBoundedEndpoint(*(CScrollAnimation **)(v5 + 480));
  IsInertiaEnabledForAxis = InteractionSourceManager::IsInertiaEnabledForAxis(v5 + 352, *((unsigned int *)this + 73));
  InertiaDecayRate = CInteractionTracker::GetInertiaDecayRate((float *)v5, *((_DWORD *)this + 73));
  CurrentValue = CInteractionTracker::GetCurrentValue(v11, 2);
  Velocity = CScrollAnimation::GetVelocity(this);
  CPositionMotion::StartInertia(
    (CInteractionTrackerPositionAnimation *)((char *)this + 408),
    Velocity,
    a2,
    CurrentValue,
    BoundedEndpoint,
    MostRecentCenterPoint,
    InertiaDecayRate,
    IsInertiaEnabledForAxis,
    a5);
}
