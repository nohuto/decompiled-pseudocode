/*
 * XREFs of fsg_GridFit @ 0x1C02C1940
 * Callers:
 *     fs__Contour @ 0x1C02B60DC (fs__Contour.c)
 * Callees:
 *     scl_ApplyTranslation @ 0x1C02B7D8C (scl_ApplyTranslation.c)
 *     scl_PostTransformGlyph @ 0x1C02B8E94 (scl_PostTransformGlyph.c)
 *     fsg_CreateGlyphData @ 0x1C02C0AA8 (fsg_CreateGlyphData.c)
 *     fsg_Embold @ 0x1C02C0D40 (fsg_Embold.c)
 */

__int64 __fastcall fsg_GridFit(
        __int64 a1,
        __int64 a2,
        int *a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        _WORD *a9,
        __int64 a10,
        _WORD *a11,
        int a12,
        int a13,
        int a14)
{
  __int16 v16; // r10
  unsigned int GlyphData; // r12d

  v16 = *(_WORD *)(a2 + 16) - 1;
  **(_WORD **)(a6 + 56) = 0;
  **(_WORD **)(a6 + 64) = v16;
  *(_WORD *)(a6 + 80) = 1;
  GlyphData = fsg_CreateGlyphData(a1, a2, (__int64)a3, (__int64)a4, a5, a6, a7, a8, a9, a10, a11, a13);
  if ( !GlyphData )
  {
    if ( a3[15] )
    {
      fsg_Embold(a5, (__int64)a4, a8, a12, a13);
      if ( *a11 )
        *a11 += (2 * *(unsigned __int16 *)a3 - 1) / 100;
    }
    if ( (a3[14] & 0x2000) != 0 || a4[118] )
      scl_PostTransformGlyph(a4, *(_QWORD *)(a5 + 16), a3 + 1);
    scl_ApplyTranslation(*(_QWORD *)(a5 + 16), (__int64)(a3 + 1), a8, a4[118], a13, a14);
  }
  return GlyphData;
}
