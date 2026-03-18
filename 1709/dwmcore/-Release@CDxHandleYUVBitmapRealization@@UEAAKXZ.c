/*
 * XREFs of ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x180009FE0
 * Callers:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180009FA0 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CRenderTarget@@WEI@EAAKXZ @ 0x1800C5F50 (-Release@CRenderTarget@@WEI@EAAKXZ.c)
 *     ?Release@CDesktopRenderTarget@@WEA@EAAKXZ @ 0x1800C5F80 (-Release@CDesktopRenderTarget@@WEA@EAAKXZ.c)
 *     ?Release@CSystemMemoryBitmap@@WDA@EAAKXZ @ 0x1800C6200 (-Release@CSystemMemoryBitmap@@WDA@EAAKXZ.c)
 *     ?Release@CSecondaryD2DBitmap@@WBAI@EAAKXZ @ 0x1800C64A0 (-Release@CSecondaryD2DBitmap@@WBAI@EAAKXZ.c)
 *     ?Release@CDesktopRenderTarget@@WHA@EAAKXZ @ 0x1800C64B0 (-Release@CDesktopRenderTarget@@WHA@EAAKXZ.c)
 *     ?Release@CSecondaryD2DBitmap@@WHI@EAAKXZ @ 0x1800C64C0 (-Release@CSecondaryD2DBitmap@@WHI@EAAKXZ.c)
 *     ?Release@CSecondarySysmemBitmap@@WGA@EAAKXZ @ 0x1800C6510 (-Release@CSecondarySysmemBitmap@@WGA@EAAKXZ.c)
 *     ?Release@CSecondaryD2DBitmap@@WGI@EAAKXZ @ 0x1800C6520 (-Release@CSecondaryD2DBitmap@@WGI@EAAKXZ.c)
 *     ?Release@CCoRenderContent@@WDI@EAAKXZ @ 0x1800C6EE0 (-Release@CCoRenderContent@@WDI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCA@EAAKXZ @ 0x1800C6F10 (-Release@CWICBitmapWrapper@@WCA@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCI@EAAKXZ @ 0x1800C6F20 (-Release@CWICBitmapWrapper@@WCI@EAAKXZ.c)
 *     ?Release@CD2DBitmapCacheSourceRealization@@WBA@EAAKXZ @ 0x1800C6F60 (-Release@CD2DBitmapCacheSourceRealization@@WBA@EAAKXZ.c)
 *     ?Release@CBitmapOfDeviceBitmaps@@WOA@EAAKXZ @ 0x1800C6FC0 (-Release@CBitmapOfDeviceBitmaps@@WOA@EAAKXZ.c)
 *     ?Release@CDxHandleYUVBitmapRealization@@WBII@EAAKXZ @ 0x1800C7060 (-Release@CDxHandleYUVBitmapRealization@@WBII@EAAKXZ.c)
 *     ?Release@CD2DBitmapCacheSourceRealization@@WJA@EAAKXZ @ 0x1800C70C0 (-Release@CD2DBitmapCacheSourceRealization@@WJA@EAAKXZ.c)
 *     ?Release@CColorKeyBitmap@@WJI@EAAKXZ @ 0x1800C70D0 (-Release@CColorKeyBitmap@@WJI@EAAKXZ.c)
 *     ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBJI@EAAKXZ @ 0x1800C71D0 (-Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBJI@EAAKXZ.c)
 *     ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WFI@EAAKXZ @ 0x1800C7240 (-Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WFI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WBI@EAAKXZ @ 0x1800C7270 (-Release@CWICBitmapWrapper@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CDxHandleYUVBitmapRealization::Release(CDxHandleYUVBitmapRealization *this)
{
  return CMILCOMBase::InternalRelease(this);
}
