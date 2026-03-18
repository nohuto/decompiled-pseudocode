/*
 * XREFs of MiLocateAddress @ 0x1400C2010
 * Callers:
 *     MiCloneVads @ 0x1400018B8 (MiCloneVads.c)
 *     MmOutSwapVirtualAddresses @ 0x140004100 (MmOutSwapVirtualAddresses.c)
 *     MiImagePageOk @ 0x1400214A8 (MiImagePageOk.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14002CA88 (MiCaptureWriteWatchDirtyBit.c)
 *     MmStoreDecommitVirtualMemory @ 0x14003ACDC (MmStoreDecommitVirtualMemory.c)
 *     MiProtoFault @ 0x14006B9C4 (MiProtoFault.c)
 *     MiSharedVaToPartition @ 0x1400739A4 (MiSharedVaToPartition.c)
 *     MiResolvePageFileFault @ 0x140073C40 (MiResolvePageFileFault.c)
 *     NtLockVirtualMemory @ 0x14007687C (NtLockVirtualMemory.c)
 *     MiCombinePte @ 0x14008AB80 (MiCombinePte.c)
 *     MiObtainReferencedSecureVad @ 0x140099160 (MiObtainReferencedSecureVad.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiProbeLockFrame @ 0x1400B3EF0 (MiProbeLockFrame.c)
 *     MiCreateSharedZeroPages @ 0x1400B79A0 (MiCreateSharedZeroPages.c)
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x1400BA780 (MiResolveDemandZeroFault.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiResolveProtoPteFault @ 0x1400C0C90 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1400C2260 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x1400C3D80 (MiMigratePfn.c)
 *     NtUnlockVirtualMemory @ 0x1400FA8B0 (NtUnlockVirtualMemory.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiValidFault @ 0x1400FCBC0 (MiValidFault.c)
 *     MiUpdatePrefetchPriority @ 0x1400FCFF0 (MiUpdatePrefetchPriority.c)
 *     MiCrcStillIntact @ 0x1400FF430 (MiCrcStillIntact.c)
 *     MiTrimSharedPageFromViews @ 0x1400FF670 (MiTrimSharedPageFromViews.c)
 *     MiReservePageFileSpace @ 0x140104518 (MiReservePageFileSpace.c)
 *     MiResolveMappedFileFault @ 0x1401060D0 (MiResolveMappedFileFault.c)
 *     MiComputeFaultNode @ 0x140106888 (MiComputeFaultNode.c)
 *     MiInitializeReadInProgressPfn @ 0x140109270 (MiInitializeReadInProgressPfn.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiCanGrantExecute @ 0x14021BD68 (MiCanGrantExecute.c)
 *     MiCloneProcessAddressSpace @ 0x14041DF70 (MiCloneProcessAddressSpace.c)
 *     MiUnlockVadRangeHelper @ 0x14054B70C (MiUnlockVadRangeHelper.c)
 *     MiLockVadRangeHelper @ 0x14054B948 (MiLockVadRangeHelper.c)
 *     MmCheckForSafeExecution @ 0x1406B80F0 (MmCheckForSafeExecution.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiLocateAddress(unsigned __int64 a1)
{
  _KPROCESS *Process; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r8
  int v4; // ecx

  Process = KeGetCurrentThread()->ApcState.Process;
  result = Process[2].Affinity.Bitmap[5];
  if ( !result )
    return 0LL;
  v3 = a1 >> 12;
  if ( a1 >> 12 < (*(unsigned int *)(result + 24) | ((unsigned __int64)*(unsigned __int8 *)(result + 32) << 32))
    || v3 > (*(unsigned int *)(result + 28) | ((unsigned __int64)*(unsigned __int8 *)(result + 33) << 32)) )
  {
    result = Process[2].Affinity.Bitmap[4];
    while ( result )
    {
      if ( v3 <= (*(unsigned int *)(result + 28) | ((unsigned __int64)*(unsigned __int8 *)(result + 33) << 32)) )
        v4 = -(v3 < (*(unsigned int *)(result + 24) | ((unsigned __int64)*(unsigned __int8 *)(result + 32) << 32)));
      else
        v4 = 1;
      if ( v4 < 0 )
      {
        result = *(_QWORD *)result;
      }
      else
      {
        if ( v4 <= 0 )
        {
          Process[2].Affinity.Bitmap[5] = result;
          return result;
        }
        result = *(_QWORD *)(result + 8);
      }
    }
    return 0LL;
  }
  return result;
}
