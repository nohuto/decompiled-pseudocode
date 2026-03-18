/*
 * XREFs of ?AddRef@CD2DSharedBuffer@@WBA@EAAKXZ @ 0x1800D5F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DSharedBuffer::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 16));
}
