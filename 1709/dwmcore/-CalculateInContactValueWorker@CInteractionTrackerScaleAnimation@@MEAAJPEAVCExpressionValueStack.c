/*
 * XREFs of ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x18018A280
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x18016AFD8 (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016B958 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetManipulationVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016BB94 (-GetManipulationVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@@Z @ 0x18016F094 (-UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x180189554 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerScaleAnimation::CalculateInContactValueWorker(
        CInteractionTrackerScaleAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float a4,
        float *a5)
{
  __int64 v5; // rbx
  float CurrentValue; // xmm6_4
  float v11; // xmm0_4
  float v12; // xmm3_4
  unsigned int v13; // edx
  unsigned int v14; // eax
  signed int updated; // eax
  unsigned int v16; // ebx

  v5 = *((_QWORD *)this + 35);
  if ( v5 )
    v5 = *(_QWORD *)(v5 + 8);
  CurrentValue = CInteractionTracker::GetCurrentValue(v5, 2);
  v11 = CInteractionTracker::GetManipulationVelocity(v5, 2).m128_f32[0];
  *((float *)this + 105) = v11;
  v12 = a4 * *((float *)this + 136);
  *((float *)this + 136) = v12;
  v14 = CInteractionTracker::BoundaryFromValue(v5, v12, v13);
  CScrollAnimation::UpdateValueWithChaining((__int64)this, v12, a4, v14);
  if ( v11 == CurrentValue
    || (updated = CInteractionTracker::UpdateCenterPointForState(v5, (__int64)a2, a3, 1u), v16 = updated, updated >= 0) )
  {
    v16 = 0;
    *a5 = v11;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, updated, 0xE7u);
  }
  return v16;
}
