/*
 * XREFs of ?GetBits@CHwTextureRenderTarget@@WMA@EAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x1800C6950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::GetBits(
        __int64 a1,
        const struct MilRectF *a2,
        struct IBitmapDest *a3,
        int a4,
        int a5)
{
  return CHwTextureRenderTarget::GetBits((CHwTextureRenderTarget *)(a1 - 192), a2, a3, a4, a5);
}
