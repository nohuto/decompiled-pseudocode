/*
 * XREFs of vVtfdMarkFontGone @ 0x1C02380B8
 * Callers:
 *     vtfdQueryAdvanceWidthsTE @ 0x1C02381A0 (vtfdQueryAdvanceWidthsTE.c)
 *     vtfdQueryFontDataTE @ 0x1C0238260 (vtfdQueryFontDataTE.c)
 *     vtfdQueryFontFileTE @ 0x1C0238330 (vtfdQueryFontFileTE.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C010CBB0 (EngUnmapFontFileFD.c)
 */

void __fastcall vVtfdMarkFontGone(int *a1, int a2)
{
  int v2; // eax

  if ( a2 == -1073741818 )
  {
    v2 = *a1;
    a1[7] |= 1u;
    if ( (unsigned int)(v2 - 1) <= 1 )
      EngUnmapFontFileFD(*((_QWORD *)a1 + 1));
  }
}
