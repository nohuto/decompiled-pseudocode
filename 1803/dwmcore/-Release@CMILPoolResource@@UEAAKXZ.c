/*
 * XREFs of ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0
 * Callers:
 *     ?SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ @ 0x18000DC64 (-SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ.c)
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x180017E6C (-GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@.c)
 *     ??1CWarpLockSubresource@@MEAA@XZ @ 0x180018FD8 (--1CWarpLockSubresource@@MEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C340 (-InternalRelease@-$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Construct@AdapterInfo@CSurfaceManager@@QEAAXPEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManager@@@Z @ 0x180020744 (-Construct@AdapterInfo@CSurfaceManager@@QEAAXPEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManager@@@Z.c)
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x18002123C (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 *     ?Release@CD3DLockableTexture@@UEAAKXZ @ 0x1800219C0 (-Release@CD3DLockableTexture@@UEAAKXZ.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180021E6C (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180067410 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x180070A0C (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x180070ADC (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x180071A64 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceL.c)
 *     ?CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z @ 0x180075068 (-CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z.c)
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x180075ADC (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x180076548 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ??1CHwTextureRenderTarget@@MEAA@XZ @ 0x1800787D8 (--1CHwTextureRenderTarget@@MEAA@XZ.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x18007BBA0 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 *     ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x180088DA0 (-OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COL.c)
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18008909C (-CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?GetAvailableDevice@CD3DDeviceManager@@AEBA?AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180089208 (-GetAvailableDevice@CD3DDeviceManager@@AEBA-AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@.c)
 *     ?CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJU_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMAP_PROPERTIES1@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180089A7C (-CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJU_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMA.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x180089BC0 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800C80C8 (-Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 *     ??$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800CB778 (--$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z @ 0x1800CBF30 (-GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z.c)
 *     ?AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@@Z @ 0x1800CC840 (-AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@.c)
 *     ??1CHwBitmapColorSource@@MEAA@XZ @ 0x1800CDE4C (--1CHwBitmapColorSource@@MEAA@XZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1800D7EC0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     ??1CHwDisplayRenderTarget@@MEAA@XZ @ 0x1800D864C (--1CHwDisplayRenderTarget@@MEAA@XZ.c)
 *     ??_GCSurfaceShaderComposer@@QEAAPEAXI@Z @ 0x1800D9784 (--_GCSurfaceShaderComposer@@QEAAPEAXI@Z.c)
 *     ??1CCaptureRenderTarget@@EEAA@XZ @ 0x180155820 (--1CCaptureRenderTarget@@EEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180156CA8 (-reset@-$com_ptr_t@VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180159888 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 *     ?DrawDwm3DRE@CDrawingContext@@QEAAJPEAUIDwm3DRESceneViewer@@AEBVCMILMatrix@@_N@Z @ 0x18015F8D0 (-DrawDwm3DRE@CDrawingContext@@QEAAJPEAUIDwm3DRESceneViewer@@AEBVCMILMatrix@@_N@Z.c)
 *     ?Render@CDwm3DRECallbackRenderer@@UEAAJXZ @ 0x18017BA70 (-Render@CDwm3DRECallbackRenderer@@UEAAJXZ.c)
 *     ?PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x1801ACBCC (-PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1801C893C (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z @ 0x1801C8ABC (-FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801DDDE0 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x1801DDF80 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 *     ?OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@U_LUID@@VDisplayId@@PEAX_NI@Z @ 0x1801DE390 (-OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@.c)
 *     ?OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAX_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x1801DE5E0 (-OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlags.c)
 *     ?InternalRelease@?$ComPtr@VCD3DVidMemOnlyTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x1801E49BC (-InternalRelease@-$ComPtr@VCD3DVidMemOnlyTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x1801E5174 (-GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x1801E57F8 (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE$0-0@gsl@@I@Z.c)
 *     ?GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@5@PEAV1@AEAPEAV5@5@Z @ 0x1801E7E50 (-GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParam.c)
 *     ??_GCHwSolidColorTextureSource@@EEAAPEAXI@Z @ 0x1801E9FB0 (--_GCHwSolidColorTextureSource@@EEAAPEAXI@Z.c)
 *     ?Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x1801EB298 (-Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z.c)
 *     ??$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z @ 0x1801EE128 (--$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z.c)
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBVCMILMatrix@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1801EF39C (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1801EF6AC (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 *     ?OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@PEAX_NIPEAPEAV1@@Z @ 0x1801F478C (-OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@.c)
 *     ?Release@CHwCacheablePoolBrush@@UEAAKXZ @ 0x1801F6FE0 (-Release@CHwCacheablePoolBrush@@UEAAKXZ.c)
 *     ??_ECHwLinearGradientColorSource@@MEAAPEAXI@Z @ 0x1801F71F0 (--_ECHwLinearGradientColorSource@@MEAAPEAXI@Z.c)
 *     ?PrepareForNewRealization@CHwVidMemTextureManager@@QEAAXXZ @ 0x1801F777C (-PrepareForNewRealization@CHwVidMemTextureManager@@QEAAXXZ.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x1802146D8 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802155C8 (-EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z @ 0x180215D44 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180216084 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ??1CFramebuffer@CComputeScribbleRenderer@@QEAA@XZ @ 0x180218A48 (--1CFramebuffer@CComputeScribbleRenderer@@QEAA@XZ.c)
 * Callees:
 *     ?UnusedNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180021C10 (-UnusedNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILPoolResource::Release(CMILPoolResource *this)
{
  unsigned __int32 v2; // ebx
  union _SLIST_HEADER *v4; // rcx
  void (__fastcall *v5)(union _SLIST_HEADER *, struct _SLIST_ENTRY *); // rax

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 )
  {
    v4 = (union _SLIST_HEADER *)*((_QWORD *)this + 2);
    if ( v4 )
    {
      v5 = *(void (__fastcall **)(union _SLIST_HEADER *, struct _SLIST_ENTRY *))v4->Alignment;
      if ( v5 == CD3DResourceManager::UnusedNotification )
        CD3DResourceManager::UnusedNotification(v4, (struct _SLIST_ENTRY *)this);
      else
        v5(v4, (struct _SLIST_ENTRY *)this);
    }
    else
    {
      (*(void (__fastcall **)(CMILPoolResource *, __int64))(*(_QWORD *)this + 16LL))(this, 1LL);
    }
  }
  return v2;
}
