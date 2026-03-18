/*
 * XREFs of ?GetBits@CHwTextureRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x18019BCF0
 * Callers:
 *     ?GetBits@CHwTextureRenderTarget@@WLA@EAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x1800D61A0 (-GetBits@CHwTextureRenderTarget@@WLA@EAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CHwTextureRenderTarget::GetBits(
        struct CD3DSurface **this,
        const struct MilRectF *a2,
        struct IBitmapDest *a3,
        int a4,
        int a5)
{
  return CHwSurfaceRenderTarget::GetBits(this, a2, a3, a4, a5);
}
