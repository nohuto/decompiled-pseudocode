/*
 * XREFs of VerifierIoGetDeviceObjectPointer @ 0x140770100
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetDeviceObjectPointer()
{
  return ((__int64 (*)(void))pXdvIoGetDeviceObjectPointer)();
}
