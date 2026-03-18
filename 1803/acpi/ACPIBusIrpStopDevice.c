/*
 * XREFs of ACPIBusIrpStopDevice @ 0x1C00789F0
 * Callers:
 *     ACPIEcStopDevice @ 0x1C0022380 (ACPIEcStopDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00014E0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C000167C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     ACPIFanStopDevice @ 0x1C0024420 (ACPIFanStopDevice.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C0035CFC (EnableDisableRegionSpacesForDevice.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C003D8A4 (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPIThermalStopZone @ 0x1C003DB88 (ACPIThermalStopZone.c)
 *     ACPIInitStopDevice @ 0x1C007D3C0 (ACPIInitStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C007DF7C (EnableDisableIPMIRegions.c)
 *     EnableDisableRegions @ 0x1C007FB94 (EnableDisableRegions.c)
 *     IsNsobjPciBus @ 0x1C007FC90 (IsNsobjPciBus.c)
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1C007FD84 (ACPIPepCleanupPlatformNotificationSupport.c)
 */

__int64 __fastcall ACPIBusIrpStopDevice(ULONG_PTR a1, IRP *a2)
{
  unsigned __int8 MinorFunction; // r14
  __int64 DeviceExtension; // rbx
  int v5; // eax
  __int64 v6; // rdi
  bool v7; // bp
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  char *IrpText; // rax
  const char *v14; // r8
  const char *v15; // r10

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
  if ( (unsigned __int8)IsNsobjPciBus(*(_QWORD *)(v8 + 712)) || v6 )
  {
    LOBYTE(v9) = v7;
    EnableDisableRegions(*(_QWORD *)(DeviceExtension + 712), 0LL, v9);
  }
  v10 = *(_QWORD *)(DeviceExtension + 8);
  if ( (v10 & 0x1000) != 0 )
  {
    EnableDisableIPMIRegions(*(_QWORD *)(DeviceExtension + 712), 0LL);
    v10 = *(_QWORD *)(DeviceExtension + 8);
  }
  if ( (v10 & 0x8000000) != 0 )
  {
    ACPIThermalStopZone(DeviceExtension);
  }
  else
  {
    v11 = *(_QWORD *)(DeviceExtension + 952);
    if ( (v11 & 0x200000000LL) != 0 )
    {
      ACPIFanStopDevice(DeviceExtension);
    }
    else if ( (v11 & 0x10000000000LL) != 0 )
    {
      ACPIPepCleanupPlatformNotificationSupport(DeviceExtension);
    }
  }
  *(_DWORD *)(DeviceExtension + 320) = 0;
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  ACPIInitStopDevice(DeviceExtension, 0LL);
  v12 = 0x200000000000LL;
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x200000000000LL) != 0 )
    v12 = 0x400000000000LL;
  IrpText = ACPIDebugGetIrpText(v12, MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x3Eu,
    (__int64)&WPP_4bcb5acd96f437848f1ce24078773eb7_Traceguids,
    (char)a2,
    IrpText,
    0,
    DeviceExtension,
    v14,
    v15);
  return 0LL;
}
