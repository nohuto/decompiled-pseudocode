/*
 * XREFs of DxgkReleaseAdapterDdiSync @ 0x1C0109340
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C00418E0 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0041AD0 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C0041C30 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiPdoDispatchPnp @ 0x1C009E8D0 (DpiPdoDispatchPnp.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C0109360 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C0109590 (DpiPdoHandleOpmIoctls.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C01F8580 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C02073D4 (DpiAcpiHandleAcpiEvent.c)
 *     DpiGetMonitorDescriptor @ 0x1C020B2A4 (DpiGetMonitorDescriptor.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C020BCE8 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1C020C0EC (DpiPdoGetDeviceDescriptor.c)
 *     DpiPdoIsChildConnected @ 0x1C020D164 (DpiPdoIsChildConnected.c)
 *     DpiPdoSetDevicePower @ 0x1C020DAF8 (DpiPdoSetDevicePower.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00161C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReleaseAdapterDdiSync(DXGADAPTER *a1)
{
  __int64 v2; // rax

  if ( a1 )
  {
    DXGADAPTER::ReleaseDdiSync(a1);
    return 0LL;
  }
  else
  {
    v2 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v2 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v2);
    return 3221225485LL;
  }
}
