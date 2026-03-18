/*
 * XREFs of ?GetPixelFormatInfo@CSectionBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801D0F30
 * Callers:
 *     ?GetPixelFormatInfo@CSectionBitmapRealization@@WPI@EBA?AUPixelFormatInfo@@XZ @ 0x1800C7020 (-GetPixelFormatInfo@CSectionBitmapRealization@@WPI@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CSectionBitmapRealization::GetPixelFormatInfo(_DWORD *a1, _DWORD *a2)
{
  bool v2; // zf
  int v3; // eax

  v2 = a1[2] == 0;
  *a2 = a1[69];
  v3 = 3;
  if ( !v2 )
    v3 = a1[2];
  a2[1] = v3;
  a2[2] = a1[13];
  return a2;
}
