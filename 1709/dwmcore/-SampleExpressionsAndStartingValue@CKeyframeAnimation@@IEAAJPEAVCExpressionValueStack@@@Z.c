/*
 * XREFs of ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x1800A3BC4
 * Callers:
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800A3E58 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A2860 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x1800A3CE0 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 */

__int64 __fastcall CKeyframeAnimation::SampleExpressionsAndStartingValue(
        CKeyframeAnimation *this,
        struct CExpressionValueStack *a2)
{
  __int64 i; // rdi
  unsigned int v5; // edi
  signed int v7; // eax
  bool v8; // [rsp+40h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 456) & 4) == 0 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 86); i = (unsigned int)(i + 1) )
      CBaseExpression::CalculateValue(
        *(CBaseExpression **)(*((_QWORD *)this + 40) + 8 * i),
        a2,
        *((_QWORD *)this + 19),
        &v8);
    if ( *((_QWORD *)this + 38) )
    {
      v7 = CKeyframeAnimation::SampleStartingValue(this);
      v5 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x762u);
        return v5;
      }
    }
    *((_BYTE *)this + 456) |= 4u;
  }
  return 0;
}
