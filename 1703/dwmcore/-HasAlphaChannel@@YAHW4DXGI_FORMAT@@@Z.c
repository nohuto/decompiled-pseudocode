/*
 * XREFs of ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18007C0CC
 * Callers:
 *     ?PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormatInfo@@@Z @ 0x180023B5C (-PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormat.c)
 *     ?IsOpaque@CHwBitmapColorSource@@UEBA_NXZ @ 0x180044250 (-IsOpaque@CHwBitmapColorSource@@UEBA_NXZ.c)
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x180045B84 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x180048688 (-ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ.c)
 *     ?SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ @ 0x180054480 (-SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ.c)
 *     ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180055624 (-CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x180073110 (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 *     ?GetSupportedTextureFormat@CD3DDeviceLevel1@@QEBAJW4DXGI_FORMAT@@0_N1PEAW42@@Z @ 0x180079334 (-GetSupportedTextureFormat@CD3DDeviceLevel1@@QEBAJW4DXGI_FORMAT@@0_N1PEAW42@@Z.c)
 *     ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVCMILMatrix@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x18007BD48 (-ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@.c)
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBVCMILMatrix@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x18007C0EC (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 *     ?IsValidPixelFormatInfo@@YA_NPEBUPixelFormatInfo@@@Z @ 0x18007D9D0 (-IsValidPixelFormatInfo@@YA_NPEBUPixelFormatInfo@@@Z.c)
 *     ?ProcessCreate@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_CREATE@@@Z @ 0x18012D750 (-ProcessCreate@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_CREATE@@@Z.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180148D20 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z @ 0x1801492D4 (-GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z.c)
 *     ?GetAlphaMode@CBitmapColorKey@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1801A1940 (-GetAlphaMode@CBitmapColorKey@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?UpdateAttributes@CSectionBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1801B4F00 (-UpdateAttributes@CSectionBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HasAlphaChannel(int a1)
{
  if ( a1 <= 61 )
  {
    if ( a1 != 61 && a1 && (a1 == 2 || a1 > 9 && (a1 <= 11 || a1 == 24 || a1 == 28)) )
      return 1LL;
  }
  else if ( a1 == 87 || a1 != 88 && (a1 == 65 || a1 == 91) )
  {
    return 1LL;
  }
  return 0LL;
}
