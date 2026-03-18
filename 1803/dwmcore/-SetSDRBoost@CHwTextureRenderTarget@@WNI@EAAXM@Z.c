/*
 * XREFs of ?SetSDRBoost@CHwTextureRenderTarget@@WNI@EAAXM@Z @ 0x1800DE1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHwTextureRenderTarget::SetSDRBoost(__int64 a1, float a2)
{
  CHwStereoFullScreenRenderTarget::SetSDRBoost((CHwStereoFullScreenRenderTarget *)(a1 - 216), a2);
}
