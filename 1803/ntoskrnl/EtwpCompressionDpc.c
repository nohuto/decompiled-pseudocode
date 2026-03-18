/*
 * XREFs of EtwpCompressionDpc @ 0x1402B3620
 * Callers:
 *     EtwpPrepareDirtyBuffer @ 0x1400D4574 (EtwpPrepareDirtyBuffer.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140006660 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 */

void __fastcall EtwpCompressionDpc(__int64 a1, struct _WORK_QUEUE_ITEM *a2)
{
  ExAcquireRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*((_QWORD *)a2[34].Parameter + 53) + 8LL * LODWORD(a2->List.Flink)),
    1u);
  ExQueueWorkItem(a2 + 35, DelayedWorkQueue);
}
