/*
 * XREFs of VerifierExAcquireRundownProtection @ 0x1407B0F30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 VerifierExAcquireRundownProtection()
{
  return ((__int64 (*)(void))pXdvExAcquireRundownProtection)();
}
