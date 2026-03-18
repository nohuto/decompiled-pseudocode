/*
 * XREFs of VerifierKeFlushQueuedDpcs @ 0x14081F7D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeFlushQueuedDpcs()
{
  return ((__int64 (*)(void))pXdvKeFlushQueuedDpcs)();
}
