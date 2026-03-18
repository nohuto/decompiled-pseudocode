/*
 * XREFs of ?ReadTexture@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801AD5B0
 * Callers:
 *     ?ReadTexture@CHwTextureRenderTarget@@WMA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1800C6AC0 (-ReadTexture@CHwTextureRenderTarget@@WMA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CHwTextureRenderTarget::ReadTexture(
        CHwTextureRenderTarget *this,
        struct ID2DContext *a2,
        const struct ID2DContextOwner *a3)
{
  return CHwSurfaceRenderTarget::ReadTexture(this, a2, a3);
}
