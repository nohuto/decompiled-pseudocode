/*
 * XREFs of ?_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z0PEAPEAUHDXGMONITOREVENT__@@@Z @ 0x1C022A57C
 * Callers:
 *     MonitorRegisterMonitorEventCallback @ 0x1C022EE38 (MonitorRegisterMonitorEventCallback.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateAndInsertMonitorEventHandler(
        struct _FAST_MUTEX *this,
        int (__high *a2)(void *, unsigned int, void *, enum MONITOR_EVENT, unsigned __int64, enum _DMM_VIDPN_MONITOR_TYPE, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *),
        void *a3,
        struct HDXGMONITOREVENT__ **a4)
{
  __int64 v6; // rax
  MONITOR_MGR *v7; // rax
  __int64 v8; // rcx
  MONITOR_MGR *v9; // rdi
  __int64 v10; // rax
  __int64 v12; // rax
  MONITOR_MGR **Blink; // rcx
  __int64 v14; // rax

  if ( !a4 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  *a4 = 0LL;
  v7 = (MONITOR_MGR *)operator new[](0x20uLL, 0x4D677844u, PagedPool);
  v9 = v7;
  if ( v7 )
  {
    *((_QWORD *)v7 + 3) = 0LL;
    *((_QWORD *)v7 + 2) = VIDPN_MGR::_MonitorEventHandler;
    if ( this == (struct _FAST_MUTEX *)-224LL )
    {
      v12 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v12);
    }
    KeAcquireGuardedMutex(this + 4);
    Blink = (MONITOR_MGR **)this[2].Event.Header.WaitListHead.Blink;
    if ( *Blink != (MONITOR_MGR *)&this[2].Event.Header.WaitListHead )
      __fastfail(3u);
    *(_QWORD *)v9 = (char *)this + 144;
    *((_QWORD *)v9 + 1) = Blink;
    *Blink = v9;
    this[2].Event.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v9;
    *a4 = v9;
    if ( this == (struct _FAST_MUTEX *)-224LL )
    {
      v14 = WdLogNewEntry5_WdAssertion(Blink);
      WdLogEvent5_WdAssertion(v14);
    }
    KeReleaseGuardedMutex(this + 4);
    return 0LL;
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v8);
    WdLogEvent5_WdError(v10);
    return 3221225495LL;
  }
}
