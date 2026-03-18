/*
 * XREFs of ?ProcessConditionalExpression@CScrollAnimation@@SAJPEAVCConditionalExpression@@PEAVCExpressionValueStack@@_KW4ScrollAxis@@PEA_NPEAM@Z @ 0x1801BE4D8
 * Callers:
 *     ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x180193984 (-CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollStat.c)
 *     ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801BDBD4 (-CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180187AE4 (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?IsAnyConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180187CD0 (-IsAnyConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Reset@CConditionalExpression@@QEAAXXZ @ 0x180188254 (-Reset@CConditionalExpression@@QEAAXXZ.c)
 */

__int64 __fastcall CScrollAnimation::ProcessConditionalExpression(
        CConditionalExpression *a1,
        struct CExpressionValueStack *a2,
        __int64 a3,
        int a4,
        bool *a5,
        float *a6)
{
  int IsAnyConditionSatisified; // eax
  unsigned int v11; // ebx
  int Value; // eax

  CConditionalExpression::Reset(a1);
  IsAnyConditionSatisified = CConditionalExpression::IsAnyConditionSatisified(a1, a2, a3, a5);
  v11 = IsAnyConditionSatisified;
  if ( IsAnyConditionSatisified < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, IsAnyConditionSatisified, 0x29Du);
    return v11;
  }
  if ( *a5 )
  {
    Value = CConditionalExpression::GetValue((VectorSubchannelMaskInfo **)a1, a2, a3, a6);
    v11 = Value;
    if ( Value < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Value, 0x2A5u);
      return v11;
    }
    if ( a4 != 2 )
      *a6 = *a6 * -1.0;
  }
  return 0;
}
