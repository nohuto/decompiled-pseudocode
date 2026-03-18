/*
 * XREFs of ?DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z @ 0x1C01EBC64
 * Callers:
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017EDA8 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AAEF8 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     MonitorDRTTest @ 0x1C01FDF58 (MonitorDRTTest.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DmmEnableModeResetOnMonitorEvent(PERESOURCE *a1, char a2)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  PERESOURCE v8; // rbx
  _DWORD *Address; // rbx
  __int64 v10; // rax
  __int64 v11; // rax

  if ( !a1 )
  {
    v4 = WdLogNewEntry5_WdError(0LL);
LABEL_3:
    WdLogEvent5_WdError(v4);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = a1[288];
  if ( !v8 )
  {
    v4 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v4 + 24) = a1;
    goto LABEL_3;
  }
  Address = v8->Address;
  if ( Address )
  {
    if ( a2 )
    {
      if ( !Address[120] )
      {
        v11 = WdLogNewEntry5_WdAssertion(v6);
        WdLogEvent5_WdAssertion(v11);
      }
      --Address[120];
    }
    else
    {
      ++Address[120];
    }
    return 0LL;
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v10 + 24) = a1;
    WdLogEvent5_WdError(v10);
    return 3223192373LL;
  }
}
