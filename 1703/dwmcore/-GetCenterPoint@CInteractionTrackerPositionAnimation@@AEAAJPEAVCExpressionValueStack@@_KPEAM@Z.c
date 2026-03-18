/*
 * XREFs of ?GetCenterPoint@CInteractionTrackerPositionAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180182F00
 * Callers:
 *     ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180182B70 (-CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueSt.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180182CF0 (-CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStac.c)
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAJMPEAVCExpressionValueStack@@_K_N@Z @ 0x1801833D0 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAJMPEAVCExpressionValueStack@@_K_N@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016CB54 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetManipulationCenterPoint@CInteractionTracker@@QEBA?AUD2DVector3@@XZ @ 0x18016CC78 (-GetManipulationCenterPoint@CInteractionTracker@@QEBA-AUD2DVector3@@XZ.c)
 *     ?ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x18016EE48 (-ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 *     ?WasInertiaStartedByImpulse@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z @ 0x18016EE8C (-WasInertiaStartedByImpulse@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z.c)
 *     ?ProcessConditionalExpression@CScrollAnimation@@IEAAJPEAVCConditionalExpression@@PEAVCExpressionValueStack@@_KPEA_NPEAM@Z @ 0x180181D4C (-ProcessConditionalExpression@CScrollAnimation@@IEAAJPEAVCConditionalExpression@@PEAVCExpression.c)
 */

__int64 __fastcall CInteractionTrackerPositionAnimation::GetCenterPoint(
        CInteractionTrackerPositionAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float *a4)
{
  unsigned int v5; // r14d
  __int64 v6; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdx
  struct CConditionalExpression *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // xmm0_4
  int v19; // eax
  float CurrentValue; // xmm2_4
  _DWORD *v21; // rcx
  int v22; // r11d
  bool v24; // [rsp+30h] [rbp-20h] BYREF
  __int64 v25; // [rsp+38h] [rbp-18h] BYREF
  void *retaddr; // [rsp+78h] [rbp+28h]

  v5 = 0;
  v6 = *((_QWORD *)this + 29);
  if ( v6 )
    v10 = *(_QWORD *)(v6 + 8);
  else
    v10 = 0LL;
  if ( *((_DWORD *)this + 56) == 1 )
  {
    if ( v6 )
      v13 = *(_QWORD *)(v6 + 8);
    else
      v13 = 0LL;
    v14 = *(_QWORD *)(v13 + 512);
    if ( !v14 )
      goto LABEL_18;
    v15 = *((_DWORD *)this + 57);
    if ( !v15 )
    {
      v12 = *(struct CConditionalExpression **)(v14 + 424);
      goto LABEL_19;
    }
    if ( v15 != 1 )
    {
LABEL_18:
      v12 = 0LL;
      goto LABEL_19;
    }
    v12 = *(struct CConditionalExpression **)(v14 + 432);
  }
  else
  {
    if ( *((_DWORD *)this + 56) != 2 )
    {
LABEL_22:
      if ( *((_DWORD *)this + 56) == 2 && CInteractionTracker::WasInertiaStartedByImpulse(v10) )
      {
        v17 = *((_DWORD *)this + 57);
        v25 = *(_QWORD *)(v10 + 580);
        if ( v17 )
        {
          if ( v17 != 1 )
          {
            ModuleFailFastForHRESULT(-2147024809, retaddr);
            __debugbreak();
          }
LABEL_28:
          v18 = HIDWORD(v25);
LABEL_30:
          *(_DWORD *)a4 = v18;
          return v5;
        }
        goto LABEL_29;
      }
      if ( *((_DWORD *)this + 56) == 1 )
      {
        CInteractionTracker::GetManipulationCenterPoint(v10, &v25);
        v19 = *((_DWORD *)this + 57);
        if ( v19 )
        {
          if ( v19 != 1 )
          {
            ModuleFailFastForHRESULT(-2147024809, retaddr);
            __debugbreak();
          }
          goto LABEL_28;
        }
LABEL_29:
        v18 = v25;
        goto LABEL_30;
      }
      CurrentValue = CInteractionTracker::GetCurrentValue(v10, *((_DWORD *)this + 57));
      if ( CInteractionTracker::ValueFromBoundary((_DWORD *)v10, 1LL, *((_DWORD *)this + 57)) >= CurrentValue
        || CurrentValue >= CInteractionTracker::ValueFromBoundary(v21, 2LL, v22) )
      {
        *a4 = CurrentValue;
      }
      else
      {
        *a4 = *((float *)this + 144);
      }
      return 0;
    }
    if ( v6 )
      v11 = *(_QWORD *)(v6 + 8);
    else
      v11 = 0LL;
    v12 = *(struct CConditionalExpression **)(v11 + 8LL * *((int *)this + 57) + 408);
  }
LABEL_19:
  if ( !v12 )
    goto LABEL_22;
  v24 = 0;
  v16 = CScrollAnimation::ProcessConditionalExpression(this, v12, a2, a3, &v24, a4);
  v5 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x1C2u);
    return v5;
  }
  if ( !v24 )
    goto LABEL_22;
  return v5;
}
