/*
 * XREFs of ?GetFrontBufferSurface@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x1801F13B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180021DA4 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x180021E58 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x18007CBA0 (-GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::GetFrontBufferSurface(
        __int64 a1,
        __int64 a2,
        char a3,
        struct CD3DSurface **a4)
{
  int v5; // edi
  int FrontBufferSurface; // eax
  unsigned int v8; // ebx
  struct CD3DSurface *v9; // rdi
  int ViewOfTexture; // eax
  struct ID3D11Texture2D **v12; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v12 = 0LL;
  v5 = a2;
  FrontBufferSurface = CHwFullScreenRenderTarget::GetFrontBufferSurface(a1, a2, a3, (struct CD3DSurface **)&v12);
  v8 = FrontBufferSurface;
  if ( FrontBufferSurface < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, FrontBufferSurface, 0x1A8u);
    v9 = (struct CD3DSurface *)v12;
  }
  else if ( v5 == 2 )
  {
    v9 = (struct CD3DSurface *)v12;
    ViewOfTexture = CD3DSurface::CreateViewOfTexture(
                      (struct CD3DResourceManager *)(*(_QWORD *)(a1 + 224) + 896LL),
                      v12[16],
                      0LL,
                      1u,
                      a4);
    v8 = ViewOfTexture;
    if ( ViewOfTexture < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ViewOfTexture, 0x1B5u);
  }
  else
  {
    v9 = 0LL;
    *a4 = (struct CD3DSurface *)v12;
  }
  ReleaseInterfaceNoNULL<CD3DSurface>((__int64)v9);
  return v8;
}
