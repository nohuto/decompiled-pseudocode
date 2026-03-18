/*
 * XREFs of VerifierPsGetVersion @ 0x1407B2EB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 VerifierPsGetVersion()
{
  return ((__int64 (*)(void))pXdvPsGetVersion)();
}
