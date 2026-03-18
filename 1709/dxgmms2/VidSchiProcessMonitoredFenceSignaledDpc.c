/*
 * XREFs of VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C002DB60
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C00065B0 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C0027908 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BBA0 (VidSchiUnwaitMonitoredFences.c)
 *     ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C002D7D0 (-VidSchiUnwaitNodeHwQueueProgress@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchiProcessMonitoredFenceSignaledDpc(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rdi
  unsigned __int64 v2; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  Next = ListEntry[2].Next;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[176], ListEntry);
  v2 = *((_QWORD *)&Next[1].Next + 1);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 1888), &LockHandle);
  VidSchiUnwaitMonitoredFences(v2);
  VidSchiUnwaitNodeHwQueueProgress((struct _VIDSCH_NODE *)Next);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
