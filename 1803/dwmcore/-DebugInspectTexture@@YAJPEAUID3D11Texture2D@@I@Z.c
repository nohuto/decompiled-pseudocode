/*
 * XREFs of ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1801C6138
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x180075370 (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?CopySurfaceRegionAndCountPixels@CHwFullScreenRenderTarget@@AEAAIPEAVCD3DSurface@@AEBVCRegion@@0@Z @ 0x18007B958 (-CopySurfaceRegionAndCountPixels@CHwFullScreenRenderTarget@@AEAAIPEAVCD3DSurface@@AEBVCRegion@@0.c)
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x18007C740 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800CC52C (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUnique.c)
 *     ?DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z @ 0x1801C5B2C (-DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z.c)
 *     ?GetDeviceImageSourceFromBitmapSource@@YAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@AEBUBitmapSourceInfo@@PEAPEAVIImageSource@@@Z @ 0x1801C7C70 (-GetDeviceImageSourceFromBitmapSource@@YAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@AEBUBitmapSour.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1801C893C (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAUID3D11Texture2D@@IPEBUtagRECT@@0IPEBUtagPOINT@@_N@Z @ 0x1801DF190 (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAUID3D11Texture2D@@IPEBUtagRECT@@0IPEBUtagPOINT@@_N@Z.c)
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x1801DF1EC (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?ReadTexture@CD2DBitmap@@UEBAXXZ @ 0x1801E5C00 (-ReadTexture@CD2DBitmap@@UEBAXXZ.c)
 *     ?ReadTexture@CHwTextureRenderTarget@@UEBAXXZ @ 0x1801E6AA0 (-ReadTexture@CHwTextureRenderTarget@@UEBAXXZ.c)
 *     ?PresentInternal@CDWMSwapChainDDA@@MEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x1801EAF10 (-PresentInternal@CDWMSwapChainDDA@@MEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 *     ?ReadTexture@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801ED9F0 (-ReadTexture@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 *     ?ReadTexture@CHwStereoFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801F1670 (-ReadTexture@CHwStereoFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 *     ?ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801F2160 (-ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 *     ?ReadTexture@CDeviceTextureImageSource@@UEAAXXZ @ 0x180216940 (-ReadTexture@CDeviceTextureImageSource@@UEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z @ 0x1801C60D8 (-DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z.c)
 *     GetStagingTexture @ 0x1801C6490 (GetStagingTexture.c)
 */

__int64 __fastcall DebugInspectTexture(struct ID3D11Texture2D *a1, unsigned int a2)
{
  int StagingTexture; // eax
  unsigned int v4; // edi
  __int64 v5; // rbx
  int v6; // eax
  __int64 v8; // [rsp+40h] [rbp-19h] BYREF
  __int64 v9; // [rsp+48h] [rbp-11h] BYREF
  __int64 v10; // [rsp+50h] [rbp-9h] BYREF
  void *v11; // [rsp+58h] [rbp-1h] BYREF
  unsigned int v12; // [rsp+60h] [rbp+7h]
  unsigned int v13[12]; // [rsp+68h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v10 = 0LL;
  StagingTexture = GetStagingTexture(a1, &v10);
  v4 = StagingTexture;
  if ( StagingTexture >= 0 )
  {
    v5 = v10;
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v10 + 80LL))(v10, v13);
    v9 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 24LL))(v5, &v9);
    v8 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 320LL))(v9, &v8);
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)v8 + 112LL))(
           v8,
           v5,
           a2,
           1LL,
           0,
           &v11);
    v4 = v6;
    if ( v6 >= 0 )
    {
      DebugInspectSysMemSurface(v11, v13[0], v13[1], (enum DXGI_FORMAT)v13[4], v12);
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v8 + 120LL))(v8, v5, a2);
      v4 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8E,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
        (const char *)(unsigned int)v6);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v8);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v9);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x82,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
      (const char *)(unsigned int)StagingTexture);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v10);
  return v4;
}
