/*
 * XREFs of DpiCleanUpGlobalState @ 0x1C01CA818
 * Callers:
 *     DxgkUnload @ 0x1C01910D0 (DxgkUnload.c)
 * Callees:
 *     DpiPdoPollingWorkItem @ 0x1C01CE8B0 (DpiPdoPollingWorkItem.c)
 */

void DpiCleanUpGlobalState()
{
  KeCancelTimer(&stru_1C006FB58);
  DpiPdoPollingWorkItem((PDEVICE_OBJECT)g_pDriverObject, (PVOID)1);
  KeFlushQueuedDpcs();
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
  ExDeleteNPagedLookasideList(&stru_1C006FAC0);
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
  if ( qword_1C006FD50 )
  {
    IoUnregisterPlugPlayNotificationEx(qword_1C006FD50);
    qword_1C006FD50 = 0LL;
  }
}
