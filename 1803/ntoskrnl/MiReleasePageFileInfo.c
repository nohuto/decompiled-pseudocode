/*
 * XREFs of MiReleasePageFileInfo @ 0x1400D6FBC
 * Callers:
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     MiOutSwapWorkingSetPte @ 0x14000E4B0 (MiOutSwapWorkingSetPte.c)
 *     MiDeleteVa @ 0x140011580 (MiDeleteVa.c)
 *     MiAllocateWsle @ 0x1400161C0 (MiAllocateWsle.c)
 *     MiDeleteSubsectionPages @ 0x140016E90 (MiDeleteSubsectionPages.c)
 *     MmUnmapViewInSystemCache @ 0x140018AE0 (MmUnmapViewInSystemCache.c)
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     MiDispatchFault @ 0x14001D2A0 (MiDispatchFault.c)
 *     MiLockPageTablePage @ 0x1400211A0 (MiLockPageTablePage.c)
 *     MiMoveDirtyBitsToPfns @ 0x140023A70 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x140024440 (NtGetWriteWatch.c)
 *     MiWsleFree @ 0x140027A70 (MiWsleFree.c)
 *     MiDeleteValidSystemPage @ 0x140028710 (MiDeleteValidSystemPage.c)
 *     MiDeletePteList @ 0x140028C70 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x14002A950 (MiDeletePteRun.c)
 *     MiPfnShareCountIsZero @ 0x14002B7A0 (MiPfnShareCountIsZero.c)
 *     MiDeleteBatch @ 0x14002D060 (MiDeleteBatch.c)
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 *     MmProtectPool @ 0x14004B80C (MmProtectPool.c)
 *     MiWalkVaRange @ 0x14004FC40 (MiWalkVaRange.c)
 *     MiReleasePageFileSpace @ 0x140051890 (MiReleasePageFileSpace.c)
 *     MiDeleteTransitionPte @ 0x140052AA8 (MiDeleteTransitionPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140052D00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpace @ 0x140053430 (MiReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x140053840 (MiReservePageFileSpaceForPage.c)
 *     MmPurgeSection @ 0x1400542A0 (MmPurgeSection.c)
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x140058068 (MiResolveProtoCombine.c)
 *     MiFinishHardFault @ 0x140058B10 (MiFinishHardFault.c)
 *     MiMakeCombineCandidateClean @ 0x1400AE0C0 (MiMakeCombineCandidateClean.c)
 *     MiInPageSingleKernelStack @ 0x1400B2E48 (MiInPageSingleKernelStack.c)
 *     MiStoreMarkLockedPagesModified @ 0x1400BEF58 (MiStoreMarkLockedPagesModified.c)
 *     MiUnlockStoreLockedPages @ 0x1400BF3E0 (MiUnlockStoreLockedPages.c)
 *     MiStoreWriteModifiedPages @ 0x1400D6708 (MiStoreWriteModifiedPages.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x14011B910 (MiMigratePfn.c)
 *     MiLockPageAndSetDirty @ 0x1401248B8 (MiLockPageAndSetDirty.c)
 *     MmSetAddressRangeModifiedEx @ 0x140124A90 (MmSetAddressRangeModifiedEx.c)
 *     MiRevertValidPte @ 0x140125BF0 (MiRevertValidPte.c)
 *     MiWriteComplete @ 0x140134890 (MiWriteComplete.c)
 *     MiLockCode @ 0x14013AB00 (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x14013EB40 (MiSetSystemCodeProtection.c)
 *     MiTrimSystemImagePages @ 0x14013FAEC (MiTrimSystemImagePages.c)
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 *     MiLockPagedAddress @ 0x14014B3DC (MiLockPagedAddress.c)
 *     MiBuildReservationCluster @ 0x14015020C (MiBuildReservationCluster.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1401830BC (MmDbgMarkPfnModifiedWorker.c)
 *     MiMakeOutswappedPageResident @ 0x140250B10 (MiMakeOutswappedPageResident.c)
 *     MiSetPagesModified @ 0x14025545C (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x140256048 (MmReplaceImportEntry.c)
 *     MiPurgeImageSection @ 0x14025ACE0 (MiPurgeImageSection.c)
 *     MiFreeModifiedReservations @ 0x14025F79C (MiFreeModifiedReservations.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14025FF60 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiCompleteSecureProcessFault @ 0x1402618AC (MiCompleteSecureProcessFault.c)
 *     MiHandleForkTransitionPte @ 0x14026AEC0 (MiHandleForkTransitionPte.c)
 *     MiFreeReservationRun @ 0x1405927B8 (MiFreeReservationRun.c)
 *     MiScanPagefileSpace @ 0x14074EC90 (MiScanPagefileSpace.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiStoreSetEvictPageFile @ 0x1400C519C (MiStoreSetEvictPageFile.c)
 *     MiClearPageFileHash @ 0x1400C7EC8 (MiClearPageFileHash.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1400D7170 (MiCoalescePageFileBitmapsCache.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
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
  v11 = *(_QWORD *)(v10 + 8LL * (v5 >> 12) + 6880);
  if ( (a3 & 1) != 0 )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v11 + 232);
    KxAcquireQueuedSpinLock(&LockHandle, v11 + 232);
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
    v13 = *(_QWORD *)(v11 + 24) + 1LL;
    *(_QWORD *)(v11 + 24) = v13;
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
