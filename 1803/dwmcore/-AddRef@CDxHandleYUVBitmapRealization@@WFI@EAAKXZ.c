/*
 * XREFs of ?AddRef@CDxHandleYUVBitmapRealization@@WFI@EAAKXZ @ 0x1800DE8A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDxHandleYUVBitmapRealization::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 88));
}
