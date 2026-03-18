/*
 * XREFs of VerifierIoGetConfigurationInformation @ 0x14081EFB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetConfigurationInformation()
{
  return ((__int64 (*)(void))pXdvIoGetConfigurationInformation)();
}
