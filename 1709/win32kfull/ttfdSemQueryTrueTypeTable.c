/*
 * XREFs of ttfdSemQueryTrueTypeTable @ 0x1C0226F40
 * Callers:
 *     <none>
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C010CBB0 (EngUnmapFontFileFD.c)
 *     bttfdMapFontFileFD @ 0x1C02267F4 (bttfdMapFontFileFD.c)
 *     vMarkFontGone @ 0x1C0227068 (vMarkFontGone.c)
 *     ttfdQueryTrueTypeTable @ 0x1C02302D0 (ttfdQueryTrueTypeTable.c)
 */

__int64 __fastcall ttfdSemQueryTrueTypeTable(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        void *a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int TrueTypeTable; // edi

  TrueTypeTable = -1;
  if ( (unsigned int)bttfdMapFontFileFD(a1) )
  {
    EngAcquireSemaphore(ghsemTTFD);
    TrueTypeTable = ttfdQueryTrueTypeTable(a1, a2, a3, a4, a5, a6, a7, a8);
    EngReleaseSemaphore(ghsemTTFD);
    EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 56LL));
  }
  return TrueTypeTable;
}
