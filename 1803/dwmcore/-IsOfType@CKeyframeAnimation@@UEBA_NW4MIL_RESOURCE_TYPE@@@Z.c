/*
 * XREFs of ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18003CE40
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18003B590 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CKeyframeAnimation::IsOfType(__int64 a1, int a2)
{
  return a2 == 84 || a2 == 10 || a2 == 101;
}
