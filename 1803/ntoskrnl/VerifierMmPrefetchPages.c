/*
 * XREFs of VerifierMmPrefetchPages @ 0x14081FC30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmPrefetchPages()
{
  return ((__int64 (*)(void))pXdvMmPrefetchPages)();
}
