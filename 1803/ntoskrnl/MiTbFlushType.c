/*
 * XREFs of MiTbFlushType @ 0x14003B3C0
 * Callers:
 *     MiValidFault @ 0x14001ECF0 (MiValidFault.c)
 *     MiFreeWsleList @ 0x1400278B0 (MiFreeWsleList.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 *     MmProtectPool @ 0x14004B80C (MmProtectPool.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140052680 (MiDeprioritizeVirtualAddresses.c)
 *     MiDeletePagablePteRange @ 0x1400726A0 (MiDeletePagablePteRange.c)
 *     MiTrimSharedPageFromViews @ 0x140082660 (MiTrimSharedPageFromViews.c)
 *     MiEmptyWorkingSetInitiate @ 0x1400839D0 (MiEmptyWorkingSetInitiate.c)
 *     MiTrimWorkingSet @ 0x140083D80 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x140084154 (MiSimpleAging.c)
 *     MiCrcStillIntact @ 0x1400ADE10 (MiCrcStillIntact.c)
 *     MiNoFaultFound @ 0x1400B53AC (MiNoFaultFound.c)
 *     MiRemoveMappedPtes @ 0x14012ADA0 (MiRemoveMappedPtes.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14016A1C8 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MmUpdateOldWorkingSetPages @ 0x14025AB14 (MmUpdateOldWorkingSetPages.c)
 *     MiReplaceLockedPage @ 0x14025B7C8 (MiReplaceLockedPage.c)
 *     MiEliminateZeroPages @ 0x1404B3970 (MiEliminateZeroPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTbFlushType(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return (*(_BYTE *)(a1 + 184) & 7u) < 2 ? 2 : 0;
  else
    return 1LL;
}
