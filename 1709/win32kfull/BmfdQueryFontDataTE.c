/*
 * XREFs of BmfdQueryFontDataTE @ 0x1C0234280
 * Callers:
 *     <none>
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C010CBB0 (EngUnmapFontFileFD.c)
 *     bBmfdMapFontFileFD @ 0x1C0234360 (bBmfdMapFontFileFD.c)
 *     vBmfdMarkFontGone @ 0x1C0234390 (vBmfdMarkFontGone.c)
 *     BmfdQueryFontData @ 0x1C02345FC (BmfdQueryFontData.c)
 */

__int64 __fastcall BmfdQueryFontDataTE(__int64 a1, __int64 a2, int a3, int a4, int a5, PVOID pv, int a7)
{
  int v9; // esi
  unsigned int FontData; // ebx
  __int64 v11; // rdi
  size_t Size; // [rsp+28h] [rbp-30h]

  v9 = a2;
  FontData = -1;
  v11 = a2 + 24;
  if ( (unsigned int)bBmfdMapFontFileFD(*(_QWORD *)(a2 + 24)) )
  {
    LODWORD(Size) = a7;
    FontData = BmfdQueryFontData(v9, a3, a4, a5, pv, Size);
    EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)v11 + 16LL));
  }
  return FontData;
}
