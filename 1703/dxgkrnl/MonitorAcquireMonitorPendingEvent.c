/*
 * XREFs of MonitorAcquireMonitorPendingEvent @ 0x1C0099D48
 * Callers:
 *     ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C0099BF4 (-DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017AFF8 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0195CFC (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall MonitorAcquireMonitorPendingEvent(DXGADAPTER *this, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax

  v6 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this || !a2 )
    return 3221225485LL;
  *a2 = 0LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    WdLogEvent5_WdAssertion(v20);
  }
  v11 = *((_QWORD *)this + 285);
  if ( !v11 )
  {
    v21 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v21 + 24) = this;
    WdLogEvent5_WdError(v21);
    return 3221225659LL;
  }
  v12 = *(_QWORD *)(v11 + 96);
  if ( !v12 )
  {
    v22 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v22 + 24) = this;
    WdLogEvent5_WdError(v22);
    return 3221225485LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v12 + 8) + 16LL)) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    WdLogEvent5_WdAssertion(v23);
  }
  v17 = *(_QWORD *)(v12 + 768);
  if ( v17 )
  {
    if ( *(int *)(v17 + 16) <= 0 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
      WdLogEvent5_WdAssertion(v24);
    }
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v12 + 768) + 16LL));
  }
  v18 = *(_QWORD *)(v12 + 768);
  *a2 = v18;
  if ( !v18 )
    return (unsigned int)-1073741823;
  return v6;
}
