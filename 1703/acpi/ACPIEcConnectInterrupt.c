/*
 * XREFs of ACPIEcConnectInterrupt @ 0x1C009DFF0
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1C004CAF0 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ACPIEcConnectInterrupt(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 805) )
    return ACPIEcConnectGpioInterrupt((char *)a1);
  else
    return ACPIEcConnectGpeVector(a1);
}
