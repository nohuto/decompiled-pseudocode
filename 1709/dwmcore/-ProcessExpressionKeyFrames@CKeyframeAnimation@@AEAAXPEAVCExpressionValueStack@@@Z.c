/*
 * XREFs of ?ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x1800A3E24
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A3FA0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A2860 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 */

void __fastcall CKeyframeAnimation::ProcessExpressionKeyFrames(
        CKeyframeAnimation *this,
        struct CExpressionValueStack *a2)
{
  __int64 i; // rbx
  bool v5; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 86); i = (unsigned int)(i + 1) )
    CBaseExpression::CalculateValue(
      *(CBaseExpression **)(*((_QWORD *)this + 40) + 8 * i),
      a2,
      *((_QWORD *)this + 19),
      &v5);
}
