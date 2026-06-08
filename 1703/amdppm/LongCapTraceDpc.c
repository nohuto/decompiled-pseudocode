/*
 * XREFs of LongCapTraceDpc @ 0x1C0004E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall LongCapTraceDpc(struct _KDPC *Dpc, char *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  QueueCapWork(DeferredContext, DeferredContext + 896, qword_1C00117F0, SystemArgument2);
}
