/*
 * XREFs of ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801813C0
 * Callers:
 *     ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180181508 (-CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016CB54 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetManipulationDelta@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016CD50 (-GetManipulationDelta@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x18016EE48 (-ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 *     ?GetSourceModifierForActiveManipulation@CInteractionTracker@@QEAAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x180181A6C (-GetSourceModifierForActiveManipulation@CInteractionTracker@@QEAAPEAVCConditionalExpression@@W4S.c)
 *     ?ProcessConditionalExpression@CScrollAnimation@@IEAAJPEAVCConditionalExpression@@PEAVCExpressionValueStack@@_KPEA_NPEAM@Z @ 0x180181D4C (-ProcessConditionalExpression@CScrollAnimation@@IEAAJPEAVCConditionalExpression@@PEAVCExpression.c)
 */

__int64 __fastcall CScrollAnimation::CalculateInContactDelta(
        CScrollAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float *a4)
{
  __int64 v5; // rcx
  struct CConditionalExpression *SourceModifierForActiveManipulation; // rax
  unsigned __int64 v8; // r9
  struct CExpressionValueStack *v9; // r10
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rax
  _DWORD *v13; // rsi
  __int64 v14; // rbx
  _DWORD *v15; // rcx
  int v16; // r11d
  __int64 v17; // rcx
  int v18; // r11d
  bool v20; // [rsp+70h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 29);
  if ( v5 )
    v5 = *(_QWORD *)(v5 + 8);
  SourceModifierForActiveManipulation = (struct CConditionalExpression *)CInteractionTracker::GetSourceModifierForActiveManipulation(
                                                                           v5,
                                                                           *((unsigned int *)this + 57),
                                                                           a3,
                                                                           a3);
  v20 = 0;
  if ( !SourceModifierForActiveManipulation )
    goto LABEL_7;
  v10 = CScrollAnimation::ProcessConditionalExpression(this, SourceModifierForActiveManipulation, v9, v8, &v20, a4);
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( v20 )
      return 0;
LABEL_7:
    v12 = *((_QWORD *)this + 29);
    if ( v12 )
      v13 = *(_DWORD **)(v12 + 8);
    else
      v13 = 0LL;
    v14 = *(_QWORD *)this;
    CInteractionTracker::ValueFromBoundary(v13, 2LL, *((_DWORD *)this + 57));
    CInteractionTracker::ValueFromBoundary(v15, 1LL, v16);
    CInteractionTracker::GetManipulationDelta(v17, v18);
    CInteractionTracker::GetCurrentValue((__int64)v13, *((_DWORD *)this + 57));
    *a4 = (*(float (__fastcall **)(CScrollAnimation *))(v14 + 248))(this);
    return 0;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x266u);
  return v11;
}
