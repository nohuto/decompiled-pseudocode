/*
 * XREFs of ?Release@CD2DBitmapCacheSourceRealization@@WBA@EAAKXZ @ 0x1800DE7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CD2DBitmapCacheSourceRealization::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 16));
}
