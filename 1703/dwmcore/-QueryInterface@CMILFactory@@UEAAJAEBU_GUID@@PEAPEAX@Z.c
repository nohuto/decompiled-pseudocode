/*
 * XREFs of ?QueryInterface@CMILFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800471B0
 * Callers:
 *     ?QueryInterface@CRenderTarget@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5620 (-QueryInterface@CRenderTarget@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemMemoryBitmap@@WOA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5670 (-QueryInterface@CSystemMemoryBitmap@@WOA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMILBrushLinearGradient@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5870 (-QueryInterface@CMILBrushLinearGradient@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSecondaryD2DBitmap@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5B20 (-QueryInterface@CSecondaryD2DBitmap@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSecondaryD2DBitmap@@WBAI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5B30 (-QueryInterface@CSecondaryD2DBitmap@@WBAI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CD2DBitmap@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5B40 (-QueryInterface@CD2DBitmap@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSecondarySysmemBitmap@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5B90 (-QueryInterface@CSecondarySysmemBitmap@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@COffScreenRenderTarget@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D66A0 (-QueryInterface@COffScreenRenderTarget@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHolographicViewerContent@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D66B0 (-QueryInterface@CHolographicViewerContent@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemMemoryBitmap@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D66E0 (-QueryInterface@CSystemMemoryBitmap@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompressedSourceBitmap@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D6730 (-QueryInterface@CCompressedSourceBitmap@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmap@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D6740 (-QueryInterface@CBitmap@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompressedSourceBitmap@@WOI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D67B0 (-QueryInterface@CCompressedSourceBitmap@@WOI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSecondaryD2DBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D6840 (-QueryInterface@CSecondaryD2DBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@WBKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D6850 (-QueryInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@WBKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDxHandleYUVBitmapRealization@@WBJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D6890 (-QueryInterface@CDxHandleYUVBitmapRealization@@WBJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSecondaryD2DBitmap@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D68A0 (-QueryInterface@CSecondaryD2DBitmap@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall CMILFactory::QueryInterface(CMILFactory *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBase::InternalQueryInterface(this, a2, a3);
}
