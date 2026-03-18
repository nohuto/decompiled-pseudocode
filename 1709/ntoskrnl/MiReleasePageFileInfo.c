/*
 * XREFs of MiReleasePageFileInfo @ 0x1400C0554
 * Callers:
 *     MiOutSwapWorkingSetCallback @ 0x140002340 (MiOutSwapWorkingSetCallback.c)
 *     MiProcessWsInSwapFault @ 0x140003660 (MiProcessWsInSwapFault.c)
 *     MiHandleForkTransitionPte @ 0x14000E3C0 (MiHandleForkTransitionPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14002D0C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MmSetAddressRangeModifiedEx @ 0x14002F6E0 (MmSetAddressRangeModifiedEx.c)
 *     MiFinishHardFault @ 0x14002FC50 (MiFinishHardFault.c)
 *     MiDeleteTransitionPte @ 0x1400317D0 (MiDeleteTransitionPte.c)
 *     NtGetWriteWatch @ 0x140031CA0 (NtGetWriteWatch.c)
 *     MiLockPageAndSetDirty @ 0x140032380 (MiLockPageAndSetDirty.c)
 *     MiRevertValidPte @ 0x140036C60 (MiRevertValidPte.c)
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     NtResetWriteWatch @ 0x14003D7F0 (NtResetWriteWatch.c)
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 *     MiCompleteProtoPteFault @ 0x140045530 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140049330 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x14004A320 (MiMigratePfn.c)
 *     MiDeleteSubsectionPages @ 0x14004C770 (MiDeleteSubsectionPages.c)
 *     MiDeleteValidSystemPage @ 0x14004D040 (MiDeleteValidSystemPage.c)
 *     MiDeletePteList @ 0x14004D590 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x14004E1C0 (MiDeletePteRun.c)
 *     MiPfnShareCountIsZero @ 0x14004F450 (MiPfnShareCountIsZero.c)
 *     MiDeleteBatch @ 0x140051140 (MiDeleteBatch.c)
 *     MiWsleFree @ 0x140052660 (MiWsleFree.c)
 *     MmUnmapViewInSystemCache @ 0x140053130 (MmUnmapViewInSystemCache.c)
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiReservePageFileSpace @ 0x14005CBF4 (MiReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x14005CFD0 (MiReservePageFileSpaceForPage.c)
 *     MiProtectPool @ 0x140065070 (MiProtectPool.c)
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     MiInPageSingleKernelStack @ 0x1400AD4B4 (MiInPageSingleKernelStack.c)
 *     MiLockCode @ 0x1400BCA50 (MiLockCode.c)
 *     MiLockPageTablePage @ 0x1400BE2E0 (MiLockPageTablePage.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiReleasePageFileSpace @ 0x1400CB9A0 (MiReleasePageFileSpace.c)
 *     MiSetSystemCodeProtection @ 0x1400DC208 (MiSetSystemCodeProtection.c)
 *     MiTrimSystemImagePages @ 0x1400DDEAC (MiTrimSystemImagePages.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
 *     MiWalkVaRange @ 0x1400EBE20 (MiWalkVaRange.c)
 *     MiResolveProtoCombine @ 0x1400EDBF4 (MiResolveProtoCombine.c)
 *     MiWriteComplete @ 0x1400EF800 (MiWriteComplete.c)
 *     MiDeleteClusterPage @ 0x140108CB0 (MiDeleteClusterPage.c)
 *     MiLockPagedAddress @ 0x140120470 (MiLockPagedAddress.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140156BE8 (MmDbgMarkPfnModifiedWorker.c)
 *     MiMakeOutswappedPageResident @ 0x1402125D4 (MiMakeOutswappedPageResident.c)
 *     MiSetPagesModified @ 0x140218768 (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x1402193DC (MmReplaceImportEntry.c)
 *     MmProtectSystemCacheView @ 0x14021A1C8 (MmProtectSystemCacheView.c)
 *     MiPurgeImageSection @ 0x14021F0FC (MiPurgeImageSection.c)
 *     MiBuildReservationCluster @ 0x1402246F4 (MiBuildReservationCluster.c)
 *     MiFreeModifiedReservations @ 0x140225BB0 (MiFreeModifiedReservations.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140226E40 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiCompleteSecureProcessFault @ 0x14022870C (MiCompleteSecureProcessFault.c)
 *     MiStoreMarkLockedPagesModified @ 0x14022C9B0 (MiStoreMarkLockedPagesModified.c)
 *     MiStoreWriteModifiedPages @ 0x14022CE80 (MiStoreWriteModifiedPages.c)
 *     MiUnlockStoreLockedPages @ 0x14022D744 (MiUnlockStoreLockedPages.c)
 *     MiFreeReservationRun @ 0x1404448E0 (MiFreeReservationRun.c)
 *     MiScanPagefileSpace @ 0x1406E4870 (MiScanPagefileSpace.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1400C0700 (MiCoalescePageFileBitmapsCache.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     MiStoreSetEvictPageFile @ 0x14022CBA8 (MiStoreSetEvictPageFile.c)
 *     MiClearPageFileHash @ 0x140231C5C (MiClearPageFileHash.c)
 */

