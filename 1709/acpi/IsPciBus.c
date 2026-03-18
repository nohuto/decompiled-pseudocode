/*
 * XREFs of IsPciBus @ 0x1C0097174
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C0004580 (ACPIBusIrpQueryInterface.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0010698 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C00455E0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0045BF0 (ACPIBusIrpSurpriseRemoval.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     IsNsobjPciBus @ 0x1C008CD04 (IsNsobjPciBus.c)
 */

char __fastcall IsPciBus(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  return IsNsobjPciBus(*(volatile signed __int32 **)(DeviceExtension + 712));
}
