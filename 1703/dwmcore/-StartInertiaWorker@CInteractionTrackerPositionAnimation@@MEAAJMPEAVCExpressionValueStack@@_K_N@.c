/*
 * XREFs of ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAJMPEAVCExpressionValueStack@@_K_N@Z @ 0x1801833D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBoundedEndpoint@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016CB30 (-GetBoundedEndpoint@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016CB54 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016CC50 (-GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x180181AA8 (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 *     ?IsInertiaEnabledForAxis@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z @ 0x180181CD0 (-IsInertiaEnabledForAxis@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z.c)
 *     ?GetCenterPoint@CInteractionTrackerPositionAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180182F00 (-GetCenterPoint@CInteractionTrackerPositionAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?StartInertia@CPositionMotion@@QEAAXMMMMMM_N0@Z @ 0x18018566C (-StartInertia@CPositionMotion@@QEAAXMMMMMM_N0@Z.c)
 */

__int64 __fastcall CInteractionTrackerPositionAnimation::StartInertiaWorker(
        CInteractionTrackerPositionAnimation *this,
        float a2,
        struct CExpressionValueStack *a3,
        __int64 a4,
        bool a5)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  int CenterPoint; // eax
  unsigned int v9; // ebx
  bool IsInertiaEnabledForAxis; // bl
  int v11; // edx
  float *v12; // rcx
  float InertiaDecayRate; // xmm7_4
  CInteractionTracker *v14; // rcx
  float BoundedEndpoint; // xmm8_4
  float CurrentValue; // xmm6_4
  float Velocity; // xmm0_4
  float v19; // [rsp+A0h] [rbp+8h] BYREF

  v6 = *((_QWORD *)this + 29);
  if ( v6 )
    v7 = *(_QWORD *)(v6 + 8);
  else
    v7 = 0LL;
  v19 = 0.0;
  CenterPoint = CInteractionTrackerPositionAnimation::GetCenterPoint(this, a3, a4, &v19);
  v9 = CenterPoint;
  if ( CenterPoint < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CenterPoint, 0xBDu);
  }
  else
  {
    IsInertiaEnabledForAxis = CInteractionTracker::IsInertiaEnabledForAxis(v7, *((_DWORD *)this + 57));
    InertiaDecayRate = CInteractionTracker::GetInertiaDecayRate(v12, v11);
    BoundedEndpoint = CInteractionTracker::GetBoundedEndpoint(v14);
    CurrentValue = CInteractionTracker::GetCurrentValue(v7, 2);
    Velocity = CScrollAnimation::GetVelocity(this);
    CPositionMotion::StartInertia(
      (CInteractionTrackerPositionAnimation *)((char *)this + 336),
      Velocity,
      a2,
      CurrentValue,
      BoundedEndpoint,
      v19,
      InertiaDecayRate,
      IsInertiaEnabledForAxis,
      a5);
    return 0;
  }
  return v9;
}
