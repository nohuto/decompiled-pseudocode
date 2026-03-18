/*
 * XREFs of VerifierMmLockPagableDataSection @ 0x1407B2A00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmLockPagableDataSection()
{
  return ((__int64 (*)(void))pXdvMmLockPagableDataSection)();
}
