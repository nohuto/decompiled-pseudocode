/*
 * XREFs of ?Discard@CHwTextureRenderTarget@@UEAAXXZ @ 0x1801AE2A0
 * Callers:
 *     ?Discard@CHwDisplayRenderTarget@@WMA@EAAXXZ @ 0x1800C6910 (-Discard@CHwDisplayRenderTarget@@WMA@EAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CHwTextureRenderTarget::Discard(CHwTextureRenderTarget *this)
{
  CHwSurfaceRenderTarget::Discard(this);
}
