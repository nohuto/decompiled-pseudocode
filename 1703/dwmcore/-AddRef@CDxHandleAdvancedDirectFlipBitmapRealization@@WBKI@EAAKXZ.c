/*
 * XREFs of ?AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WBKI@EAAKXZ @ 0x1800D6820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::AddRef(__int64 a1)
{
  return CHolographicClient::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 424));
}
