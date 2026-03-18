/*
 * XREFs of ?AddRef@CCompressedSourceBitmap@@WOI@EAAKXZ @ 0x1800D6780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompressedSourceBitmap::AddRef(__int64 a1)
{
  return CHolographicClient::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 232));
}
