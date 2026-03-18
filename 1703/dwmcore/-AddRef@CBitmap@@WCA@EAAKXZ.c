/*
 * XREFs of ?AddRef@CBitmap@@WCA@EAAKXZ @ 0x1800D6760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::AddRef(__int64 a1)
{
  return CHolographicClient::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 32));
}
