/*
 * XREFs of RtlAcquirePebLock @ 0x18007B480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS RtlAcquirePebLock(void)
{
  return RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
}
