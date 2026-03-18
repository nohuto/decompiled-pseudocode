/*
 * XREFs of vtfdQueryFontFileTE @ 0x1C0238330
 * Callers:
 *     <none>
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C010CBB0 (EngUnmapFontFileFD.c)
 *     bvtfdMapFontFileFD @ 0x1C0238088 (bvtfdMapFontFileFD.c)
 *     vVtfdMarkFontGone @ 0x1C02380B8 (vVtfdMarkFontGone.c)
 *     vtfdQueryFontFile @ 0x1C0239B70 (vtfdQueryFontFile.c)
 */

__int64 __fastcall vtfdQueryFontFileTE(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  unsigned int FontFile; // edi

  FontFile = -1;
  if ( a2 != 1 || (unsigned int)bvtfdMapFontFileFD(a1) )
  {
    EngAcquireSemaphore(ghsemVTFD);
    FontFile = vtfdQueryFontFile(a1, a2, a3, a4, -1);
    EngReleaseSemaphore(ghsemVTFD);
    if ( a2 == 1 )
      EngUnmapFontFileFD(*(_QWORD *)(a1 + 8));
  }
  return FontFile;
}
