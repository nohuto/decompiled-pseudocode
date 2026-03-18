/*
 * XREFs of FioFwReadBytesAtOffset @ 0x1401754D8
 * Callers:
 *     FioFwReadUlongAtOffset @ 0x140173670 (FioFwReadUlongAtOffset.c)
 *     RaspLoadBearings @ 0x140174EEC (RaspLoadBearings.c)
 *     FioFwReadUshortAtOffset @ 0x1401750DC (FioFwReadUshortAtOffset.c)
 *     RaspInitializeGlyphData @ 0x140175110 (RaspInitializeGlyphData.c)
 *     RaspInitializeCompositeGlyphData @ 0x1402C7964 (RaspInitializeCompositeGlyphData.c)
 *     FopReadMappingTable @ 0x1408E3B54 (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x1408E3D24 (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x1408E3EB8 (FopReadCmapTable.c)
 *     BgpRasInitializeRasterizer @ 0x1408E4018 (BgpRasInitializeRasterizer.c)
 *     FopReadNamingTable @ 0x1408E41EC (FopReadNamingTable.c)
 *     FopReadNameRecord @ 0x1408E4310 (FopReadNameRecord.c)
 *     FopGetTableOffsetAndSize @ 0x1408E4380 (FopGetTableOffsetAndSize.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 */

__int64 __fastcall FioFwReadBytesAtOffset(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  if ( a2 + a3 > *(_DWORD *)(a1 + 8) )
    return 3221225485LL;
  memmove(a4, (const void *)(*(_QWORD *)a1 + a2), a3);
  return 0LL;
}
