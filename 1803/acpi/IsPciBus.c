/*
 * XREFs of IsPciBus @ 0x1C007FD48
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C0013E10 (ACPIBusIrpQueryInterface.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C00144B0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0014CC0 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0025034 (ACPIFilterRemoveNonPresentDevices.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     IsNsobjPciBus @ 0x1C007FC90 (IsNsobjPciBus.c)
 */

char __fastcall IsPciBus(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  return IsNsobjPciBus(*(volatile signed __int32 **)(DeviceExtension + 712));
}
