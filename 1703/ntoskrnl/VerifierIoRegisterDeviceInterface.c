/*
 * XREFs of VerifierIoRegisterDeviceInterface @ 0x140770300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoRegisterDeviceInterface()
{
  return ((__int64 (*)(void))pXdvIoRegisterDeviceInterface)();
}
