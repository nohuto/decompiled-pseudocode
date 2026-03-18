/*
 * XREFs of ?AddRef@CCoRenderContent@@WDI@EAAKXZ @ 0x1800C6000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCoRenderContent::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 56));
}
