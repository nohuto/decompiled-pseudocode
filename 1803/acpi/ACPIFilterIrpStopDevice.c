/*
 * XREFs of ACPIFilterIrpStopDevice @ 0x1C007C600
 * Callers:
 *     ACPIFilterIrpSurpriseRemoval @ 0x1C007C790 (ACPIFilterIrpSurpriseRemoval.c)
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00014E0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C000167C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     EnableDisableRegions @ 0x1C007FB94 (EnableDisableRegions.c)
 *     IsNsobjPciBus @ 0x1C007FC90 (IsNsobjPciBus.c)
 */

__int64 __fastcall ACPIFilterIrpStopDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 v6; // rsi
  bool v7; // bp
  __int64 v8; // rax
  __int64 v9; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v11; // rax
  __int64 v12; // rcx
  char *IrpText; // rax
  unsigned __int8 v14; // dl
  const char *v15; // r8
  const char *v16; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = DeviceExtension;
  if ( *(_DWORD *)(DeviceExtension + 320) == 1 )
  {
    v6 = *(_QWORD *)(DeviceExtension + 952) & 0x8000LL;
    v7 = (*(_QWORD *)(DeviceExtension + 952) & 0x8000) != 0;
    v8 = ACPIInternalGetDeviceExtension(*(_QWORD *)(DeviceExtension + 720));
    if ( (unsigned __int8)IsNsobjPciBus(*(_QWORD *)(v8 + 712)) || v6 )
    {
      LOBYTE(v9) = v7;
      EnableDisableRegions(*(_QWORD *)(v4 + 712), 0LL, v9);
    }
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    v11 = a2->Tail.Overlay.CurrentStackLocation;
    v11[-1].Context = 0LL;
    v11[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIFilterIrpStopDeviceCompletion;
    v11[-1].Control = -32;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 680));
    v5 = IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 728), a2);
  }
  else
  {
    v5 = -1073741808;
    a2->IoStatus.Status = -1073741808;
    IofCompleteRequest(a2, 0);
  }
  v12 = 0x200000000000LL;
  if ( (*(_QWORD *)(v4 + 8) & 0x200000000000LL) != 0 )
    v12 = 0x400000000000LL;
  IrpText = ACPIDebugGetIrpText(v12, 4u);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v14,
    5u,
    0x1Cu,
    (__int64)&WPP_c218966fe9323718d778ead212d6cca7_Traceguids,
    (char)a2,
    IrpText,
    v5,
    v4,
    v15,
    v16);
  return v5;
}
