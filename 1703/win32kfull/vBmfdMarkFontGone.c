/*
 * XREFs of vBmfdMarkFontGone @ 0x1C0232E10
 * Callers:
 *     BmfdQueryAdvanceWidthsTE @ 0x1C0232C70 (BmfdQueryAdvanceWidthsTE.c)
 *     BmfdQueryFontDataTE @ 0x1C0232D10 (BmfdQueryFontDataTE.c)
 *     BmfdQueryFontData @ 0x1C023307C (BmfdQueryFontData.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C00FCCB0 (EngUnmapFontFileFD.c)
 */

void __fastcall vBmfdMarkFontGone(__int64 a1, int a2)
{
  EngAcquireSemaphore(ghsemBMFD);
  if ( a2 == -1073741818 )
  {
    *(_DWORD *)(a1 + 4) |= 1u;
    EngUnmapFontFileFD(*(_QWORD *)(a1 + 16));
  }
  EngReleaseSemaphore(ghsemBMFD);
}
