/*
 * XREFs of ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10
 * Callers:
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x18001EB98 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18001F0FC (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z @ 0x18001F8AC (-Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z.c)
 *     ?LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x1800434EC (-LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z.c)
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_N@Z @ 0x180046970 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_N@Z.c)
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x180047610 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACE.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180048000 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180058640 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005DBF0 (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180067410 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BG@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006ED20 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z @ 0x180075068 (-CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180075194 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?GetD2DBitmap@CHwSurfaceRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x180078B90 (-GetD2DBitmap@CHwSurfaceRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x180079B3C (-UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     ?GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x18007BAA0 (-GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x18007BBA0 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 *     ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x18007C020 (-GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z.c)
 *     ?GetFrameStatisticsInternal@CDWMSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x18007CFB0 (-GetFrameStatisticsInternal@CDWMSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180089290 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@IEAAJXZ @ 0x180093DCC (-RegisterForSignaling@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAXU_LUID@@II@Z @ 0x1800944D4 (-CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAXU_LUID@@II@Z.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z @ 0x180094D04 (-NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z.c)
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x180095F00 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x1800961C0 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x1800968C8 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 *     ?SetupDepthBuffer@CSwapChainBase@@IEAAJXZ @ 0x1800C0448 (-SetupDepthBuffer@CSwapChainBase@@IEAAJXZ.c)
 *     ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x1800CA7EC (-InitDXGI@CDXGIEnumeration@@AEAAJXZ.c)
 *     ?GetMaxFeatureLevel@CDXGIAdapterLimited@@IEAAJPEAW4D3D_FEATURE_LEVEL@@@Z @ 0x1800CAEB4 (-GetMaxFeatureLevel@CDXGIAdapterLimited@@IEAAJPEAW4D3D_FEATURE_LEVEL@@@Z.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180159CC0 (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18015A00C (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x18015A3A8 (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180164AC8 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEA.c)
 *     ?GetDeviceImageSourceFromBitmapSource@@YAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@AEBUBitmapSourceInfo@@PEAPEAVIImageSource@@@Z @ 0x1801C7C70 (-GetDeviceImageSourceFromBitmapSource@@YAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@AEBUBitmapSour.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1801C893C (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1801E6C54 (-GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?GetImageSourceWrapperNoRef@CHwTexturedColorSource@@QEAAJPEAPEAVIImageSource@@@Z @ 0x1801E6CC4 (-GetImageSourceWrapperNoRef@CHwTexturedColorSource@@QEAAJPEAPEAVIImageSource@@@Z.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1801E6D84 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?CheckMultiplaneOverlaySupport@CDWMSwapChain@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEA_N1@Z @ 0x1801EA320 (-CheckMultiplaneOverlaySupport@CDWMSwapChain@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLAN.c)
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1801EC940 (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCMILMatrix@@PEAULegacyMilBrushContext@@AEBVCShape@@PEAVCLegacyMilBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x1801ED07C (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 *     ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x180215890 (-GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z.c)
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
LABEL_15:
      *a3 = -2003304307;
    }
    else
    {
      if ( a1 != -2005270494 && a1 != -2003238900 )
        return v3;
LABEL_70:
      *a3 = -2003304442;
    }
    return 1;
  }
  switch ( a2 )
  {
    case 1:
      if ( a1 == -2005270494 || a1 == 142213127 || a1 == -2005270491 )
        goto LABEL_70;
      if ( (unsigned int)(a1 + 2005270523) <= 2 || a1 == -2005532292 || a1 == -2147467259 || a1 == -2005270496 )
        goto LABEL_15;
      return v3;
    case 2:
      v12 = (unsigned int)(a1 + 2005270524);
      if ( (unsigned int)v12 <= 0x21 )
      {
        v13 = 0x240000001LL;
        if ( _bittest64(&v13, v12) )
          goto LABEL_70;
      }
      if ( a1 == 142213127 )
        goto LABEL_70;
      if ( a1 == -2147467259 )
        goto LABEL_15;
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
          goto LABEL_70;
        case -805306355:
          goto LABEL_70;
        case -805306367:
          goto LABEL_70;
        case -2147024809:
          goto LABEL_70;
      }
      v10 = (unsigned int)(a1 + 2147024891);
      if ( (unsigned int)v10 <= 0x2D )
      {
        v11 = 0x200004000001LL;
        if ( _bittest64(&v11, v10) )
          goto LABEL_70;
      }
      v6 = a1 == -805306246;
      goto LABEL_24;
    case 4:
      if ( a1 == -805306246 || a1 == -805306355 || a1 == -805306282 || a1 == -805306367 )
        goto LABEL_70;
      v6 = a1 == -2003304445;
LABEL_24:
      if ( !v6 )
        goto LABEL_25;
      goto LABEL_70;
    case 5:
      if ( a1 == -2147467263 || a1 == -2147024809 )
      {
        *a3 = -2003304291;
        return 1;
      }
      if ( a1 != -2147024865 )
        return v3;
      goto LABEL_15;
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
        goto LABEL_82;
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
        goto LABEL_82;
      }
      if ( a1 != -2003304290 )
        return v3;
      *a3 = 0;
      return 1;
    case 10:
      if ( a1 == -2147024890 || a1 == -2147024809 || a1 == -2147023728 || a1 == -2147024895 )
        goto LABEL_82;
      if ( a1 != -1071243253 )
        return v3;
      *a3 = 0;
      return 1;
    case 11:
      if ( a1 == -1071243253 || a1 == -2147023728 )
        goto LABEL_82;
      if ( a1 != -2147024890 )
        return v3;
      *a3 = 0;
      return 1;
    case 12:
      if ( a1 == -1071243253 || a1 == -2147023728 || a1 == -2147024890 )
      {
LABEL_82:
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
        goto LABEL_15;
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
