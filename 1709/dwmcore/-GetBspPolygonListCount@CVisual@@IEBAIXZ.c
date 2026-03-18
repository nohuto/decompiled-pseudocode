/*
 * XREFs of ?GetBspPolygonListCount@CVisual@@IEBAIXZ @ 0x1801770E8
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180090590 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18013C558 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x18011A640 (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 */

__int64 __fastcall CVisual::GetBspPolygonListCount(CVisual *this)
{
  __int64 BspPolygonList; // rax
  unsigned int v2; // r10d

  BspPolygonList = CVisual::GetBspPolygonList((__int64)this);
  if ( BspPolygonList )
    return *(unsigned int *)(BspPolygonList + 24);
  return v2;
}
