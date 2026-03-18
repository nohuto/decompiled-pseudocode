/*
 * XREFs of MiLocateAddress @ 0x140033EE0
 * Callers:
 *     MiResolveProtoPteFault @ 0x140015220 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x1400196F0 (MiResolveDemandZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 *     MiProbeLockFrame @ 0x140020C00 (MiProbeLockFrame.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MiCombinePte @ 0x140040950 (MiCombinePte.c)
 *     MiInitializeReadInProgressPfn @ 0x140047D40 (MiInitializeReadInProgressPfn.c)
 *     NtUnlockVirtualMemory @ 0x14004E260 (NtUnlockVirtualMemory.c)
 *     MiReservePageFileSpace @ 0x140053430 (MiReservePageFileSpace.c)
 *     MiResolveMappedFileFault @ 0x140056F30 (MiResolveMappedFileFault.c)
 *     MiComputeFaultNode @ 0x1400577A4 (MiComputeFaultNode.c)
 *     MiImagePageOk @ 0x140057EB0 (MiImagePageOk.c)
 *     MiTrimSharedPageFromViews @ 0x140082660 (MiTrimSharedPageFromViews.c)
 *     MmOutSwapVirtualAddresses @ 0x14009C194 (MmOutSwapVirtualAddresses.c)
 *     MiCreateSharedZeroPages @ 0x1400A2810 (MiCreateSharedZeroPages.c)
 *     MiCrcStillIntact @ 0x1400ADE10 (MiCrcStillIntact.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400AE1C8 (MiCaptureWriteWatchDirtyBit.c)
 *     MiUpdatePrefetchPriority @ 0x1400AE9F0 (MiUpdatePrefetchPriority.c)
 *     MmStoreDecommitVirtualMemory @ 0x1400CFD8C (MmStoreDecommitVirtualMemory.c)
 *     MiLockStealUserVm @ 0x1400D5854 (MiLockStealUserVm.c)
 *     MiObtainReferencedSecureVad @ 0x1400E45B0 (MiObtainReferencedSecureVad.c)
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x14011B910 (MiMigratePfn.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     NtLockVirtualMemory @ 0x14013B8F4 (NtLockVirtualMemory.c)
 *     MiCloneVads @ 0x140140C44 (MiCloneVads.c)
 *     MiResolvePageFileFault @ 0x140151874 (MiResolvePageFileFault.c)
 *     MiSharedVaToPartition @ 0x1401528B0 (MiSharedVaToPartition.c)
 *     MiCanGrantExecute @ 0x140261800 (MiCanGrantExecute.c)
 *     MiFindPlaceholderVadToReplace @ 0x14026842C (MiFindPlaceholderVadToReplace.c)
 *     MiUnlockVadRangeHelper @ 0x1404BFFFC (MiUnlockVadRangeHelper.c)
 *     MiLockVadRangeHelper @ 0x1404C0260 (MiLockVadRangeHelper.c)
 *     MiCloneProcessAddressSpace @ 0x1405BF2F8 (MiCloneProcessAddressSpace.c)
 *     MiCoalescePlaceholderAllocations @ 0x14074D2C8 (MiCoalescePlaceholderAllocations.c)
 *     MmCheckForSafeExecution @ 0x14074F190 (MmCheckForSafeExecution.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiLocateAddress(unsigned __int64 a1)
{
  _KPROCESS *Process; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rdx

  Process = KeGetCurrentThread()->ApcState.Process;
  result = Process[2].Affinity.Bitmap[5];
  if ( !result )
    return 0LL;
  v3 = a1 >> 12;
  if ( a1 >> 12 < (*(unsigned int *)(result + 24) | ((unsigned __int64)*(unsigned __int8 *)(result + 32) << 32))
    || v3 > (*(unsigned int *)(result + 28) | ((unsigned __int64)*(unsigned __int8 *)(result + 33) << 32)) )
  {
    v4 = Process[2].Affinity.Bitmap[4];
    while ( v4 )
    {
      if ( v3 > (*(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32)) )
      {
        v4 = *(_QWORD *)(v4 + 8);
      }
      else
      {
        if ( v3 >= (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)) )
        {
          Process[2].Affinity.Bitmap[5] = v4;
          return v4;
        }
        v4 = *(_QWORD *)v4;
      }
    }
    return 0LL;
  }
  return result;
}
