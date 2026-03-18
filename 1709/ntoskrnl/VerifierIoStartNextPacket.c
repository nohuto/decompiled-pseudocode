/*
 * XREFs of VerifierIoStartNextPacket @ 0x1407B2360
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoStartNextPacket()
{
  return ((__int64 (*)(void))pXdvIoStartNextPacket)();
}
