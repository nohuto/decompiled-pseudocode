/*
 * XREFs of ?ReadTexture@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801ED9F0
 * Callers:
 *     ?ReadTexture@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801E6A90 (-ReadTexture@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1801C6138 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::ReadTexture(
        CHwSurfaceRenderTarget *this,
        struct ID2DContext *a2,
        const struct ID2DContextOwner *a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v9; // [rsp+20h] [rbp-18h]

  if ( !(*(unsigned __int8 (__fastcall **)(CHwSurfaceRenderTarget *))(*(_QWORD *)this + 160LL))(this) )
  {
    if ( a2
      && (v7 = (*(__int64 (__fastcall **)(struct ID2DContext *, const struct ID2DContextOwner *))(*(_QWORD *)a2 + 48LL))(
                 a2,
                 a3),
          v6 = v7,
          v7 < 0) )
    {
      v9 = 862;
    }
    else
    {
      v7 = DebugInspectTexture(*(struct ID3D11Texture2D **)(*((_QWORD *)this + 25) + 128LL), 0);
      v6 = v7;
      if ( v7 >= 0 )
        return v6;
      v9 = 865;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v9);
    return v6;
  }
  v6 = -2147024891;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024891, 0x357u);
  return v6;
}
