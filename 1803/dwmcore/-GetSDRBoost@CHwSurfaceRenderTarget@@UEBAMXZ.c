/*
 * XREFs of ?GetSDRBoost@CHwSurfaceRenderTarget@@UEBAMXZ @ 0x1800D6C80
 * Callers:
 *     ?GetSDRBoost@CHwStereoFullScreenRenderTarget@@WNI@EBAMXZ @ 0x1800DE320 (-GetSDRBoost@CHwStereoFullScreenRenderTarget@@WNI@EBAMXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CHwSurfaceRenderTarget::GetSDRBoost(CHwSurfaceRenderTarget *this)
{
  return *((float *)this + 49);
}
