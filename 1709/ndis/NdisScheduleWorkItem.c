/*
 * XREFs of NdisScheduleWorkItem @ 0x1C0050FE0
 * Callers:
 *     <none>
 * Callees:
 *     ndisRecordEvent @ 0x1C0011228 (ndisRecordEvent.c)
 *     ndisScheduleWorkItemInternal @ 0x1C0022FEC (ndisScheduleWorkItemInternal.c)
 */

NDIS_STATUS __stdcall NdisScheduleWorkItem(PNDIS_WORK_ITEM WorkItem)
{
  ndisRecordEvent(ndisWorkItemLog, 0, WorkItem);
  ndisScheduleWorkItemInternal((__int64)WorkItem);
  return 0;
}
