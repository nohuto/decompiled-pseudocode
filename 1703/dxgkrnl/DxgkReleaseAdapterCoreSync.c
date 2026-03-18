/*
 * XREFs of DxgkReleaseAdapterCoreSync @ 0x1C00AA594
 * Callers:
 *     DpiEnterSystemDisplay @ 0x1C000FB10 (DpiEnterSystemDisplay.c)
 *     DpiLeaveSystemDisplay @ 0x1C003D980 (DpiLeaveSystemDisplay.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00AA538 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C0102954 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C0112030 (DpiFdoCreateRelatedObjects.c)
 *     DpiPdoIsChildConnected @ 0x1C01124D0 (DpiPdoIsChildConnected.c)
 *     DpiPowerArbiterThread @ 0x1C0122680 (DpiPowerArbiterThread.c)
 *     DpiFdoStopAdapter @ 0x1C01C545C (DpiFdoStopAdapter.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C01C6500 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C01C66BC (DpiEnableMsBddFallbackDriver.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C01CC140 (DpiAcpiHandleAcpiEvent.c)
 *     DpiAcpiProcessEventRequests @ 0x1C01CC590 (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00D34C4 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 */

__int64 __fastcall DxgkReleaseAdapterCoreSync(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( a1 )
  {
    DXGADAPTER::ReleaseCoreSync();
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
