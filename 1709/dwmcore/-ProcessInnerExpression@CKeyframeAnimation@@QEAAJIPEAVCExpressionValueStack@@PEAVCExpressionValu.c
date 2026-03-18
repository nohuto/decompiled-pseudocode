/*
 * XREFs of ?ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x18016F5AC
 * Callers:
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x1800A6D00 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180092EB0 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A2860 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessInnerExpression(
        CKeyframeAnimation *this,
        unsigned int a2,
        struct CExpressionValueStack *a3,
        struct CExpressionValue *a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rsi
  signed int v7; // eax
  bool v9; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 < *((_DWORD *)this + 86) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 40) + 8LL * a2);
    v7 = CBaseExpression::CalculateValue((CBaseExpression *)v6, a3, *((_QWORD *)this + 19), &v9);
    v5 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x588u);
    }
    else
    {
      CExpressionValue::CopyFrom(a4, (const struct CExpressionValue *)(v6 + 64));
      return 0;
    }
  }
  else
  {
    v5 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, 0x581u);
  }
  return v5;
}
