/*
 * XREFs of ?DiscardRectangle@CHwTextureRenderTarget@@UEAAXAEBUMilRectF@@@Z @ 0x18019BC90
 * Callers:
 *     ?DiscardRectangle@CHwTextureRenderTarget@@WLA@EAAXAEBUMilRectF@@@Z @ 0x1800D6160 (-DiscardRectangle@CHwTextureRenderTarget@@WLA@EAAXAEBUMilRectF@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CHwTextureRenderTarget::DiscardRectangle(CHwTextureRenderTarget *this, const struct MilRectF *a2)
{
  CHwSurfaceRenderTarget::DiscardRectangle(this, a2);
}
