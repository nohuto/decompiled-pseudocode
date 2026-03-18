/*
 * XREFs of ?GetMaxStackCount@CKeyframeAnimation@@UEBAIXZ @ 0x18003CE60
 * Callers:
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x18003AA70 (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CKeyframeAnimation::GetMaxStackCount(CKeyframeAnimation *this)
{
  return *((unsigned int *)this + 66);
}
