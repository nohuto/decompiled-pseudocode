/*
 * XREFs of ?GetBits@CHwTextureRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x1801AD260
 * Callers:
 *     ?GetBits@CHwTextureRenderTarget@@WMA@EAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x1800C6950 (-GetBits@CHwTextureRenderTarget@@WMA@EAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CHwTextureRenderTarget::GetBits(
        struct CD3DSurface **this,
        const struct MilRectF *a2,
        struct IBitmapDest *a3,
        unsigned int a4,
        unsigned int a5)
{
  return CHwSurfaceRenderTarget::GetBits(this, a2, a3, a4, a5);
}
