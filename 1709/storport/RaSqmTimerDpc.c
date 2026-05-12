/*
 * XREFs of RaSqmTimerDpc @ 0x1C0031810
 * Callers:
 *     <none>
 * Callees:
 *     RaSqmLogStatistics @ 0x1C0031768 (RaSqmLogStatistics.c)
 */

void __fastcall RaSqmTimerDpc(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  RaSqmLogStatistics();
}
