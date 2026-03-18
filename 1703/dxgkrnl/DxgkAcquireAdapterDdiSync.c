/*
 * XREFs of DxgkAcquireAdapterDdiSync @ 0x1C01127C4
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
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 */

__int64 __fastcall DxgkAcquireAdapterDdiSync(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax

  v2 = (int)a2;
  if ( a1 )
  {
    if ( (unsigned int)(a2 - 1) <= 1 )
    {
      DXGADAPTER::AcquireDdiSync(a1, a2);
      return 0LL;
    }
    v4 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v4 + 24) = v2;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v4 + 24) = -1073741811LL;
  }
  WdLogEvent5_WdError(v4);
  return 3221225485LL;
}
