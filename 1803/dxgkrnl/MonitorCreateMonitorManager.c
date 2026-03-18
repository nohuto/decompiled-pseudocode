/*
 * XREFs of MonitorCreateMonitorManager @ 0x1C022D548
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01550C8 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1C0046C58 (--0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     ??_GMONITOR_MGR@@QEAAPEAXI@Z @ 0x1C0046DD4 (--_GMONITOR_MGR@@QEAAPEAXI@Z.c)
 *     ?_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ @ 0x1C022C3E0 (-_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ.c)
 */

__int64 __fastcall MonitorCreateMonitorManager(struct ADAPTER_DISPLAY *a1, MONITOR_MGR **a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  MONITOR_MGR *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  MONITOR_MGR *v12; // rbx
  __int64 v13; // rax
  __int64 result; // rax
  unsigned int v15; // esi

  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a1;
  if ( !a1 || !a2 )
  {
    v13 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v13 + 24) = a1;
    *(_QWORD *)(v13 + 32) = a2;
    goto LABEL_12;
  }
  *a2 = 0LL;
  v7 = (MONITOR_MGR *)operator new[](0x308uLL, 0x4D677844u, (POOL_TYPE)512);
  if ( v7 )
    v12 = MONITOR_MGR::MONITOR_MGR(v7, a1, v10, v11);
  else
    v12 = 0LL;
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v13 + 24) = *((_QWORD *)a1 + 2);
LABEL_12:
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  result = MONITOR_MGR::_InitializeMonitorManager(v12, v8, v10, v11);
  v15 = result;
  if ( (int)result >= 0 )
  {
    *a2 = v12;
  }
  else
  {
    MONITOR_MGR::`scalar deleting destructor'(v12);
    return v15;
  }
  return result;
}
