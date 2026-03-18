/*
 * XREFs of ?DiscardRectangle@CHwTextureRenderTarget@@UEAAXAEBUMilRectF@@@Z @ 0x1801AD200
 * Callers:
 *     ?DiscardRectangle@CHwTextureRenderTarget@@WMA@EAAXAEBUMilRectF@@@Z @ 0x1800C6920 (-DiscardRectangle@CHwTextureRenderTarget@@WMA@EAAXAEBUMilRectF@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CHwTextureRenderTarget::DiscardRectangle(CHwTextureRenderTarget *this, const struct MilRectF *a2)
{
  CHwSurfaceRenderTarget::DiscardRectangle(this, a2);
}
