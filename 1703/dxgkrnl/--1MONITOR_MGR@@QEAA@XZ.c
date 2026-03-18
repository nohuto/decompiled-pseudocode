/*
 * XREFs of ??1MONITOR_MGR@@QEAA@XZ @ 0x1C01E2100
 * Callers:
 *     ??_GMONITOR_MGR@@QEAAPEAXI@Z @ 0x1C0045C24 (--_GMONITOR_MGR@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x1C0001D54 (-_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E282C (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01E28E8 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

void __fastcall MONITOR_MGR::~MONITOR_MGR(MONITOR_MGR *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct DXGMONITOR **v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGMONITOR *v9; // rbx
  struct DXGMONITOR **v10; // rax
  struct DXGMONITOR *v11; // rdx
  __int64 **v12; // rbx
  __int64 *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  struct _KEVENT *v16; // rcx
  _QWORD v17[8]; // [rsp+20h] [rbp-58h] BYREF

  memset(v17, 0, sizeof(v17));
  EtwActivityIdControl(3u, (LPGUID)&v17[1]);
  v17[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v17[3]) = 24;
  v6 = (struct DXGMONITOR **)((char *)this + 128);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v3, v2, v4, v5) + 24) = this;
  while ( *v6 != (struct DXGMONITOR *)v6 )
  {
    v9 = *v6;
    v10 = *(struct DXGMONITOR ***)*v6;
    if ( *((struct DXGMONITOR ***)*v6 + 1) != v6 || v10[1] != v9 )
      __fastfail(3u);
    *v6 = (struct DXGMONITOR *)v10;
    v10[1] = (struct DXGMONITOR *)v6;
    if ( *((_DWORD *)v9 + 94) == 1 )
    {
      MONITOR_MGR::_DestroyPhysicalMonitor(this, v9, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v17);
    }
    else
    {
      v11 = (struct DXGMONITOR *)*((_QWORD *)v9 + 48);
      if ( v11 )
      {
        MONITOR_MGR::_DestroyPhysicalMonitor(this, v11, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v17);
        *((_QWORD *)v9 + 48) = 0LL;
      }
      MONITOR_MGR::_DestroySimulatedMonitor(this, v9);
    }
  }
  v12 = (__int64 **)((char *)this + 144);
  while ( *v12 != (__int64 *)v12 )
  {
    v13 = *v12;
    v14 = **v12;
    if ( (__int64 **)(*v12)[1] != v12 || *(__int64 **)(v14 + 8) != v13 )
      __fastfail(3u);
    *v12 = (__int64 *)v14;
    *(_QWORD *)(v14 + 8) = v12;
    v15 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v15 + 24) = v13[2];
    *(_QWORD *)(v15 + 32) = v13[3];
    WdLogEvent5_WdError(v15);
    ExFreePoolWithTag(v13, 0);
  }
  v16 = (struct _KEVENT *)*((_QWORD *)this + 96);
  if ( v16 )
  {
    KeSetEvent(v16 + 1, 0, 0);
    MONITOR_MGR::_ReleaseMonitorPendingEvent(*((struct _MONITOR_PENDING_EVENT **)this + 96));
    *((_QWORD *)this + 96) = 0LL;
  }
  ExDeleteResourceLite((PERESOURCE)((char *)this + 16));
}
