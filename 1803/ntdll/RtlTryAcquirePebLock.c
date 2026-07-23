/*
 * XREFs of RtlTryAcquirePebLock @ 0x180060E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LOGICAL RtlTryAcquirePebLock(void)
{
  return RtlTryEnterCriticalSection(NtCurrentPeb()->FastPebLock);
}
