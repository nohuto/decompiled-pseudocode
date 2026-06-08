/*
 * XREFs of QuickCapTraceDpc @ 0x1C0004DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall QuickCapTraceDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  QueueCapWork(DeferredContext, DeferredContext + 744, &PPM_ETW_QUICK_CAP_INFO, SystemArgument2);
}
