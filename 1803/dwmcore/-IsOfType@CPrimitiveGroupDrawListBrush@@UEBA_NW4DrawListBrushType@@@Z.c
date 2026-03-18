/*
 * XREFs of ?IsOfType@CPrimitiveGroupDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x180005A50
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18008CC4C (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@P.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPrimitiveGroupDrawListBrush::IsOfType(__int64 a1, int a2)
{
  return (unsigned int)(a2 - 3) <= 1;
}
