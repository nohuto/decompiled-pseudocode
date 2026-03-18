/*
 * XREFs of WmipNotificationIrpCancel @ 0x140019F40
 * Callers:
 *     <none>
 * Callees:
 *     WmipClearIrpObjectList @ 0x140019FA8 (WmipClearIrpObjectList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 */

void __fastcall WmipNotificationIrpCancel(__int64 a1, IRP *a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &WmipCancelSpinLock;
  KxAcquireQueuedSpinLock(&LockHandle);
  WmipClearIrpObjectList(a2);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeReleaseQueuedSpinLock(7uLL, a2->CancelIrql);
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = -1073741536;
  IofCompleteRequest(a2, 0);
}
