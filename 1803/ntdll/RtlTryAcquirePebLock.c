/*
 * XREFs of RtlTryAcquirePebLock @ 0x180060E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlTryAcquirePebLock()
{
  return RtlTryEnterCriticalSection(NtCurrentPeb()->FastPebLock);
}
