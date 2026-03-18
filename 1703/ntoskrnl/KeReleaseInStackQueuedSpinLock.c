/*
 * XREFs of KeReleaseInStackQueuedSpinLock @ 0x14012B570
 * Callers:
 *     MiWaitForInPageComplete @ 0x140097510 (MiWaitForInPageComplete.c)
 *     CcMapAndCopyInToCache @ 0x14009EF20 (CcMapAndCopyInToCache.c)
 *     CcSetFileSizesEx @ 0x1400AA8C0 (CcSetFileSizesEx.c)
 *     MiMarkPxeAsShadowed @ 0x14017C994 (MiMarkPxeAsShadowed.c)
 *     PopWakeDeviceList @ 0x140408914 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x140408A78 (PopSleepDeviceList.c)
 *     PopSystemIrpCompletion @ 0x14040A9E0 (PopSystemIrpCompletion.c)
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 *     PnprMarkOrMirrorPages @ 0x1404178F8 (PnprMarkOrMirrorPages.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x140419348 (KiAddProcessorToGroupSchedulingDatabase.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __stdcall KeReleaseInStackQueuedSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(LockHandle, retaddr);
    goto LABEL_4;
  }
  _m_prefetchw(LockHandle);
  Next = LockHandle->LockQueue.Next;
  if ( LockHandle->LockQueue.Next )
    goto LABEL_6;
  if ( LockHandle != (PKLOCK_QUEUE_HANDLE)_InterlockedCompareExchange64(
                                            (volatile signed __int64 *)LockHandle->LockQueue.Lock,
                                            0LL,
                                            (signed __int64)LockHandle) )
  {
    Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(LockHandle);
LABEL_6:
    LockHandle->LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
  }
LABEL_4:
  __writecr8(LockHandle->OldIrql);
}
