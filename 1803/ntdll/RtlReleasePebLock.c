/*
 * XREFs of RtlReleasePebLock @ 0x180079C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlReleasePebLock()
{
  return RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
}
