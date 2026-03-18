/*
 * XREFs of ?Release@CBitmapOfDeviceBitmaps@@WOA@EAAKXZ @ 0x1800C6FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmapOfDeviceBitmaps::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 224));
}
