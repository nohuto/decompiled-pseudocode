/*
 * XREFs of ?ReadTexture@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801B7944
 * Callers:
 *     ?ReadTexture@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801AD5B0 (-ReadTexture@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18018E758 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::ReadTexture(
        CHwSurfaceRenderTarget *this,
        struct ID2DContext *a2,
        const struct ID2DContextOwner *a3)
{
  unsigned int v6; // ebx
  signed int v7; // eax
  unsigned int v9; // [rsp+20h] [rbp-18h]

  if ( !(*(unsigned __int8 (__fastcall **)(CHwSurfaceRenderTarget *))(*(_QWORD *)this + 152LL))(this) )
  {
    if ( a2
      && (v7 = (*(__int64 (__fastcall **)(struct ID2DContext *, const struct ID2DContextOwner *))(*(_QWORD *)a2 + 48LL))(
                 a2,
                 a3),
          v6 = v7,
          v7 < 0) )
    {
      v9 = 833;
    }
    else
    {
      v7 = DebugInspectTexture(*(struct ID3D11Texture2D **)(*((_QWORD *)this + 23) + 128LL), 0);
      v6 = v7;
      if ( v7 >= 0 )
        return v6;
      v9 = 836;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, v9);
    return v6;
  }
  v6 = -2147024891;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070005, 0x33Au);
  return v6;
}
