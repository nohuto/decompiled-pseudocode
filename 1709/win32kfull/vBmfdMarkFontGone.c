/*
 * XREFs of vBmfdMarkFontGone @ 0x1C0234390
 * Callers:
 *     BmfdQueryAdvanceWidthsTE @ 0x1C02341D0 (BmfdQueryAdvanceWidthsTE.c)
 *     BmfdQueryFontDataTE @ 0x1C0234280 (BmfdQueryFontDataTE.c)
 *     BmfdQueryFontData @ 0x1C02345FC (BmfdQueryFontData.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C010CBB0 (EngUnmapFontFileFD.c)
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
