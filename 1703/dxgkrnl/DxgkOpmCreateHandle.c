/*
 * XREFs of DxgkOpmCreateHandle @ 0x1C017497C
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C00436DC (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C01CFA78 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C0171EA4 (-OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkOpmCreateHandle(DXGADAPTER ***this, void *a2, void **a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  DXGADAPTER **v14; // rcx
  __int64 v15; // rax
  __int64 v17; // rax

  if ( !this )
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 791LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 792LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)this) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v13 + 24) = 793LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = this[285];
  if ( v14 )
  {
    if ( v14[26] != KeGetCurrentThread() )
    {
      v15 = WdLogNewEntry5_WdAssertion(v14, v9, v11, v12);
      *(_QWORD *)(v15 + 24) = 797LL;
      WdLogEvent5_WdAssertion(v15);
    }
    return ADAPTER_DISPLAY::OpmCreateHandle(this[285], a2, a3);
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(0LL, v9);
    *(_QWORD *)(v17 + 24) = this;
    *(_QWORD *)(v17 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v17);
    return 3221225659LL;
  }
}
