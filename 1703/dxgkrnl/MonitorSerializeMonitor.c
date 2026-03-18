/*
 * XREFs of MonitorSerializeMonitor @ 0x1C01E43C0
 * Callers:
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01DCA60 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000D2AC (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_SerializeMonitor@DXGMONITOR@@QEAAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x1C01E7440 (-_SerializeMonitor@DXGMONITOR@@QEAAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 */

__int64 __fastcall MonitorSerializeMonitor(
        struct HDXGMONITOR__ *a1,
        unsigned __int64 *a2,
        struct _DMM_MONITOR_SERIALIZATION *a3,
        __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  DXGMONITOR *v11; // rbx
  __int64 v12; // rax
  unsigned int v13; // eax
  struct _ERESOURCE *v14; // rcx
  unsigned int v15; // ebx
  DXGMONITOR *v16; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v16 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v16, (__int64)a3, a4);
  if ( (int)result >= 0 )
  {
    v11 = v16;
    if ( !v16 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      WdLogEvent5_WdAssertion(v12);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v11 + 240), 1u);
    v13 = DXGMONITOR::_SerializeMonitor(v11, a2, a3);
    v14 = (struct _ERESOURCE *)((char *)v11 + 240);
    v15 = v13;
    ExReleaseResourceLite(v14);
    KeLeaveCriticalRegion();
    return v15;
  }
  return result;
}
