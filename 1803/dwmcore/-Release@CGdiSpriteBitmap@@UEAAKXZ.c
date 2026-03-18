/*
 * XREFs of ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18001DBF0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AA70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180061DB0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180067410 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x180097888 (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?Release@CCompositionSurfaceBitmap@@WEA@EAAKXZ @ 0x1800DD6F0 (-Release@CCompositionSurfaceBitmap@@WEA@EAAKXZ.c)
 *     ?Release@CCompositionSurfaceBitmap@@WFA@EAAKXZ @ 0x1800DD700 (-Release@CCompositionSurfaceBitmap@@WFA@EAAKXZ.c)
 *     ?Release@CCompositionSurfaceBitmap@@WDI@EAAKXZ @ 0x1800DDC10 (-Release@CCompositionSurfaceBitmap@@WDI@EAAKXZ.c)
 *     ?Release@CMILBrushBitmap@@WBI@EAAKXZ @ 0x1800DE720 (-Release@CMILBrushBitmap@@WBI@EAAKXZ.c)
 *     ?Release@CMILBrushBitmap@@WDA@EAAKXZ @ 0x1800DE730 (-Release@CMILBrushBitmap@@WDA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGdiSpriteBitmap::Release(CGdiSpriteBitmap *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    (*(void (__fastcall **)(CGdiSpriteBitmap *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  }
  return v1;
}
