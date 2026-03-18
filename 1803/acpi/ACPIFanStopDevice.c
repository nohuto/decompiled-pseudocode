/*
 * XREFs of ACPIFanStopDevice @ 0x1C0024420
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C00144B0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0014CC0 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStopDevice @ 0x1C00789F0 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     ACPIFanLoop @ 0x1C0024034 (ACPIFanLoop.c)
 *     ACPIUnregisterForDeviceNotifications @ 0x1C00357B0 (ACPIUnregisterForDeviceNotifications.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C003D8A4 (ACPIThermalReleaseCoolingInterfaces.c)
 */

NTSTATUS __fastcall ACPIFanStopDevice(__int64 a1)
{
  ACPIUnregisterForDeviceNotifications(*(_QWORD *)(a1 + 720), ACPIFanEvent);
  ACPIThermalReleaseCoolingInterfaces(a1);
  ACPIFanLoop(a1, 0x20000000, 0);
  return KeWaitForSingleObject((PVOID)(a1 + 296), Executive, 0, 0, 0LL);
}
