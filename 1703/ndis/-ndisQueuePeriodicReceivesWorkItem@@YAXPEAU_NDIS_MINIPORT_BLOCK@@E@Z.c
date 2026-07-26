/*
 * XREFs of ?ndisQueuePeriodicReceivesWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0067F30
 * Callers:
 *     ndisMQueueReceiveNetBufferLists @ 0x1C0010D08 (ndisMQueueReceiveNetBufferLists.c)
 *     ndisPeriodicReceivesWorker @ 0x1C00691D0 (ndisPeriodicReceivesWorker.c)
 * Callees:
 *     ?ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z @ 0x1C00116B8 (-ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001C6A4 (ndisReferenceMiniportNoCheck.c)
 *     memset @ 0x1C0028B80 (memset.c)
 */

void __fastcall ndisQueuePeriodicReceivesWorkItem(struct _NDIS_MINIPORT_BLOCK *a1, char a2)
{
  _QWORD WnodeEventItem[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( !_InterlockedExchange(&a1->PeriodicReceiveQueue.WorkItemQueued, 1) )
  {
    if ( HIBYTE(word_1C0093FDC) )
    {
      memset((char *)WnodeEventItem + 2, 0, 0x2EuLL);
      HIDWORD(WnodeEventItem[5]) = 0x20000;
      LOWORD(WnodeEventItem[0]) = 48;
      WnodeEventItem[1] = qword_1C0093FD0;
      *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
      BYTE4(WnodeEventItem[0]) = 24;
      IoWMIWriteEvent(WnodeEventItem);
    }
    ndisReferenceMiniportNoCheck((__int64)a1, 0x4Cu);
    ndisInsertInWorkQueue(
      (struct _KSEMAPHORE *)WPP_MAIN_CB.Dpc.DeferredRoutine + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number,
      &a1->PeriodicReceiveQueue.WorkItem,
      a2);
  }
}
