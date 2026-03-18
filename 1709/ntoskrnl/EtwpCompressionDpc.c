/*
 * XREFs of EtwpCompressionDpc @ 0x140281390
 * Callers:
 *     EtwpPrepareDirtyBuffer @ 0x1400E08C8 (EtwpPrepareDirtyBuffer.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400FA3C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 */

void __fastcall EtwpCompressionDpc(__int64 a1, unsigned int *a2)
{
  ExAcquireRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a2 + 282) + 416LL) + 8LL * *a2),
    1u);
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 566), DelayedWorkQueue);
}
