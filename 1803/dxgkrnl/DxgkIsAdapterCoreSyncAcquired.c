/*
 * XREFs of DxgkIsAdapterCoreSyncAcquired @ 0x1C015C5B0
 * Callers:
 *     DpExcludeAdapterAccess @ 0x1C01ED3B0 (DpExcludeAdapterAccess.c)
 *     DpiPowerArbiterThread @ 0x1C01F11D0 (DpiPowerArbiterThread.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C01FFD78 (DpiMiracastSendSyncUserModeRequest.c)
 * Callees:
 *     ?IsCoreSyncAcquired@DXGADAPTER@@QEAAEW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C014D47C (-IsCoreSyncAcquired@DXGADAPTER@@QEAAEW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 */

BOOLEAN __fastcall DxgkIsAdapterCoreSyncAcquired(DXGADAPTER *a1, int a2)
{
  __int64 v2; // rax

  if ( a1 )
    return DXGADAPTER::IsCoreSyncAcquired(a1, a2);
  v2 = WdLogNewEntry5_WdError(0LL);
  *(_QWORD *)(v2 + 24) = 243LL;
  WdLogEvent5_WdError(v2);
  return 0;
}
