/*
 * XREFs of ACPIRootIrpQueryRemoveOrStopDevice @ 0x1C0087F60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00014E0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C000167C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C003D8A4 (ACPIThermalReleaseCoolingInterfaces.c)
 */

__int64 __fastcall ACPIRootIrpQueryRemoveOrStopDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rbx
  unsigned __int8 MinorFunction; // bp
  unsigned int v6; // esi
  __int64 v7; // rcx
  char *IrpText; // rax
  const char *v9; // r8
  const char *v10; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = DeviceExtension;
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( (*(_DWORD *)(DeviceExtension + 8) & 0x200000) != 0 )
  {
    v6 = -1073741808;
    a2->IoStatus.Status = -1073741808;
    IofCompleteRequest(a2, 0);
  }
  else
  {
    ACPIThermalReleaseCoolingInterfaces(DeviceExtension);
    *(_DWORD *)(v4 + 324) = *(_DWORD *)(v4 + 320);
    *(_DWORD *)(v4 + 320) = 1;
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    v6 = IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 728), a2);
  }
  v7 = 0x200000000000LL;
  if ( (*(_QWORD *)(v4 + 8) & 0x200000000000LL) != 0 )
    v7 = 0x400000000000LL;
  IrpText = ACPIDebugGetIrpText(v7, MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x16u,
    (__int64)&WPP_07ea04bf8856319f8bf6d44d5c5f0bbf_Traceguids,
    (char)a2,
    IrpText,
    v6,
    v4,
    v9,
    v10);
  return v6;
}
