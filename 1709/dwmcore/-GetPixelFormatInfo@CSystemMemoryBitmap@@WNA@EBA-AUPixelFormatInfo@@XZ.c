/*
 * XREFs of ?GetPixelFormatInfo@CSystemMemoryBitmap@@WNA@EBA?AUPixelFormatInfo@@XZ @ 0x1800C61C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  return CBitmap::GetPixelFormatInfo(a1 - 208, a2);
}
