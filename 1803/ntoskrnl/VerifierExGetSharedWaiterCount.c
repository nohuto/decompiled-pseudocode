/*
 * XREFs of VerifierExGetSharedWaiterCount @ 0x14081E1E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 VerifierExGetSharedWaiterCount()
{
  return ((__int64 (*)(void))pXdvExGetSharedWaiterCount)();
}
