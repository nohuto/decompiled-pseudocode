/*
 * XREFs of PfpPrefetchSharedInitialize @ 0x140490EF0
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x14048E5B0 (PfSnAsyncPrefetchWorker.c)
 *     PfpPrefetchRequestPerform @ 0x140491840 (PfpPrefetchRequestPerform.c)
 *     PfpQueryFileExtentsRequest @ 0x14075BDB8 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

void __fastcall PfpPrefetchSharedInitialize(__int64 a1)
{
  memset((void *)a1, 0, 0x90uLL);
  *(_QWORD *)(a1 + 48) = a1;
  *(_QWORD *)(a1 + 40) = PfpPrefetchSharedConflictNotifyStart;
  KeInitializeEvent((PRKEVENT)(a1 + 88), NotificationEvent, 0);
  *(_QWORD *)(a1 + 120) = 1LL;
}
