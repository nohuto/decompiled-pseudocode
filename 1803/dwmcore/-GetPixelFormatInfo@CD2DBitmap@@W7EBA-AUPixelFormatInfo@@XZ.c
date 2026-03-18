/*
 * XREFs of ?GetPixelFormatInfo@CD2DBitmap@@W7EBA?AUPixelFormatInfo@@XZ @ 0x1800DD970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CD2DBitmap::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  return CD2DBitmap::GetPixelFormatInfo((_DWORD *)(a1 - 8), a2);
}
