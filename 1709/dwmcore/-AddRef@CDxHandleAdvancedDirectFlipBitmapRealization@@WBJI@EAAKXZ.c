/*
 * XREFs of ?AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WBJI@EAAKXZ @ 0x1800C7190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 408));
}
