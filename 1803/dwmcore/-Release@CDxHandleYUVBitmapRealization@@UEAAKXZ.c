/*
 * XREFs of ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x18000D6C0
 * Callers:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180025A88 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AA70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Release@CDesktopRenderTarget@@WEA@EAAKXZ @ 0x1800DD4B0 (-Release@CDesktopRenderTarget@@WEA@EAAKXZ.c)
 *     ?Release@CDesktopRenderTarget@@WKI@EAAKXZ @ 0x1800DD530 (-Release@CDesktopRenderTarget@@WKI@EAAKXZ.c)
 *     ?Release@CRenderTarget@@WEI@EAAKXZ @ 0x1800DD570 (-Release@CRenderTarget@@WEI@EAAKXZ.c)
 *     ?Release@CCoRenderContent@@WDI@EAAKXZ @ 0x1800DD710 (-Release@CCoRenderContent@@WDI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WBI@EAAKXZ @ 0x1800DD770 (-Release@CWICBitmapWrapper@@WBI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCA@EAAKXZ @ 0x1800DD780 (-Release@CWICBitmapWrapper@@WCA@EAAKXZ.c)
 *     ?Release@CBitmapOfDeviceBitmaps@@WOA@EAAKXZ @ 0x1800DD790 (-Release@CBitmapOfDeviceBitmaps@@WOA@EAAKXZ.c)
 *     ?Release@CSecondaryD2DBitmap@@WBAI@EAAKXZ @ 0x1800DDA70 (-Release@CSecondaryD2DBitmap@@WBAI@EAAKXZ.c)
 *     ?Release@CSecondaryD2DBitmap@@WGI@EAAKXZ @ 0x1800DDA80 (-Release@CSecondaryD2DBitmap@@WGI@EAAKXZ.c)
 *     ?Release@CSecondaryD2DBitmap@@WHA@EAAKXZ @ 0x1800DDA90 (-Release@CSecondaryD2DBitmap@@WHA@EAAKXZ.c)
 *     ?Release@CSecondaryD2DBitmap@@WHI@EAAKXZ @ 0x1800DDAA0 (-Release@CSecondaryD2DBitmap@@WHI@EAAKXZ.c)
 *     ?Release@CSecondarySysmemBitmap@@WGA@EAAKXZ @ 0x1800DDB00 (-Release@CSecondarySysmemBitmap@@WGA@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCI@EAAKXZ @ 0x1800DE680 (-Release@CWICBitmapWrapper@@WCI@EAAKXZ.c)
 *     ?Release@CSystemMemoryBitmap@@WDA@EAAKXZ @ 0x1800DE6E0 (-Release@CSystemMemoryBitmap@@WDA@EAAKXZ.c)
 *     ?Release@CD2DBitmapCacheSourceRealization@@WBA@EAAKXZ @ 0x1800DE7D0 (-Release@CD2DBitmapCacheSourceRealization@@WBA@EAAKXZ.c)
 *     ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WFI@EAAKXZ @ 0x1800DE7E0 (-Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WFI@EAAKXZ.c)
 *     ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBJI@EAAKXZ @ 0x1800DE8C0 (-Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBJI@EAAKXZ.c)
 *     ?Release@CD2DBitmapCacheSourceRealization@@WJA@EAAKXZ @ 0x1800DE8D0 (-Release@CD2DBitmapCacheSourceRealization@@WJA@EAAKXZ.c)
 *     ?Release@CDxHandleYUVBitmapRealization@@WBII@EAAKXZ @ 0x1800DE910 (-Release@CDxHandleYUVBitmapRealization@@WBII@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CDxHandleYUVBitmapRealization::Release(CDxHandleYUVBitmapRealization *this)
{
  return CMILCOMBase::InternalRelease(this);
}
