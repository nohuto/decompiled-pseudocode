/*
 * XREFs of GreCreateSolidBrush @ 0x1C009B870
 * Callers:
 *     <none>
 * Callees:
 *     hCreateSolidBrushInternal @ 0x1C001E170 (hCreateSolidBrushInternal.c)
 */

HBRUSH __fastcall GreCreateSolidBrush(unsigned int a1)
{
  return hCreateSolidBrushInternal(a1, 0, 0LL, 0);
}
