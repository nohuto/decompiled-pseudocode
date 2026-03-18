/*
 * XREFs of ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x18011A620
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180090590 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x18011A640 (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 */

bool __fastcall CVisual::HasBspPolygonList(CVisual *this)
{
  __int64 BspPolygonList; // r10
  bool result; // al

  BspPolygonList = CVisual::GetBspPolygonList(this);
  result = 0;
  if ( BspPolygonList )
    return *(_DWORD *)(BspPolygonList + 24) != 0;
  return result;
}
