/*
 * XREFs of MonitorFillMonitorDeviceInfo @ 0x1C00F3400
 * Callers:
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00F326C (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000BB68 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     RtlStringCchCopyW @ 0x1C000E754 (RtlStringCchCopyW.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00D82E4 (-_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 */

__int64 __fastcall MonitorFillMonitorDeviceInfo(struct HDXGMONITOR__ *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  PZZWSTR v5; // rbx
  __int64 v6; // rcx
  struct _DEVICE_OBJECT *v7; // rdx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  NTSTATUS v11; // edi
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  PZZWSTR SymbolicLinkList; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  SymbolicLinkList = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, (struct DXGMONITOR **)&SymbolicLinkList);
  if ( (int)result >= 0 )
  {
    v5 = SymbolicLinkList;
    if ( !SymbolicLinkList )
    {
      v13 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v13);
      v15 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v15);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v5 + 140), 1u);
    if ( *((_DWORD *)v5 + 104) == 1 && (*((_DWORD *)v5 + 6) & 0x10) == 0 )
    {
      v16 = WdLogNewEntry5_WdDmmEvent(v6);
      *(_QWORD *)(v16 + 24) = v5;
      WdLogEvent5_WdDmmEvent(v16);
      v11 = -1073741275;
    }
    else
    {
      memset((void *)(a2 + 164), 0, 0x100uLL);
      v7 = (struct _DEVICE_OBJECT *)*((_QWORD *)v5 + 5);
      if ( !v7 )
      {
LABEL_12:
        v11 = DXGMONITOR::_FillMonitorDeviceInfo((DXGMONITOR *)v5, (struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)a2);
        if ( v11 == -1071841279 )
          v11 = 0;
        if ( v11 >= 0 )
        {
          v12 = *(_DWORD *)(a2 + 20);
          if ( (v12 & 1) == 0 && !*(_WORD *)(a2 + 36) )
            *(_DWORD *)(a2 + 20) = v12 | 2;
        }
        goto LABEL_16;
      }
      SymbolicLinkList = 0LL;
      DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, v7, 0, &SymbolicLinkList);
      v11 = DeviceInterfaces;
      if ( DeviceInterfaces < 0 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9) + 24) = DeviceInterfaces;
      }
      else
      {
        v11 = RtlStringCchCopyW((NTSTRSAFE_PWSTR)(a2 + 164), 0x80uLL, SymbolicLinkList);
        ExFreePoolWithTag(SymbolicLinkList, 0);
        if ( v11 >= 0 )
        {
          *(_WORD *)(a2 + 166) = 92;
          goto LABEL_12;
        }
      }
    }
LABEL_16:
    ExReleaseResourceLite((PERESOURCE)(v5 + 140));
    KeLeaveCriticalRegion();
    return (unsigned int)v11;
  }
  return result;
}
