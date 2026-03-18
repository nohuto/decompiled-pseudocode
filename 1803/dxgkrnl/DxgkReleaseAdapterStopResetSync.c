/*
 * XREFs of DxgkReleaseAdapterStopResetSync @ 0x1C015C9A8
 * Callers:
 *     DpiDisableMsBddFallbackDriver @ 0x1C01FD140 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C01FD2B4 (DpiEnableMsBddFallbackDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkReleaseAdapterStopResetSync(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx

  if ( a1 )
  {
    v3 = a1 + 120;
    *(_QWORD *)(v3 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v3, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    v1 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v1 + 24) = 210LL;
    WdLogEvent5_WdError(v1);
    return 3221225485LL;
  }
}
