/*
 * XREFs of ?SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@@Z @ 0x1C01AC194
 * Callers:
 *     ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0102294 (-RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SC.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0176394 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C01AC6B0 (DxgkRequestAsyncDisplaySwitchCallout.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DpiGdiAsyncDisplayCallout @ 0x1C0102020 (DpiGdiAsyncDisplayCallout.c)
 */

__int64 __fastcall DXGDISPLAYCALLOUTQUEUE::SubmitSingleEntry(
        DXGDISPLAYCALLOUTQUEUE ***this,
        struct DISPLAY_CALLOUT_ENTRY *a2)
{
  DXGDISPLAYCALLOUTQUEUE **v4; // rdx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  *((_BYTE *)a2 + 20) = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (struct DXGFASTMUTEX *const)this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v4 = this[6];
  if ( *v4 != (DXGDISPLAYCALLOUTQUEUE *)(this + 5) )
    __fastfail(3u);
  *(_QWORD *)a2 = this + 5;
  *((_QWORD *)a2 + 1) = v4;
  *v4 = a2;
  this[6] = (DXGDISPLAYCALLOUTQUEUE **)a2;
  if ( this[7] || (DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10), v5 = DpiGdiAsyncDisplayCallout(), v7 = v5, v5 >= 0) )
  {
    LODWORD(v7) = 0;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = v7;
    WdLogEvent5_WdError(v8);
  }
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  return (unsigned int)v7;
}
