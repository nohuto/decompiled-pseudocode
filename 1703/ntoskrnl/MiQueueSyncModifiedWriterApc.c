/*
 * XREFs of MiQueueSyncModifiedWriterApc @ 0x14021A624
 * Callers:
 *     MiAttemptPageFileReduction @ 0x140219584 (MiAttemptPageFileReduction.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14021A770 (MiTrimUnusedPageFileRegionsWorker.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14003FEC0 (KeInsertQueueApc.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeInitializeApc @ 0x14010F400 (KeInitializeApc.c)
 */

NTSTATUS __fastcall MiQueueSyncModifiedWriterApc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PVOID Object)
{
  KeInitializeApc(a2, *(_QWORD *)(a1 + 976), 0, (__int64)xHalTimerWatchdogStop, 0LL, a3, 0, a4);
  KeInsertQueueApc(a2, 0LL, 0LL, 0);
  return KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
}
