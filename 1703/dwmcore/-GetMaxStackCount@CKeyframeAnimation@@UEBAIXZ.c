/*
 * XREFs of ?GetMaxStackCount@CKeyframeAnimation@@UEBAIXZ @ 0x18002FFB0
 * Callers:
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x18002D588 (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CKeyframeAnimation::GetMaxStackCount(CKeyframeAnimation *this)
{
  return *((unsigned int *)this + 94);
}
