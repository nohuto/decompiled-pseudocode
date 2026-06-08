/*
 * XREFs of LongCapTraceDpc @ 0x1C000B9C0
 * Callers:
 *     <none>
 * Callees:
 *     QueueCapWork @ 0x1C000B9E8 (QueueCapWork.c)
 */

void __fastcall LongCapTraceDpc(struct _KDPC *Dpc, char *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  QueueCapWork(DeferredContext, DeferredContext + 896, qword_1C00199E0, SystemArgument2);
}
