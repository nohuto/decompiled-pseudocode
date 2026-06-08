/*
 * XREFs of QuickCapTraceDpc @ 0x1C00081F0
 * Callers:
 *     <none>
 * Callees:
 *     QueueCapWork @ 0x1C0008248 (QueueCapWork.c)
 */

void __fastcall QuickCapTraceDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  QueueCapWork(DeferredContext, DeferredContext + 744, &PPM_ETW_QUICK_CAP_INFO, SystemArgument2);
}
