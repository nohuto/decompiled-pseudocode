/*
 * XREFs of GreAcquireFastMutex @ 0x1C007D220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall GreAcquireFastMutex(PKGUARDED_MUTEX Mutex)
{
  KeAcquireGuardedMutex(Mutex);
}
