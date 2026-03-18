/*
 * XREFs of ?ReadTexture@CHwStereoFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801F1670
 * Callers:
 *     ?ReadTexture@CHwStereoFullScreenRenderTarget@@WNI@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1800DE3B0 (-ReadTexture@CHwStereoFullScreenRenderTarget@@WNI@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1801C6138 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 *     ?ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801F2160 (-ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::ReadTexture(
        CHwStereoFullScreenRenderTarget *this,
        struct ID2DContext *a2,
        const struct ID2DContextOwner *a3)
{
  int Texture; // eax
  unsigned int v5; // ebx
  int v6; // eax

  Texture = CHwFullScreenRenderTarget::ReadTexture(this, a2, a3);
  v5 = Texture;
  if ( Texture < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Texture, 0xA7u);
  }
  else
  {
    v6 = DebugInspectTexture(
           *(struct ID3D11Texture2D **)(*((_QWORD *)this + 79) + 128LL),
           *(_DWORD *)(*((_QWORD *)this + 79) + 136LL));
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xABu);
  }
  return v5;
}
