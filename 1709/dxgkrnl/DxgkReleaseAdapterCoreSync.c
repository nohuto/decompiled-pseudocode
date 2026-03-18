/*
 * XREFs of DxgkReleaseAdapterCoreSync @ 0x1C00B87D0
 * Callers:
 *     DpiEnterSystemDisplay @ 0x1C0011370 (DpiEnterSystemDisplay.c)
 *     DpiLeaveSystemDisplay @ 0x1C002E510 (DpiLeaveSystemDisplay.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00B8774 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C0100CC8 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C0118E70 (DpiFdoCreateRelatedObjects.c)
 *     DpiPdoIsChildConnected @ 0x1C01191D4 (DpiPdoIsChildConnected.c)
 *     DpiPowerArbiterThread @ 0x1C0121B80 (DpiPowerArbiterThread.c)
 *     DpiFdoStopAdapter @ 0x1C01DEF64 (DpiFdoStopAdapter.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C01E062C (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C01E07E8 (DpiEnableMsBddFallbackDriver.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C01E6520 (DpiAcpiHandleAcpiEvent.c)
 *     DpiAcpiProcessEventRequests @ 0x1C01E696C (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0084B00 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 */

__int64 __fastcall DxgkReleaseAdapterCoreSync(__int64 a1, int a2)
{
  __int64 v3; // rax

  if ( a1 )
  {
    DXGADAPTER::ReleaseCoreSync(a1, a2);
    return 0LL;
  }
  else
  {
    v3 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v3 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v3);
    return 3221225485LL;
  }
}
