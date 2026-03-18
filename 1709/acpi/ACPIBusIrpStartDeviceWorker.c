/*
 * XREFs of ACPIBusIrpStartDeviceWorker @ 0x1C00968E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0004E3C (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0005700 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalEvaluateOST @ 0x1C004F9C8 (ACPIInternalEvaluateOST.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1C00851E0 (ACPIPepInitializePlatformNotificationSupport.c)
 *     IsNsobjPciBus @ 0x1C008CD04 (IsNsobjPciBus.c)
 *     EnableDisableRegions @ 0x1C008FEB4 (EnableDisableRegions.c)
 *     EnableDisableIPMIRegions @ 0x1C00A2874 (EnableDisableIPMIRegions.c)
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
  char v9; // r14
  __int64 v10; // rcx
  char *IrpText; // rax
  const char *v12; // r8
  const char *v13; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension(*(_QWORD *)(a1 + 32));
  v4 = *(IRP **)(a1 + 40);
  v5 = DeviceExtension;
  Status = v4->IoStatus.Status;
  MinorFunction = v4->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( Status >= 0 )
  {
    v8 = *(_QWORD *)(DeviceExtension + 952) & 0x8000LL;
    v9 = (*(_QWORD *)(DeviceExtension + 952) & 0x8000) != 0;
    if ( IsNsobjPciBus(*(volatile signed __int32 **)(DeviceExtension + 712)) || v8 )
      EnableDisableRegions(*(__int64 **)(v5 + 712), 1, v9);
    if ( (*(_DWORD *)(v5 + 8) & 0x1000LL) != 0 )
    {
      LOBYTE(v3) = 1;
      EnableDisableIPMIRegions(*(_QWORD *)(v5 + 712), v3);
    }
    if ( (*(_QWORD *)(v5 + 952) & 0x10000000000LL) != 0 )
      ACPIPepInitializePlatformNotificationSupport((char *)v5);
  }
  if ( (*(_QWORD *)(v5 + 8) & 0x2000000000LL) != 0 && Status < 0 )
    ACPIInternalEvaluateOST(v5, v3, 163);
  v4->IoStatus.Information = 0LL;
  v4->IoStatus.Status = Status;
  IofCompleteRequest(v4, 0);
  v10 = 0x200000000000LL;
  if ( (*(_QWORD *)(v5 + 8) & 0x200000000000LL) != 0 )
    v10 = 0x400000000000LL;
  IrpText = ACPIDebugGetIrpText(v10, MinorFunction);
  return WPP_RECORDER_SF_qsLqss(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           4u,
           5u,
           0x3Du,
           (__int64)&WPP_843bede4f2e6353a81a7e5fb8ad73c2f_Traceguids,
           (char)v4,
           IrpText,
           Status,
           v5,
           v12,
           v13);
}
