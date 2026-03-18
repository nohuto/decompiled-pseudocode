/*
 * XREFs of ?AddRef@CHolographicClient@@UEAAKXZ @ 0x1800471A0
 * Callers:
 *     ?Create@CSecondarySysmemBitmap@@SAJIIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x1800247F8 (-Create@CSecondarySysmemBitmap@@SAJIIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@.c)
 *     ?HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x1800568D8 (-HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18005B588 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I_NPEAPEAV1@@Z @ 0x18007CB44 (-CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@A.c)
 *     ?Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAPEAV1@@Z @ 0x1800C2DA0 (-Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAP.c)
 *     ??$SetInterface@VCRenderTargetBitmap@@V1@@@YAXAEAPEAVCRenderTargetBitmap@@PEAV0@@Z @ 0x1800C5A9C (--$SetInterface@VCRenderTargetBitmap@@V1@@@YAXAEAPEAVCRenderTargetBitmap@@PEAV0@@Z.c)
 *     ?AddRef@CRenderTarget@@WEI@EAAKXZ @ 0x1800D5570 (-AddRef@CRenderTarget@@WEI@EAAKXZ.c)
 *     ?AddRef@CMILBrushLinearGradient@@WDA@EAAKXZ @ 0x1800D5630 (-AddRef@CMILBrushLinearGradient@@WDA@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WHI@EAAKXZ @ 0x1800D5A90 (-AddRef@CSecondaryD2DBitmap@@WHI@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WBAI@EAAKXZ @ 0x1800D5AA0 (-AddRef@CSecondaryD2DBitmap@@WBAI@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WGI@EAAKXZ @ 0x1800D5AB0 (-AddRef@CSecondaryD2DBitmap@@WGI@EAAKXZ.c)
 *     ?AddRef@CSecondarySysmemBitmap@@WGA@EAAKXZ @ 0x1800D5B70 (-AddRef@CSecondarySysmemBitmap@@WGA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WBI@EAAKXZ @ 0x1800D6600 (-AddRef@CCompressedSourceBitmap@@WBI@EAAKXZ.c)
 *     ?AddRef@CHwndRenderTarget@@WEA@EAAKXZ @ 0x1800D6690 (-AddRef@CHwndRenderTarget@@WEA@EAAKXZ.c)
 *     ?AddRef@CCoRenderContent@@WDI@EAAKXZ @ 0x1800D66C0 (-AddRef@CCoRenderContent@@WDI@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WCA@EAAKXZ @ 0x1800D6760 (-AddRef@CBitmap@@WCA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WCI@EAAKXZ @ 0x1800D6770 (-AddRef@CCompressedSourceBitmap@@WCI@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WOI@EAAKXZ @ 0x1800D6780 (-AddRef@CCompressedSourceBitmap@@WOI@EAAKXZ.c)
 *     ?AddRef@CTransformingGeometrySink@@WBA@EAAKXZ @ 0x1800D67E0 (-AddRef@CTransformingGeometrySink@@WBA@EAAKXZ.c)
 *     ?AddRef@CMILBrushLinearGradient@@WOA@EAAKXZ @ 0x1800D6800 (-AddRef@CMILBrushLinearGradient@@WOA@EAAKXZ.c)
 *     ?AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WBKI@EAAKXZ @ 0x1800D6820 (-AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WBKI@EAAKXZ.c)
 *     ?AddRef@CMILBrushLinearGradient@@WHA@EAAKXZ @ 0x1800D6830 (-AddRef@CMILBrushLinearGradient@@WHA@EAAKXZ.c)
 *     ?AddRef@CDxHandleYUVBitmapRealization@@WBJI@EAAKXZ @ 0x1800D6880 (-AddRef@CDxHandleYUVBitmapRealization@@WBJI@EAAKXZ.c)
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1801A990C (-HrLockUnaligned@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CHolographicClient::AddRef(CBitmapOfDeviceBitmaps *this)
{
  return CBitmapOfDeviceBitmaps::AddRef(this);
}
