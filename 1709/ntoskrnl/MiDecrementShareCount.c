/*
 * XREFs of MiDecrementShareCount @ 0x1400EB4C0
 * Callers:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14002D0C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiCompletePrivateZeroFault @ 0x140046F90 (MiCompletePrivateZeroFault.c)
 *     MiDeletePteList @ 0x14004D590 (MiDeletePteList.c)
 *     MiWsleFree @ 0x140052660 (MiWsleFree.c)
 *     MmUnmapViewInSystemCache @ 0x140053130 (MmUnmapViewInSystemCache.c)
 *     MiMakeSystemCacheRangeValid @ 0x140079590 (MiMakeSystemCacheRangeValid.c)
 *     MiFinishLastForkPageTable @ 0x1400CED2C (MiFinishLastForkPageTable.c)
 *     MiTrimSystemImagePages @ 0x1400DDEAC (MiTrimSystemImagePages.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
 *     MiLockAndDecrementShareCount @ 0x1400EACDC (MiLockAndDecrementShareCount.c)
 *     MiOutPageSingleKernelStack @ 0x1400EAD50 (MiOutPageSingleKernelStack.c)
 *     MiDeletePageTableHierarchy @ 0x1400EB190 (MiDeletePageTableHierarchy.c)
 *     MiFreeUnmappedPageTables @ 0x1400F6C7C (MiFreeUnmappedPageTables.c)
 *     MiAddSystemPageTableToList @ 0x1400F72E0 (MiAddSystemPageTableToList.c)
 *     MiConfirmPageIsZero @ 0x1401026D0 (MiConfirmPageIsZero.c)
 *     MmOutSwapProcess @ 0x140111FF0 (MmOutSwapProcess.c)
 *     MiFreeContiguousPages @ 0x140118318 (MiFreeContiguousPages.c)
 *     MiDeleteTopLevelPage @ 0x14017BDD4 (MiDeleteTopLevelPage.c)
 *     MiPurgeSubsection @ 0x1402115B4 (MiPurgeSubsection.c)
 *     MiPurgeImageSection @ 0x14021F0FC (MiPurgeImageSection.c)
 *     MmFreeSpecialPool @ 0x140220DA4 (MmFreeSpecialPool.c)
 *     MiDecrementLargeSubsections @ 0x140222780 (MiDecrementLargeSubsections.c)
 *     MiBuildReservationCluster @ 0x1402246F4 (MiBuildReservationCluster.c)
 *     MiInitializeProtoPfn @ 0x14022E010 (MiInitializeProtoPfn.c)
 *     MiDuplicateCloneLeaf @ 0x14022FED0 (MiDuplicateCloneLeaf.c)
 *     MiConvertStandbyToProto @ 0x140231350 (MiConvertStandbyToProto.c)
 *     MiReloadBootLoadedDrivers @ 0x140837458 (MiReloadBootLoadedDrivers.c)
 *     MmFreeLoaderBlock @ 0x1408383C8 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x14004F450 (MiPfnShareCountIsZero.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecrementShareCount(__int64 a1)
{
  char v1; // dl
  __int64 v2; // rdx

  v1 = *(_BYTE *)(a1 + 34);
  if ( (v1 & 7) != 6 )
    KeBugCheckEx(0x4Eu, 0x99uLL, (a1 + 0x58000000000LL) / 48, v1 & 7, *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  v2 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v2 ^ (((v2 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v2) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v2 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    return MiPfnShareCountIsZero(a1, 0LL);
  else
    return 2LL;
}
