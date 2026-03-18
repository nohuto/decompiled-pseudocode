/*
 * XREFs of DxgkAcquireAdapterCoreSync @ 0x1C009F7A0
 * Callers:
 *     DpiEnterSystemDisplay @ 0x1C003BF30 (DpiEnterSystemDisplay.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C009F688 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPowerArbiterThread @ 0x1C01F11D0 (DpiPowerArbiterThread.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C01F24BC (DpiFdoCreateRelatedObjects.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C01F8B44 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoStopAdapter @ 0x1C01FAB88 (DpiFdoStopAdapter.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C01FD140 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C01FD2B4 (DpiEnableMsBddFallbackDriver.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C02073D4 (DpiAcpiHandleAcpiEvent.c)
 *     DpiAcpiProcessEventRequests @ 0x1C0207D74 (DpiAcpiProcessEventRequests.c)
 *     DpiPdoIsChildConnected @ 0x1C020D164 (DpiPdoIsChildConnected.c)
 * Callees:
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00F5048 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 */

__int64 __fastcall DxgkAcquireAdapterCoreSync(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax

  v2 = a2;
  if ( a1 )
  {
    if ( a2 > 0 && (a2 <= 4 || a2 == 6) )
    {
      DXGADAPTER::AcquireCoreSync(a1, (unsigned int)a2);
      return 0LL;
    }
    v4 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v4 + 24) = v2;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v4 + 24) = -1073741811LL;
  }
  WdLogEvent5_WdError(v4);
  return 3221225485LL;
}
