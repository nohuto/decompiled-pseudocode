/*
 * XREFs of ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C022C498
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022A9B0 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022B610 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022B9B8 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022C234 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_InsertMonitorToList(struct _FAST_MUTEX *this, struct DXGMONITOR *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  ULONG *p_Contention; // rax
  MONITOR_MGR *v7; // rcx
  char *v8; // rdi
  char **v9; // rdx
  char *v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // edi
  __int64 v13; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v5);
  }
  KeAcquireGuardedMutex(this + 3);
  p_Contention = &this[2].Contention;
  v7 = *(MONITOR_MGR **)&this[2].Contention;
  if ( v7 == (MONITOR_MGR *)&this[2].Contention )
    goto LABEL_14;
  v8 = (char *)v7 - 16;
  if ( !v7 )
    v8 = 0LL;
  if ( !v8 )
  {
LABEL_14:
    v9 = *(char ***)&this[2].Event.Header.Lock;
    v10 = (char *)a2 + 16;
    if ( *v9 != (char *)p_Contention )
      __fastfail(3u);
    *(_QWORD *)v10 = p_Contention;
    v12 = 0;
    *((_QWORD *)a2 + 3) = v9;
    *v9 = v10;
    *(_QWORD *)&this[2].Event.Header.Lock = v10;
    ++LODWORD(this[2].Owner);
  }
  else
  {
    while ( *((_DWORD *)a2 + 11) != *((_DWORD *)v8 + 11) )
    {
      v7 = (MONITOR_MGR *)*((_QWORD *)v8 + 2);
      if ( v7 != (MONITOR_MGR *)p_Contention )
      {
        v8 = (char *)v7 - 16;
        if ( !v7 )
          v8 = 0LL;
        if ( v8 )
          continue;
      }
      goto LABEL_14;
    }
    v11 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v11 + 24) = *((unsigned int *)v8 + 11);
    WdLogEvent5_WdError(v11);
    v12 = -1071774952;
  }
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v13);
  }
  KeReleaseGuardedMutex(this + 3);
  return v12;
}
