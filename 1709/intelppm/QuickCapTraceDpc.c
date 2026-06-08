/*
 * XREFs of QuickCapTraceDpc @ 0x1C000BA80
 * Callers:
 *     <none>
 * Callees:
 *     QueueCapWork @ 0x1C000B9E8 (QueueCapWork.c)
 */

void __fastcall QuickCapTraceDpc(
        struct _KDPC *Dpc,
        PVOID *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  QueueCapWork(DeferredContext, (__int64)(DeferredContext + 93), (__int64)&PPM_ETW_QUICK_CAP_INFO);
}
