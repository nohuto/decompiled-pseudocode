/*
 * XREFs of KeTryToAcquireGuardedMutex @ 0x14007C600
 * Callers:
 *     <none>
 * Callees:
 *     ExTryToAcquireFastMutex @ 0x14007C620 (ExTryToAcquireFastMutex.c)
 */

BOOLEAN __stdcall KeTryToAcquireGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  return ExTryToAcquireFastMutex(Mutex);
}
