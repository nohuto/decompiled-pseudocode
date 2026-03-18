/*
 * XREFs of ?GetPixelFormatInfo@CBoundsBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800C17F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CBoundsBitmap::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  _DWORD *result; // rax

  a2[2] = 0;
  result = a2;
  *a2 = 87;
  a2[1] = 1;
  return result;
}
