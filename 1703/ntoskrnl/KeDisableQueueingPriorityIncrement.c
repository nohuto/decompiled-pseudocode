/*
 * XREFs of KeDisableQueueingPriorityIncrement @ 0x14012A91C
 * Callers:
 *     NtCreateWorkerFactory @ 0x14055D844 (NtCreateWorkerFactory.c)
 * Callees:
 *     <none>
 */

void __fastcall KeDisableQueueingPriorityIncrement(volatile signed __int32 *a1)
{
  _interlockedbittestandset(a1, 9u);
}
