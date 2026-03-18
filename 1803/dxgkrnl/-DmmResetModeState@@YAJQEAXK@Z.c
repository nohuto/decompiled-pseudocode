/*
 * XREFs of ?DmmResetModeState@@YAJQEAXK@Z @ 0x1C02150D0
 * Callers:
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010F42C (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     DpiPowerArbiterThread @ 0x1C01F11D0 (DpiPowerArbiterThread.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C01F2788 (DpiFdoDestroyRelatedObjects.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0019C48 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 */

__int64 __fastcall DmmResetModeState(PERESOURCE *a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  PERESOURCE v9; // rcx
  PERESOURCE v10; // rax

  v2 = 0;
  if ( a1 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
    {
      v8 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v8);
    }
    v9 = a1[307];
    if ( v9 && LODWORD(v9->Reserved2) )
    {
      do
      {
        v10 = v9;
        if ( _bittest(&a2, v2) )
        {
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((PERESOURCE **)v9, v2, 1);
          v10 = a1[307];
        }
        ++v2;
        v9 = v10;
      }
      while ( v2 < LODWORD(v10->Reserved2) );
    }
    return 0LL;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v5 + 24) = 0LL;
    WdLogEvent5_WdError(v5);
    return 3223191554LL;
  }
}
