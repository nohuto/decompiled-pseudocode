/*
 * XREFs of ?GetMaxStackCount@CExpression@@UEBAIXZ @ 0x1800333D0
 * Callers:
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x18002D588 (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CExpression::GetMaxStackCount(CExpression *this)
{
  return *((unsigned int *)this + 60);
}
