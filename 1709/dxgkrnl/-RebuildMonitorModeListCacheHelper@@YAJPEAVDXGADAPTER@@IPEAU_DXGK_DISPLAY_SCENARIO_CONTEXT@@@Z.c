/*
 * XREFs of ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010485C
 * Callers:
 *     MonitorRebuildMonitorModeListCache @ 0x1C01047D0 (MonitorRebuildMonitorModeListCache.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010BEA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 */

__int64 __fastcall RebuildMonitorModeListCacheHelper(
        struct DXGADAPTER *a1,
        unsigned int a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v3; // rax
  __int64 v6; // rdi
  int MonitorInstance; // eax
  __int64 v8; // rcx
  DXGMONITOR *v9; // rbx
  int updated; // eax
  struct _ERESOURCE *v11; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rax
  DXGMONITOR *v15; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)a1 + 288);
  v15 = 0LL;
  v6 = a2;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(*(struct _FAST_MUTEX **)(v3 + 96), a2, 0, (ULONG **)&v15);
  v9 = (DXGMONITOR *)MonitorInstance;
  if ( MonitorInstance < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v8);
    v13[3] = a1;
    v13[4] = v6;
    v13[5] = v9;
    WdLogEvent5_WdDmmEvent(v13);
  }
  else
  {
    v9 = v15;
    if ( !v15 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v14);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v9 + 280), 1u);
    updated = DXGMONITOR::_UpdateEDIDBaseBlock(v9, a3, 1u);
    v11 = (struct _ERESOURCE *)((char *)v9 + 280);
    LODWORD(v9) = updated;
    ExReleaseResourceLite(v11);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v9;
}
