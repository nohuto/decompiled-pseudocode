/*
 * XREFs of ?GetBitmap@CHwTextureRenderTarget@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18008FB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::GetBitmap(struct ID2D1Bitmap1 ***this, char a2, struct ID2D1Bitmap1 **a3)
{
  return CD3DTexture::GetD2DBitmap(this[3], a2, a3);
}
