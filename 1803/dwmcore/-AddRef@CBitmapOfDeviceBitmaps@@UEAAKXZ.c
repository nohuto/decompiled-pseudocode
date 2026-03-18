/*
 * XREFs of ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18000D6E0
 * Callers:
 *     ?InternalAddRef@?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEBAXXZ @ 0x180013048 (-InternalAddRef@-$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Create@CSecondarySysmemBitmap@@SAJIIAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1800182A4 (-Create@CSecondarySysmemBitmap@@SAJIIAEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18002D4FC (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AA70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?AddRef@CDesktopRenderTarget@@WKI@EAAKXZ @ 0x1800DD4C0 (-AddRef@CDesktopRenderTarget@@WKI@EAAKXZ.c)
 *     ?AddRef@CRenderTarget@@WEI@EAAKXZ @ 0x1800DD580 (-AddRef@CRenderTarget@@WEI@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@WOA@EAAKXZ @ 0x1800DD720 (-AddRef@CSystemMemoryBitmap@@WOA@EAAKXZ.c)
 *     ?AddRef@CSectionBitmapRealization@@WJA@EAAKXZ @ 0x1800DD800 (-AddRef@CSectionBitmapRealization@@WJA@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WBAI@EAAKXZ @ 0x1800DD920 (-AddRef@CSecondaryD2DBitmap@@WBAI@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WHA@EAAKXZ @ 0x1800DD930 (-AddRef@CSecondaryD2DBitmap@@WHA@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WHI@EAAKXZ @ 0x1800DD940 (-AddRef@CSecondaryD2DBitmap@@WHI@EAAKXZ.c)
 *     ?AddRef@CSecondarySysmemBitmap@@WGA@EAAKXZ @ 0x1800DDAB0 (-AddRef@CSecondarySysmemBitmap@@WGA@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WGI@EAAKXZ @ 0x1800DDAC0 (-AddRef@CSecondaryD2DBitmap@@WGI@EAAKXZ.c)
 *     ?AddRef@CHolographicViewer@@WDI@EAAKXZ @ 0x1800DDD00 (-AddRef@CHolographicViewer@@WDI@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@WCI@EAAKXZ @ 0x1800DE490 (-AddRef@CSystemMemoryBitmap@@WCI@EAAKXZ.c)
 *     ?AddRef@CHolographicViewer@@WEA@EAAKXZ @ 0x1800DE600 (-AddRef@CHolographicViewer@@WEA@EAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@WDA@EAAKXZ @ 0x1800DE640 (-AddRef@CBitmapOfDeviceBitmaps@@WDA@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WCA@EAAKXZ @ 0x1800DE6C0 (-AddRef@CBitmap@@WCA@EAAKXZ.c)
 *     ?AddRef@CTransformingGeometrySink@@WBA@EAAKXZ @ 0x1800DE6F0 (-AddRef@CTransformingGeometrySink@@WBA@EAAKXZ.c)
 *     ?AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WBJI@EAAKXZ @ 0x1800DE890 (-AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WBJI@EAAKXZ.c)
 *     ?AddRef@CDxHandleYUVBitmapRealization@@WFI@EAAKXZ @ 0x1800DE8A0 (-AddRef@CDxHandleYUVBitmapRealization@@WFI@EAAKXZ.c)
 *     ?AddRef@CSectionBitmapRealization@@WBII@EAAKXZ @ 0x1800DE900 (-AddRef@CSectionBitmapRealization@@WBII@EAAKXZ.c)
 *     ?AddRef@CAtlasImageSource@@WBI@EAAKXZ @ 0x1800DE940 (-AddRef@CAtlasImageSource@@WBI@EAAKXZ.c)
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1802011DC (-HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CBitmapOfDeviceBitmaps::AddRef(CBitmapOfDeviceBitmaps *this)
{
  return CMILCOMBase::InternalAddRef(this);
}
