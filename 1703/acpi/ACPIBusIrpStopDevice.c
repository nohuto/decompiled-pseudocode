/*
 * XREFs of ACPIBusIrpStopDevice @ 0x1C009D790
 * Callers:
 *     ACPIEcStopDevice @ 0x1C004CC80 (ACPIEcStopDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0001654 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001680 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIFanStopDevice @ 0x1C004E39C (ACPIFanStopDevice.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C0055200 (EnableDisableRegionSpacesForDevice.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C00582F0 (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPIThermalStopZone @ 0x1C00585CC (ACPIThermalStopZone.c)
 *     EnableDisableRegions @ 0x1C0090400 (EnableDisableRegions.c)
 *     IsNsobjPciBus @ 0x1C0090500 (IsNsobjPciBus.c)
 *     ACPIInitStopDevice @ 0x1C009F658 (ACPIInitStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C009FB40 (EnableDisableIPMIRegions.c)
 */

__int64 __fastcall ACPIBusIrpStopDevice(ULONG_PTR a1, IRP *a2)
{
  unsigned __int8 MinorFunction; // r14
  __int64 DeviceExtension; // rbx
  int v5; // eax
  __int64 v6; // rsi
  char v7; // bp
  __int64 v8; // rax
  __int64 v9; // rcx
  char *IrpText; // rax
  const char *v11; // r8
  const char *v12; // r10

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
  else if ( (*(_QWORD *)(DeviceExtension + 952) & 0x200000000LL) != 0 )
  {
    ACPIFanStopDevice(DeviceExtension);
  }
  *(_DWORD *)(DeviceExtension + 320) = 0;
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  ACPIInitStopDevice(DeviceExtension, 0LL);
  v9 = 0x200000000000LL;
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x200000000000LL) != 0 )
    v9 = 0x400000000000LL;
  IrpText = ACPIDebugGetIrpText(v9, MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x3Eu,
    (__int64)&WPP_d090b5073bab31288d0accdb237e434e_Traceguids,
    (char)a2,
    IrpText,
    0,
    DeviceExtension,
    v11,
    v12);
  return 0LL;
}
