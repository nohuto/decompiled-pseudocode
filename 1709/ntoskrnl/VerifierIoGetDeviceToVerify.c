/*
 * XREFs of VerifierIoGetDeviceToVerify @ 0x1402776B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetDeviceToVerify()
{
  return ((__int64 (*)(void))pXdvIoGetDeviceToVerify)();
}
