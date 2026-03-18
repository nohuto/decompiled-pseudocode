/*
 * XREFs of ?IsWhitePixelInTopLeft@CGdiSpriteBitmap@@WFA@EBA_NXZ @ 0x1800D5CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGdiSpriteBitmap::IsWhitePixelInTopLeft(__int64 a1)
{
  return CImageSource::IsMonitorSpecificContent((CImageSource *)(a1 - 80));
}
