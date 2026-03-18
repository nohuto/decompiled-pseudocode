/*
 * XREFs of ACPIFanStopDevice @ 0x1C004E00C
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C00455E0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0045BF0 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStopDevice @ 0x1C00A0760 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C000129C (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPIFanLoop @ 0x1C004DC04 (ACPIFanLoop.c)
 *     ACPIUnregisterForDeviceNotifications @ 0x1C00559C0 (ACPIUnregisterForDeviceNotifications.c)
 */

NTSTATUS __fastcall ACPIFanStopDevice(__int64 a1)
{
  ACPIUnregisterForDeviceNotifications(*(_QWORD *)(a1 + 720), ACPIFanEvent);
  ACPIThermalReleaseCoolingInterfaces(a1);
  ACPIFanLoop(a1, 0x20000000, 0);
  return KeWaitForSingleObject((PVOID)(a1 + 296), Executive, 0, 0, 0LL);
}
