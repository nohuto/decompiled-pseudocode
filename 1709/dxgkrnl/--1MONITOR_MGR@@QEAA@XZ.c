/*
 * XREFs of ??1MONITOR_MGR@@QEAA@XZ @ 0x1C01FC994
 * Callers:
 *     ??_GMONITOR_MGR@@QEAAPEAXI@Z @ 0x1C0036DBC (--_GMONITOR_MGR@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x1C000872C (-_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FCFEC (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01FD0A8 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

void __fastcall MONITOR_MGR::~MONITOR_MGR(MONITOR_MGR *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  char *v4; // rsi
  __int64 v5; // rcx
  struct DXGMONITOR *v6; // rdi
  __int64 v7; // rax
  struct DXGMONITOR *v8; // rdx
  char *v9; // rdi
  _QWORD *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  struct _KEVENT *v13; // rcx
  _QWORD v14[10]; // [rsp+20h] [rbp-68h] BYREF

  memset(v14, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v14[1]);
  v14[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v14[3]) = 24;
  LOBYTE(v14[6]) = -1;
  v4 = (char *)this + 128;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v3, v2) + 24) = this;
  while ( *(char **)v4 != v4 )
  {
    v6 = *(struct DXGMONITOR **)v4;
    if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4
      || (v7 = *(_QWORD *)v6, *(struct DXGMONITOR **)(*(_QWORD *)v6 + 8LL) != v6) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v4 = v7;
    *(_QWORD *)(v7 + 8) = v4;
    if ( *((_DWORD *)v6 + 104) == 1 )
    {
      MONITOR_MGR::_DestroyPhysicalMonitor(this, v6, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v14);
    }
    else
    {
      v8 = (struct DXGMONITOR *)*((_QWORD *)v6 + 53);
      if ( v8 )
      {
        MONITOR_MGR::_DestroyPhysicalMonitor(this, v8, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v14);
        *((_QWORD *)v6 + 53) = 0LL;
      }
      MONITOR_MGR::_DestroySimulatedMonitor(this, v6);
    }
  }
  v9 = (char *)this + 144;
  while ( *(char **)v9 != v9 )
  {
    v10 = *(_QWORD **)v9;
    if ( *(char **)(*(_QWORD *)v9 + 8LL) != v9 || (v11 = *v10, *(_QWORD **)(*v10 + 8LL) != v10) )
      __fastfail(3u);
    *(_QWORD *)v9 = v11;
    *(_QWORD *)(v11 + 8) = v9;
    v12 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v12 + 24) = v10[2];
    *(_QWORD *)(v12 + 32) = v10[3];
    WdLogEvent5_WdError(v12);
    ExFreePoolWithTag(v10, 0);
  }
  v13 = (struct _KEVENT *)*((_QWORD *)this + 96);
  if ( v13 )
  {
    KeSetEvent(v13 + 1, 0, 0);
    MONITOR_MGR::_ReleaseMonitorPendingEvent(*((struct _MONITOR_PENDING_EVENT **)this + 96));
    *((_QWORD *)this + 96) = 0LL;
  }
  ExDeleteResourceLite((PERESOURCE)((char *)this + 16));
}
