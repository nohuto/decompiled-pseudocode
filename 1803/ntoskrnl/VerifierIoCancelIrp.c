/*
 * XREFs of VerifierIoCancelIrp @ 0x14081ED50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoCancelIrp()
{
  return ((__int64 (*)(void))pXdvIoCancelIrp)();
}
