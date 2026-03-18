/*
 * XREFs of ?GetSDRBoost@CHwStereoFullScreenRenderTarget@@WMA@EBAMXZ @ 0x1800C6A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

float __fastcall CHwStereoFullScreenRenderTarget::GetSDRBoost(__int64 a1)
{
  return CHwTextureRenderTarget::GetSDRBoost((CHwTextureRenderTarget *)(a1 - 192));
}
