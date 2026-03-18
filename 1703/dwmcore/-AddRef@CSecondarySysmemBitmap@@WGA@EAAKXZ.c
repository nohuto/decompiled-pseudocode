/*
 * XREFs of ?AddRef@CSecondarySysmemBitmap@@WGA@EAAKXZ @ 0x1800D5B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondarySysmemBitmap::AddRef(__int64 a1)
{
  return CHolographicClient::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 96));
}
