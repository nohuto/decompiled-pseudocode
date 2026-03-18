/*
 * XREFs of KeReleaseInStackQueuedSpinLock @ 0x1400F1C30
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14001C320 (CcMapAndCopyInToCache.c)
 *     MiWaitForInPageComplete @ 0x14002D860 (MiWaitForInPageComplete.c)
 *     CcSetFileSizesEx @ 0x140089D90 (CcSetFileSizesEx.c)
 *     NtCancelWaitCompletionPacket @ 0x1400E0F58 (NtCancelWaitCompletionPacket.c)
 *     IopCloseWaitCompletionPacket @ 0x1400E2760 (IopCloseWaitCompletionPacket.c)
 *     CcNotifyOfMappedWrite @ 0x1400EF1C8 (CcNotifyOfMappedWrite.c)
 *     MiMarkPxeAsShadowed @ 0x14017C11C (MiMarkPxeAsShadowed.c)
 *     PnprMarkOrMirrorPages @ 0x14042C918 (PnprMarkOrMirrorPages.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x14042EBCC (KiAddProcessorToGroupSchedulingDatabase.c)
 *     MmDuplicateMemory @ 0x14042F6D8 (MmDuplicateMemory.c)
 *     PopSleepDeviceList @ 0x140437778 (PopSleepDeviceList.c)
 *     PopSystemIrpCompletion @ 0x140437950 (PopSystemIrpCompletion.c)
 *     PopWakeDeviceList @ 0x140437D84 (PopWakeDeviceList.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __stdcall KeReleaseInStackQueuedSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  __int64 Next; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(LockHandle, retaddr);
    goto LABEL_4;
  }
  _m_prefetchw(LockHandle);
  Next = (__int64)LockHandle->LockQueue.Next;
  if ( LockHandle->LockQueue.Next )
    goto LABEL_6;
  if ( LockHandle != (PKLOCK_QUEUE_HANDLE)_InterlockedCompareExchange64(
                                            (volatile signed __int64 *)LockHandle->LockQueue.Lock,
                                            0LL,
                                            (signed __int64)LockHandle) )
  {
    Next = KxWaitForLockChainValid(LockHandle);
LABEL_6:
    LockHandle->LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
  }
LABEL_4:
  __writecr8(LockHandle->OldIrql);
}
