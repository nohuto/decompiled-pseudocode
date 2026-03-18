/*
 * XREFs of GreReleaseFastMutex @ 0x1C007D230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall GreReleaseFastMutex(PKGUARDED_MUTEX Mutex)
{
  KeReleaseGuardedMutex(Mutex);
}
