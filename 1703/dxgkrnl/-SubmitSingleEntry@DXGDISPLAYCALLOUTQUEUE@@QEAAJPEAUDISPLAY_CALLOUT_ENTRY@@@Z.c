/*
 * XREFs of ?SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@@Z @ 0x1C01971C8
 * Callers:
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0172854 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017296C (-RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SC.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C01976A0 (DxgkRequestAsyncDisplaySwitchCallout.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DpiGdiAsyncDisplayCallout @ 0x1C01C2508 (DpiGdiAsyncDisplayCallout.c)
 */

__int64 __fastcall DXGDISPLAYCALLOUTQUEUE::SubmitSingleEntry(
        DXGDISPLAYCALLOUTQUEUE ***this,
        struct DISPLAY_CALLOUT_ENTRY *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  DXGDISPLAYCALLOUTQUEUE **v8; // rdx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  *((_BYTE *)a2 + 20) = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGFASTMUTEX *const)this, a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v8 = this[6];
  if ( *v8 != (DXGDISPLAYCALLOUTQUEUE *)(this + 5) )
    __fastfail(3u);
  *(_QWORD *)a2 = this + 5;
  *((_QWORD *)a2 + 1) = v8;
  *v8 = a2;
  this[6] = (DXGDISPLAYCALLOUTQUEUE **)a2;
  if ( this[7]
    || (DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14, (__int64)v8, v6, v7),
        v9 = DpiGdiAsyncDisplayCallout(),
        v11 = v9,
        v9 >= 0) )
  {
    LODWORD(v11) = 0;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v10, v8);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdError(v12);
  }
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14, (__int64)v8, v6, v7);
  return (unsigned int)v11;
}
