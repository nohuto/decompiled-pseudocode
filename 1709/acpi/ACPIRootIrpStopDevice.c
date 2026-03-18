/*
 * XREFs of ACPIRootIrpStopDevice @ 0x1C00A6A10
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0004E3C (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0005700 (WPP_RECORDER_SF_qsLqss.c)
 */

__int64 __fastcall ACPIRootIrpStopDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rdi
  unsigned __int8 MinorFunction; // bp
  unsigned int v6; // esi
  __int64 v7; // rcx
  char *IrpText; // rax
  const char *v9; // r8
  const char *v10; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = DeviceExtension;
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( *(_DWORD *)(DeviceExtension + 320) == 1 )
  {
    *(_DWORD *)(DeviceExtension + 320) = 0;
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    v6 = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 728), a2);
  }
  else
  {
    v6 = -1073741808;
    a2->IoStatus.Status = -1073741808;
    IofCompleteRequest(a2, 0);
  }
  v7 = 0x200000000000LL;
  if ( (*(_QWORD *)(v4 + 8) & 0x200000000000LL) != 0 )
    v7 = 0x400000000000LL;
  IrpText = ACPIDebugGetIrpText(v7, MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x1Bu,
    (__int64)&WPP_d9eb6b6eaeca3f6792a7ef761dd6d8ac_Traceguids,
    (char)a2,
    IrpText,
    v6,
    v4,
    v9,
    v10);
  return v6;
}
