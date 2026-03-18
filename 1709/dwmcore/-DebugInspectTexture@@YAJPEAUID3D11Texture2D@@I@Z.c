/*
 * XREFs of ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18018E758
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x18002086C (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x18002F534 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007DEC4 (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUnique.c)
 *     ?DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z @ 0x18018E58C (-DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z.c)
 *     ?GetDeviceImageSourceFromBitmapSource@@YAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@AEBUBitmapSourceInfo@@PEAPEAVIImageSource@@@Z @ 0x180190FC8 (-GetDeviceImageSourceFromBitmapSource@@YAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@AEBUBitmapSour.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180191B54 (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAUID3D11Texture2D@@IPEBUtagRECT@@0IPEBUtagPOINT@@_N@Z @ 0x1801A6388 (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAUID3D11Texture2D@@IPEBUtagRECT@@0IPEBUtagPOINT@@_N@Z.c)
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x1801A63E4 (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?ReadTexture@CD2DBitmap@@UEBAXXZ @ 0x1801ABC70 (-ReadTexture@CD2DBitmap@@UEBAXXZ.c)
 *     ?ReadTexture@CHwTextureRenderTarget@@UEBAXXZ @ 0x1801AD5C0 (-ReadTexture@CHwTextureRenderTarget@@UEBAXXZ.c)
 *     ?PresentInternal@CDWMSwapChainDDA@@MEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z @ 0x1801B2310 (-PresentInternal@CDWMSwapChainDDA@@MEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?ReadTexture@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801B7944 (-ReadTexture@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 *     ?ReadTexture@CHwStereoFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801B8250 (-ReadTexture@CHwStereoFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 *     ?ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801B88D0 (-ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?DebugInspectMappedTexture@@YAXAEBUD3D11_TEXTURE2D_DESC@@AEBUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x18018E69C (-DebugInspectMappedTexture@@YAXAEBUD3D11_TEXTURE2D_DESC@@AEBUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     GetStagingTexture @ 0x18018E8BC (GetStagingTexture.c)
 */

__int64 __fastcall DebugInspectTexture(struct ID3D11Texture2D *a1, unsigned int a2)
{
  signed int StagingTexture; // eax
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rdi
  signed int v8; // eax
  __int64 v10; // [rsp+40h] [rbp-19h] BYREF
  __int64 v11; // [rsp+48h] [rbp-11h] BYREF
  __int64 v12; // [rsp+50h] [rbp-9h] BYREF
  D3D11_MAPPED_SUBRESOURCE v13; // [rsp+58h] [rbp-1h] BYREF
  struct D3D11_TEXTURE2D_DESC v14; // [rsp+68h] [rbp+Fh] BYREF

  v12 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v12);
  StagingTexture = GetStagingTexture(a1, &v12);
  v5 = StagingTexture;
  if ( StagingTexture < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, StagingTexture, 0x98u);
  }
  else
  {
    v6 = v12;
    (*(void (__fastcall **)(__int64, struct D3D11_TEXTURE2D_DESC *))(*(_QWORD *)v12 + 80LL))(v12, &v14);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 24LL))(v6, &v11);
    v7 = v11;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 320LL))(v7, &v10);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, D3D11_MAPPED_SUBRESOURCE *))(*(_QWORD *)v10 + 112LL))(
           v10,
           v6,
           a2,
           1LL,
           0,
           &v13);
    v5 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x9Eu);
    }
    else
    {
      DebugInspectMappedTexture(&v14, &v13);
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v10 + 120LL))(v10, v6, a2);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v12);
  return v5;
}
