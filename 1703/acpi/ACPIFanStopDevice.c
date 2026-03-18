/*
 * XREFs of ACPIFanStopDevice @ 0x1C004E39C
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C0045F80 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0046510 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStopDevice @ 0x1C009D790 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     ACPIFanLoop @ 0x1C004DF94 (ACPIFanLoop.c)
 *     ACPIUnregisterForDeviceNotifications @ 0x1C0054DE0 (ACPIUnregisterForDeviceNotifications.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C00582F0 (ACPIThermalReleaseCoolingInterfaces.c)
 */

NTSTATUS __fastcall ACPIFanStopDevice(__int64 a1)
{
  ACPIUnregisterForDeviceNotifications(*(_QWORD *)(a1 + 720), ACPIFanEvent);
  ACPIThermalReleaseCoolingInterfaces(a1);
  ACPIFanLoop(a1, 0x20000000, 0);
  return KeWaitForSingleObject((PVOID)(a1 + 296), Executive, 0, 0, 0LL);
}
