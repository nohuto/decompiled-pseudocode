/*
 * XREFs of PopPreSleepNotifyWorker @ 0x14070A460
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x1401325F0 (PopOkayToQueueNextWorkItem.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 */

__int64 PopPreSleepNotifyWorker()
{
  ++PopPreSleepWnfPayload;
  ZwUpdateWnfStateData((__int64)&WNF_PO_PRESLEEP_NOTIFICATION, (__int64)&PopPreSleepWnfPayload, 8LL);
  return PopOkayToQueueNextWorkItem((__int64)&PopPreSleepNotifyWorkItem);
}
