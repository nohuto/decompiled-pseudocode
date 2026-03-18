/*
 * XREFs of DxgkIsAdapterCoreSyncAcquired @ 0x1C0174928
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C0122680 (DpiPowerArbiterThread.c)
 *     DpExcludeAdapterAccess @ 0x1C01C1850 (DpExcludeAdapterAccess.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C01C8288 (DpiMiracastSendSyncUserModeRequest.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall DxgkIsAdapterCoreSyncAcquired(DXGADAPTER *a1, __int64 a2)
{
  __int64 v2; // rax

  if ( a1 )
    return DXGADAPTER::IsCoreSyncAcquired(a1, a2);
  v2 = WdLogNewEntry5_WdError(0LL, a2);
  *(_QWORD *)(v2 + 24) = 188LL;
  WdLogEvent5_WdError(v2);
  return 0;
}
