/*
 * XREFs of MonitorCreateMonitorManager @ 0x1C010778C
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0106688 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1C001225C (--0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     ??_GMONITOR_MGR@@QEAAPEAXI@Z @ 0x1C0036DBC (--_GMONITOR_MGR@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ @ 0x1C010DEF4 (-_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ.c)
 */

__int64 __fastcall MonitorCreateMonitorManager(struct ADAPTER_DISPLAY *a1, MONITOR_MGR **a2)
{
  __int64 v4; // rcx
  MONITOR_MGR *v5; // rax
  __int64 v6; // rcx
  MONITOR_MGR *v7; // rbx
  __int64 result; // rax
  unsigned int v9; // esi
  __int64 v10; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2) + 24) = a1;
  if ( !a1 || !a2 )
  {
    v10 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v10 + 24) = a1;
    *(_QWORD *)(v10 + 32) = a2;
    goto LABEL_12;
  }
  *a2 = 0LL;
  v5 = (MONITOR_MGR *)operator new(0x308uLL, 0x4D677844u, (POOL_TYPE)512);
  if ( v5 )
    v7 = MONITOR_MGR::MONITOR_MGR(v5, a1);
  else
    v7 = 0LL;
  if ( !v7 )
  {
    v10 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v10 + 24) = *((_QWORD *)a1 + 2);
LABEL_12:
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  result = MONITOR_MGR::_InitializeMonitorManager(v7);
  v9 = result;
  if ( (int)result < 0 )
  {
    MONITOR_MGR::`scalar deleting destructor'(v7);
    return v9;
  }
  else
  {
    *a2 = v7;
  }
  return result;
}
