/*
 * XREFs of MonitorRegisterMonitorEventCallback @ 0x1C022EE38
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C020F214 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ?_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z0PEAPEAUHDXGMONITOREVENT__@@@Z @ 0x1C022A57C (-_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN.c)
 */

__int64 __fastcall MonitorRegisterMonitorEventCallback(
        __int64 a1,
        int (__high *a2)(void *, unsigned int, void *, enum MONITOR_EVENT, unsigned __int64, enum _DMM_VIDPN_MONITOR_TYPE, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *),
        void *a3,
        struct HDXGMONITOREVENT__ **a4)
{
  struct _FAST_MUTEX *v5; // rcx
  __int64 v6; // rax

  if ( !a1 || !a4 )
    return 3221225485LL;
  *a4 = 0LL;
  v5 = *(struct _FAST_MUTEX **)(a1 + 96);
  if ( !v5 )
  {
    v6 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v6 + 24) = *(_QWORD *)(a1 + 16);
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  return MONITOR_MGR::_CreateAndInsertMonitorEventHandler(v5, a2, a3, a4);
}
