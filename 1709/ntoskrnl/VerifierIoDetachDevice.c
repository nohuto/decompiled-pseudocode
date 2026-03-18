/*
 * XREFs of VerifierIoDetachDevice @ 0x1407B1DB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoDetachDevice()
{
  return ((__int64 (*)(void))pXdvIoDetachDevice)();
}
