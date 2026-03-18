/*
 * XREFs of PopPolicyTimeChange @ 0x1405EF280
 * Callers:
 *     PopPolicyWorkerThread @ 0x140073DA0 (PopPolicyWorkerThread.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     PopEventCalloutDispatch @ 0x14016E560 (PopEventCalloutDispatch.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     ExAcquireTimeRefreshLock @ 0x14048DB94 (ExAcquireTimeRefreshLock.c)
 */

__int64 PopPolicyTimeChange()
{
  ExAcquireTimeRefreshLock(1u);
  ZwUpdateWnfStateData((__int64)&WNF_PO_SYSTEM_TIME_CHANGED, (__int64)&PopTimeChangeInfo, 16LL);
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
  PopEventCalloutDispatch(3, 0LL);
  return 0LL;
}
