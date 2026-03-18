/*
 * XREFs of ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x18013C65C
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800266D0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x18013C6AC (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 *     ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x18013CB04 (-HasBspPolygonList@CVisual@@IEBA_NXZ.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18015EF00 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z @ 0x1801A6FF4 (-AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z.c)
 *     ?GetBspPolygonListCount@CVisual@@IEBAIXZ @ 0x1801A785C (-GetBspPolygonListCount@CVisual@@IEBAIXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetBspPolygonList(__int64 a1)
{
  __int64 v1; // rcx
  __int64 i; // rcx

  v1 = *(_QWORD *)(a1 + 216);
  if ( (*(_DWORD *)(v1 + 4) & 0x1000000) == 0 )
    return 0LL;
  for ( i = v1 + 12; (*(_DWORD *)i & 0x7F000000) != 0x8000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  return *(_QWORD *)(i + 4);
}
