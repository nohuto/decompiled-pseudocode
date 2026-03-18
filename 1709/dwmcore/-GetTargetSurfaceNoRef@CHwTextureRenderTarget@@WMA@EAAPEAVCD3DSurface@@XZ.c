/*
 * XREFs of ?GetTargetSurfaceNoRef@CHwTextureRenderTarget@@WMA@EAAPEAVCD3DSurface@@XZ @ 0x1800C6A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CD3DSurface *__fastcall CHwTextureRenderTarget::GetTargetSurfaceNoRef(__int64 a1)
{
  return CHwDisplayRenderTarget::GetTargetSurfaceNoRef((CHwDisplayRenderTarget *)(a1 - 192));
}
