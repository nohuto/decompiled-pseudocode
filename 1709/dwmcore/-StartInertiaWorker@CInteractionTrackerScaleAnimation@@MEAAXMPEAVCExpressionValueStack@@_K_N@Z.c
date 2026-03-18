/*
 * XREFs of ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXMPEAVCExpressionValueStack@@_K_N@Z @ 0x18018A620
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016BA54 (-GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?IsInertiaEnabledForAxis@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z @ 0x18016C1E4 (-IsInertiaEnabledForAxis@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z.c)
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x180188E3C (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 */

void __fastcall CInteractionTrackerScaleAnimation::StartInertiaWorker(
        CInteractionTrackerScaleAnimation *this,
        float a2,
        struct CExpressionValueStack *a3,
        __int64 a4,
        bool a5)
{
  __int64 v5; // rax
  __int64 v7; // rcx
  bool IsInertiaEnabledForAxis; // bl
  int v9; // edx
  float *v10; // rcx
  float InertiaDecayRate; // xmm6_4
  float Velocity; // xmm0_4

  v5 = *((_QWORD *)this + 35);
  v7 = 0LL;
  if ( v5 )
    v7 = *(_QWORD *)(v5 + 8);
  IsInertiaEnabledForAxis = CInteractionTracker::IsInertiaEnabledForAxis(v7, 2);
  InertiaDecayRate = CInteractionTracker::GetInertiaDecayRate(v10, v9);
  Velocity = CScrollAnimation::GetVelocity(this);
  *((float *)this + 109) = a2;
  CMotion::StartInertia(
    (CInteractionTrackerScaleAnimation *)((char *)this + 392),
    Velocity,
    InertiaDecayRate,
    IsInertiaEnabledForAxis,
    a5);
}
