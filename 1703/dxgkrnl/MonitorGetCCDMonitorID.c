/*
 * XREFs of MonitorGetCCDMonitorID @ 0x1C00AF60C
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C00AC3D0 (DxgkGetMonitorInternalInfo.c)
 *     ?GetMonitorIdFromTargetId@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C00ADA88 (-GetMonitorIdFromTargetId@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00ADF6C (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     DmmAppendCcdConnectedSetForAdapter @ 0x1C00AF490 (DmmAppendCcdConnectedSetForAdapter.c)
 *     DmmGetTargetIdFromCcdMonitorId @ 0x1C00AF6C4 (DmmGetTargetIdFromCcdMonitorId.c)
 *     ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C01196FC (-Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000D2AC (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ @ 0x1C0045CF8 (-_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ.c)
 *     ?_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z @ 0x1C00FA000 (-_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z.c)
 */

__int64 __fastcall MonitorGetCCDMonitorID(struct HDXGMONITOR__ *a1, unsigned int a2, unsigned __int16 *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  DXGMONITOR *AttachedPhysicalMonitor; // rbx
  unsigned int MonitorCCDMonitorID; // eax
  struct _ERESOURCE *v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  DXGMONITOR *v21; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v21 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v21, (__int64)a3, a4);
  if ( (int)result >= 0 )
  {
    AttachedPhysicalMonitor = v21;
    if ( *((_DWORD *)v21 + 94) != 1 && DXGMONITOR::_GetAttachedPhysicalMonitor(v21, v7, v9, v10) )
      AttachedPhysicalMonitor = DXGMONITOR::_GetAttachedPhysicalMonitor(AttachedPhysicalMonitor, v7, v9, v10);
    if ( !AttachedPhysicalMonitor )
    {
      v15 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      WdLogEvent5_WdAssertion(v15);
      v20 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
      WdLogEvent5_WdAssertion(v20);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 240), 1u);
    MonitorCCDMonitorID = DXGMONITOR::_GetMonitorCCDMonitorID(AttachedPhysicalMonitor, 1u, a2, a3);
    v13 = (struct _ERESOURCE *)((char *)AttachedPhysicalMonitor + 240);
    v14 = MonitorCCDMonitorID;
    ExReleaseResourceLite(v13);
    KeLeaveCriticalRegion();
    return v14;
  }
  return result;
}
