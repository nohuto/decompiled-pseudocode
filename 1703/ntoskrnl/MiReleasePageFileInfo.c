/*
 * XREFs of MiReleasePageFileInfo @ 0x1400ABFD4
 * Callers:
 *     MiBuildForkPte @ 0x140001E68 (MiBuildForkPte.c)
 *     MiDeleteClusterPage @ 0x14000D020 (MiDeleteClusterPage.c)
 *     MiInPageSingleKernelStack @ 0x140011AE8 (MiInPageSingleKernelStack.c)
 *     MiProcessWsInSwapFault @ 0x140011F40 (MiProcessWsInSwapFault.c)
 *     MiWriteComplete @ 0x140014A50 (MiWriteComplete.c)
 *     MiStoreMarkLockedPagesModified @ 0x140026814 (MiStoreMarkLockedPagesModified.c)
 *     MiUnlockStoreLockedPages @ 0x14002E4F4 (MiUnlockStoreLockedPages.c)
 *     MiLockPagedAddress @ 0x140036C60 (MiLockPagedAddress.c)
 *     MiStoreWriteModifiedPages @ 0x14005630C (MiStoreWriteModifiedPages.c)
 *     MiSetSystemCodeProtection @ 0x14006C1E0 (MiSetSystemCodeProtection.c)
 *     MiTrimSystemImagePages @ 0x14006D3FC (MiTrimSystemImagePages.c)
 *     MiOutSwapWorkingSetCallback @ 0x140079C70 (MiOutSwapWorkingSetCallback.c)
 *     MiDeleteTransitionPte @ 0x14007A23C (MiDeleteTransitionPte.c)
 *     MiWalkVaRange @ 0x14007B280 (MiWalkVaRange.c)
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     MiProtectPool @ 0x1400A5D90 (MiProtectPool.c)
 *     MmUnmapViewInSystemCache @ 0x1400A83B0 (MmUnmapViewInSystemCache.c)
 *     MiLockPageTablePage @ 0x1400B50F0 (MiLockPageTablePage.c)
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiResolveTransitionFault @ 0x1400C2260 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x1400C3D80 (MiMigratePfn.c)
 *     MiDeleteSubsectionPages @ 0x1400C4590 (MiDeleteSubsectionPages.c)
 *     MiDeletePteList @ 0x1400C5000 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1400C5B70 (MiDeletePteRun.c)
 *     MiPfnShareCountIsZero @ 0x1400C6560 (MiPfnShareCountIsZero.c)
 *     MiDeleteBatch @ 0x1400C8490 (MiDeleteBatch.c)
 *     MiDeleteValidSystemPage @ 0x1400C90C0 (MiDeleteValidSystemPage.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiFinishHardFault @ 0x1400CBC40 (MiFinishHardFault.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiMoveDirtyBitsToPfns @ 0x1400D10C0 (MiMoveDirtyBitsToPfns.c)
 *     MiDecommitPages @ 0x1400D2D20 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     MiWsleFree @ 0x1400D6AB0 (MiWsleFree.c)
 *     MiRevertValidPte @ 0x1400F9CF0 (MiRevertValidPte.c)
 *     MiMakeCombineCandidateClean @ 0x140100A60 (MiMakeCombineCandidateClean.c)
 *     MiLockPageAndSetDirty @ 0x140100B80 (MiLockPageAndSetDirty.c)
 *     MiLockCode @ 0x140100CD0 (MiLockCode.c)
 *     MmSetAddressRangeModifiedEx @ 0x140101470 (MmSetAddressRangeModifiedEx.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1401039D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpace @ 0x140104518 (MiReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x1401048E0 (MiReservePageFileSpaceForPage.c)
 *     MiResolveProtoCombine @ 0x140105DB0 (MiResolveProtoCombine.c)
 *     MiReleasePageFileSpace @ 0x14010AE90 (MiReleasePageFileSpace.c)
 *     MmPurgeSection @ 0x14010B4A0 (MmPurgeSection.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiBuildReservationCluster @ 0x140139AAC (MiBuildReservationCluster.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140164FB4 (MmDbgMarkPfnModifiedWorker.c)
 *     MiMakeOutswappedPageResident @ 0x14020B6DC (MiMakeOutswappedPageResident.c)
 *     MiSetPagesModified @ 0x140210F54 (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x140211B08 (MmReplaceImportEntry.c)
 *     MmProtectSystemCacheView @ 0x1402126D8 (MmProtectSystemCacheView.c)
 *     MiPurgeImageSection @ 0x140215D80 (MiPurgeImageSection.c)
 *     MiFreeModifiedReservations @ 0x14021A050 (MiFreeModifiedReservations.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14021A770 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiCompleteSecureProcessFault @ 0x14021BE20 (MiCompleteSecureProcessFault.c)
 *     MiHandleForkTransitionPte @ 0x1402232C0 (MiHandleForkTransitionPte.c)
 *     MiFreeReservationRun @ 0x1404CA0C8 (MiFreeReservationRun.c)
 *     MiScanPagefileSpace @ 0x1406B7C30 (MiScanPagefileSpace.c)
 * Callees:
 *     MiClearPageFileHash @ 0x140035D80 (MiClearPageFileHash.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1400AC1E0 (MiCoalescePageFileBitmapsCache.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 */

