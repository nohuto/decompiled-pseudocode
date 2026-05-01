/*
 * XREFs of MIDL_user_allocate @ 0x1800066B0
 * Callers:
 *     RmpClientRegisterActivityHostCallbacks @ 0x180005600 (RmpClientRegisterActivityHostCallbacks.c)
 *     RmpClientAcquireResourceSet @ 0x180005A30 (RmpClientAcquireResourceSet.c)
 *     RmpClientSubscriptionAllocateState @ 0x180006598 (RmpClientSubscriptionAllocateState.c)
 * Callees:
 *     <none>
 */

void *__stdcall MIDL_user_allocate(size_t size)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, size);
}
