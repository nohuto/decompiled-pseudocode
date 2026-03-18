/*
 * XREFs of VerifierKeRegisterNmiCallback @ 0x1407B2760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeRegisterNmiCallback()
{
  return ((__int64 (*)(void))pXdvKeRegisterNmiCallback)();
}
