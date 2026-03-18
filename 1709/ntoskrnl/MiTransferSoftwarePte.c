/*
 * XREFs of MiTransferSoftwarePte @ 0x14017C95C
 * Callers:
 *     MiOutSwapWorkingSetCallback @ 0x140002340 (MiOutSwapWorkingSetCallback.c)
 *     MiInitializePfn @ 0x140027CC0 (MiInitializePfn.c)
 *     MiAllocateKernelStackPages @ 0x140029AB0 (MiAllocateKernelStackPages.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14002D0C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteTransitionPte @ 0x1400317D0 (MiDeleteTransitionPte.c)
 *     MiRestoreTransitionPte @ 0x1400352D0 (MiRestoreTransitionPte.c)
 *     MiCompletePrivateZeroFault @ 0x140046F90 (MiCompletePrivateZeroFault.c)
 *     MiCreateSharedZeroPages @ 0x14004BDB0 (MiCreateSharedZeroPages.c)
 *     MiDeleteSubsectionPages @ 0x14004C770 (MiDeleteSubsectionPages.c)
 *     MiDeletePteList @ 0x14004D590 (MiDeletePteList.c)
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 *     MiReservePageFileSpaceForPage @ 0x14005CFD0 (MiReservePageFileSpaceForPage.c)
 *     MiMakePageAvoidRead @ 0x140076C10 (MiMakePageAvoidRead.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     MiWriteComplete @ 0x1400EF800 (MiWriteComplete.c)
 *     MiConfirmPageIsZero @ 0x1401026D0 (MiConfirmPageIsZero.c)
 *     MiFindFreePageFileSpace @ 0x14011A4C4 (MiFindFreePageFileSpace.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140226E40 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiUpdatePfnBackingStore @ 0x1402271CC (MiUpdatePfnBackingStore.c)
 *     MiStoreWriteModifiedPages @ 0x14022CE80 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     MiSwizzleInvalidPte @ 0x14017C938 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiTransferSoftwarePte(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 updated; // rax
  char v5; // r9
  __int16 v6; // r10

  if ( (a1 & 0x400) == 0 && (a4 & 4) == 0 )
    a1 &= 0xFFFFFFFFFFFFFFF9uLL;
  if ( a2 )
  {
    if ( a1 )
      updated = MiUpdatePageFileHighInPte(a1, a3);
    else
      updated = MiSwizzleInvalidPte((unsigned __int64)a3 << 32);
    a1 = updated ^ (unsigned __int16)(updated ^ (v6 << 12)) & 0xF000 | 4;
    if ( (v5 & 1) == 0 )
      a1 = updated ^ (unsigned __int16)(updated ^ (v6 << 12)) & 0xF000;
    if ( (v5 & 2) != 0 )
      return a1 | 2;
  }
  return a1;
}
