/*
 * XREFs of FioFwReadBytesAtOffset @ 0x14014294C
 * Callers:
 *     RaspLoadBearings @ 0x14014233C (RaspLoadBearings.c)
 *     FioFwReadUshortAtOffset @ 0x140142540 (FioFwReadUshortAtOffset.c)
 *     RaspInitializeGlyphData @ 0x140142574 (RaspInitializeGlyphData.c)
 *     FioFwReadUlongAtOffset @ 0x140162410 (FioFwReadUlongAtOffset.c)
 *     RaspInitializeCompositeGlyphData @ 0x140267AF0 (RaspInitializeCompositeGlyphData.c)
 *     BgpRasInitializeRasterizer @ 0x140838088 (BgpRasInitializeRasterizer.c)
 *     FopReadMappingTable @ 0x14083825C (FopReadMappingTable.c)
 *     FopReadCmapTable @ 0x14083842C (FopReadCmapTable.c)
 *     FopValidateFontNameTable @ 0x14083858C (FopValidateFontNameTable.c)
 *     FopReadNamingTable @ 0x140838720 (FopReadNamingTable.c)
 *     FopReadNameRecord @ 0x140838848 (FopReadNameRecord.c)
 *     FopGetTableOffsetAndSize @ 0x1408388B8 (FopGetTableOffsetAndSize.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 */

__int64 __fastcall FioFwReadBytesAtOffset(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  if ( a2 + a3 > *(_DWORD *)(a1 + 8) )
    return 3221225485LL;
  memmove(a4, (const void *)(*(_QWORD *)a1 + a2), a3);
  return 0LL;
}
