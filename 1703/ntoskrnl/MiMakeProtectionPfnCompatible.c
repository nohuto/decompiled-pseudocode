/*
 * XREFs of MiMakeProtectionPfnCompatible @ 0x1400A5B28
 * Callers:
 *     MiMapSinglePage @ 0x140025508 (MiMapSinglePage.c)
 *     MiGetPteFromCopyList @ 0x14002C478 (MiGetPteFromCopyList.c)
 *     MiZeroInParallelWorker @ 0x14007CF90 (MiZeroInParallelWorker.c)
 *     MiZeroPhysicalPage @ 0x1400A59A0 (MiZeroPhysicalPage.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     MiPrivateFixup @ 0x140117AB4 (MiPrivateFixup.c)
 *     MiInsertPhysicalPteMapping @ 0x140123724 (MiInsertPhysicalPteMapping.c)
 *     MiMapContiguousMemory @ 0x1401243E0 (MiMapContiguousMemory.c)
 *     MmMapMemoryDumpMdlEx @ 0x140137880 (MmMapMemoryDumpMdlEx.c)
 *     MiMapMdlCommon @ 0x14020F120 (MiMapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x14020FE00 (MmProtectMdlSystemAddress.c)
 *     MiCopySinglePage @ 0x140210384 (MiCopySinglePage.c)
 *     MiInitializeSlowPte @ 0x140214098 (MiInitializeSlowPte.c)
 *     MiDbgTranslatePhysicalAddress @ 0x14021B390 (MiDbgTranslatePhysicalAddress.c)
 *     MiZeroAndConvertLargePage @ 0x140225624 (MiZeroAndConvertLargePage.c)
 *     MiValidateImagePfn @ 0x1404234F4 (MiValidateImagePfn.c)
 *     MiRelocateImagePfn @ 0x140518C20 (MiRelocateImagePfn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeProtectionPfnCompatible(char a1, __int64 a2)
{
  unsigned __int8 v2; // al
  unsigned int v3; // ecx

  v2 = *(_BYTE *)(a2 + 34);
  v3 = a1 & 7;
  if ( v2 < 0x40u )
  {
    v3 |= 8u;
  }
  else if ( (v2 & 0xC0) == 0x80 )
  {
    v3 |= 0x18u;
  }
  return v3;
}
