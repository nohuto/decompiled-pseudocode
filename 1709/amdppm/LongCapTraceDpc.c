/*
 * XREFs of LongCapTraceDpc @ 0x1C0004E30
 * Callers:
 *     <none>
 * Callees:
 *     QueueCapWork @ 0x1C0004E58 (QueueCapWork.c)
 */

void __fastcall LongCapTraceDpc(struct _KDPC *Dpc, char *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  QueueCapWork(DeferredContext, DeferredContext + 896, qword_1C00117F0, SystemArgument2);
}
