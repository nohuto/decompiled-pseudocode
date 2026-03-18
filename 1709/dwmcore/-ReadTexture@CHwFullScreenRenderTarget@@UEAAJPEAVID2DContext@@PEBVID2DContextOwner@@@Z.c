/*
 * XREFs of ?ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801B88D0
 * Callers:
 *     ?ReadTexture@CHwFullScreenRenderTarget@@WMA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1800C6CC0 (-ReadTexture@CHwFullScreenRenderTarget@@WMA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 *     ?ReadTexture@CHwStereoFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801B8250 (-ReadTexture@CHwStereoFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x1800824B8 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetLogicalFrontBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z @ 0x18011B384 (-GetLogicalFrontBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18018E758 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::ReadTexture(
        CSwapChainBase **this,
        struct ID2DContext *a2,
        const struct ID2DContextOwner *a3)
{
  struct CD3DSurface *v3; // rbx
  signed int v5; // eax
  unsigned int v6; // edi
  int LogicalFrontBuffer; // eax
  signed int v8; // eax
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
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x57u);
  }
  else
  {
    if ( byte_180272F3C )
    {
      LogicalFrontBuffer = CSwapChainBase::GetLogicalFrontBuffer(this[29], &v10);
      v3 = v10;
      if ( LogicalFrontBuffer >= 0 )
        DebugInspectTexture(*((struct ID3D11Texture2D **)v10 + 16), 0);
    }
    v8 = DebugInspectTexture(*((struct ID3D11Texture2D **)this[23] + 16), 0);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x62u);
  }
  ReleaseInterfaceNoNULL<CD3DSurface>((__int64)v3);
  return v6;
}
