/*
 * XREFs of ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXMPEAVCExpressionValueStack@@_K_N@Z @ 0x1801BFD10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801944B4 (-GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x1801BE2A0 (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 *     ?IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x1801CA004 (-IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z.c)
 */

void __fastcall CInteractionTrackerScaleAnimation::StartInertiaWorker(
        CInteractionTrackerScaleAnimation *this,
        float a2,
        struct CExpressionValueStack *a3,
        __int64 a4,
        bool a5)
{
  float *v5; // rdi
  __int64 v7; // rax
  char IsInertiaEnabledForAxis; // bl
  float InertiaDecayRate; // xmm6_4
  float Velocity; // xmm0_4

  v5 = 0LL;
  v7 = *((_QWORD *)this + 37);
  if ( v7 )
    v5 = *(float **)(v7 + 8);
  IsInertiaEnabledForAxis = InteractionSourceManager::IsInertiaEnabledForAxis(v5 + 88, 2LL);
  InertiaDecayRate = CInteractionTracker::GetInertiaDecayRate(v5, 2);
  Velocity = CScrollAnimation::GetVelocity(this);
  *((float *)this + 113) = a2;
  CMotion::StartInertia(
    (CInteractionTrackerScaleAnimation *)((char *)this + 408),
    Velocity,
    InertiaDecayRate,
    IsInertiaEnabledForAxis,
    a5);
}
