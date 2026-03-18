/*
 * XREFs of MonitorFillMonitorDeviceInfo @ 0x1C008BE70
 * Callers:
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C008BCF8 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C0001188 (RtlStringCchCopyW.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000D2AC (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00FA110 (-_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 */

__int64 __fastcall MonitorFillMonitorDeviceInfo(struct HDXGMONITOR__ *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  PZZWSTR v10; // rbx
  struct _DEVICE_OBJECT *v11; // rdx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  NTSTATUS v17; // edi
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  PZZWSTR SymbolicLinkList; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  SymbolicLinkList = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, (struct DXGMONITOR **)&SymbolicLinkList, a3, a4);
  if ( (int)result >= 0 )
  {
    v10 = SymbolicLinkList;
    if ( !SymbolicLinkList )
    {
      v19 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
      WdLogEvent5_WdAssertion(v19);
      v24 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
      WdLogEvent5_WdAssertion(v24);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v10 + 120), 1u);
    if ( *((_DWORD *)v10 + 94) == 1 && (*((_DWORD *)v10 + 6) & 0x10) == 0 )
    {
      v25 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v25 + 24) = v10;
      WdLogEvent5_WdDmmEvent(v25);
      v17 = -1073741275;
    }
    else
    {
      memset((void *)(a2 + 164), 0, 0x100uLL);
      v11 = (struct _DEVICE_OBJECT *)*((_QWORD *)v10 + 5);
      if ( !v11 )
      {
LABEL_12:
        v17 = DXGMONITOR::_FillMonitorDeviceInfo((DXGMONITOR *)v10, (struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)a2);
        if ( v17 == -1071841279 )
          v17 = 0;
        if ( v17 >= 0 )
        {
          v18 = *(_DWORD *)(a2 + 20);
          if ( (v18 & 1) == 0 && !*(_WORD *)(a2 + 36) )
            *(_DWORD *)(a2 + 20) = v18 | 2;
        }
        goto LABEL_16;
      }
      SymbolicLinkList = 0LL;
      DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, v11, 0, &SymbolicLinkList);
      v17 = DeviceInterfaces;
      if ( DeviceInterfaces < 0 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13, v15, v16) + 24) = DeviceInterfaces;
      }
      else
      {
        v17 = RtlStringCchCopyW((NTSTRSAFE_PWSTR)(a2 + 164), 0x80uLL, SymbolicLinkList);
        ExFreePoolWithTag(SymbolicLinkList, 0);
        if ( v17 >= 0 )
        {
          *(_WORD *)(a2 + 166) = 92;
          goto LABEL_12;
        }
      }
    }
LABEL_16:
    ExReleaseResourceLite((PERESOURCE)(v10 + 120));
    KeLeaveCriticalRegion();
    return (unsigned int)v17;
  }
  return result;
}
