/*
 * XREFs of ?SetSDRBoost@CHwStereoFullScreenRenderTarget@@UEAAXM@Z @ 0x1800D6C90
 * Callers:
 *     ?SetSDRBoost@CHwTextureRenderTarget@@WNI@EAAXM@Z @ 0x1800DE1D0 (-SetSDRBoost@CHwTextureRenderTarget@@WNI@EAAXM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwStereoFullScreenRenderTarget::SetSDRBoost(CHwStereoFullScreenRenderTarget *this, float a2)
{
  *((float *)this + 49) = a2;
}
