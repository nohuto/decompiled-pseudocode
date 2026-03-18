/*
 * XREFs of ?DiscardRectangle@CHwTextureRenderTarget@@UEAAXAEBUMilRectF@@@Z @ 0x1801E6650
 * Callers:
 *     ?DiscardRectangle@CHwTextureRenderTarget@@WNI@EAAXAEBUMilRectF@@@Z @ 0x1800DDF90 (-DiscardRectangle@CHwTextureRenderTarget@@WNI@EAAXAEBUMilRectF@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CHwTextureRenderTarget::DiscardRectangle(CHwTextureRenderTarget *this, const struct MilRectF *a2)
{
  CHwSurfaceRenderTarget::DiscardRectangle(this, a2);
}
