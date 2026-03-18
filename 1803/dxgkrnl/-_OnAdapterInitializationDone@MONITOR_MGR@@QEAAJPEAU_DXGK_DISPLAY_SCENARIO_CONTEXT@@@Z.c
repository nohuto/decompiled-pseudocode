/*
 * XREFs of ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022CCAC
 * Callers:
 *     MonitorInitializeAdapterDone @ 0x1C022E4F0 (MonitorInitializeAdapterDone.c)
 * Callees:
 *     ?DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z @ 0x1C00AF654 (-DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z.c)
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022A678 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_OnAdapterInitializationDone(
        MONITOR_MGR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  int EmergentSimulatedTarget; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 result; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  EmergentSimulatedTarget = DmmGetEmergentSimulatedTarget(
                              *(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL),
                              (unsigned int *)this + 40);
  v9 = *((unsigned int *)this + 40);
  if ( EmergentSimulatedTarget < 0 )
  {
    if ( (_DWORD)v9 != -1 )
    {
LABEL_5:
      v10 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v10);
    }
  }
  else if ( (_DWORD)v9 == -1 )
  {
    goto LABEL_5;
  }
  MONITOR_MGR::_CreateBootPersistentMonitors(this, a2, v7, v8);
  result = 0LL;
  *((_BYTE *)this + 5) = 1;
  return result;
}
