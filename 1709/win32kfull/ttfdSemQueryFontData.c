/*
 * XREFs of ttfdSemQueryFontData @ 0x1C0226C40
 * Callers:
 *     <none>
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C010CBB0 (EngUnmapFontFileFD.c)
 *     bttfdMapFontFileFD @ 0x1C02267F4 (bttfdMapFontFileFD.c)
 *     vMarkFontGone @ 0x1C0227068 (vMarkFontGone.c)
 *     ttfdQueryFontData @ 0x1C022FD64 (ttfdQueryFontData.c)
 */

__int64 __fastcall ttfdSemQueryFontData(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6, int a7)
{
  int v9; // esi
  unsigned int FontData; // ebx
  __int64 v11; // rdi

  v9 = a2;
  FontData = -1;
  v11 = a2 + 24;
  if ( (unsigned int)bttfdMapFontFileFD(*(_QWORD *)(a2 + 24)) )
  {
    EngAcquireSemaphore(ghsemTTFD);
    FontData = ttfdQueryFontData(v9, a3, a4, a5, a6, a7);
    EngReleaseSemaphore(ghsemTTFD);
    EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 48LL) + 56LL));
  }
  return FontData;
}
