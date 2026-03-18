/*
 * XREFs of EtwpCompressionDpc @ 0x140257940
 * Callers:
 *     EtwpPrepareDirtyBuffer @ 0x140087D7C (EtwpPrepareDirtyBuffer.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140061BB0 (ExAcquireRundownProtectionCacheAwareEx.c)
 */

void __fastcall EtwpCompressionDpc(__int64 a1, unsigned int *a2)
{
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*((_QWORD *)a2 + 118) + 8LL * *a2 + 408), 1u);
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 238), DelayedWorkQueue);
}
