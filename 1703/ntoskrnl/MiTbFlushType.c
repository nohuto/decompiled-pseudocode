/*
 * XREFs of MiTbFlushType @ 0x14007FA04
 * Callers:
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14007C6D8 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiSimpleAging @ 0x14007EAB8 (MiSimpleAging.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14007F294 (MiDeprioritizeVirtualAddresses.c)
 *     MiTrimWorkingSet @ 0x14007F5E8 (MiTrimWorkingSet.c)
 *     MiConvertPrivateToDemandZero @ 0x14007F8B0 (MiConvertPrivateToDemandZero.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiProtectPool @ 0x1400A5D90 (MiProtectPool.c)
 *     MiNoFaultFound @ 0x1400B0400 (MiNoFaultFound.c)
 *     MiFreeWsleList @ 0x1400D6F10 (MiFreeWsleList.c)
 *     MiValidFault @ 0x1400FCBC0 (MiValidFault.c)
 *     MiRemoveMappedPtes @ 0x1400FD140 (MiRemoveMappedPtes.c)
 *     MiCrcStillIntact @ 0x1400FF430 (MiCrcStillIntact.c)
 *     MiTrimSharedPageFromViews @ 0x1400FF670 (MiTrimSharedPageFromViews.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiEmptyWorkingSet @ 0x140136528 (MiEmptyWorkingSet.c)
 *     MiDeletePteRange @ 0x14013BCF4 (MiDeletePteRange.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14013F704 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MmUpdateOldWorkingSetPages @ 0x140215BEC (MmUpdateOldWorkingSetPages.c)
 *     MiReplaceLockedPage @ 0x14021670C (MiReplaceLockedPage.c)
 *     MiEliminateZeroPages @ 0x1404CCB30 (MiEliminateZeroPages.c)
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
