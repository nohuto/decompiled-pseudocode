/*
 * XREFs of DxgkAcquireAdapterOpmI2CSync @ 0x1C0109E60
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C00418E0 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0041AD0 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C0041C30 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C0109360 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C0109590 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkAcquireAdapterOpmI2CSync(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rax

  if ( !a1 )
  {
    v4 = WdLogNewEntry5_WdError(0LL);
    v5 = -1073741811;
    *(_QWORD *)(v4 + 24) = -1073741811LL;
LABEL_8:
    WdLogEvent5_WdError(v4);
    return v5;
  }
  v2 = *(_QWORD *)(a1 + 2456);
  if ( !v2 )
  {
    v4 = WdLogNewEntry5_WdError(a1);
    v5 = -1073741637;
    *(_QWORD *)(v4 + 24) = a1;
    *(_QWORD *)(v4 + 32) = -1073741637LL;
    goto LABEL_8;
  }
  if ( *(struct _KTHREAD **)(v2 + 208) == KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v6 + 24) = 3595LL;
    WdLogEvent5_WdAssertion(v6);
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v2 + 200));
  return 0LL;
}
