/*
 * XREFs of DxgkReleaseAdapterOpmI2CSync @ 0x1C0174EA4
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C00436DC (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C00A86E0 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C01CFA78 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     ?ReleaseOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01726A4 (-ReleaseOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReleaseAdapterOpmI2CSync(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  struct _KTHREAD **v8; // rcx

  if ( !a1 )
  {
    v5 = WdLogNewEntry5_WdError(0LL, a2);
    v6 = -1073741811;
    *(_QWORD *)(v5 + 24) = -1073741811LL;
LABEL_3:
    WdLogEvent5_WdError(v5);
    return v6;
  }
  v8 = *(struct _KTHREAD ***)(a1 + 2280);
  if ( !v8 )
  {
    v5 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v5 + 24) = a1;
    v6 = -1073741637;
    *(_QWORD *)(v5 + 32) = -1073741637LL;
    goto LABEL_3;
  }
  ADAPTER_DISPLAY::ReleaseOpmI2CSync(v8, a2, a3, a4);
  return 0LL;
}
