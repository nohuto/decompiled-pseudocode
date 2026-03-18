/*
 * XREFs of ?ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801F2160
 * Callers:
 *     ?ReadTexture@CHwFullScreenRenderTarget@@WNI@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1800DE3A0 (-ReadTexture@CHwFullScreenRenderTarget@@WNI@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 *     ?ReadTexture@CHwStereoFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801F1670 (-ReadTexture@CHwStereoFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x180021E58 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetLogicalFrontBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z @ 0x1800C0174 (-GetLogicalFrontBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1801C6138 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::ReadTexture(
        CSwapChainBase **this,
        struct ID2DContext *a2,
        const struct ID2DContextOwner *a3)
{
  struct CD3DSurface *v3; // rbx
  int v5; // eax
  unsigned int v6; // edi
  int LogicalFrontBuffer; // eax
  int v8; // eax
  struct CD3DSurface *v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  v10 = 0LL;
  if ( a2
    && (v5 = (*(__int64 (__fastcall **)(struct ID2DContext *, const struct ID2DContextOwner *))(*(_QWORD *)a2 + 48LL))(
               a2,
               a3),
        v6 = v5,
        v5 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x5Cu);
  }
  else
  {
    if ( byte_1802DA4B8 )
    {
      LogicalFrontBuffer = CSwapChainBase::GetLogicalFrontBuffer(this[31], &v10);
      v3 = v10;
      if ( LogicalFrontBuffer >= 0 )
        DebugInspectTexture(*((struct ID3D11Texture2D **)v10 + 16), 0);
    }
    v8 = DebugInspectTexture(*((struct ID3D11Texture2D **)this[25] + 16), 0);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x67u);
  }
  ReleaseInterfaceNoNULL<CD3DSurface>((__int64)v3);
  return v6;
}
