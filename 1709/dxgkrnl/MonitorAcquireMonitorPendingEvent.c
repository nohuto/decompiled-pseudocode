/*
 * XREFs of MonitorAcquireMonitorPendingEvent @ 0x1C00B9CC4
 * Callers:
 *     ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C00B9B70 (-DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017EDA8 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AAEF8 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall MonitorAcquireMonitorPendingEvent(DXGADAPTER *this, _QWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax

  v4 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( !this || !a2 )
    return 3221225485LL;
  *a2 = 0LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v12);
  }
  v6 = *((_QWORD *)this + 288);
  if ( !v6 )
  {
    v13 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v13 + 24) = this;
    WdLogEvent5_WdError(v13);
    return 3221225659LL;
  }
  v7 = *(_QWORD *)(v6 + 96);
  if ( !v7 )
  {
    v14 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v14 + 24) = this;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v7 + 8) + 16LL)) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v15);
  }
  v9 = *(_QWORD *)(v7 + 768);
  if ( v9 )
  {
    if ( *(int *)(v9 + 16) <= 0 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v16);
    }
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 768) + 16LL));
  }
  v10 = *(_QWORD *)(v7 + 768);
  *a2 = v10;
  if ( !v10 )
    return (unsigned int)-1073741823;
  return v4;
}
