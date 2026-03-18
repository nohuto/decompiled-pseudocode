/*
 * XREFs of DpiCleanUpGlobalState @ 0x1C01E4BC4
 * Callers:
 *     DxgkUnload @ 0x1C01A5BE0 (DxgkUnload.c)
 * Callees:
 *     DpiPdoPollingWorkItem @ 0x1C01E8CC0 (DpiPdoPollingWorkItem.c)
 */

void DpiCleanUpGlobalState()
{
  KeCancelTimer(&stru_1C00609D8);
  DpiPdoPollingWorkItem((PDEVICE_OBJECT)g_pDriverObject, (PVOID)1);
  KeFlushQueuedDpcs();
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
  ExDeleteNPagedLookasideList(&stru_1C0060940);
  if ( Object )
  {
    ExFreePoolWithTag(Object, 0);
    Object = 0LL;
  }
  ExDeleteNPagedLookasideList(&Lookaside);
  if ( Mutex )
  {
    ExFreePoolWithTag(Mutex, 0);
    Mutex = 0LL;
  }
  if ( qword_1C0060BD0 )
  {
    IoUnregisterPlugPlayNotificationEx(qword_1C0060BD0);
    qword_1C0060BD0 = 0LL;
  }
}
