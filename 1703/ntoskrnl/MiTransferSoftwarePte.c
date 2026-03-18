/*
 * XREFs of MiTransferSoftwarePte @ 0x14017D0B8
 * Callers:
 *     MiBuildForkPte @ 0x140001E68 (MiBuildForkPte.c)
 *     MiWriteComplete @ 0x140014A50 (MiWriteComplete.c)
 *     MiStoreWriteModifiedPages @ 0x14005630C (MiStoreWriteModifiedPages.c)
 *     MiUpdatePfnBackingStore @ 0x140057400 (MiUpdatePfnBackingStore.c)
 *     MiOutSwapWorkingSetCallback @ 0x140079C70 (MiOutSwapWorkingSetCallback.c)
 *     MiDeleteTransitionPte @ 0x14007A23C (MiDeleteTransitionPte.c)
 *     MiFindFreePageFileSpace @ 0x14007DD54 (MiFindFreePageFileSpace.c)
 *     MiMakePageAvoidRead @ 0x1400A08D0 (MiMakePageAvoidRead.c)
 *     MiCreateSharedZeroPages @ 0x1400B79A0 (MiCreateSharedZeroPages.c)
 *     MiCompletePrivateZeroFault @ 0x1400BC2F0 (MiCompletePrivateZeroFault.c)
 *     MiDeleteSubsectionPages @ 0x1400C4590 (MiDeleteSubsectionPages.c)
 *     MiDeletePteList @ 0x1400C5000 (MiDeletePteList.c)
 *     MiDecommitPages @ 0x1400D2D20 (MiDecommitPages.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1401039D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiConfirmPageIsZero @ 0x1401041F0 (MiConfirmPageIsZero.c)
 *     MiReservePageFileSpaceForPage @ 0x1401048E0 (MiReservePageFileSpaceForPage.c)
 *     MiRestoreTransitionPte @ 0x140104D70 (MiRestoreTransitionPte.c)
 *     MiAllocateKernelStackPages @ 0x1401059E0 (MiAllocateKernelStackPages.c)
 *     MiInitializePfn @ 0x1401099F8 (MiInitializePfn.c)
 *     MmPurgeSection @ 0x14010B4A0 (MmPurgeSection.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14021A770 (MiTrimUnusedPageFileRegionsWorker.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 *     MiSwizzleInvalidPte @ 0x14017D094 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiTransferSoftwarePte(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 updated; // rax
  __int16 v5; // r8
  char v6; // r9

  if ( (a1 & 0x400) == 0 && (a4 & 4) == 0 )
    a1 &= 0xFFFFFFFFFFFFFFF9uLL;
  if ( a2 )
  {
    if ( a1 )
      updated = MiUpdatePageFileHighInPte(a1, a3);
    else
      updated = MiSwizzleInvalidPte((unsigned __int64)a3 << 32);
    a1 = (unsigned __int16)(updated ^ (v5 << 12)) & 0xF000 ^ (unsigned __int64)updated;
    if ( (v6 & 1) != 0 )
      a1 |= 4uLL;
    if ( (v6 & 2) != 0 )
      return a1 | 2;
  }
  return a1;
}
