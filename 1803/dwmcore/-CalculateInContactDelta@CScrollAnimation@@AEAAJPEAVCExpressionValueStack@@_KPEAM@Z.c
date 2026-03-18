/*
 * XREFs of ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801BDBD4
 * Callers:
 *     ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801BDD34 (-CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801943B8 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x1801971D0 (-ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 *     ?ProcessConditionalExpression@CScrollAnimation@@SAJPEAVCConditionalExpression@@PEAVCExpressionValueStack@@_KW4ScrollAxis@@PEA_NPEAM@Z @ 0x1801BE4D8 (-ProcessConditionalExpression@CScrollAnimation@@SAJPEAVCConditionalExpression@@PEAVCExpressionVa.c)
 *     ?GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x1801C9B70 (-GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetSourceModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x1801C9E48 (-GetSourceModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression.c)
 */

__int64 __fastcall CScrollAnimation::CalculateInContactDelta(
        CScrollAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float *a4)
{
  __int64 v5; // rcx
  unsigned int v9; // ebx
  __int64 SourceModifierForActiveManipulation; // rax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rax
  _DWORD *v14; // rsi
  __int64 v15; // rbx
  _DWORD *v16; // rcx
  int v17; // r11d
  __int64 v18; // rcx
  int v19; // r11d
  char v21; // [rsp+80h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 37);
  if ( v5 )
    v5 = *(_QWORD *)(v5 + 8);
  v9 = *((_DWORD *)this + 73);
  SourceModifierForActiveManipulation = InteractionSourceManager::GetSourceModifierForActiveManipulation(v5 + 352, v9);
  v21 = 0;
  if ( !SourceModifierForActiveManipulation )
    goto LABEL_7;
  v11 = CScrollAnimation::ProcessConditionalExpression(SourceModifierForActiveManipulation, a2, a3, v9, &v21, a4);
  v12 = v11;
  if ( v11 >= 0 )
  {
    if ( v21 )
      return 0;
LABEL_7:
    v13 = *((_QWORD *)this + 37);
    if ( v13 )
      v14 = *(_DWORD **)(v13 + 8);
    else
      v14 = 0LL;
    InteractionSourceManager::GetActiveManipulationDelta(v14 + 88, *((unsigned int *)this + 73));
    v15 = *(_QWORD *)this;
    CInteractionTracker::ValueFromBoundary(v14, 2LL, *((_DWORD *)this + 73));
    CInteractionTracker::ValueFromBoundary(v16, 1LL, v17);
    CInteractionTracker::GetCurrentValue(v18, v19);
    *a4 = (*(float (__fastcall **)(CScrollAnimation *))(v15 + 304))(this);
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x260u);
  return v12;
}
