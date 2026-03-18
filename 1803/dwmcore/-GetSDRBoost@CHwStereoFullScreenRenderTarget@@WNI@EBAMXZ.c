/*
 * XREFs of ?GetSDRBoost@CHwStereoFullScreenRenderTarget@@WNI@EBAMXZ @ 0x1800DE320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

float __fastcall CHwStereoFullScreenRenderTarget::GetSDRBoost(__int64 a1)
{
  return CHwSurfaceRenderTarget::GetSDRBoost((CHwSurfaceRenderTarget *)(a1 - 216));
}
