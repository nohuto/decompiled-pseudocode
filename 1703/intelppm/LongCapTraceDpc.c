/*
 * XREFs of LongCapTraceDpc @ 0x1C000B650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall LongCapTraceDpc(struct _KDPC *Dpc, char *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  QueueCapWork(DeferredContext, DeferredContext + 896, qword_1C00161A0, SystemArgument2);
}
