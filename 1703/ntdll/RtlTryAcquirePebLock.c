/*
 * XREFs of RtlTryAcquirePebLock @ 0x180083080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LOGICAL RtlTryAcquirePebLock(void)
{
  return RtlTryEnterCriticalSection(NtCurrentPeb()->FastPebLock);
}
