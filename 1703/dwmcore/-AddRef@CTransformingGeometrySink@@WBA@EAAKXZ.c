/*
 * XREFs of ?AddRef@CTransformingGeometrySink@@WBA@EAAKXZ @ 0x1800D67E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTransformingGeometrySink::AddRef(__int64 a1)
{
  return CHolographicClient::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 16));
}
