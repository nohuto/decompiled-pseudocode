/*
 * XREFs of ?GetMaxStackCount@CKeyframeAnimation@@UEBAIXZ @ 0x1800A3810
 * Callers:
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x1800A1058 (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CKeyframeAnimation::GetMaxStackCount(CKeyframeAnimation *this)
{
  return *((unsigned int *)this + 62);
}
