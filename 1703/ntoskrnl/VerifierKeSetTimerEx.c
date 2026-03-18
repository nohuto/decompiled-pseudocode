/*
 * XREFs of VerifierKeSetTimerEx @ 0x140777AF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeSetTimerEx()
{
  return ((__int64 (*)(void))pXdvKeSetTimerEx)();
}
