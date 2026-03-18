/*
 * XREFs of ?IsDesktopDXGIResource@CHDRConversionRenderTarget@@IEBA_NPEAUIDXGIResource@@@Z @ 0x1801F30E8
 * Callers:
 *     ?CalcPresentMode@CHDRConversionRenderTarget@@IEAAJXZ @ 0x1801F2648 (-CalcPresentMode@CHDRConversionRenderTarget@@IEAAJXZ.c)
 *     ?CheckMultiplaneOverlaySupport@CHDRConversionRenderTarget@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEA_N1@Z @ 0x1801F2820 (-CheckMultiplaneOverlaySupport@CHDRConversionRenderTarget@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLA.c)
 *     ?SetMultiplaneOverlayPresentInfo@CHDRConversionRenderTarget@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEBXIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAVCBitmapRealization@@@Z @ 0x1801F3D60 (-SetMultiplaneOverlayPresentInfo@CHDRConversionRenderTarget@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PE.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x180021E58 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     ?GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x180042A70 (-GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z @ 0x1800C0560 (-GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z.c)
 */

bool __fastcall CHDRConversionRenderTarget::IsDesktopDXGIResource(CSwapChainBase **this, struct IDXGIResource *a2)
{
  bool v2; // bl
  struct CD3DSurface *v4; // rdi
  int LogicalBackBuffer; // eax
  struct CD3DSurface *v7; // [rsp+38h] [rbp+10h] BYREF
  struct IDXGIResource *v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v7 = 0LL;
  v4 = 0LL;
  v8 = 0LL;
  if ( a2 )
  {
    LogicalBackBuffer = CSwapChainBase::GetLogicalBackBuffer(this[31], &v7);
    v4 = v7;
    if ( LogicalBackBuffer >= 0 && (int)CD3DSurface::GetDXGIResource(v7, &v8) >= 0 )
      v2 = a2 == v8;
  }
  else
  {
    v2 = 1;
  }
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v8);
  ReleaseInterfaceNoNULL<CD3DSurface>((__int64)v4);
  return v2;
}
