/*
 * XREFs of ?Discard@CHwTextureRenderTarget@@UEAAXXZ @ 0x18019BC80
 * Callers:
 *     ?Discard@CHwDisplayRenderTarget@@WLA@EAAXXZ @ 0x1800D6150 (-Discard@CHwDisplayRenderTarget@@WLA@EAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CHwTextureRenderTarget::Discard(CHwTextureRenderTarget *this)
{
  CHwSurfaceRenderTarget::Discard(this);
}
