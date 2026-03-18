/*
 * XREFs of ?AddRef@CDxHandleYUVBitmapRealization@@WBJI@EAAKXZ @ 0x1800D6880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::AddRef(__int64 a1)
{
  return CHolographicClient::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 408));
}
