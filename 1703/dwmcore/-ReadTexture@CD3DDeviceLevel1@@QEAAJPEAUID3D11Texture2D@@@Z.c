/*
 * XREFs of ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180197528
 * Callers:
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180042064 (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?AddDirtyRects@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEAX@Z @ 0x180054A30 (-AddDirtyRects@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEAX@Z.c)
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x1800705E4 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x180077A48 (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B2510 (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUnique.c)
 *     ?GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180186D9C (-GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PE.c)
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@@Z @ 0x180196120 (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@@Z.c)
 *     ?ReadTexture@CD2DBitmap@@UEBAXXZ @ 0x18019AAC0 (-ReadTexture@CD2DBitmap@@UEBAXXZ.c)
 *     ?ReadTexture@CHwTextureRenderTarget@@UEBAXXZ @ 0x18019C060 (-ReadTexture@CHwTextureRenderTarget@@UEBAXXZ.c)
 *     ?PresentInternal@CDWMSwapChainDDA@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18019DBD0 (-PresentInternal@CDWMSwapChainDDA@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?ReadTexture@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x18019FF1C (-ReadTexture@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 *     ?ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801A0F10 (-ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::ReadTexture(CD3DDeviceLevel1 *this, struct ID3D11Texture2D *a2)
{
  struct ID3D11Texture2DVtbl *lpVtbl; // rax
  void (__stdcall *GetDesc)(ID3D11Texture2D *, D3D11_TEXTURE2D_DESC *); // rax
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  bool v10; // zf
  int v11; // edx
  int v12; // ecx
  __int64 v14; // [rsp+40h] [rbp-29h] BYREF
  __int128 v15; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v16[4]; // [rsp+60h] [rbp-9h] BYREF
  int v17; // [rsp+64h] [rbp-5h]
  int v18; // [rsp+7Ch] [rbp+13h]
  int v19; // [rsp+80h] [rbp+17h]
  int v20; // [rsp+84h] [rbp+1Bh]
  int v21; // [rsp+88h] [rbp+1Fh]
  __int128 v22; // [rsp+90h] [rbp+27h]

  v14 = 0LL;
  *(_QWORD *)&v15 = "DWM Temp Readback (debug)";
  lpVtbl = a2->lpVtbl;
  DWORD2(v15) = 25;
  GetDesc = lpVtbl->GetDesc;
  v22 = v15;
  ((void (__fastcall *)(struct ID3D11Texture2D *, _BYTE *))GetDesc)(a2, v16);
  v19 = 0;
  v21 = 0;
  v6 = *((_QWORD *)this + 80);
  v18 = 3;
  v20 = 0x20000;
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v14);
  v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, __int64 *))(*(_QWORD *)v6 + 40LL))(v6, v16, 0LL, &v14);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801FD8C0, 9u, v7, 0xB1Du);
    goto LABEL_17;
  }
  (*(void (__fastcall **)(__int64, const GUID *, _QWORD, _QWORD))(*(_QWORD *)v14 + 40LL))(
    v14,
    &WKPDID_D3DDebugObjectName,
    DWORD2(v22),
    v22);
  (*(void (__fastcall **)(_QWORD, __int64, struct ID3D11Texture2D *))(**((_QWORD **)this + 81) + 376LL))(
    *((_QWORD *)this + 81),
    v14,
    a2);
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, __int128 *))(**((_QWORD **)this + 81) + 112LL))(
         *((_QWORD *)this + 81),
         v14,
         0LL,
         1LL,
         0,
         &v15);
  v8 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801FD8C0, 9u, v9, 0xB26u);
    goto LABEL_17;
  }
  if ( g_InspectFrame )
  {
    v10 = *(_DWORD *)(v15 + 4 * (g_xInspect + (unsigned __int64)(unsigned int)(g_yInspect * (DWORD2(v15) >> 2)))) == -16777216;
  }
  else
  {
    if ( !g_LockTilingTarget )
      goto LABEL_13;
    if ( g_LockAndReadTarget )
      goto LABEL_13;
    v11 = *(_DWORD *)(v15 + 4 * ((unsigned __int64)(unsigned int)(DWORD2(v15) * v17) >> 2) - 4);
    v12 = *(_DWORD *)v15;
    if ( (_BYTE)v11 == 0xFF && __PAIR16__(BYTE1(v11), -1) == BYTE2(v11) )
      goto LABEL_13;
    if ( (_BYTE)v12 != 0xFF || BYTE2(v12) != 0xFF )
      goto LABEL_14;
    v10 = BYTE1(v12) == 0;
  }
  if ( v10 )
LABEL_13:
    __debugbreak();
LABEL_14:
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 81) + 120LL))(*((_QWORD *)this + 81), v14, 0LL);
LABEL_17:
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v14);
  return v8;
}
