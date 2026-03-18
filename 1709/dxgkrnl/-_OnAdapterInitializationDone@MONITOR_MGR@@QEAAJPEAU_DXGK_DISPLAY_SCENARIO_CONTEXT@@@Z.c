/*
 * XREFs of ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DE84
 * Callers:
 *     MonitorInitializeAdapterDone @ 0x1C0122BE0 (MonitorInitializeAdapterDone.c)
 * Callees:
 *     ?DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z @ 0x1C00B5648 (-DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z.c)
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010D428 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_OnAdapterInitializationDone(
        MONITOR_MGR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  _DWORD *v4; // rdi
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rax

  v4 = (_DWORD *)((char *)this + 160);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( (int)DmmGetEmergentSimulatedTarget(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL), (unsigned int *)this + 40) < 0 )
  {
    if ( *v4 == -1 )
      goto LABEL_3;
LABEL_5:
    v7 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v7);
    goto LABEL_3;
  }
  if ( *v4 == -1 )
    goto LABEL_5;
LABEL_3:
  MONITOR_MGR::_CreateBootPersistentMonitors(this, a2);
  result = 0LL;
  *((_BYTE *)this + 5) = 1;
  return result;
}
