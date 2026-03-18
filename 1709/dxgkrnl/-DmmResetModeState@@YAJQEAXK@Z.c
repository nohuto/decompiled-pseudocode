/*
 * XREFs of ?DmmResetModeState@@YAJQEAXK@Z @ 0x1C0104990
 * Callers:
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BB5F0 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     DpiPowerArbiterThread @ 0x1C0121B80 (DpiPowerArbiterThread.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C01DC6D4 (DpiFdoDestroyRelatedObjects.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0007718 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 */

__int64 __fastcall DmmResetModeState(PERESOURCE *a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx
  PERESOURCE v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = 0;
  if ( a1 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
    {
      v9 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v9);
    }
    v6 = a1[288];
    if ( v6 && LODWORD(v6->Reserved2) )
    {
      do
      {
        if ( _bittest(&a2, v2) )
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((PERESOURCE **)v6, v2, 1);
        v6 = a1[288];
        ++v2;
      }
      while ( v2 < LODWORD(v6->Reserved2) );
    }
    return 0LL;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v8 + 24) = 0LL;
    WdLogEvent5_WdError(v8);
    return 3223191554LL;
  }
}
