/*
 * XREFs of DpiCleanUpGlobalState @ 0x1C02049C8
 * Callers:
 *     DxgkUnload @ 0x1C0197330 (DxgkUnload.c)
 * Callees:
 *     DpiPdoPollingWorkItem @ 0x1C020D570 (DpiPdoPollingWorkItem.c)
 */

void DpiCleanUpGlobalState()
{
  KeCancelTimer(&stru_1C007A930);
  DpiPdoPollingWorkItem((PDEVICE_OBJECT)g_pDriverObject, (PVOID)1);
  KeFlushQueuedDpcs();
  if ( qword_1C007A9B0 )
    IoFreeWorkItem(qword_1C007A9B0);
  ExDeleteNPagedLookasideList(&stru_1C007A840);
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    P = 0LL;
  }
  ExDeleteNPagedLookasideList(&Lookaside);
  if ( Mutex )
  {
    ExFreePoolWithTag(Mutex, 0);
    Mutex = 0LL;
  }
  if ( NotificationEntry )
  {
    IoUnregisterPlugPlayNotificationEx(NotificationEntry);
    NotificationEntry = 0LL;
  }
}
