/*
 * XREFs of VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C0033444
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C000F330 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C002A5B8 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BC60 (VidSchiUnwaitMonitoredFences.c)
 *     ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C003202C (-VidSchiUnwaitNodeHwQueueProgress@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchiProcessMonitoredFenceSignaledDpc(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rdi
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  Next = ListEntry[2].Next;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[178], ListEntry);
  v2 = *((_QWORD *)&Next[1].Next + 1);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 1904), &LockHandle);
  VidSchiUnwaitMonitoredFences(v2, v3);
  VidSchiUnwaitNodeHwQueueProgress((struct _VIDSCH_NODE *)Next, v4);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
