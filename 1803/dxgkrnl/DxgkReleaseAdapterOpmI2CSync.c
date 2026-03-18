/*
 * XREFs of DxgkReleaseAdapterOpmI2CSync @ 0x1C0109EBC
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C00418E0 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0041AD0 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C0041C30 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C0109360 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C0109590 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     ?ReleaseOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C010CEDC (-ReleaseOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReleaseAdapterOpmI2CSync(__int64 a1)
{
  ADAPTER_DISPLAY *v2; // rcx
  __int64 v4; // rax
  unsigned int v5; // ebx

  if ( a1 )
  {
    v2 = *(ADAPTER_DISPLAY **)(a1 + 2456);
    if ( v2 )
    {
      ADAPTER_DISPLAY::ReleaseOpmI2CSync(v2);
      return 0LL;
    }
    v4 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v4 + 24) = a1;
    v5 = -1073741637;
    *(_QWORD *)(v4 + 32) = -1073741637LL;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(0LL);
    v5 = -1073741811;
    *(_QWORD *)(v4 + 24) = -1073741811LL;
  }
  WdLogEvent5_WdError(v4);
  return v5;
}
