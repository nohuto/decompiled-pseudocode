/*
 * XREFs of DxgkOpmTranslateAndDestroyHandle @ 0x1C0178690
 * Callers:
 *     DpiPdoHandleOpmIoctls @ 0x1C00FD330 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C01758E8 (-OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkOpmTranslateAndDestroyHandle(DXGADAPTER ***this, _QWORD *a2, void **a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  DXGADAPTER **v10; // rcx
  __int64 v11; // rax
  __int64 v13; // rax

  if ( !this )
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v6 + 24) = 888LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v7 + 24) = 889LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)this) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 890LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = this[288];
  if ( v10 )
  {
    if ( v10[26] != KeGetCurrentThread() )
    {
      v11 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v11 + 24) = 894LL;
      WdLogEvent5_WdAssertion(v11);
    }
    return ADAPTER_DISPLAY::OpmTranslateAndDestroyHandle(this[288], a2, a3);
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v13 + 24) = this;
    *(_QWORD *)(v13 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v13);
    return 3221225659LL;
  }
}
