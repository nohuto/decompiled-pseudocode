/*
 * XREFs of MiTransferSoftwarePte @ 0x1401A6760
 * Callers:
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     MiOutSwapWorkingSetPte @ 0x14000E4B0 (MiOutSwapWorkingSetPte.c)
 *     MiCompletePrivateZeroFault @ 0x140014310 (MiCompletePrivateZeroFault.c)
 *     MiDeleteSubsectionPages @ 0x140016E90 (MiDeleteSubsectionPages.c)
 *     MiDeletePteList @ 0x140028C70 (MiDeletePteList.c)
 *     MiDeleteTransitionPte @ 0x140052AA8 (MiDeleteTransitionPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140052D00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x140053840 (MiReservePageFileSpaceForPage.c)
 *     MiRestoreTransitionPte @ 0x140053D40 (MiRestoreTransitionPte.c)
 *     MmPurgeSection @ 0x1400542A0 (MmPurgeSection.c)
 *     MiInitializePfn @ 0x140056084 (MiInitializePfn.c)
 *     MiFindFreePageFileSpace @ 0x14009CC84 (MiFindFreePageFileSpace.c)
 *     MiCreateSharedZeroPages @ 0x1400A2810 (MiCreateSharedZeroPages.c)
 *     MiUpdatePfnBackingStore @ 0x1400D6420 (MiUpdatePfnBackingStore.c)
 *     MiStoreWriteModifiedPages @ 0x1400D6708 (MiStoreWriteModifiedPages.c)
 *     MiMakePageAvoidRead @ 0x140110E10 (MiMakePageAvoidRead.c)
 *     MiAllocateKernelStackPages @ 0x1401278E0 (MiAllocateKernelStackPages.c)
 *     MiWriteComplete @ 0x140134890 (MiWriteComplete.c)
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x1401A6244 (MiRewriteTrimPteAsDemandZero.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14025FF60 (MiTrimUnusedPageFileRegionsWorker.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 *     MiSwizzleInvalidPte @ 0x1401A673C (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiTransferSoftwarePte(unsigned __int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 result; // rax
  __int64 updated; // rax
  char v6; // r9
  __int16 v7; // r10
  __int64 v8; // rdx

  result = a1 & ((-(__int64)(((a1 >> 10) & 1) != 0) & 0xFFFFFFFFFFFFF808uLL) - 9);
  if ( ((a1 >> 10) & 1) == 0 && (a4 & 4) == 0 )
    result &= 0xFFFFFFFFFFFFFFF9uLL;
  if ( a2 )
  {
    if ( result )
      updated = MiUpdatePageFileHighInPte(result, a3);
    else
      updated = MiSwizzleInvalidPte((unsigned __int64)a3 << 32);
    v8 = updated ^ (unsigned __int16)(updated ^ (v7 << 12)) & 0xF000;
    result = v8 | 4;
    if ( (v6 & 1) == 0 )
      result = v8;
    if ( (v6 & 2) != 0 )
      return result | 2;
  }
  return result;
}