void __fastcall MiReleasePageFileInfo(struct _KEVENT *a1, unsigned __int64 a2, char a3)
{
  unsigned __int16 v4; // dx
  __int64 v5; // r15
  __int64 v6; // rbx
  int v7; // ebp
  unsigned int PteTimeStamp; // esi
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v5 = (a2 >> 1) & 1;
  v6 = (a2 >> 2) & 1;
  v7 = 0;
  PteTimeStamp = MiGetPteTimeStamp(a2);
  v10 = *(_QWORD *)(v9 + 8LL * (v4 >> 12) + 5600);
  if ( (a3 & 1) != 0 )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 232);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v10 + 232));
  }
  else
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 232), &LockHandle);
  }
  v11 = *(_QWORD *)(v10 + 112);
  if ( (_DWORD)v5 )
  {
    _bittestandreset(*(signed __int32 **)(v11 + 32), PteTimeStamp);
    ++*(_QWORD *)(v10 + 48);
  }
  if ( (_DWORD)v6 )
  {
    if ( (a3 & 2) == 0 )
      MiClearPageFileHash(v10, PteTimeStamp);
    if ( (*(_BYTE *)(v10 + 204) & 0x40) != 0 )
    {
      v12 = *(_QWORD *)(v10 + 256);
      _bittestandreset(*(signed __int32 **)(*(_QWORD *)(v10 + 112) + 32LL), PteTimeStamp);
      if ( ++*(_DWORD *)(v10 + 200) == 256 || *(_QWORD *)(v12 + 5760) < 0xA0uLL )
        KeSetEvent((PRKEVENT)(v12 + 1224), 0, 0);
      goto LABEL_23;
    }
    _bittestandreset(*(signed __int32 **)(v11 + 16), PteTimeStamp);
    v13 = ++*(_QWORD *)(v10 + 24);
    if ( PteTimeStamp < *(_DWORD *)(v10 + 120) )
      *(_DWORD *)(v10 + 120) = PteTimeStamp;
    ++*(_DWORD *)(v10 + 128);
    if ( v13 == 1 && (*(_BYTE *)(v10 + 206) & 1) != 0 )
      v7 = 1;
  }
  if ( ((_DWORD)v5 || !_bittest64(*(const signed __int64 **)(v11 + 32), PteTimeStamp))
    && ((_DWORD)v6 || !_bittest64(*(const signed __int64 **)(v11 + 16), PteTimeStamp)) )
  {
    MiCoalescePageFileBitmapsCache(v10, (unsigned int)v5, PteTimeStamp);
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(v10 + 256) + 904LL),
      ((*(_DWORD *)(*(_QWORD *)(v10 + 256) + 904LL) & 0xFFFFFC00) + 1024) | 0x200);
  }
LABEL_23:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( (a3 & 1) == 0 )
    __writecr8(LockHandle.OldIrql);
  if ( v7 == 1 )
    KeSetEvent(a1 + 38, 0, 0);
}
