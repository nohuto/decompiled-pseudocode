/*
 * XREFs of ?GetBitmap@CHwTextureRenderTarget@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1800493E0
 * Callers:
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x18007A740 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@Rec.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::GetBitmap(struct ID2D1Bitmap1 ***this, char a2, struct ID2D1Bitmap1 **a3)
{
  return CD3DTexture::GetD2DBitmap(this[3], a2, a3);
}
