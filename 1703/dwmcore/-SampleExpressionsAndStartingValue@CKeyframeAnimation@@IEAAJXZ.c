/*
 * XREFs of ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJXZ @ 0x18002FFB8
 * Callers:
 *     ?OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z @ 0x18002F6A0 (-OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z.c)
 * Callees:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D960 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x180030084 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SampleExpressionsAndStartingValue(CKeyframeAnimation *this)
{
  __int64 i; // rdi
  unsigned int v3; // edi
  int v5; // eax
  bool v6; // [rsp+40h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 392) & 4) == 0 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 74); i = (unsigned int)(i + 1) )
      CBaseExpression::CalculateValue(
        *(CBaseExpression **)(*((_QWORD *)this + 34) + 8 * i),
        *((struct CExpressionValueStack **)this + 42),
        *((CComponentTransform3D **)this + 19),
        &v6);
    if ( *((_QWORD *)this + 33) )
    {
      v5 = CKeyframeAnimation::SampleStartingValue(this);
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x813u);
        return v3;
      }
    }
    *((_BYTE *)this + 392) |= 4u;
  }
  return 0;
}
