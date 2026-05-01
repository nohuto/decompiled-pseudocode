/*
 * XREFs of RmpFreeHeapForHashTable @ 0x180007240
 * Callers:
 *     RmpClientRegisterActivityHostCallbacks @ 0x180005600 (RmpClientRegisterActivityHostCallbacks.c)
 *     RmpClientAcquireResourceSet @ 0x180005A30 (RmpClientAcquireResourceSet.c)
 *     RmpClientSubscriptionAllocateState @ 0x180006598 (RmpClientSubscriptionAllocateState.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RmpFreeHeapForHashTable(void *a1)
{
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
