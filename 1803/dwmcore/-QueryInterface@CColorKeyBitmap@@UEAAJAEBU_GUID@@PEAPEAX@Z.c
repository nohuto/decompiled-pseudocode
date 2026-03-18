/*
 * XREFs of ?QueryInterface@CColorKeyBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081370
 * Callers:
 *     ?QueryInterface@CDesktopRenderTarget@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DD4A0 (-QueryInterface@CDesktopRenderTarget@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRenderTarget@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DD560 (-QueryInterface@CRenderTarget@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCoRenderContent@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DD6D0 (-QueryInterface@CCoRenderContent@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRenderTargetBitmap@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DD860 (-QueryInterface@CRenderTargetBitmap@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSecondaryD2DBitmap@@WBAI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DDA00 (-QueryInterface@CSecondaryD2DBitmap@@WBAI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSecondaryD2DBitmap@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DDA10 (-QueryInterface@CSecondaryD2DBitmap@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSecondaryD2DBitmap@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DDA20 (-QueryInterface@CSecondaryD2DBitmap@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSecondarySysmemBitmap@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DDAE0 (-QueryInterface@CSecondarySysmemBitmap@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSecondaryD2DBitmap@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DDAF0 (-QueryInterface@CSecondaryD2DBitmap@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemMemoryBitmap@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE4A0 (-QueryInterface@CSystemMemoryBitmap@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemMemoryBitmap@@WOA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE4B0 (-QueryInterface@CSystemMemoryBitmap@@WOA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHolographicDisplay@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE610 (-QueryInterface@CHolographicDisplay@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSectionBitmapRealization@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE650 (-QueryInterface@CSectionBitmapRealization@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDeviceTextureImageSource@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE660 (-QueryInterface@CDeviceTextureImageSource@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemMemoryBitmap@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE670 (-QueryInterface@CSystemMemoryBitmap@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmap@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE6D0 (-QueryInterface@CBitmap@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDxHandleYUVBitmapRealization@@WBII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE7A0 (-QueryInterface@CDxHandleYUVBitmapRealization@@WBII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSectionBitmapRealization@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE7B0 (-QueryInterface@CSectionBitmapRealization@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@WBJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE8B0 (-QueryInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@WBJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CColorKeyBitmap::QueryInterface(CMILCOMBase *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBase::InternalQueryInterface(this, a2, a3);
}
