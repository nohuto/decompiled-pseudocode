/*
 * XREFs of DxgkOpmTranslateHandle @ 0x1C00FD290
 * Callers:
 *     DpiPdoHandleOpmIoctls @ 0x1C00FD330 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C00FE6D8 (-OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkOpmTranslateHandle(ADAPTER_DISPLAY **this, void *a2, void **a3)
{
  __int64 v6; // rcx
  ADAPTER_DISPLAY *v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  if ( !this )
  {
    v10 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v10 + 24) = 850LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a3 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v11 + 24) = 851LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)this) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v12 + 24) = 852LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v7 = this[288];
  if ( v7 )
  {
    if ( *((struct _KTHREAD **)v7 + 26) != KeGetCurrentThread() )
    {
      v9 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v9 + 24) = 856LL;
      WdLogEvent5_WdAssertion(v9);
    }
    return ADAPTER_DISPLAY::OpmTranslateHandle(this[288], a2, a3);
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
