/*
 * XREFs of ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x18016B014
 * Callers:
 *     ?UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@@Z @ 0x18016F094 (-UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ?GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z @ 0x18016BC78 (-GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z.c)
 *     ?WasInertiaStartedByImpulse@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z @ 0x18016F28C (-WasInertiaStartedByImpulse@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z.c)
 *     ?ProcessConditionalExpression@CScrollAnimation@@SAJPEAVCConditionalExpression@@PEAVCExpressionValueStack@@_KW4ScrollAxis@@PEA_NPEAM@Z @ 0x180189098 (-ProcessConditionalExpression@CScrollAnimation@@SAJPEAVCConditionalExpression@@PEAVCExpressionVa.c)
 */

__int64 __fastcall CInteractionTracker::CalculateCenterPointForAxis(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  int v6; // xmm0_4
  _DWORD *v7; // rsi
  unsigned int v9; // ebx
  unsigned int v10; // r14d
  __int64 v13; // rcx
  __int64 v14; // rdx
  signed int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  int v18; // xmm0_4
  const void *retaddr; // [rsp+F8h] [rbp+0h]
  char v21; // [rsp+118h] [rbp+20h] BYREF

  v7 = a6;
  v9 = a5;
  v10 = 0;
  if ( a4 == 1 )
  {
    v14 = *(_QWORD *)(a1 + 544);
    if ( !v14 )
      goto LABEL_9;
    if ( !a5 )
    {
      v13 = *(_QWORD *)(v14 + 432);
      goto LABEL_10;
    }
    if ( a5 != 1 )
    {
LABEL_9:
      v13 = 0LL;
      goto LABEL_10;
    }
    v13 = *(_QWORD *)(v14 + 440);
  }
  else
  {
    if ( a4 != 2 )
      goto LABEL_13;
    v13 = *(_QWORD *)(a1 + 8LL * (int)a5 + 424);
  }
LABEL_10:
  if ( !v13 )
    goto LABEL_13;
  v21 = 0;
  v15 = CScrollAnimation::ProcessConditionalExpression(v13, a2, a3, a5, &v21, a6);
  v10 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x149Cu);
    return v10;
  }
  if ( !v21 )
  {
LABEL_13:
    if ( a4 == 2 )
    {
      if ( (unsigned __int8)CInteractionTracker::WasInertiaStartedByImpulse(a1) )
      {
        if ( v9 )
        {
          if ( v9 != 1 )
            ModuleFailFastForHRESULT(-2147467259, retaddr);
          v16 = *(_DWORD *)(a1 + 616);
        }
        else
        {
          v16 = *(_DWORD *)(a1 + 612);
        }
        *v7 = v16;
        return v10;
      }
    }
    else if ( a4 == 1 )
    {
      v17 = *(_QWORD *)(a1 + 544);
      if ( v17 )
      {
        if ( v9 )
        {
          if ( v9 != 1 )
            ModuleFailFastForHRESULT(-2147467259, retaddr);
          v18 = *(_QWORD *)(v17 + 300);
        }
        else
        {
          v18 = HIDWORD(*(_QWORD *)(v17 + 292));
        }
        v6 = v18 ^ _xmm;
        goto LABEL_31;
      }
    }
    CInteractionTracker::GetMostRecentCenterPoint(a1, a4, v9);
    v10 = 0;
LABEL_31:
    *v7 = v6;
  }
  return v10;
}
