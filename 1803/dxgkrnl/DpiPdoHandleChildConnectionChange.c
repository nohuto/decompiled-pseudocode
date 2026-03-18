/*
 * XREFs of DpiPdoHandleChildConnectionChange @ 0x1C020C6BC
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C003BA24 (DxgkQueryConnectionChanges.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C01F6374 (DpiFdoHandleTargetConnectionState.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0002EA0 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DpiFdoGetChildDescriptor @ 0x1C00396A8 (DpiFdoGetChildDescriptor.c)
 *     DxgkWriteDiagEntry @ 0x1C00C3130 (DxgkWriteDiagEntry.c)
 *     DpiPdoAddPdo @ 0x1C020B454 (DpiPdoAddPdo.c)
 *     DpiPdoRemovePdo @ 0x1C020D7C0 (DpiPdoRemovePdo.c)
 *     DpiPdoSetMonitorDriverInterfaceState @ 0x1C020DC04 (DpiPdoSetMonitorDriverInterfaceState.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C022D608 (MonitorCreatePhysicalMonitor.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C022EA18 (MonitorNotifyDeviceNodeReady.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C022EE88 (MonitorRemovePhysicalMonitor.c)
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
  unsigned __int8 v9; // bl
  __int64 v11; // rdi
  __int64 v12; // r15
  unsigned __int8 v13; // r13
  int v14; // eax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *ChildDescriptor; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r15
  NTSTATUS v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r13
  __int64 v27; // rax
  DXGADAPTER *v28; // rcx
  int PhysicalMonitor; // eax
  int v30; // eax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rax
  int v36; // eax
  bool v38; // [rsp+40h] [rbp-C0h]
  _QWORD v42[10]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD OutputBuffer[60]; // [rsp+A0h] [rbp-60h] BYREF

  v9 = a4;
  v11 = *(_QWORD *)(a1 + 64);
  v12 = a1;
  v13 = a4;
  if ( !a8 )
  {
    memset(v42, 0, 0x48uLL);
    memset(&v42[1], 0, 36);
    v14 = *(_DWORD *)(v11 + 24) & 0xFFFF00;
    v42[0] = 0x480000001ELL;
    HIDWORD(v42[6]) = v14 | 1;
    HIDWORD(v42[7]) = v9;
    v42[8] = *(_QWORD *)(v11 + 2536);
    LODWORD(v42[6]) = 39;
    LODWORD(v42[7]) = a2;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v42);
  }
  ChildDescriptor = (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)DpiFdoGetChildDescriptor(v11, a2);
  v18 = (__int64)ChildDescriptor;
  if ( !ChildDescriptor )
  {
    v19 = -1073741810LL;
LABEL_5:
    v20 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v20 + 24) = v19;
    WdLogEvent5_WdError(v20);
    return (unsigned int)v19;
  }
  v21 = *((_QWORD *)ChildDescriptor + 6);
  LOBYTE(v17) = v21 != 0;
  v38 = v21 != 0;
  if ( v21 && IsInternalVideoOutput(ChildDescriptor[1]) )
  {
    v23 = *(_QWORD *)(v22 + 64);
    if ( *(_BYTE *)(v18 + 66) == v9 )
    {
LABEL_21:
      v12 = a1;
      v9 = 1;
      goto LABEL_22;
    }
    memset(OutputBuffer, 0, 0xE8uLL);
    v24 = ZwPowerInformation(SystemPowerPolicyCurrent, 0LL, 0, OutputBuffer, 0xE8u);
    v26 = v24;
    if ( v24 < 0 )
    {
      OutputBuffer[7] = 0;
      v27 = WdLogNewEntry5_WdError(v25);
      *(_QWORD *)(v27 + 24) = v26;
      WdLogEvent5_WdError(v27);
    }
    v28 = *(DXGADAPTER **)(v11 + 3728);
    if ( v9 )
    {
      PhysicalMonitor = MonitorCreatePhysicalMonitor(v28, a2, *(struct _DEVICE_OBJECT **)(v18 + 48), 1u, v9, a9);
      v19 = PhysicalMonitor;
      if ( PhysicalMonitor < 0 )
        goto LABEL_5;
      if ( !*(_BYTE *)(v23 + 944) )
        goto LABEL_20;
      MonitorNotifyDeviceNodeReady(*(DXGADAPTER **)(v11 + 3728), a2);
    }
    else
    {
      v30 = MonitorRemovePhysicalMonitor(v28, a2, OutputBuffer[7] != 0, a9);
      v19 = v30;
      if ( v30 < 0 )
        goto LABEL_5;
      if ( OutputBuffer[7] || !*(_BYTE *)(v23 + 944) )
        goto LABEL_20;
    }
    v31 = DpiPdoSetMonitorDriverInterfaceState(*(PVOID *)(v18 + 48));
    v34 = v31;
    if ( v31 < 0 )
    {
      v35 = WdLogNewEntry5_WdWarning(v33, v32, v17);
      *(_QWORD *)(v35 + 24) = v34;
      WdLogEvent5_WdWarning(v35);
    }
LABEL_20:
    LOBYTE(v17) = v38;
    v13 = a4;
    goto LABEL_21;
  }
LABEL_22:
  *(_BYTE *)(v18 + 66) = v13;
  if ( (_BYTE)v17 != v9 || v9 && a6 )
  {
    *(_BYTE *)(v18 + 65) = v9;
    if ( v9 )
    {
      v36 = DpiPdoAddPdo(v12, v18, a3, a5, a6, a7, a9);
    }
    else
    {
      LOBYTE(v17) = 1;
      v36 = DpiPdoRemovePdo(v12, v18, v17, a9);
    }
    LODWORD(v19) = v36;
    if ( v36 >= 0 && v36 != 0x40000000 )
    {
      _m_prefetchw((const void *)(v11 + 3476));
      if ( (_InterlockedOr((volatile signed __int32 *)(v11 + 3476), 1u) & 1) == 0 )
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v11 + 152), BusRelations);
    }
  }
  else
  {
    LODWORD(v19) = 0;
  }
  return (unsigned int)v19;
}
