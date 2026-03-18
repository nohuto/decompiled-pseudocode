/*
 * XREFs of DpiPdoHandleChildConnectionChange @ 0x1C0107824
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0011A64 (DxgkQueryConnectionChanges.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C01DE4A4 (DpiFdoHandleTargetConnectionState.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C00083E4 (IsInternalVideoOutput.c)
 *     DpiFdoGetChildDescriptor @ 0x1C0012738 (DpiFdoGetChildDescriptor.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C0104ED8 (MonitorCreatePhysicalMonitor.c)
 *     DpiPdoAddPdo @ 0x1C0107994 (DpiPdoAddPdo.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C0120768 (MonitorNotifyDeviceNodeReady.c)
 *     DpiPdoRemovePdo @ 0x1C01E8F0C (DpiPdoRemovePdo.c)
 *     DpiPdoSetMonitorDriverInterfaceState @ 0x1C01E9250 (DpiPdoSetMonitorDriverInterfaceState.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C01FE948 (MonitorRemovePhysicalMonitor.c)
 */

__int64 __fastcall DpiPdoHandleChildConnectionChange(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a9)
{
  unsigned int v10; // r12d
  __int64 v11; // r14
  __int64 v13; // rbx
  _QWORD *ChildDescriptor; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rdi
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rbx
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // r12
  NTSTATUS v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rax
  DXGADAPTER *v31; // rcx
  int PhysicalMonitor; // eax
  int v33; // eax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rax
  ULONG OutputBufferLength; // [rsp+20h] [rbp-E0h]
  int v40; // [rsp+28h] [rbp-D8h]
  bool v41; // [rsp+40h] [rbp-C0h]
  _QWORD v44[10]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD OutputBuffer[60]; // [rsp+B0h] [rbp-50h] BYREF

  v10 = a3;
  v11 = *(_QWORD *)(a1 + 64);
  v13 = a1;
  if ( !a8 )
  {
    memset(v44, 0, 0x48uLL);
    memset(&v44[1], 0, 36);
    v24 = *(_DWORD *)(v11 + 24) & 0xFFFF00;
    v44[0] = 0x480000001ELL;
    HIDWORD(v44[6]) = v24 | 1;
    HIDWORD(v44[7]) = a4;
    v44[8] = *(_QWORD *)(v11 + 2536);
    LODWORD(v44[6]) = 39;
    LODWORD(v44[7]) = a2;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v44);
  }
  ChildDescriptor = DpiFdoGetChildDescriptor(v11, a2);
  v18 = ChildDescriptor;
  if ( !ChildDescriptor )
  {
    v21 = -1073741810LL;
    goto LABEL_20;
  }
  v19 = ChildDescriptor[6];
  LOBYTE(v16) = v19 != 0;
  v41 = v19 != 0;
  if ( v19 && IsInternalVideoOutput(*((_DWORD *)ChildDescriptor + 1)) )
  {
    v26 = *(_QWORD *)(v23 + 64);
    if ( *((_BYTE *)v18 + 66) == a4 )
    {
LABEL_34:
      v10 = a3;
      *((_BYTE *)v18 + 66) = a4;
      a4 = 1;
      goto LABEL_6;
    }
    memset(OutputBuffer, 0, 0xE8uLL);
    v27 = ZwPowerInformation(SystemPowerPolicyCurrent, 0LL, 0, OutputBuffer, 0xE8u);
    v29 = v27;
    if ( v27 < 0 )
    {
      OutputBuffer[7] = 0;
      v30 = WdLogNewEntry5_WdError(v28);
      *(_QWORD *)(v30 + 24) = v29;
      WdLogEvent5_WdError(v30);
    }
    v31 = *(DXGADAPTER **)(v11 + 3728);
    if ( a4 )
    {
      PhysicalMonitor = MonitorCreatePhysicalMonitor(v31, a2, (struct _DEVICE_OBJECT *)v18[6], 1u, a4, a9);
      v21 = PhysicalMonitor;
      if ( PhysicalMonitor >= 0 )
      {
        if ( *(_BYTE *)(v26 + 944) )
        {
          MonitorNotifyDeviceNodeReady(*(DXGADAPTER **)(v11 + 3728), a2);
          goto LABEL_31;
        }
        goto LABEL_33;
      }
    }
    else
    {
      v33 = MonitorRemovePhysicalMonitor(v31, a2, OutputBuffer[7] != 0, a9);
      v21 = v33;
      if ( v33 >= 0 )
      {
        if ( !OutputBuffer[7] && *(_BYTE *)(v26 + 944) )
        {
LABEL_31:
          v34 = DpiPdoSetMonitorDriverInterfaceState((PVOID)v18[6]);
          v37 = v34;
          if ( v34 < 0 )
          {
            v38 = WdLogNewEntry5_WdWarning(v36, v35, v16);
            *(_QWORD *)(v38 + 24) = v37;
            WdLogEvent5_WdWarning(v38);
          }
        }
LABEL_33:
        v13 = a1;
        LOBYTE(v16) = v41;
        goto LABEL_34;
      }
    }
LABEL_20:
    v25 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v25 + 24) = v21;
    WdLogEvent5_WdError(v25);
    return (unsigned int)v21;
  }
  *((_BYTE *)v18 + 66) = a4;
LABEL_6:
  if ( (_BYTE)v16 != a4 || a4 && a6 )
  {
    *((_BYTE *)v18 + 65) = a4;
    if ( a4 )
    {
      LOBYTE(v17) = a5;
      LOBYTE(v40) = a7;
      LOBYTE(OutputBufferLength) = a6;
      v20 = DpiPdoAddPdo(v13, v18, v10, v17, OutputBufferLength, v40, a9);
    }
    else
    {
      LOBYTE(v16) = 1;
      v20 = DpiPdoRemovePdo(v13, v18, v16, a9);
    }
    LODWORD(v21) = v20;
    if ( v20 >= 0 && v20 != 0x40000000 )
    {
      _m_prefetchw((const void *)(v11 + 3476));
      if ( (_InterlockedOr((volatile signed __int32 *)(v11 + 3476), 1u) & 1) == 0 )
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v11 + 152), BusRelations);
    }
  }
  else
  {
    LODWORD(v21) = 0;
  }
  return (unsigned int)v21;
}
