/*
 * XREFs of ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0
 * Callers:
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x180010940 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x180010D80 (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180010EA8 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180015000 (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x18001A6C0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001BBE0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180020318 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x180028800 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACE.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180029EC0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x18002C000 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 *     ?LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x18002E430 (-LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z.c)
 *     ?GetFrameStatisticsInternal@CDWMSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x18002E640 (-GetFrameStatisticsInternal@CDWMSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x18002EC30 (-GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18002ED10 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x18002EF60 (-GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z.c)
 *     ?GetD2DBitmap@CHwSurfaceRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x18002F040 (-GetD2DBitmap@CHwSurfaceRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180041E30 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x180045150 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x180045370 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x1800457B4 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x180067510 (-UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     ?GetMaxFeatureLevel@CDXGIAdapterLimited@@IEAAJPEAW4D3D_FEATURE_LEVEL@@@Z @ 0x1800753CC (-GetMaxFeatureLevel@CDXGIAdapterLimited@@IEAAJPEAW4D3D_FEATURE_LEVEL@@@Z.c)
 *     ?Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z @ 0x18007F3EC (-Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z.c)
 *     ?GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x180085634 (-GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x18008BE44 (-InitDXGI@CDXGIEnumeration@@AEAAJXZ.c)
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCMILMatrix@@PEAULegacyMilBrushContext@@AEBVCShape@@PEAVCLegacyMilBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x18008EF14 (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@IEAAJXZ @ 0x18009D54C (-RegisterForSignaling@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAXU_LUID@@II@Z @ 0x18009DBA4 (-CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAXU_LUID@@II@Z.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z @ 0x18009E26C (-NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18013782C (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180137B88 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x180137EB8 (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180140E68 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEA.c)
 *     ?GetDeviceImageSourceFromBitmapSource@@YAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@AEBUBitmapSourceInfo@@PEAPEAVIImageSource@@@Z @ 0x180190FC8 (-GetDeviceImageSourceFromBitmapSource@@YAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@AEBUBitmapSour.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180191B54 (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?GetImageSourceWrapperNoRef@CHwTexturedColorSource@@QEAAJPEAPEAVIImageSource@@@Z @ 0x1801AD7C0 (-GetImageSourceWrapperNoRef@CHwTexturedColorSource@@QEAAJPEAPEAVIImageSource@@@Z.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1801AD898 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?CheckMultiplaneOverlaySupport@CDWMSwapChain@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEA_N1@Z @ 0x1801AFE10 (-CheckMultiplaneOverlaySupport@CDWMSwapChain@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLAN.c)
 *     ?SetupDepthBuffer@CSwapChainBase@@IEAAJXZ @ 0x1801B31CC (-SetupDepthBuffer@CSwapChainBase@@IEAAJXZ.c)
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1801B725C (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 *     ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x1801D3940 (-GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TranslateDXGIorD3DErrorInContext(int a1, int a2, _DWORD *a3)
{
  unsigned __int8 v3; // r9
  int v4; // edx
  bool v6; // zf
  unsigned int v7; // ecx
  int v8; // eax
  unsigned __int8 v9; // cf
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // ecx
  int v15; // edx

  v3 = 0;
  if ( !a2 )
  {
    if ( (unsigned int)(a1 + 2005270523) <= 0x1B && (v4 = 134217733, _bittest(&v4, a1 + 2005270523)) )
    {
LABEL_76:
      *a3 = -2003304307;
    }
    else
    {
      if ( a1 != -2005270494 && a1 != -2003238900 )
        return v3;
LABEL_64:
      *a3 = -2003304442;
    }
    return 1;
  }
  switch ( a2 )
  {
    case 1:
      if ( a1 == 142213167 )
      {
        *a3 = 142213130;
        return 1;
      }
      if ( a1 == 142213127 || a1 == -2005270491 || a1 == -2005270494 )
        goto LABEL_64;
      if ( (unsigned int)(a1 + 2005270523) <= 2 || a1 == -2005532292 || a1 == -2147467259 || a1 == -2005270496 )
        goto LABEL_76;
      return v3;
    case 2:
      v12 = (unsigned int)(a1 + 2005270524);
      if ( (unsigned int)v12 <= 0x21 )
      {
        v13 = 0x240000001LL;
        if ( _bittest64(&v13, v12) )
          goto LABEL_64;
      }
      if ( a1 == 142213127 )
        goto LABEL_64;
      if ( a1 == -2147467259 )
        goto LABEL_76;
      v7 = a1 + 2005270526;
      if ( v7 <= 0x1E )
      {
        v8 = 1073741865;
        goto LABEL_27;
      }
      return v3;
    case 3:
      switch ( a1 )
      {
        case -805306282:
          goto LABEL_64;
        case -805306355:
          goto LABEL_64;
        case -805306367:
          goto LABEL_64;
        case -2147024809:
          goto LABEL_64;
      }
      v10 = (unsigned int)(a1 + 2147024891);
      if ( (unsigned int)v10 <= 0x2D )
      {
        v11 = 0x200004000001LL;
        if ( _bittest64(&v11, v10) )
          goto LABEL_64;
      }
      v6 = a1 == -805306246;
      goto LABEL_24;
    case 4:
      if ( a1 == -805306246 || a1 == -805306355 || a1 == -805306282 || a1 == -805306367 )
        goto LABEL_64;
      v6 = a1 == -2003304445;
LABEL_24:
      if ( !v6 )
        goto LABEL_25;
      goto LABEL_64;
    case 5:
      if ( a1 == -2147467263 || a1 == -2147024809 )
      {
        *a3 = -2003304291;
        return 1;
      }
      if ( a1 != -2147024865 )
        return v3;
      goto LABEL_76;
    case 6:
    case 7:
LABEL_25:
      v7 = a1 + 2005270523;
      if ( v7 > 0x1D )
        return v3;
      v8 = 671088645;
LABEL_27:
      v9 = _bittest(&v8, v7);
      goto LABEL_28;
    case 8:
      if ( a1 == -2005530509
        || a1 == -2147024809
        || a1 == -2005270523
        || a1 == -2005270521
        || a1 == -2003304442
        || a1 == -2003304307 )
      {
        goto LABEL_84;
      }
      return v3;
    case 9:
      if ( a1 == -2003292404
        || a1 == -2003304307
        || a1 == -2003304442
        || a1 == -2005530509
        || a1 == -2147024809
        || a1 == -2005270523
        || a1 == -2005270521
        || a1 == -2005532292
        || a1 == -2005530512
        || a1 == -1071243253 )
      {
        goto LABEL_84;
      }
      if ( a1 != -2003304290 )
        return v3;
      *a3 = 0;
      return 1;
    case 10:
      if ( a1 == -2147024890 || a1 == -2147024809 || a1 == -2147023728 || a1 == -2147024895 )
        goto LABEL_84;
      if ( a1 != -1071243253 )
        return v3;
      *a3 = 0;
      return 1;
    case 11:
      if ( a1 == -1071243253 || a1 == -2147023728 )
        goto LABEL_84;
      if ( a1 != -2147024890 )
        return v3;
      *a3 = 0;
      return 1;
    case 12:
      if ( a1 == -1071243253 || a1 == -2147023728 || a1 == -2147024890 )
      {
LABEL_84:
        *a3 = 0;
      }
      else
      {
        if ( a1 != -2147024809 )
          return v3;
        *a3 = 0;
      }
      return 1;
    case 13:
    case 14:
      if ( a1 == -2003292412 )
        goto LABEL_76;
      return v3;
    case 15:
      if ( a1 == -2147024882 )
      {
        *a3 = -2005532292;
        return 1;
      }
      v14 = a1 + 2005270523;
      if ( v14 <= 0x1B )
      {
        v15 = 134217733;
        v9 = _bittest(&v15, v14);
LABEL_28:
        if ( v9 )
        {
          *a3 = -2003304307;
          return 1;
        }
      }
      break;
    default:
      return v3;
  }
  return v3;
}
