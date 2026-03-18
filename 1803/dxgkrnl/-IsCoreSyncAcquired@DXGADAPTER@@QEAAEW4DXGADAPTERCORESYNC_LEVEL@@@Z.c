/*
 * XREFs of ?IsCoreSyncAcquired@DXGADAPTER@@QEAAEW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C014D47C
 * Callers:
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1C015C5B0 (DxgkIsAdapterCoreSyncAcquired.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

BOOLEAN __fastcall DXGADAPTER::IsCoreSyncAcquired(DXGADAPTER *a1, int a2)
{
  __int64 v2; // rdi
  char v3; // bl
  __int64 v4; // rax

  v2 = a2;
  v3 = 0;
  if ( a2 == 1 )
    return DXGADAPTER::IsCoreResourceSharedOwner(a1);
  if ( a2 == 2 || a2 == 5 )
    return DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1);
  v4 = WdLogNewEntry5_WdError(a1);
  *(_QWORD *)(v4 + 24) = v2;
  WdLogEvent5_WdError(v4);
  return v3;
}
