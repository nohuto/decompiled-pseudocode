/*
 * XREFs of ACPIFilterIrpStopDevice @ 0x1C00A2270
 * Callers:
 *     ACPIFilterIrpSurpriseRemoval @ 0x1C00A2400 (ACPIFilterIrpSurpriseRemoval.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0004E3C (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0005700 (WPP_RECORDER_SF_qsLqss.c)
 *     IsNsobjPciBus @ 0x1C008CD04 (IsNsobjPciBus.c)
 *     EnableDisableRegions @ 0x1C008FEB4 (EnableDisableRegions.c)
 */

__int64 __fastcall ACPIFilterIrpStopDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 v6; // rsi
  char v7; // bp
  __int64 v8; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v10; // rax
  __int64 v11; // rcx
  char *IrpText; // rax
  unsigned __int8 v13; // dl
  const char *v14; // r8
  const char *v15; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = DeviceExtension;
  if ( *(_DWORD *)(DeviceExtension + 320) == 1 )
  {
    v6 = *(_QWORD *)(DeviceExtension + 952) & 0x8000LL;
    v7 = (*(_QWORD *)(DeviceExtension + 952) & 0x8000) != 0;
    v8 = ACPIInternalGetDeviceExtension(*(_QWORD *)(DeviceExtension + 720));
    if ( IsNsobjPciBus(*(volatile signed __int32 **)(v8 + 712)) || v6 )
      EnableDisableRegions(*(__int64 **)(v4 + 712), 0, v7);
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    v10 = a2->Tail.Overlay.CurrentStackLocation;
    v10[-1].Context = 0LL;
    v10[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIFilterIrpStopDeviceCompletion;
    v10[-1].Control = -32;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 680));
    v5 = IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 728), a2);
  }
  else
  {
    v5 = -1073741808;
    a2->IoStatus.Status = -1073741808;
    IofCompleteRequest(a2, 0);
  }
  v11 = 0x200000000000LL;
  if ( (*(_QWORD *)(v4 + 8) & 0x200000000000LL) != 0 )
    v11 = 0x400000000000LL;
  IrpText = ACPIDebugGetIrpText(v11, 4u);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v13,
    5u,
    0x1Cu,
    (__int64)&WPP_a733ebc0c0353af3a414eb8cb5954dc9_Traceguids,
    (char)a2,
    IrpText,
    v5,
    v4,
    v14,
    v15);
  return v5;
}
