/*
 * XREFs of ?GetIntersectingRedrawRects@CHwndRenderTarget@@QEBAXAEBUMilRectF@@PEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x180145DBC
 * Callers:
 *     ?RedrawVisual@CDrawingContext@@AEAAJV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18014DF10 (-RedrawVisual@CDrawingContext@@AEAAJV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@PEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801544B8 (-GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@PEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 */

void __fastcall CHwndRenderTarget::GetIntersectingRedrawRects(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx

  *(_DWORD *)(a3 + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize(a3, 0x10u);
  v6 = *(_QWORD *)(a1 + 144);
  if ( v6 )
    CDirtyRegion::GetIntersectingRedrawRects(v6, a2, a3);
}
