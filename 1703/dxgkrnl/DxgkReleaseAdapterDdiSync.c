/*
 * XREFs of DxgkReleaseAdapterDdiSync @ 0x1C01126F4
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C00436DC (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C00A86E0 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoDispatchPnp @ 0x1C00AB220 (DpiPdoDispatchPnp.c)
 *     DpiPdoSetDevicePower @ 0x1C0102D24 (DpiPdoSetDevicePower.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C01054A0 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     DpiPdoIsChildConnected @ 0x1C01124D0 (DpiPdoIsChildConnected.c)
 *     DpiGetMonitorDescriptor @ 0x1C0115ED8 (DpiGetMonitorDescriptor.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1C0118B48 (DpiPdoGetDeviceDescriptor.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C01CC140 (DpiAcpiHandleAcpiEvent.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C01CFA78 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReleaseAdapterDdiSync(DXGADAPTER *a1, __int64 a2)
{
  __int64 v3; // rax

  if ( a1 )
  {
    DXGADAPTER::ReleaseDdiSync(a1);
    return 0LL;
  }
  else
  {
    v3 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v3 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v3);
    return 3221225485LL;
  }
}
