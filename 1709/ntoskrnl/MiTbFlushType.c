/*
 * XREFs of MiTbFlushType @ 0x1400A5D50
 * Callers:
 *     MiEmptyWorkingSet @ 0x14000AF54 (MiEmptyWorkingSet.c)
 *     MiTrimWorkingSet @ 0x14000B9A4 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x14000BC74 (MiSimpleAging.c)
 *     MiTrimSharedPageFromViews @ 0x14002B250 (MiTrimSharedPageFromViews.c)
 *     MiValidFault @ 0x14003E340 (MiValidFault.c)
 *     MiFreeWsleList @ 0x140052390 (MiFreeWsleList.c)
 *     MiRemoveMappedPtes @ 0x14005C210 (MiRemoveMappedPtes.c)
 *     MiProtectPool @ 0x140065070 (MiProtectPool.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MiCrcStillIntact @ 0x1400EA158 (MiCrcStillIntact.c)
 *     MiNoFaultFound @ 0x140116D14 (MiNoFaultFound.c)
 *     MiConvertPrivateToDemandZero @ 0x14011E33C (MiConvertPrivateToDemandZero.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140152114 (MiDeprioritizeVirtualAddresses.c)
 *     MiDeletePteRange @ 0x1402151D4 (MiDeletePteRange.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140215448 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14021CEDC (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MmUpdateOldWorkingSetPages @ 0x14021ECC4 (MmUpdateOldWorkingSetPages.c)
 *     MiReplaceLockedPage @ 0x14021FEC0 (MiReplaceLockedPage.c)
 *     MiEliminateZeroPages @ 0x1404D4270 (MiEliminateZeroPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTbFlushType(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 192) & 7) != 0 )
    return (*(_BYTE *)(a1 + 192) & 7u) < 2 ? 2 : 0;
  else
    return 1LL;
}
