/*
 * XREFs of ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180182B70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x18016C460 (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016CB54 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetManipulationVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016CE6C (-GetManipulationVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x18016EE48 (-ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1801824AC (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?GetCenterPoint@CInteractionTrackerPositionAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180182F00 (-GetCenterPoint@CInteractionTrackerPositionAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z @ 0x1801854CC (-CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z.c)
 */

__int64 __fastcall CInteractionTrackerPositionAnimation::CalculateInContactValueWorker(
        CInteractionTrackerPositionAnimation *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        float a4,
        float *a5)
{
  __int64 v5; // rsi
  float v8; // xmm7_4
  float v11; // xmm6_4
  int CenterPoint; // eax
  unsigned int v13; // ebx
  int v14; // ebx
  float v15; // xmm3_4
  float v16; // xmm2_4
  _DWORD *v17; // rcx
  float v18; // xmm0_4
  float v19; // xmm4_4
  float v20; // xmm0_4
  unsigned int v21; // eax
  float v22; // xmm5_4
  float v24; // [rsp+80h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 29);
  v8 = 0.0;
  v24 = 0.0;
  if ( v5 )
    v5 = *(_QWORD *)(v5 + 8);
  v11 = *((float *)this + 136);
  if ( v11 != CInteractionTracker::GetCurrentValue(v5, 2) )
  {
    CenterPoint = CInteractionTrackerPositionAnimation::GetCenterPoint(this, a2, a3, &v24);
    v13 = CenterPoint;
    if ( CenterPoint < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, CenterPoint, 0x115u);
      return v13;
    }
    v8 = v24;
    *((float *)this + 144) = v24;
  }
  v14 = *((_DWORD *)this + 57);
  CInteractionTracker::GetCurrentValue(v5, 2);
  LODWORD(v15) = CInteractionTracker::GetManipulationVelocity(v5, v14).m128_u32[0];
  v16 = CInteractionTracker::ValueFromBoundary((_DWORD *)v5, 2LL, v14);
  v18 = CInteractionTracker::ValueFromBoundary(v17, 1LL, v14);
  v20 = CPositionMotion::CalculateInContactValue(
          (CInteractionTrackerPositionAnimation *)((char *)this + 336),
          v18,
          v16,
          a4,
          v15,
          v19,
          v8);
  v21 = CInteractionTracker::BoundaryFromValue(v5, v20, *((_DWORD *)this + 57));
  CScrollAnimation::UpdateValueWithChaining((__int64)this, v22, v22 - *((float *)this + 95), v21);
  v13 = 0;
  *a5 = v20;
  return v13;
}
