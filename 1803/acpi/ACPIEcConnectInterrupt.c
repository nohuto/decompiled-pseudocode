/*
 * XREFs of ACPIEcConnectInterrupt @ 0x1C0079FEC
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1C00221F0 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     ACPIEcConnectGpeVector @ 0x1C0079EF8 (ACPIEcConnectGpeVector.c)
 *     ACPIEcConnectGpioInterrupt @ 0x1C0079F34 (ACPIEcConnectGpioInterrupt.c)
 */

NTSTATUS __fastcall ACPIEcConnectInterrupt(char *a1)
{
  if ( a1[805] )
    return ACPIEcConnectGpioInterrupt(a1);
  else
    return ACPIEcConnectGpeVector((__int64)a1);
}
