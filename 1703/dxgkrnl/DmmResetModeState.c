/*
 * XREFs of DmmResetModeState @ 0x1C0105124
 * Callers:
 *     DmmEnablePathsFromVidPnSource @ 0x1C0099FDC (DmmEnablePathsFromVidPnSource.c)
 *     DpiPowerArbiterThread @ 0x1C0122680 (DpiPowerArbiterThread.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C01C2FB4 (DpiFdoDestroyRelatedObjects.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C000B558 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 */

__int64 __fastcall DmmResetModeState(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v2 = 0;
  v3 = a2;
  if ( a1 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
    {
      v12 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
      WdLogEvent5_WdAssertion(v12);
    }
    v9 = *(_QWORD *)(a1 + 2280);
    if ( v9 && *(_DWORD *)(v9 + 80) )
    {
      do
      {
        if ( _bittest(&v3, v2) )
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((PERESOURCE **)v9, v2, 1);
        v9 = *(_QWORD *)(a1 + 2280);
        ++v2;
      }
      while ( v2 < *(_DWORD *)(v9 + 80) );
    }
    return 0LL;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v11 + 24) = 0LL;
    WdLogEvent5_WdError(v11);
    return 3223191554LL;
  }
}
