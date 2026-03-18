/*
 * XREFs of ?ProcessConditionalExpression@CScrollAnimation@@IEAAJPEAVCConditionalExpression@@PEAVCExpressionValueStack@@_KPEA_NPEAM@Z @ 0x180181D4C
 * Callers:
 *     ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801813C0 (-CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?GetCenterPoint@CInteractionTrackerPositionAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180182F00 (-GetCenterPoint@CInteractionTrackerPositionAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x18016B5CC (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?IsAnyConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18016B6E0 (-IsAnyConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Reset@CConditionalExpression@@QEAAXXZ @ 0x18016B8A0 (-Reset@CConditionalExpression@@QEAAXXZ.c)
 */

__int64 __fastcall CScrollAnimation::ProcessConditionalExpression(
        CScrollAnimation *this,
        struct CConditionalExpression *a2,
        struct CExpressionValueStack *a3,
        __int64 a4,
        bool *a5,
        float *a6)
{
  int IsAnyConditionSatisified; // eax
  unsigned int v11; // ebx
  int Value; // eax

  CConditionalExpression::Reset(a2);
  IsAnyConditionSatisified = CConditionalExpression::IsAnyConditionSatisified(a2, a3, a4, a5);
  v11 = IsAnyConditionSatisified;
  if ( IsAnyConditionSatisified < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, IsAnyConditionSatisified, 0x2A2u);
    return v11;
  }
  if ( *a5 )
  {
    Value = CConditionalExpression::GetValue(a2, a3, a4, a6);
    v11 = Value;
    if ( Value < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Value, 0x2AAu);
      return v11;
    }
    if ( *((_DWORD *)this + 57) != 2 )
      *a6 = *a6 * -1.0;
  }
  return 0;
}
