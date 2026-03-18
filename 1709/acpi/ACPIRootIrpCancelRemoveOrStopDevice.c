/*
 * XREFs of ACPIRootIrpCancelRemoveOrStopDevice @ 0x1C00A68E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C0001F68 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0004E3C (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0005700 (WPP_RECORDER_SF_qsLqss.c)
 */

__int64 __fastcall ACPIRootIrpCancelRemoveOrStopDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rbx
  unsigned __int8 MinorFunction; // bp
  unsigned int v6; // esi
  char *IrpText; // rax
  const char *v8; // r8
  const char *v9; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = DeviceExtension;
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( (*(_DWORD *)(DeviceExtension + 8) & 0x200000) == 0 )
  {
    if ( *(_DWORD *)(DeviceExtension + 320) == 1 )
      *(_DWORD *)(DeviceExtension + 320) = *(_DWORD *)(DeviceExtension + 324);
    if ( !*(_QWORD *)(DeviceExtension + 608) )
      ACPIThermalAcquireCoolingInterfaces(DeviceExtension);
  }
  a2->IoStatus.Status = 0;
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  v6 = IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 728), a2);
  IrpText = ACPIDebugGetIrpText(*(_QWORD *)(v4 + 8), MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0xAu,
    (__int64)&WPP_d9eb6b6eaeca3f6792a7ef761dd6d8ac_Traceguids,
    (char)a2,
    IrpText,
    v6,
    v4,
    v8,
    v9);
  return v6;
}
