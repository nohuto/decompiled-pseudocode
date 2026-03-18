/*
 * XREFs of ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800431FC
 * Callers:
 *     ?GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18001AEF4 (-GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001AF94 (-GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@.c)
 *     ?CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMAP_PROPERTIES1@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18001B0A8 (-CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEA.c)
 *     ?OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAX_NI@Z @ 0x180042510 (-OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@.c)
 *     ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x180042720 (-OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@M.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800432B0 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800C93E0 (-Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTIn.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1801293EC (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 *     ?ProcessCreate@CHolographicViewerContent@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICVIEWERCONTENT_CREATE@@@Z @ 0x18012EA24 (-ProcessCreate@CHolographicViewerContent@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICVIEWERC.c)
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3AEBU_GUID@@U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x1801355F0 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180135BF0 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 *     ?PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x1801757EC (-PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z.c)
 *     ?GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180186D9C (-GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PE.c)
 *     ?RealizeBitmapSourceHelper@@YAJPEAVCD3DDeviceManager@@AEBU_GUID@@PEBVCDisplay@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z @ 0x180188458 (-RealizeBitmapSourceHelper@@YAJPEAVCD3DDeviceManager@@AEBU_GUID@@PEBVCDisplay@@PEAVIBitmapSource.c)
 *     ?OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAXPEAPEAVIRenderTargetBitmap@@@Z @ 0x180195A70 (-OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlags.c)
 *     ?Initialize@CHolographicInteropTarget@@QEAAJPEAU_LUID@@@Z @ 0x1801A6868 (-Initialize@CHolographicInteropTarget@@QEAAJPEAU_LUID@@@Z.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x1801B5A18 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801B6934 (-EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z @ 0x1801B70A4 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801B73E8 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180042A64 (-CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?GetAvailableDevice@CD3DDeviceManager@@AEBA?AW4DeviceStatus@1@AEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180042BF8 (-GetAvailableDevice@CD3DDeviceManager@@AEBA-AW4DeviceStatus@1@AEBU_GUID@@U_LUID@@PEAPEAVCD3DDevi.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CD3DDeviceManager::GetD3DDevice(
        CD3DDeviceManager *this,
        struct _GUID *a2,
        struct _LUID a3,
        struct CD3DDeviceLevel1 **a4)
{
  __int64 v8; // rax
  int AvailableDevice; // eax
  unsigned int v10; // ebx
  int NewDevice; // eax
  char *v13; // [rsp+50h] [rbp+8h] BYREF

  *a4 = 0LL;
  v13 = (char *)this + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)((char *)this + 244);
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)((char *)this + 244) )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)((char *)this + 252);
  if ( v8 )
  {
    AvailableDevice = CD3DDeviceManager::GetAvailableDevice((__int64)this, a2, *(_QWORD *)&a3, a4);
    if ( AvailableDevice )
    {
      v10 = -2003304307;
      if ( AvailableDevice != 2 )
        v10 = 0;
    }
    else
    {
      NewDevice = CD3DDeviceManager::CreateNewDevice(this, a2, a3, a4);
      v10 = NewDevice;
      if ( NewDevice < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, NewDevice, 0x1E3u);
    }
  }
  else
  {
    v10 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, -2003304307, 0x1D3u);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return v10;
}
