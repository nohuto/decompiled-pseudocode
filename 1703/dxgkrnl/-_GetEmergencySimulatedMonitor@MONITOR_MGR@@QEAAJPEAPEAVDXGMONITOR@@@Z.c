/*
 * XREFs of ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z @ 0x1C0114F7C
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115888 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E2990 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 * Callees:
 *     ?_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ @ 0x1C0045CF8 (-_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall MONITOR_MGR::_GetEmergencySimulatedMonitor(
        struct _FAST_MUTEX *this,
        struct DXGMONITOR **a2,
        __int64 a3,
        __int64 a4)
{
  struct _FAST_MUTEX *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  ULONG *p_Contention; // rax
  DXGMONITOR *i; // rdi
  unsigned int v13; // edi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  if ( !a2 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v15);
  }
  v6 = this + 3;
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v16);
  }
  KeAcquireGuardedMutex(this + 3);
  p_Contention = &this[2].Contention;
  for ( i = *(DXGMONITOR **)&this[2].Contention; ; i = *(DXGMONITOR **)i )
  {
    if ( i == (DXGMONITOR *)p_Contention || !i )
    {
      *a2 = 0LL;
      v13 = -1073741275;
      goto LABEL_8;
    }
    if ( *((_DWORD *)i + 94) == 5 )
      break;
  }
  if ( DXGMONITOR::_GetAttachedPhysicalMonitor(i, v7, v9, v10) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    WdLogEvent5_WdAssertion(v17);
  }
  *a2 = i;
  v13 = 0;
LABEL_8:
  if ( !v6 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    WdLogEvent5_WdAssertion(v18);
  }
  KeReleaseGuardedMutex(v6);
  return v13;
}
