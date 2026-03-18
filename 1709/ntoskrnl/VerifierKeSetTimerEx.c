/*
 * XREFs of VerifierKeSetTimerEx @ 0x1407B9960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeSetTimerEx()
{
  return ((__int64 (*)(void))pXdvKeSetTimerEx)();
}
