/*
 * XREFs of ?GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x18007CBA0
 * Callers:
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x18007C740 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 *     ?GetFrontBufferSurface@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x1801F13B0 (-GetFrontBufferSurface@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurfa.c)
 * Callees:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180021DA4 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetLogicalFrontBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z @ 0x1800C0174 (-GetLogicalFrontBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetFrontBufferSurface(
        __int64 a1,
        __int64 a2,
        char a3,
        struct CD3DSurface **a4)
{
  int LogicalFrontBuffer; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, struct ID3D11Texture2D **); // rcx
  int v10; // eax
  int ViewOfTexture; // eax
  struct ID3D11Texture2D *v12; // [rsp+30h] [rbp-18h] BYREF

  v12 = 0LL;
  if ( a3 && (v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct ID3D11Texture2D **))(a1 + 584)) != 0LL )
  {
    v10 = (**v9)(v9, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v12);
    v7 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x2ECu);
    }
    else
    {
      ViewOfTexture = CD3DSurface::CreateViewOfTexture(
                        (struct CD3DResourceManager *)(*(_QWORD *)(a1 + 224) + 896LL),
                        v12,
                        0LL,
                        0,
                        a4);
      v7 = ViewOfTexture;
      if ( ViewOfTexture < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ViewOfTexture, 0x2F8u);
    }
  }
  else
  {
    LogicalFrontBuffer = CSwapChainBase::GetLogicalFrontBuffer(*(CSwapChainBase **)(a1 + 248), a4);
    v7 = LogicalFrontBuffer;
    if ( LogicalFrontBuffer < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LogicalFrontBuffer, 0x2FCu);
  }
  if ( v12 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v12->lpVtbl->Release)(v12);
  return v7;
}
