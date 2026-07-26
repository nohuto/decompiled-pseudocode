/*
 * XREFs of NdisScheduleWorkItem @ 0x1C0051960
 * Callers:
 *     <none>
 * Callees:
 *     ndisScheduleWorkItemInternal @ 0x1C001A1A0 (ndisScheduleWorkItemInternal.c)
 *     ndisRecordEvent @ 0x1C001A234 (ndisRecordEvent.c)
 */

NDIS_STATUS __stdcall NdisScheduleWorkItem(PNDIS_WORK_ITEM WorkItem)
{
  ndisRecordEvent(ndisWorkItemLog, 0, WorkItem);
  ndisScheduleWorkItemInternal((__int64)WorkItem);
  return 0;
}
