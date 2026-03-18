/*
 * XREFs of ?ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXXZ @ 0x1800301D4
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180030350 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D960 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 */

void __fastcall CKeyframeAnimation::ProcessExpressionKeyFrames(CKeyframeAnimation *this)
{
  __int64 i; // rdi
  bool v3; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 74); i = (unsigned int)(i + 1) )
    CBaseExpression::CalculateValue(
      *(CBaseExpression **)(*((_QWORD *)this + 34) + 8 * i),
      *((struct CExpressionValueStack **)this + 42),
      *((CComponentTransform3D **)this + 19),
      &v3);
}
