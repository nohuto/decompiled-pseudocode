/*
 * XREFs of ?GetFrontBufferSurface@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x1801B7FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x18002F910 (-GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180082404 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x1800824B8 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::GetFrontBufferSurface(
        _QWORD *a1,
        __int64 a2,
        char a3,
        struct CD3DSurface **a4)
{
  int v5; // edi
  signed int FrontBufferSurface; // eax
  unsigned int v8; // ebx
  struct CD3DSurface *v9; // rdi
  signed int ViewOfTexture; // eax
  struct ID3D11Texture2D **v12; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v12 = 0LL;
  v5 = a2;
  FrontBufferSurface = CHwFullScreenRenderTarget::GetFrontBufferSurface(a1, a2, a3, (struct CD3DSurface **)&v12);
  v8 = FrontBufferSurface;
  if ( FrontBufferSurface < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, FrontBufferSurface, 0x18Au);
    v9 = (struct CD3DSurface *)v12;
  }
  else if ( v5 == 2 )
  {
    v9 = (struct CD3DSurface *)v12;
    ViewOfTexture = CD3DSurface::CreateViewOfTexture(
                      (struct CD3DResourceManager *)(a1[25] + 896LL),
                      v12[16],
                      0LL,
                      1u,
                      a4);
    v8 = ViewOfTexture;
    if ( ViewOfTexture < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ViewOfTexture, 0x197u);
  }
  else
  {
    v9 = 0LL;
    *a4 = (struct CD3DSurface *)v12;
  }
  ReleaseInterfaceNoNULL<CD3DSurface>((__int64)v9);
  return v8;
}
