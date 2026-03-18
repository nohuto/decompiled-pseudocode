/*
 * XREFs of VerifierIoRegisterShutdownNotification @ 0x1407B2130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoRegisterShutdownNotification()
{
  return ((__int64 (*)(void))pXdvIoRegisterShutdownNotification)();
}
