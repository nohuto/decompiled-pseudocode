/*
 * XREFs of ViPendingCompleteAtDPC @ 0x140771FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViPendingCompleteAtDPC(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ViPendingCompleteAfterWait(DeferredContext);
}
