/*
 * XREFs of ?GetSDRBoost@CHwTextureRenderTarget@@UEBAMXZ @ 0x1800C1940
 * Callers:
 *     ?GetSDRBoost@CHwStereoFullScreenRenderTarget@@WMA@EBAMXZ @ 0x1800C6A00 (-GetSDRBoost@CHwStereoFullScreenRenderTarget@@WMA@EBAMXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CHwTextureRenderTarget::GetSDRBoost(CHwTextureRenderTarget *this)
{
  return *((float *)this + 45);
}
