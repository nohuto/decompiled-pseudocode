/*
 * XREFs of ?ndisVBusNmrClientDetachProvider@@YAJPEAX@Z @ 0x1C0076330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisVBusNmrClientDetachProvider(void *a1)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(&WPP_MAIN_CB.Reserved + 1), (WORK_QUEUE_TYPE)40);
  return 259LL;
}
