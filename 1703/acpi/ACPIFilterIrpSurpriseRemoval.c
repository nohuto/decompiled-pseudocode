/*
 * XREFs of ACPIFilterIrpSurpriseRemoval @ 0x1C009F410
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0001654 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_sDqss @ 0x1C004E984 (WPP_RECORDER_SF_sDqss.c)
 *     ACPIInternalIsReportedMissing @ 0x1C0050340 (ACPIInternalIsReportedMissing.c)
 *     ACPIFilterIrpStopDevice @ 0x1C009F280 (ACPIFilterIrpStopDevice.c)
 */

__int64 __fastcall ACPIFilterIrpSurpriseRemoval(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rbx
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  char *IrpText; // rax
  __int64 v10; // rdx
  const char *v11; // r8
  const char *v12; // r9
  int v13; // [rsp+20h] [rbp-38h]

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x8000000000000LL) != 0 || ACPIInternalIsReportedMissing(DeviceExtension) )
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    v6 = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 728), a2);
    v7 = 0x200000000000LL;
    v8 = v6;
    if ( (*(_QWORD *)(DeviceExtension + 8) & 0x200000000000LL) != 0 )
      v7 = 0x400000000000LL;
    IrpText = ACPIDebugGetIrpText(v7, 0x17u);
    WPP_RECORDER_SF_sDqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v10,
      (__int64)v11,
      (__int64)v12,
      v13,
      IrpText,
      v8,
      DeviceExtension,
      v11,
      v12);
    return v8;
  }
  else
  {
    *(_DWORD *)(DeviceExtension + 320) = 1;
    return ACPIFilterIrpStopDevice(a1, a2);
  }
}
