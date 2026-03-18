/*
 * XREFs of ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180188770
 * Callers:
 *     ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801888C8 (-CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016B958 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetManipulationDelta@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016BA7C (-GetManipulationDelta@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x18016BF60 (-GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAx.c)
 *     ?ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x18016F248 (-ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 *     ?ProcessConditionalExpression@CScrollAnimation@@SAJPEAVCConditionalExpression@@PEAVCExpressionValueStack@@_KW4ScrollAxis@@PEA_NPEAM@Z @ 0x180189098 (-ProcessConditionalExpression@CScrollAnimation@@SAJPEAVCConditionalExpression@@PEAVCExpressionVa.c)
 */

__int64 __fastcall CScrollAnimation::CalculateInContactDelta(
        CScrollAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float *a4)
{
  struct CExpressionValueStack *v5; // r10
  __int64 v7; // rax
  _QWORD *v8; // rcx
  __int64 SourceModifierConditionalAnimation; // rax
  signed int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rax
  _DWORD *v13; // rsi
  __int64 v14; // rbx
  _DWORD *v15; // rcx
  int v16; // r11d
  __int64 v17; // rcx
  int v18; // r11d
  char v20; // [rsp+70h] [rbp+8h] BYREF

  v5 = a2;
  v7 = *((_QWORD *)this + 35);
  if ( v7 )
    v7 = *(_QWORD *)(v7 + 8);
  v8 = *(_QWORD **)(v7 + 544);
  if ( v8 )
    SourceModifierConditionalAnimation = CManipulation::GetSourceModifierConditionalAnimation(
                                           v8,
                                           *((_DWORD *)this + 69));
  else
    SourceModifierConditionalAnimation = 0LL;
  v20 = 0;
  if ( !SourceModifierConditionalAnimation )
    goto LABEL_10;
  v10 = CScrollAnimation::ProcessConditionalExpression(
          SourceModifierConditionalAnimation,
          v5,
          a3,
          *((unsigned int *)this + 69),
          &v20,
          a4);
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( v20 )
      return 0;
LABEL_10:
    v12 = *((_QWORD *)this + 35);
    if ( v12 )
      v13 = *(_DWORD **)(v12 + 8);
    else
      v13 = 0LL;
    v14 = *(_QWORD *)this;
    CInteractionTracker::ValueFromBoundary(v13, 2LL, *((_DWORD *)this + 69));
    CInteractionTracker::ValueFromBoundary(v15, 1LL, v16);
    CInteractionTracker::GetManipulationDelta(v17, v18);
    CInteractionTracker::GetCurrentValue((__int64)v13, *((_DWORD *)this + 69));
    *a4 = (*(float (__fastcall **)(CScrollAnimation *))(v14 + 304))(this);
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x25Fu);
  return v11;
}
