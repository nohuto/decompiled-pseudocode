/*
 * XREFs of ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180009FF0
 * Callers:
 *     ?Create@CSecondarySysmemBitmap@@SAJIIAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x180086A40 (-Create@CSecondarySysmemBitmap@@SAJIIAEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800AACB0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEBAXXZ @ 0x1800BC15C (-InternalAddRef@-$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?AddRef@CHwndRenderTarget@@WEA@EAAKXZ @ 0x1800C5E90 (-AddRef@CHwndRenderTarget@@WEA@EAAKXZ.c)
 *     ?AddRef@CMILBrushLinearGradient@@WHA@EAAKXZ @ 0x1800C5EA0 (-AddRef@CMILBrushLinearGradient@@WHA@EAAKXZ.c)
 *     ?AddRef@CRenderTarget@@WEI@EAAKXZ @ 0x1800C5F30 (-AddRef@CRenderTarget@@WEI@EAAKXZ.c)
 *     ?AddRef@CCoRenderContent@@WDI@EAAKXZ @ 0x1800C6000 (-AddRef@CCoRenderContent@@WDI@EAAKXZ.c)
 *     ?AddRef@CTransformingGeometrySink@@WBA@EAAKXZ @ 0x1800C6190 (-AddRef@CTransformingGeometrySink@@WBA@EAAKXZ.c)
 *     ?AddRef@CMILBrushLinearGradient@@WOA@EAAKXZ @ 0x1800C61A0 (-AddRef@CMILBrushLinearGradient@@WOA@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WBAI@EAAKXZ @ 0x1800C6350 (-AddRef@CSecondaryD2DBitmap@@WBAI@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WGI@EAAKXZ @ 0x1800C6360 (-AddRef@CSecondaryD2DBitmap@@WGI@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WHI@EAAKXZ @ 0x1800C6370 (-AddRef@CSecondaryD2DBitmap@@WHI@EAAKXZ.c)
 *     ?AddRef@CSecondarySysmemBitmap@@WGA@EAAKXZ @ 0x1800C64D0 (-AddRef@CSecondarySysmemBitmap@@WGA@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WCA@EAAKXZ @ 0x1800C6880 (-AddRef@CBitmap@@WCA@EAAKXZ.c)
 *     ?AddRef@CAtlasImageSource@@WBI@EAAKXZ @ 0x1800C6E50 (-AddRef@CAtlasImageSource@@WBI@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@WCI@EAAKXZ @ 0x1800C6F00 (-AddRef@CSystemMemoryBitmap@@WCI@EAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@WDA@EAAKXZ @ 0x1800C6FB0 (-AddRef@CBitmapOfDeviceBitmaps@@WDA@EAAKXZ.c)
 *     ?AddRef@CColorKeyBitmap@@WJI@EAAKXZ @ 0x1800C7080 (-AddRef@CColorKeyBitmap@@WJI@EAAKXZ.c)
 *     ?AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WBJI@EAAKXZ @ 0x1800C7190 (-AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WBJI@EAAKXZ.c)
 *     ?AddRef@CDxHandleYUVBitmapRealization@@WFI@EAAKXZ @ 0x1800C71A0 (-AddRef@CDxHandleYUVBitmapRealization@@WFI@EAAKXZ.c)
 *     ?AddRef@CSectionBitmapRealization@@WJA@EAAKXZ @ 0x1800C71B0 (-AddRef@CSectionBitmapRealization@@WJA@EAAKXZ.c)
 *     ?AddRef@CSectionBitmapRealization@@WBII@EAAKXZ @ 0x1800C7200 (-AddRef@CSectionBitmapRealization@@WBII@EAAKXZ.c)
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1801C4AAC (-HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CBitmapOfDeviceBitmaps::AddRef(CBitmapOfDeviceBitmaps *this)
{
  return CMILCOMBase::InternalAddRef(this);
}
