/*
 * XREFs of ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x18012B71C
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18001262C (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x18012B344 (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 */

_BOOL8 __fastcall CVisual::HasBspPolygonList(CVisual *this)
{
  __int64 BspPolygonList; // r10
  _BOOL8 result; // rax

  BspPolygonList = CVisual::GetBspPolygonList((__int64)this);
  result = 0LL;
  if ( BspPolygonList )
    return *(_DWORD *)(BspPolygonList + 24) != 0;
  return result;
}
