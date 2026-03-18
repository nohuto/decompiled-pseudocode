/*
 * XREFs of fs_NewContourGridFit @ 0x1C022E928
 * Callers:
 *     bGetGlyphOutline @ 0x1C022DD74 (bGetGlyphOutline.c)
 *     lGGOBitmap @ 0x1C022E970 (lGGOBitmap.c)
 * Callees:
 *     fs__Contour @ 0x1C02B60DC (fs__Contour.c)
 */

__int64 __fastcall fs_NewContourGridFit(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( (a3 & 0x40000) != 0 )
    return fs__Contour(a1, a2, 0LL);
  result = fs__Contour(a1, a2, 1LL);
  if ( (_DWORD)result )
    return fs__Contour(a1, a2, 0LL);
  return result;
}
