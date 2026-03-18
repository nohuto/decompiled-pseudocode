/*
 * XREFs of ?AddRef@CTransformingGeometrySink@@WBA@EAAKXZ @ 0x1800DE6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CTransformingGeometrySink::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 16));
}
