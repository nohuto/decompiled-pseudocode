/*
 * XREFs of ViPendingCompleteAtDPC @ 0x1407B3D70
 * Callers:
 *     <none>
 * Callees:
 *     ViPendingCompleteAfterWait @ 0x1407B3C38 (ViPendingCompleteAfterWait.c)
 */

void __fastcall ViPendingCompleteAtDPC(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ViPendingCompleteAfterWait(DeferredContext);
}
