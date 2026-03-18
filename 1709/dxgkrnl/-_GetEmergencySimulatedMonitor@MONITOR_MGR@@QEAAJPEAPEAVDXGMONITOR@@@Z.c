/*
 * XREFs of ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z @ 0x1C010D3A8
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DD0C (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD150 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 * Callees:
 *     ?_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ @ 0x1C0036E90 (-_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall MONITOR_MGR::_GetEmergencySimulatedMonitor(struct _FAST_MUTEX *this, struct DXGMONITOR **a2)
{
  struct _FAST_MUTEX *v4; // rbx
  __int64 v5; // rcx
  ULONG *p_Contention; // rax
  DXGMONITOR *i; // rdi
  unsigned int v8; // edi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  if ( !a2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  v4 = this + 3;
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v11);
  }
  KeAcquireGuardedMutex(this + 3);
  p_Contention = &this[2].Contention;
  for ( i = *(DXGMONITOR **)&this[2].Contention; ; i = *(DXGMONITOR **)i )
  {
    if ( i == (DXGMONITOR *)p_Contention || !i )
    {
      *a2 = 0LL;
      v8 = -1073741275;
      goto LABEL_8;
    }
    if ( *((_DWORD *)i + 104) == 5 )
      break;
  }
  if ( DXGMONITOR::_GetAttachedPhysicalMonitor(i) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v12);
  }
  *a2 = i;
  v8 = 0;
LABEL_8:
  if ( !v4 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v13);
  }
  KeReleaseGuardedMutex(v4);
  return v8;
}
