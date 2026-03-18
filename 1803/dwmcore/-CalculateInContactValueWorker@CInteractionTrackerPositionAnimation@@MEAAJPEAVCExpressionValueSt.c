/*
 * XREFs of ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1801BF260
 * Callers:
 *     <none>
 * Callees:
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x180193948 (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801943B8 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z @ 0x1801944DC (-GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z.c)
 *     ?ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x1801971D0 (-ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1801BE9A0 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z @ 0x1801C528C (-CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z.c)
 *     ?GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x1801C9CEC (-GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerPositionAnimation::CalculateInContactValueWorker(
        CInteractionTrackerPositionAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float a4,
        float *a5)
{
  _DWORD *v5; // rdi
  __int64 v8; // rax
  float MostRecentCenterPoint; // xmm7_4
  double ActiveManipulationVelocity; // xmm0_8
  int v11; // ebx
  float v12; // xmm6_4
  float CurrentValue; // xmm3_4
  float v14; // xmm2_4
  _DWORD *v15; // rcx
  unsigned int v16; // eax
  float v17; // xmm5_4

  v5 = 0LL;
  v8 = *((_QWORD *)this + 37);
  if ( v8 )
    v5 = *(_DWORD **)(v8 + 8);
  MostRecentCenterPoint = CInteractionTracker::GetMostRecentCenterPoint((__int64)v5, 1, *((_DWORD *)this + 73));
  ActiveManipulationVelocity = InteractionSourceManager::GetActiveManipulationVelocity(
                                 v5 + 88,
                                 *((unsigned int *)this + 73));
  v11 = *((_DWORD *)this + 73);
  v12 = *(float *)&ActiveManipulationVelocity;
  CurrentValue = CInteractionTracker::GetCurrentValue((__int64)v5, 2);
  v14 = CInteractionTracker::ValueFromBoundary(v5, 2LL, v11);
  *(float *)&ActiveManipulationVelocity = CInteractionTracker::ValueFromBoundary(v15, 1LL, v11);
  *(float *)&ActiveManipulationVelocity = CPositionMotion::CalculateInContactValue(
                                            (CInteractionTrackerPositionAnimation *)((char *)this + 408),
                                            *(float *)&ActiveManipulationVelocity,
                                            v14,
                                            a4,
                                            v12,
                                            CurrentValue,
                                            MostRecentCenterPoint);
  v16 = CInteractionTracker::BoundaryFromValue(
          (__int64)v5,
          *(float *)&ActiveManipulationVelocity,
          *((_DWORD *)this + 73));
  CScrollAnimation::UpdateValueWithChaining((__int64)this, v17, v17 - *((float *)this + 113), v16);
  *a5 = *(float *)&ActiveManipulationVelocity;
  return 0LL;
}
