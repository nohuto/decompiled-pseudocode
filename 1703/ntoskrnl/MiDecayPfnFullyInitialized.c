/*
 * XREFs of MiDecayPfnFullyInitialized @ 0x140016720
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140095B10 (MiCopyDataPageToImagePage.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiFinishHardFault @ 0x1400CBC40 (MiFinishHardFault.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 * Callees:
 *     MiRemoveDecayClusterTimer @ 0x1400168C8 (MiRemoveDecayClusterTimer.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

PSLIST_ENTRY __fastcall MiDecayPfnFullyInitialized(PSLIST_ENTRY ListEntry)
{
  int v2; // edi
  __int64 v3; // rsi
  unsigned __int64 *v4; // r8
  unsigned __int8 CurrentIrql; // al
  PSLIST_ENTRY result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v3 = (__int64)&ListEntry[0x5800000000LL] / 48;
  v4 = (unsigned __int64 *)(*(_QWORD *)(qword_14036C8F8 + 8 * ((*((_QWORD *)&ListEntry[2].Next + 1) >> 40) & 0x3FFLL))
                          + 2408LL);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = v4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v4);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)v4, (__int64)&LockHandle) )
  {
    KxWaitForLockOwnerShip(&LockHandle);
  }
  if ( (BYTE3(ListEntry[2].Next) & 8) != 0 )
  {
    if ( MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&ListEntry[1]) != v3 )
      goto LABEL_9;
    MiUnlinkPageFromList((ULONG_PTR)ListEntry);
    MiRemoveDecayClusterTimer(ListEntry);
  }
  v2 = 1;
LABEL_9:
  BYTE3(ListEntry[2].Next) &= ~8u;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (PSLIST_ENTRY)LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  if ( v2 == 1 )
    return RtlpInterlockedPushEntrySList(&stru_14036CBF0, ListEntry);
  return result;
}
