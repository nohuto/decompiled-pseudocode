/*
 * XREFs of ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z @ 0x1C022B350
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022B610 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022B9B8 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 * Callees:
 *     ?_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ @ 0x1C0046EB8 (-_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall MONITOR_MGR::_GetEmergencySimulatedMonitor(struct _FAST_MUTEX *this, struct DXGMONITOR **a2)
{
  __int64 v4; // rax
  struct _FAST_MUTEX *v5; // rbx
  __int64 v6; // rax
  ULONG *p_Contention; // rcx
  char *i; // rax
  char *v9; // rdi
  unsigned int v10; // esi
  __int64 v11; // rax
  __int64 v13; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = this + 3;
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  KeAcquireGuardedMutex(this + 3);
  p_Contention = &this[2].Contention;
  for ( i = *(char **)&this[2].Contention; ; i = (char *)*((_QWORD *)v9 + 2) )
  {
    if ( i == (char *)p_Contention )
      goto LABEL_12;
    v9 = i - 16;
    if ( !i )
      v9 = 0LL;
    if ( !v9 )
    {
LABEL_12:
      v10 = -1073741275;
      v9 = 0LL;
      goto LABEL_13;
    }
    if ( *((_DWORD *)v9 + 108) == 5 )
      break;
  }
  if ( DXGMONITOR::_GetAttachedPhysicalMonitor((DXGMONITOR *)v9) )
  {
    v13 = WdLogNewEntry5_WdAssertion(p_Contention);
    WdLogEvent5_WdAssertion(v13);
  }
  v10 = 0;
LABEL_13:
  *a2 = (struct DXGMONITOR *)v9;
  if ( !v5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(p_Contention);
    WdLogEvent5_WdAssertion(v11);
  }
  KeReleaseGuardedMutex(v5);
  return v10;
}
