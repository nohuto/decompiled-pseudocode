/*
 * XREFs of ?IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180083440
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x18004FDC0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005F130 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLayerVisual::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  __int64 v3; // rcx
  bool result; // al

  v2 = a2 - 79;
  result = 0;
  if ( v2 <= 0x37 )
  {
    v3 = 0x80000000808001LL;
    if ( _bittest64(&v3, (int)v2) )
      return 1;
  }
  return result;
}
