/*
 * XREFs of GreCreateSolidBrush @ 0x1C0092010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HBRUSH __fastcall GreCreateSolidBrush(unsigned int a1)
{
  return hCreateSolidBrushInternal(a1, 0, 0LL, 0);
}
