/*
 * XREFs of ?GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x180070A00
 * Callers:
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x1800705E4 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 *     ?GetFrontBufferSurface@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x1801A04D0 (-GetFrontBufferSurface@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurfa.c)
 * Callees:
 *     ?GetFrontBuffer@CSwapChainBase@@QEAAJPEAPEAVCD3DSurface@@@Z @ 0x18003F1FC (-GetFrontBuffer@CSwapChainBase@@QEAAJPEAPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x1800C54B8 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetFrontBufferSurface(
        __int64 a1,
        __int64 a2,
        char a3,
        struct CD3DSurface **a4)
{
  int FrontBuffer; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, struct ID3D11Texture2D **); // rcx
  int v10; // eax
  int ViewOfTexture; // eax
  struct ID3D11Texture2D *v12; // [rsp+30h] [rbp-18h] BYREF

  v12 = 0LL;
  if ( a3 && (v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct ID3D11Texture2D **))(a1 + 352)) != 0LL )
  {
    v10 = (**v9)(v9, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v12);
    v7 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x49Fu);
    }
    else
    {
      ViewOfTexture = CD3DSurface::CreateViewOfTexture(
                        (struct CD3DResourceManager *)(*(_QWORD *)(a1 + 184) + 928LL),
                        v12,
                        0LL,
                        0,
                        a4);
      v7 = ViewOfTexture;
      if ( ViewOfTexture < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ViewOfTexture, 0x4ABu);
    }
  }
  else
  {
    FrontBuffer = CSwapChainBase::GetFrontBuffer(*(CSwapChainBase **)(a1 + 216), a4);
    v7 = FrontBuffer;
    if ( FrontBuffer < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, FrontBuffer, 0x4AFu);
  }
  if ( v12 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v12->lpVtbl->Release)(v12);
  return v7;
}
