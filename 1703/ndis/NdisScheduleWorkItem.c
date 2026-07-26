/*
 * XREFs of NdisScheduleWorkItem @ 0x1C0028100
 * Callers:
 *     <none>
 * Callees:
 *     ndisRecordEvent @ 0x1C0015C4C (ndisRecordEvent.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001D998 (ndisScheduleWorkItemInternal.c)
 */

NDIS_STATUS __stdcall NdisScheduleWorkItem(PNDIS_WORK_ITEM WorkItem)
{
  ndisRecordEvent(ndisWorkItemLog, 0, WorkItem);
  ndisScheduleWorkItemInternal((__int64)WorkItem);
  return 0;
}
