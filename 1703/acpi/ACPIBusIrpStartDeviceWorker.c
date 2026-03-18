/*
 * XREFs of ACPIBusIrpStartDeviceWorker @ 0x1C00902A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0001654 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001680 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalEvaluateOST @ 0x1C0050074 (ACPIInternalEvaluateOST.c)
 *     EnableDisableRegions @ 0x1C0090400 (EnableDisableRegions.c)
 *     IsNsobjPciBus @ 0x1C0090500 (IsNsobjPciBus.c)
 *     EnableDisableIPMIRegions @ 0x1C009FB40 (EnableDisableIPMIRegions.c)
 */

__int64 __fastcall ACPIBusIrpStartDeviceWorker(__int64 a1)
{
  __int64 DeviceExtension; // rax
  __int64 v3; // rdx
  IRP *v4; // rbx
  __int64 v5; // rdi
  int Status; // esi
  unsigned __int8 MinorFunction; // r15
  __int64 v8; // rbp
  bool v9; // r14
  __int64 v10; // r8
  __int64 v11; // rcx
  char *IrpText; // rax
  const char *v13; // r8
  const char *v14; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension(*(_QWORD *)(a1 + 32));
  v4 = *(IRP **)(a1 + 40);
  v5 = DeviceExtension;
  Status = v4->IoStatus.Status;
  MinorFunction = v4->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( Status >= 0 )
  {
    v8 = *(_QWORD *)(DeviceExtension + 952) & 0x8000LL;
    v9 = (*(_QWORD *)(DeviceExtension + 952) & 0x8000) != 0;
    if ( (unsigned __int8)IsNsobjPciBus(*(_QWORD *)(DeviceExtension + 712)) || v8 )
    {
      LOBYTE(v10) = v9;
      LOBYTE(v3) = 1;
      EnableDisableRegions(*(_QWORD *)(v5 + 712), v3, v10);
    }
    if ( (*(_DWORD *)(v5 + 8) & 0x1000LL) != 0 )
    {
      LOBYTE(v3) = 1;
      EnableDisableIPMIRegions(*(_QWORD *)(v5 + 712), v3);
    }
  }
  if ( (*(_QWORD *)(v5 + 8) & 0x2000000000LL) != 0 && Status < 0 )
    ACPIInternalEvaluateOST(v5, v3, 163);
  v4->IoStatus.Information = 0LL;
  v4->IoStatus.Status = Status;
  IofCompleteRequest(v4, 0);
  v11 = 0x200000000000LL;
  if ( (*(_QWORD *)(v5 + 8) & 0x200000000000LL) != 0 )
    v11 = 0x400000000000LL;
  IrpText = ACPIDebugGetIrpText(v11, MinorFunction);
  return WPP_RECORDER_SF_qsLqss(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           4u,
           5u,
           0x3Du,
           (__int64)&WPP_d090b5073bab31288d0accdb237e434e_Traceguids,
           (char)v4,
           IrpText,
           Status,
           v5,
           v13,
           v14);
}
