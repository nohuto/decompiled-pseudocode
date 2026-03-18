/*
 * XREFs of KeReleaseGuardedMutexUnsafe @ 0x140202450
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 */

void __stdcall KeReleaseGuardedMutexUnsafe(PKGUARDED_MUTEX FastMutex)
{
  ExReleaseFastMutexUnsafe(FastMutex);
}