LONG __fastcall MiReleasePageFileInfo(struct _KEVENT *a1, unsigned __int64 a2, char a3)
{
  unsigned __int16 v5; // dx
  unsigned int PteTimeStamp; // esi
  int v7; // ebp
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rax
  LONG result; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  PteTimeStamp = MiGetPteTimeStamp(a2);
  v7 = 0;
  v8 = (a2 >> 1) & 1;
  v9 = (a2 >> 2) & 1;
  v11 = *(_QWORD *)(v10 + 8LL * (v5 >> 12) + 5792);
  if ( (a3 & 1) != 0 )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v11 + 232);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v11 + 232));
  }
  else
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v11 + 232), &LockHandle);
  }
  v12 = *(_QWORD *)(v11 + 112);
  if ( (_DWORD)v8 )
  {
    _bittestandreset(*(signed __int32 **)(v12 + 32), PteTimeStamp);
    ++*(_QWORD *)(v11 + 48);
  }
  if ( (_DWORD)v9 )
  {
    if ( (a3 & 2) == 0 )
      MiClearPageFileHash(v11, PteTimeStamp);
    if ( (*(_BYTE *)(v11 + 204) & 0x40) != 0 )
    {
      MiStoreSetEvictPageFile(v11, PteTimeStamp);
      goto LABEL_21;
    }
    _bittestandreset(*(signed __int32 **)(v12 + 16), PteTimeStamp);
    v13 = ++*(_QWORD *)(v11 + 24);
    if ( PteTimeStamp < *(_DWORD *)(v11 + 120) )
      *(_DWORD *)(v11 + 120) = PteTimeStamp;
    ++*(_DWORD *)(v11 + 128);
    if ( v13 == 1 && (*(_BYTE *)(v11 + 206) & 1) != 0 )
      v7 = 1;
  }
  if ( ((_DWORD)v8 || !_bittest64(*(const signed __int64 **)(v12 + 32), PteTimeStamp))
    && ((_DWORD)v9 || !_bittest64(*(const signed __int64 **)(v12 + 16), PteTimeStamp)) )
  {
    MiCoalescePageFileBitmapsCache(v11, (unsigned int)v8, PteTimeStamp);
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(v11 + 256) + 856LL),
      (*(_DWORD *)(*(_QWORD *)(v11 + 256) + 856LL) & 0xFFFFFC00 | 0x200) + 1024);
  }
LABEL_21:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( (a3 & 1) == 0 )
    __writecr8(LockHandle.OldIrql);
  result = 1;
  if ( v7 == 1 )
    return KeSetEvent(a1 + 36, 0, 0);
  return result;
}
