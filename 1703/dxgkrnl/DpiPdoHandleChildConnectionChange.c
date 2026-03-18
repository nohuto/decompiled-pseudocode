/*
 * XREFs of DpiPdoHandleChildConnectionChange @ 0x1C0119220
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0011068 (DxgkQueryConnectionChanges.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C01C4A2C (DpiFdoHandleTargetConnectionState.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 *     DpiFdoGetChildDescriptor @ 0x1C0010B6C (DpiFdoGetChildDescriptor.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 *     DpiPdoAddPdo @ 0x1C0118D50 (DpiPdoAddPdo.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C011953C (MonitorCreatePhysicalMonitor.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C011B22C (MonitorNotifyDeviceNodeReady.c)
 *     DpiPdoRemovePdo @ 0x1C01CEAF0 (DpiPdoRemovePdo.c)
 *     DpiPdoSetMonitorDriverInterfaceState @ 0x1C01CEE34 (DpiPdoSetMonitorDriverInterfaceState.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C01E42D4 (MonitorRemovePhysicalMonitor.c)
 */

__int64 __fastcall DpiPdoHandleChildConnectionChange(
        __int64 a1,
        unsigned int a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a3,
        unsigned __int8 a4,
        char a5,
        char a6,
        BOOLEAN a7,
        char a8,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a9)
{
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v10; // r12d
  __int64 v11; // rsi
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *ChildDescriptor; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r12
  NTSTATUS v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rax
  int PhysicalMonitor; // eax
  int v34; // eax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r9
  __int64 v39; // rbx
  __int64 v40; // rax
  int v41; // eax
  bool v43; // [rsp+40h] [rbp-C0h]
  _QWORD v46[10]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD OutputBuffer[60]; // [rsp+B0h] [rbp-50h] BYREF

  v10 = a3;
  v11 = *(_QWORD *)(a1 + 64);
  v13 = a1;
  if ( !a8 )
  {
    memset(v46, 0, 0x48uLL);
    memset(&v46[1], 0, 36);
    v14 = *(_DWORD *)(v11 + 24) & 0xFFFF00;
    v46[0] = 0x480000001ELL;
    HIDWORD(v46[6]) = v14 | 1;
    HIDWORD(v46[7]) = a4;
    v46[8] = *(_QWORD *)(v11 + 2536);
    LODWORD(v46[6]) = 39;
    LODWORD(v46[7]) = a2;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v46, v15, v16, v17);
  }
  ChildDescriptor = DpiFdoGetChildDescriptor(v11, a2);
  v22 = (__int64)ChildDescriptor;
  if ( !ChildDescriptor )
  {
    v23 = -1073741810LL;
LABEL_5:
    v24 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v24 + 24) = v23;
    WdLogEvent5_WdError(v24);
    return (unsigned int)v23;
  }
  v25 = ChildDescriptor[6];
  LOBYTE(v21) = v25 != 0;
  v43 = v25 != 0;
  if ( !v25 || !IsInternalVideoOutput(*((_DWORD *)ChildDescriptor + 1)) )
  {
    *(_BYTE *)(v22 + 66) = a4;
    goto LABEL_25;
  }
  v27 = *(_QWORD *)(v26 + 64);
  if ( *(_BYTE *)(v22 + 66) != a4 )
  {
    memset(OutputBuffer, 0, 0xE8uLL);
    v28 = ZwPowerInformation(SystemPowerPolicyCurrent, 0LL, 0, OutputBuffer, 0xE8u);
    v31 = v28;
    if ( v28 < 0 )
    {
      OutputBuffer[7] = 0;
      v32 = WdLogNewEntry5_WdError(v30, v29);
      *(_QWORD *)(v32 + 24) = v31;
      WdLogEvent5_WdError(v32);
    }
    if ( a4 )
    {
      PhysicalMonitor = MonitorCreatePhysicalMonitor(
                          *(DXGADAPTER **)(v11 + 3704),
                          a2,
                          *(struct _DEVICE_OBJECT **)(v22 + 48),
                          1u,
                          a4,
                          a9);
      v23 = PhysicalMonitor;
      if ( PhysicalMonitor < 0 )
        goto LABEL_5;
      if ( !*(_BYTE *)(v27 + 944) )
        goto LABEL_22;
      MonitorNotifyDeviceNodeReady(*(DXGADAPTER **)(v11 + 3704), a2);
    }
    else
    {
      if ( (*(_BYTE *)(v11 + 3713) & 0x20) != 0 && OutputBuffer[7] )
        goto LABEL_22;
      v34 = MonitorRemovePhysicalMonitor(*(DXGADAPTER **)(v11 + 3704), a2, OutputBuffer[7] != 0, a9);
      v23 = v34;
      if ( v34 < 0 )
        goto LABEL_5;
      if ( OutputBuffer[7] || !*(_BYTE *)(v27 + 944) )
        goto LABEL_22;
    }
    v35 = DpiPdoSetMonitorDriverInterfaceState(*(PVOID *)(v22 + 48));
    v39 = v35;
    if ( v35 < 0 )
    {
      v40 = WdLogNewEntry5_WdWarning(v37, v36, v21, v38);
      *(_QWORD *)(v40 + 24) = v39;
      WdLogEvent5_WdWarning(v40);
    }
LABEL_22:
    LOBYTE(v21) = v43;
    v13 = a1;
  }
  v10 = a3;
  *(_BYTE *)(v22 + 66) = a4;
  a4 = 1;
LABEL_25:
  if ( (_BYTE)v21 != a4 || a4 && a6 )
  {
    *(_BYTE *)(v22 + 65) = a4;
    if ( a4 )
    {
      v41 = DpiPdoAddPdo(v13, v22, v10, a5, a6, a7, a9);
    }
    else
    {
      LOBYTE(v21) = 1;
      v41 = DpiPdoRemovePdo(v13, v22, v21, a9);
    }
    LODWORD(v23) = v41;
    if ( v41 >= 0 && v41 != 0x40000000 )
    {
      _m_prefetchw((const void *)(v11 + 3452));
      if ( (_InterlockedOr((volatile signed __int32 *)(v11 + 3452), 1u) & 1) == 0 )
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v11 + 152), BusRelations);
    }
  }
  else
  {
    LODWORD(v23) = 0;
  }
  return (unsigned int)v23;
}
