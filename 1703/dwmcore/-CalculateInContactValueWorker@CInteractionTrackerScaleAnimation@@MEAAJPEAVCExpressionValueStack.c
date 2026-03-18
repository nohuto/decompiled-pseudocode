/*
 * XREFs of ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1801835B0
 * Callers:
 *     <none>
 * Callees:
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x18016C460 (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?GetManipulationVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016CE6C (-GetManipulationVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1801824AC (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerScaleAnimation::CalculateInContactValueWorker(
        CInteractionTrackerScaleAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float a4,
        float *a5)
{
  __int64 v5; // rax
  __int64 v6; // r9
  unsigned __int32 v7; // xmm0_4
  __int64 v8; // r10
  float v9; // xmm3_4
  unsigned int v10; // edx
  __int64 v11; // r9
  unsigned int v12; // eax
  __int64 v13; // r10
  float v14; // xmm4_4

  v5 = *((_QWORD *)this + 29);
  v6 = 0LL;
  if ( v5 )
    v6 = *(_QWORD *)(v5 + 8);
  v7 = CInteractionTracker::GetManipulationVelocity(v6, 2).m128_u32[0];
  v9 = a4 * *(float *)(v8 + 536);
  *(_DWORD *)(v8 + 364) = v7;
  *(float *)(v8 + 536) = v9;
  v12 = CInteractionTracker::BoundaryFromValue(v11, v9, v10);
  CScrollAnimation::UpdateValueWithChaining(v13, v9, v14, v12);
  *(_DWORD *)a5 = v7;
  return 0LL;
}
