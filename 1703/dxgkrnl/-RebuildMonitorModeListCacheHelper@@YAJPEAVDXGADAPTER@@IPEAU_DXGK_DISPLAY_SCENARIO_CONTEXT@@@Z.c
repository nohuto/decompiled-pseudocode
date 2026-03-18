/*
 * XREFs of ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E22A4
 * Callers:
 *     MonitorRebuildMonitorModeListCache @ 0x1C01E4234 (MonitorRebuildMonitorModeListCache.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E989C (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0108DA4 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 */

__int64 __fastcall RebuildMonitorModeListCacheHelper(
        struct DXGADAPTER *a1,
        __int64 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v3; // rax
  __int64 v6; // rdi
  int MonitorInstance; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  DXGMONITOR *v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  int updated; // eax
  struct _ERESOURCE *v18; // rcx
  DXGMONITOR *v20; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)a1 + 285);
  v20 = 0LL;
  v6 = (unsigned int)a2;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(*(struct _FAST_MUTEX **)(v3 + 96), a2, 0LL, (ULONG **)&v20);
  v12 = (DXGMONITOR *)MonitorInstance;
  if ( MonitorInstance >= 0 )
  {
    v12 = v20;
    if ( !v20 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
      WdLogEvent5_WdAssertion(v14);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v12 + 240), 1u);
    LOBYTE(v15) = 1;
    updated = DXGMONITOR::_UpdateEDIDBaseBlock(v12, a3, v15, v16);
    v18 = (struct _ERESOURCE *)((char *)v12 + 240);
    LODWORD(v12) = updated;
    ExReleaseResourceLite(v18);
    KeLeaveCriticalRegion();
  }
  else
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v9, v8, v10, v11);
    v13[3] = a1;
    v13[4] = v6;
    v13[5] = v12;
    WdLogEvent5_WdDmmEvent(v13);
  }
  return (unsigned int)v12;
}
