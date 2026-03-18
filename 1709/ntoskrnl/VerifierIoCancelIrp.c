/*
 * XREFs of VerifierIoCancelIrp @ 0x1407B1BB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoCancelIrp()
{
  return ((__int64 (*)(void))pXdvIoCancelIrp)();
}
