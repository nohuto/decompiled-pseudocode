/*
 * XREFs of ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x180193984
 * Callers:
 *     ?UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@@Z @ 0x180197094 (-UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z @ 0x1801944DC (-GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1801947C0 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?WasInertiaStartedByImpulse@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z @ 0x180197214 (-WasInertiaStartedByImpulse@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z.c)
 *     ?ProcessConditionalExpression@CScrollAnimation@@SAJPEAVCConditionalExpression@@PEAVCExpressionValueStack@@_KW4ScrollAxis@@PEA_NPEAM@Z @ 0x1801BE4D8 (-ProcessConditionalExpression@CScrollAnimation@@SAJPEAVCConditionalExpression@@PEAVCExpressionVa.c)
 *     ?GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA?AUD2DVector3@@XZ @ 0x1801C9B04 (-GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetSourceCenterpointModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x1801C9DD8 (-GetSourceCenterpointModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditiona.c)
 */

__int64 __fastcall CInteractionTracker::CalculateCenterPointForAxis(
        float *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        float *a6)
{
  float *v6; // rbp
  unsigned int v8; // ebx
  __int64 SourceCenterpointModifierForActiveManipulation; // r10
  int v13; // eax
  unsigned int v14; // esi
  float MostRecentCenterPoint; // xmm0_4
  __int64 v16; // r10
  _DWORD v18[10]; // [rsp+30h] [rbp-28h] BYREF
  const void *retaddr; // [rsp+58h] [rbp+0h]
  char v20; // [rsp+78h] [rbp+20h] BYREF

  v6 = a6;
  v8 = a5;
  SourceCenterpointModifierForActiveManipulation = 0LL;
  if ( a4 == 1 )
  {
    SourceCenterpointModifierForActiveManipulation = InteractionSourceManager::GetSourceCenterpointModifierForActiveManipulation(
                                                       a1 + 88,
                                                       a5);
  }
  else if ( a4 == 2 )
  {
    SourceCenterpointModifierForActiveManipulation = *(_QWORD *)&a1[2 * a5 + 130];
  }
  v20 = 0;
  if ( !SourceCenterpointModifierForActiveManipulation )
    goto LABEL_9;
  v13 = CScrollAnimation::ProcessConditionalExpression(
          SourceCenterpointModifierForActiveManipulation,
          a2,
          a3,
          v8,
          &v20,
          v6);
  v14 = v13;
  if ( v13 >= 0 )
  {
    if ( v20 )
      return 0;
LABEL_9:
    if ( a4 == 2 )
    {
      if ( (unsigned __int8)CInteractionTracker::WasInertiaStartedByImpulse(a1) )
      {
        if ( v8 )
        {
          if ( v8 != 1 )
            ModuleFailFastForHRESULT(-2147467259, retaddr);
          MostRecentCenterPoint = a1[168];
        }
        else
        {
          MostRecentCenterPoint = a1[167];
        }
        goto LABEL_24;
      }
    }
    else if ( a4 == 1 && InteractionSourceManager::HasActiveManipulation((InteractionSourceManager *)(a1 + 88)) )
    {
      InteractionSourceManager::GetActiveManipulationCenterpoint(v16, v18);
      if ( v8 )
      {
        if ( v8 != 1 )
          ModuleFailFastForHRESULT(-2147467259, retaddr);
        MostRecentCenterPoint = *(float *)&v18[1];
      }
      else
      {
        MostRecentCenterPoint = *(float *)v18;
      }
      goto LABEL_24;
    }
    MostRecentCenterPoint = CInteractionTracker::GetMostRecentCenterPoint(a1, a4, v8);
LABEL_24:
    *v6 = MostRecentCenterPoint;
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x1302u);
  return v14;
}
