/*
 * XREFs of ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1801BF920
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x180193948 (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801943B8 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@@Z @ 0x180197094 (-UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1801BE9A0 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x1801C9CEC (-GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
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
  double ActiveManipulationVelocity; // xmm0_8
  float v12; // xmm3_4
  unsigned int v13; // eax
  int updated; // eax
  unsigned int v15; // ebx

  v5 = *((_QWORD *)this + 37);
  if ( v5 )
    v5 = *(_QWORD *)(v5 + 8);
  CurrentValue = CInteractionTracker::GetCurrentValue(v5, 2);
  ActiveManipulationVelocity = InteractionSourceManager::GetActiveManipulationVelocity(v5 + 352, 2LL);
  *((_DWORD *)this + 109) = LODWORD(ActiveManipulationVelocity);
  v12 = a4 * *((float *)this + 140);
  *((float *)this + 140) = v12;
  v13 = CInteractionTracker::BoundaryFromValue(v5, v12, 2u);
  CScrollAnimation::UpdateValueWithChaining((__int64)this, v12, a4, v13);
  if ( *(float *)&ActiveManipulationVelocity == CurrentValue
    || (updated = CInteractionTracker::UpdateCenterPointForState(v5, (__int64)a2, a3, 1u), v15 = updated, updated >= 0) )
  {
    v15 = 0;
    *a5 = *(float *)&ActiveManipulationVelocity;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xE7u);
  }
  return v15;
}
