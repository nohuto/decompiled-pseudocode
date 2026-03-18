/*
 * XREFs of vVtfdMarkFontGone @ 0x1C0236B0C
 * Callers:
 *     vtfdQueryAdvanceWidthsTE @ 0x1C0236BF0 (vtfdQueryAdvanceWidthsTE.c)
 *     vtfdQueryFontDataTE @ 0x1C0236CB0 (vtfdQueryFontDataTE.c)
 *     vtfdQueryFontFileTE @ 0x1C0236D70 (vtfdQueryFontFileTE.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C00FCCB0 (EngUnmapFontFileFD.c)
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
