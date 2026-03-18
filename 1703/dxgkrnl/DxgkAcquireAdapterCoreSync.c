/*
 * XREFs of DxgkAcquireAdapterCoreSync @ 0x1C00AA6D4
 * Callers:
 *     DpiEnterSystemDisplay @ 0x1C000FB10 (DpiEnterSystemDisplay.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00AA5B4 (DpiAcquireCoreSyncAccessSafe.c)
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
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00D357C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 */

__int64 __fastcall DxgkAcquireAdapterCoreSync(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax

  v2 = (int)a2;
  if ( a1 )
  {
    if ( (int)a2 > 0 && ((int)a2 <= 4 || (_DWORD)a2 == 6) )
    {
      DXGADAPTER::AcquireCoreSync(a1, (unsigned int)a2);
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
