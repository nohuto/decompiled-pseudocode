/*
 * XREFs of MiMakeProtectionPfnCompatible @ 0x1400CD358
 * Callers:
 *     MiMapArbitraryPage @ 0x140008F00 (MiMapArbitraryPage.c)
 *     MiFillSystemPtes @ 0x14009ABD0 (MiFillSystemPtes.c)
 *     MiZeroInParallelWorker @ 0x1400CC570 (MiZeroInParallelWorker.c)
 *     MiMapSinglePage @ 0x1400CD194 (MiMapSinglePage.c)
 *     MiPrivateFixup @ 0x1400CD7E0 (MiPrivateFixup.c)
 *     MiGetPteFromCopyList @ 0x1400CEEDC (MiGetPteFromCopyList.c)
 *     MiZeroLargePage @ 0x1400CFBFC (MiZeroLargePage.c)
 *     MiInsertPhysicalPteMapping @ 0x1401184C0 (MiInsertPhysicalPteMapping.c)
 *     MiMapMdlCommon @ 0x14014EA10 (MiMapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x140217160 (MmProtectMdlSystemAddress.c)
 *     MiCopySinglePage @ 0x1402179B4 (MiCopySinglePage.c)
 *     MmMapMemoryDumpMdlEx @ 0x14021B38C (MmMapMemoryDumpMdlEx.c)
 *     MiInitializeSlowPte @ 0x14021C0C4 (MiInitializeSlowPte.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140227C44 (MiDbgTranslatePhysicalAddress.c)
 *     MiScrubPage @ 0x140238F30 (MiScrubPage.c)
 *     MiRelocateImagePfn @ 0x140495F60 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x140509814 (MiValidateImagePfn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeProtectionPfnCompatible(char a1, __int64 a2)
{
  unsigned int v2; // ecx
  char v3; // al

  v2 = a1 & 7;
  v3 = *(_BYTE *)(a2 + 34) >> 6;
  if ( v3 )
  {
    if ( v3 == 2 )
      v2 |= 0x18u;
  }
  else
  {
    v2 |= 8u;
  }
  return v2;
}
