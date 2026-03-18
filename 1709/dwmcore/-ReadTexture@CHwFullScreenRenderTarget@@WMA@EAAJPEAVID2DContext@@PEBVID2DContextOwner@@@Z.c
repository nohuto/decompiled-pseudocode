/*
 * XREFs of ?ReadTexture@CHwFullScreenRenderTarget@@WMA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1800C6CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwFullScreenRenderTarget::ReadTexture(
        __int64 a1,
        struct ID2DContext *a2,
        const struct ID2DContextOwner *a3)
{
  return CHwFullScreenRenderTarget::ReadTexture((CHwFullScreenRenderTarget *)(a1 - 192), a2, a3);
}
