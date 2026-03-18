/*
 * XREFs of ?ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x180197988
 * Callers:
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x18003F0F0 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800296B0 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18003BF40 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessInnerExpression(
        CKeyframeAnimation *this,
        unsigned int a2,
        struct CExpressionValueStack *a3,
        struct CExpressionValue *a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rsi
  int v7; // eax
  bool v9; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 < *((_DWORD *)this + 90) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 42) + 8LL * a2);
    v7 = CBaseExpression::CalculateValue((CBaseExpression *)v6, a3, *((_QWORD *)this + 20), &v9);
    v5 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x68Bu);
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0x684u);
  }
  return v5;
}
