/*
 * XREFs of ?AddRef@CAtlasImageSource@@WBI@EAAKXZ @ 0x1800C6E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CAtlasImageSource::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 24));
}
