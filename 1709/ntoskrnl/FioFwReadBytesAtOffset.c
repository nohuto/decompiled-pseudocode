/*
 * XREFs of FioFwReadBytesAtOffset @ 0x14013DEA8
 * Callers:
 *     RaspLoadBearings @ 0x14013D88C (RaspLoadBearings.c)
 *     FioFwReadUshortAtOffset @ 0x14013DA8C (FioFwReadUshortAtOffset.c)
 *     RaspInitializeGlyphData @ 0x14013DAC0 (RaspInitializeGlyphData.c)
 *     FioFwReadUlongAtOffset @ 0x14013E8D8 (FioFwReadUlongAtOffset.c)
 *     RaspInitializeCompositeGlyphData @ 0x140291E48 (RaspInitializeCompositeGlyphData.c)
 *     FopValidateFontNameTable @ 0x14086EDF8 (FopValidateFontNameTable.c)
 *     BgpRasInitializeRasterizer @ 0x14086EF8C (BgpRasInitializeRasterizer.c)
 *     FopReadNamingTable @ 0x14086F494 (FopReadNamingTable.c)
 *     FopReadNameRecord @ 0x14086F5BC (FopReadNameRecord.c)
 *     FopGetTableOffsetAndSize @ 0x14086F62C (FopGetTableOffsetAndSize.c)
 *     FopReadMappingTable @ 0x14086F7E8 (FopReadMappingTable.c)
 *     FopReadCmapTable @ 0x14086F9B8 (FopReadCmapTable.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 */

__int64 __fastcall FioFwReadBytesAtOffset(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  if ( a2 + a3 > *(_DWORD *)(a1 + 8) )
    return 3221225485LL;
  memmove(a4, (const void *)(*(_QWORD *)a1 + a2), a3);
  return 0LL;
}
