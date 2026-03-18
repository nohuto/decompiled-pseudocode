/*
 * XREFs of ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C0148F0C
 * Callers:
 *     DpiDisableMsBddFallbackDriver @ 0x1C01FD140 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C01FD2B4 (DpiEnableMsBddFallbackDriver.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00161A0 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01564E8 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGADAPTER::EnableMsBddFallback(struct _KTHREAD **this, char a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  if ( this[16] != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 7737LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 7738LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)this) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 7740LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( a2 )
  {
    *((_DWORD *)this + 44) = 1;
  }
  else
  {
    if ( this[308] )
    {
      v9 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v9 + 24) = 7752LL;
      WdLogEvent5_WdAssertion(v9);
    }
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(this[307], 0LL);
    *((_DWORD *)this + 44) = 3;
  }
}
