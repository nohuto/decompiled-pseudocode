/*
 * XREFs of ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAJMPEAVCExpressionValueStack@@_K_N@Z @ 0x180183950
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016CC50 (-GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x180181AA8 (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 *     ?IsInertiaEnabledForAxis@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z @ 0x180181CD0 (-IsInertiaEnabledForAxis@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z.c)
 *     ?StartInertia@CMotion@@IEAAXMM_N0@Z @ 0x1801851B4 (-StartInertia@CMotion@@IEAAXMM_N0@Z.c)
 */

__int64 __fastcall CInteractionTrackerScaleAnimation::StartInertiaWorker(
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

  v5 = *((_QWORD *)this + 29);
  v7 = 0LL;
  if ( v5 )
    v7 = *(_QWORD *)(v5 + 8);
  IsInertiaEnabledForAxis = CInteractionTracker::IsInertiaEnabledForAxis(v7, 2);
  InertiaDecayRate = CInteractionTracker::GetInertiaDecayRate(v10, v9);
  Velocity = CScrollAnimation::GetVelocity(this);
  *((float *)this + 95) = a2;
  CMotion::StartInertia(
    (CInteractionTrackerScaleAnimation *)((char *)this + 336),
    Velocity,
    InertiaDecayRate,
    IsInertiaEnabledForAxis,
    a5);
  return 0LL;
}
