/*
 * XREFs of MonitorIsPhysicalMonitor @ 0x1C0122F7C
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C0043EEC (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0113970 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000D2AC (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

bool __fastcall MonitorIsPhysicalMonitor(struct HDXGMONITOR__ *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGMONITOR *v8; // rbx
  struct _ERESOURCE *v9; // rcx
  bool v10; // bl
  __int64 v12; // rax
  struct DXGMONITOR *v13; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || (int)MONITOR_MGR::_GetMonitorFromHandle(a1, &v13, a3, a4) < 0 )
    return 0;
  v8 = v13;
  if ( !v13 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    WdLogEvent5_WdAssertion(v12);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v8 + 240), 1u);
  v9 = (struct _ERESOURCE *)((char *)v8 + 240);
  v10 = *((_DWORD *)v8 + 94) == 1;
  ExReleaseResourceLite(v9);
  KeLeaveCriticalRegion();
  return v10;
}
