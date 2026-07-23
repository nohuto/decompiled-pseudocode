/*
 * XREFs of RtlReleasePebLock @ 0x18007D640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS RtlReleasePebLock(void)
{
  return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
}
