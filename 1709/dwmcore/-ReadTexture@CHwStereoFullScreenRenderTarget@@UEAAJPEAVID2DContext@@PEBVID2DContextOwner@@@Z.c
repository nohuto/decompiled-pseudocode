/*
 * XREFs of ?ReadTexture@CHwStereoFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801B8250
 * Callers:
 *     ?ReadTexture@CHwStereoFullScreenRenderTarget@@WMA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1800C6CD0 (-ReadTexture@CHwStereoFullScreenRenderTarget@@WMA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18018E758 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 *     ?ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801B88D0 (-ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::ReadTexture(
        CHwStereoFullScreenRenderTarget *this,
        struct ID2DContext *a2,
        const struct ID2DContextOwner *a3)
{
  signed int Texture; // eax
  unsigned int v5; // ebx
  signed int v6; // eax

  Texture = CHwFullScreenRenderTarget::ReadTexture(this, a2, a3);
  v5 = Texture;
  if ( Texture < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Texture, 0x86u);
  }
  else
  {
    v6 = DebugInspectTexture(
           *(struct ID3D11Texture2D **)(*((_QWORD *)this + 73) + 128LL),
           *(_DWORD *)(*((_QWORD *)this + 73) + 136LL));
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x8Au);
  }
  return v5;
}
