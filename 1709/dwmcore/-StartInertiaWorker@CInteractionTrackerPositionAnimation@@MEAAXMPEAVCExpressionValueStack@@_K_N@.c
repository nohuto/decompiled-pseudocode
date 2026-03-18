/*
 * XREFs of ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXMPEAVCExpressionValueStack@@_K_N@Z @ 0x18018A0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ @ 0x18016AFB8 (-AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016B958 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016BA54 (-GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z @ 0x18016BC78 (-GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z.c)
 *     ?IsInertiaEnabledForAxis@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z @ 0x18016C1E4 (-IsInertiaEnabledForAxis@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z.c)
 *     ?GetBoundedEndpoint@CScrollAnimation@@QEBAMXZ @ 0x180188C88 (-GetBoundedEndpoint@CScrollAnimation@@QEBAMXZ.c)
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x180188E3C (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 *     ?StartInertia@CPositionMotion@@QEAAXMMMMMM_N0@Z @ 0x18018D6EC (-StartInertia@CPositionMotion@@QEAAXMMMMMM_N0@Z.c)
 */

void __fastcall CInteractionTrackerPositionAnimation::StartInertiaWorker(
        CInteractionTrackerPositionAnimation *this,
        float a2,
        struct CExpressionValueStack *a3,
        __int64 a4,
        bool a5)
{
  __int64 v5; // rdi
  float MostRecentCenterPoint; // xmm10_4
  float BoundedEndpoint; // xmm8_4
  bool IsInertiaEnabledForAxis; // bl
  int v10; // edx
  float *v11; // rcx
  float InertiaDecayRate; // xmm7_4
  __int64 v13; // rcx
  float CurrentValue; // xmm6_4
  float Velocity; // xmm0_4

  v5 = *((_QWORD *)this + 35);
  if ( v5 )
    v5 = *(_QWORD *)(v5 + 8);
  MostRecentCenterPoint = CInteractionTracker::GetMostRecentCenterPoint(v5, 2, *((_DWORD *)this + 69));
  BoundedEndpoint = 0.0;
  if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)v5) )
    BoundedEndpoint = CScrollAnimation::GetBoundedEndpoint(*(CScrollAnimation **)(v5 + 384));
  IsInertiaEnabledForAxis = CInteractionTracker::IsInertiaEnabledForAxis(v5, *((_DWORD *)this + 69));
  InertiaDecayRate = CInteractionTracker::GetInertiaDecayRate(v11, v10);
  CurrentValue = CInteractionTracker::GetCurrentValue(v13, 2);
  Velocity = CScrollAnimation::GetVelocity(this);
  CPositionMotion::StartInertia(
    (CInteractionTrackerPositionAnimation *)((char *)this + 392),
    Velocity,
    a2,
    CurrentValue,
    BoundedEndpoint,
    MostRecentCenterPoint,
    InertiaDecayRate,
    IsInertiaEnabledForAxis,
    a5);
}
