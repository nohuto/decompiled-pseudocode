/*
 * XREFs of ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C0171620
 * Callers:
 *     DpiDisableMsBddFallbackDriver @ 0x1C01E062C (DpiDisableMsBddFallbackDriver.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0002870 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0102554 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGADAPTER::EnableMsBddFallback(DXGADAPTER *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 7343LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( !DXGADAPTER::IsBddFallbackDriver(this) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 7345LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( a2 )
  {
    *((_DWORD *)this + 44) = 1;
  }
  else
  {
    if ( *((_QWORD *)this + 289) )
    {
      v8 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v8 + 24) = 7357LL;
      WdLogEvent5_WdAssertion(v8);
    }
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(*((PERESOURCE ***)this + 288), 0LL);
    *((_DWORD *)this + 44) = 3;
  }
}
