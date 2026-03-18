/*
 * XREFs of ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180189C50
 * Callers:
 *     <none>
 * Callees:
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x18016AFD8 (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016B958 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetManipulationVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016BB94 (-GetManipulationVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z @ 0x18016BC78 (-GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z.c)
 *     ?ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x18016F248 (-ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x180189554 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z @ 0x18018D5DC (-CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z.c)
 */

__int64 __fastcall CInteractionTrackerPositionAnimation::CalculateInContactValueWorker(
        CInteractionTrackerPositionAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float a4,
        float *a5)
{
  _DWORD *v5; // rdi
  __int64 v7; // rax
  float MostRecentCenterPoint; // xmm0_4
  int v10; // ebx
  float v11; // xmm6_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  _DWORD *v14; // rcx
  float v15; // xmm0_4
  float v16; // xmm4_4
  float v17; // xmm0_4
  unsigned int v18; // eax
  float v19; // xmm5_4

  v5 = 0LL;
  v7 = *((_QWORD *)this + 35);
  if ( v7 )
    v5 = *(_DWORD **)(v7 + 8);
  MostRecentCenterPoint = CInteractionTracker::GetMostRecentCenterPoint((__int64)v5, 1, *((_DWORD *)this + 69));
  v10 = *((_DWORD *)this + 69);
  v11 = MostRecentCenterPoint;
  CInteractionTracker::GetCurrentValue((__int64)v5, 2);
  LODWORD(v12) = CInteractionTracker::GetManipulationVelocity((__int64)v5, v10).m128_u32[0];
  v13 = CInteractionTracker::ValueFromBoundary(v5, 2LL, v10);
  v15 = CInteractionTracker::ValueFromBoundary(v14, 1LL, v10);
  v17 = CPositionMotion::CalculateInContactValue(
          (CInteractionTrackerPositionAnimation *)((char *)this + 392),
          v15,
          v13,
          a4,
          v12,
          v16,
          v11);
  v18 = CInteractionTracker::BoundaryFromValue((__int64)v5, v17, *((_DWORD *)this + 69));
  CScrollAnimation::UpdateValueWithChaining((__int64)this, v19, v19 - *((float *)this + 109), v18);
  *a5 = v17;
  return 0LL;
}
