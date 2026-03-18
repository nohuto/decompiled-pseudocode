/*
 * XREFs of ?GetTargetSurfaceNoRef@CHwTextureRenderTarget@@WLA@EAAPEAVCD3DSurface@@XZ @ 0x1800D6240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CD3DSurface *__fastcall CHwTextureRenderTarget::GetTargetSurfaceNoRef(__int64 a1)
{
  return CHwDisplayRenderTarget::GetTargetSurfaceNoRef((CHwDisplayRenderTarget *)(a1 - 176));
}
