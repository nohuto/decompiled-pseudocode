/*
 * XREFs of ?IsOfType@CGeometryOnlyDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x18008BA40
 * Callers:
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x180005E54 (-GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18008CC4C (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@P.c)
 * Callees:
 *     <none>
 */

bool __fastcall CGeometryOnlyDrawListBrush::IsOfType(__int64 a1, int a2)
{
  return a2 == 0;
}
