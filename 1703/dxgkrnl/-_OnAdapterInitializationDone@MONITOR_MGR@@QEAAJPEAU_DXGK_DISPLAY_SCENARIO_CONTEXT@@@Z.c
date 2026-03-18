/*
 * XREFs of ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115BE4
 * Callers:
 *     MonitorInitializeAdapterDone @ 0x1C011739C (MonitorInitializeAdapterDone.c)
 * Callees:
 *     DmmGetEmergentSimulatedTarget @ 0x1C00F83E4 (DmmGetEmergentSimulatedTarget.c)
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0114FFC (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_OnAdapterInitializationDone(
        MONITOR_MGR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  _DWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  __int64 v12; // rax

  v6 = (_DWORD *)((char *)this + 160);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( (int)DmmGetEmergentSimulatedTarget(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL), (int *)this + 40) < 0 )
  {
    if ( *v6 == -1 )
      goto LABEL_3;
LABEL_5:
    v12 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    WdLogEvent5_WdAssertion(v12);
    goto LABEL_3;
  }
  if ( *v6 == -1 )
    goto LABEL_5;
LABEL_3:
  MONITOR_MGR::_CreateBootPersistentMonitors(this, a2, v9, v10);
  result = 0LL;
  *((_BYTE *)this + 5) = 1;
  return result;
}
