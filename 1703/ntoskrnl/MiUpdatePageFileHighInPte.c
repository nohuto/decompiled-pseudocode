/*
 * XREFs of MiUpdatePageFileHighInPte @ 0x14017D06C
 * Callers:
 *     MiWriteComplete @ 0x140014A50 (MiWriteComplete.c)
 *     MiDrainZeroLookasides @ 0x14001C448 (MiDrainZeroLookasides.c)
 *     MiClearPageFileHash @ 0x140035D80 (MiClearPageFileHash.c)
 *     MiStoreWriteModifiedPages @ 0x14005630C (MiStoreWriteModifiedPages.c)
 *     MiInsertInSystemSpace @ 0x140060AA0 (MiInsertInSystemSpace.c)
 *     MiResolvePageFileFault @ 0x140073C40 (MiResolvePageFileFault.c)
 *     MiMapPageFileHash @ 0x140075F48 (MiMapPageFileHash.c)
 *     MiOutSwapWorkingSetCallback @ 0x140079C70 (MiOutSwapWorkingSetCallback.c)
 *     MiActOnPte @ 0x14007B8E8 (MiActOnPte.c)
 *     MiCombinePte @ 0x14008AB80 (MiCombinePte.c)
 *     MmCopyToCachedPage @ 0x14009F980 (MmCopyToCachedPage.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiInsertCachedPte @ 0x1400A2790 (MiInsertCachedPte.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiClearNonPagedPtes @ 0x1400A7AB0 (MiClearNonPagedPtes.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiReservePageFileSpace @ 0x140104518 (MiReservePageFileSpace.c)
 *     MiRestoreTransitionPte @ 0x140104D70 (MiRestoreTransitionPte.c)
 *     MiGetSmallZeroPtes @ 0x140129AD0 (MiGetSmallZeroPtes.c)
 *     MiBuildReservationCluster @ 0x140139AAC (MiBuildReservationCluster.c)
 *     MiZeroPageThread @ 0x1401579F0 (MiZeroPageThread.c)
 *     MiTransferSoftwarePte @ 0x14017D0B8 (MiTransferSoftwarePte.c)
 *     MiExpandSpecialPool @ 0x140216C28 (MiExpandSpecialPool.c)
 *     MiRemoveSpecialPoolRange @ 0x140216E10 (MiRemoveSpecialPoolRange.c)
 *     MmAllocateSpecialPool @ 0x140217008 (MmAllocateSpecialPool.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14021A770 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiClearPfnSlist @ 0x14021EFA0 (MiClearPfnSlist.c)
 *     MiSetPfnSlist @ 0x14021F374 (MiSetPfnSlist.c)
 *     MiFreeReservationRun @ 0x1404CA0C8 (MiFreeReservationRun.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x14017D030 (MiReverseSwizzleInvalidPte.c)
 */

__int64 __fastcall MiUpdatePageFileHighInPte(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = 0;
  if ( a1 )
    v2 = MiReverseSwizzleInvalidPte(a1);
  return MiSwizzleInvalidPte((a2 << 32) | v2);
}
