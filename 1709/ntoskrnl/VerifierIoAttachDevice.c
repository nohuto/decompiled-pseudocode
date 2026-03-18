/*
 * XREFs of VerifierIoAttachDevice @ 0x1407B1B50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoAttachDevice()
{
  return ((__int64 (*)(void))pXdvIoAttachDevice)();
}
