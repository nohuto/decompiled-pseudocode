/*
 * XREFs of KeTryToAcquireGuardedMutex @ 0x1400BAB90
 * Callers:
 *     <none>
 * Callees:
 *     ExTryToAcquireFastMutex @ 0x1400BABB0 (ExTryToAcquireFastMutex.c)
 */

BOOLEAN __stdcall KeTryToAcquireGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  return ExTryToAcquireFastMutex(Mutex);
}
