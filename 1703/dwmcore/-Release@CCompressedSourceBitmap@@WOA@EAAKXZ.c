/*
 * XREFs of ?Release@CCompressedSourceBitmap@@WOA@EAAKXZ @ 0x1800D67C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCompressedSourceBitmap::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 224));
}
