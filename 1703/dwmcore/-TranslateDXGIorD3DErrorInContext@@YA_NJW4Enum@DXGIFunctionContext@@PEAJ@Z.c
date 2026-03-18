/*
 * XREFs of ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260
 * Callers:
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z @ 0x180022C00 (-NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x180037E00 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACE.c)
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x18003A580 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18003A700 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?GetFrameStatisticsInternal@CDWMSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x18003E050 (-GetFrameStatisticsInternal@CDWMSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?SetupDepthBuffer@CSwapChainBase@@IEAAJXZ @ 0x18003F25C (-SetupDepthBuffer@CSwapChainBase@@IEAAJXZ.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x180041704 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180042064 (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180042C90 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x1800460F0 (-InitDXGI@CDXGIEnumeration@@AEAAJXZ.c)
 *     ?GetD2DBitmap@CHwSurfaceRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x180049CCC (-GetD2DBitmap@CHwSurfaceRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCMILMatrix@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x18004A304 (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 *     ?GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x18004D718 (-GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@IEAAJXZ @ 0x18005491C (-RegisterForSignaling@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJII@Z @ 0x180055214 (-CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJII@Z.c)
 *     ?CheckStereoState@CComposition@@QEAAJXZ @ 0x18005B7C0 (-CheckStereoState@CComposition@@QEAAJXZ.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180067C20 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180068B90 (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x18006ACB0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1800700A0 (-GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x180070240 (-GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z.c)
 *     ?GetD2DBitmap@CHwFullScreenRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800704C0 (-GetD2DBitmap@CHwFullScreenRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?GetMultiplaneOverlayCaps@COverlayContext@@AEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x180071998 (-GetMultiplaneOverlayCaps@COverlayContext@@AEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z.c)
 *     ?LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x180073434 (-LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180077818 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x18007EBF0 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18007F134 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18008E060 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x1800A1F10 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DJ@@@2PEAVCHwndRenderTarget@@@Z @ 0x1800AA100 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x1800ADDF0 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x1800AE1F0 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x1800AE7B8 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 *     ?Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z @ 0x1800B0B38 (-Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800B43CC (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800B44A8 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?GetMaxFeatureLevel@CDXGIAdapterLimited@@IEAAJPEAW4D3D_FEATURE_LEVEL@@@Z @ 0x1800B54AC (-GetMaxFeatureLevel@CDXGIAdapterLimited@@IEAAJPEAW4D3D_FEATURE_LEVEL@@@Z.c)
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1800D09EC (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x1801480EC (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x18014FA70 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEA.c)
 *     ?GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180186D9C (-GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PE.c)
 *     ?CheckMultiplaneOverlaySupport@CDWMSwapChain@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEA_N1@Z @ 0x18019D0C0 (-CheckMultiplaneOverlaySupport@CDWMSwapChain@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLAN.c)
 *     ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x1801B6C90 (-GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z.c)
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
LABEL_16:
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
      if ( a1 == 142213167 )
      {
        *a3 = 142213130;
        return 1;
      }
      if ( a1 == -2005270494 || a1 == 142213127 || a1 == -2005270491 )
        goto LABEL_70;
      if ( (unsigned int)(a1 + 2005270523) <= 2 || a1 == -2005532292 || a1 == -2147467259 || a1 == -2005270496 )
        goto LABEL_16;
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
        goto LABEL_16;
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
      goto LABEL_16;
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
        goto LABEL_16;
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
