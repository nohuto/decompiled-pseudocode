/*
 * XREFs of ACPIBusIrpStopDevice @ 0x1C00A0760
 * Callers:
 *     ACPIEcStopDevice @ 0x1C004C0C0 (ACPIEcStopDevice.c)
 * Callees:
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C000129C (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0004E3C (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0005700 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIFanStopDevice @ 0x1C004E00C (ACPIFanStopDevice.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C0055DF0 (EnableDisableRegionSpacesForDevice.c)
 *     ACPIThermalStopZone @ 0x1C0059000 (ACPIThermalStopZone.c)
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1C0085008 (ACPIPepCleanupPlatformNotificationSupport.c)
 *     ACPIInitStopDevice @ 0x1C0085A38 (ACPIInitStopDevice.c)
 *     IsNsobjPciBus @ 0x1C008CD04 (IsNsobjPciBus.c)
 *     EnableDisableRegions @ 0x1C008FEB4 (EnableDisableRegions.c)
 *     EnableDisableIPMIRegions @ 0x1C00A2874 (EnableDisableIPMIRegions.c)
 */

__int64 __fastcall ACPIBusIrpStopDevice(ULONG_PTR a1, IRP *a2)
{
  unsigned __int8 MinorFunction; // r14
  __int64 DeviceExtension; // rbx
  int v5; // eax
  __int64 v6; // rdi
  char v7; // bp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  char *IrpText; // rax
  const char *v12; // r8
  const char *v13; // r10

  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_DWORD *)(DeviceExtension + 320);
  if ( v5 != 1 )
  {
    if ( v5 == 3 && (*(_DWORD *)(DeviceExtension + 620) & 0x300) != 0 )
      EnableDisableRegionSpacesForDevice(DeviceExtension, 0);
    *(_DWORD *)(DeviceExtension + 320) = *(_DWORD *)(DeviceExtension + 324);
  }
  ACPIThermalReleaseCoolingInterfaces(DeviceExtension);
  v6 = *(_QWORD *)(DeviceExtension + 952) & 0x8000LL;
  v7 = (*(_QWORD *)(DeviceExtension + 952) & 0x8000) != 0;
  v8 = ACPIInternalGetDeviceExtension(*(_QWORD *)(DeviceExtension + 720));
  if ( IsNsobjPciBus(*(volatile signed __int32 **)(v8 + 712)) || v6 )
    EnableDisableRegions(*(__int64 **)(DeviceExtension + 712), 0, v7);
  if ( (*(_DWORD *)(DeviceExtension + 8) & 0x1000LL) != 0 )
    EnableDisableIPMIRegions(*(_QWORD *)(DeviceExtension + 712), 0LL);
  if ( (*(_DWORD *)(DeviceExtension + 8) & 0x8000000) != 0 )
  {
    ACPIThermalStopZone(DeviceExtension);
  }
  else
  {
    v9 = *(_QWORD *)(DeviceExtension + 952);
    if ( (v9 & 0x200000000LL) != 0 )
    {
      ACPIFanStopDevice(DeviceExtension);
    }
    else if ( (v9 & 0x10000000000LL) != 0 )
    {
      ACPIPepCleanupPlatformNotificationSupport(DeviceExtension);
    }
  }
  *(_DWORD *)(DeviceExtension + 320) = 0;
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  ACPIInitStopDevice(DeviceExtension, 0);
  v10 = 0x200000000000LL;
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x200000000000LL) != 0 )
    v10 = 0x400000000000LL;
  IrpText = ACPIDebugGetIrpText(v10, MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x3Eu,
    (__int64)&WPP_843bede4f2e6353a81a7e5fb8ad73c2f_Traceguids,
    (char)a2,
    IrpText,
    0,
    DeviceExtension,
    v12,
    v13);
  return 0LL;
}
