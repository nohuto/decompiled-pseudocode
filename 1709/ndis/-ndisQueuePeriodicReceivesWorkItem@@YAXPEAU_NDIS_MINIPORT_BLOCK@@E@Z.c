/*
 * XREFs of ?ndisQueuePeriodicReceivesWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0068FC8
 * Callers:
 *     ndisMQueueReceiveNetBufferLists @ 0x1C006A864 (ndisMQueueReceiveNetBufferLists.c)
 *     ndisPeriodicReceivesWorker @ 0x1C006A950 (ndisPeriodicReceivesWorker.c)
 * Callees:
 *     ndisReferenceMiniportNoCheck @ 0x1C0002848 (ndisReferenceMiniportNoCheck.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     ?ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z @ 0x1C004E4D8 (-ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z.c)
 */

void __fastcall ndisQueuePeriodicReceivesWorkItem(struct _NDIS_MINIPORT_BLOCK *a1, char a2)
{
  _QWORD WnodeEventItem[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( !_InterlockedExchange(&a1->PeriodicReceiveQueue.WorkItemQueued, 1) )
  {
    if ( HIBYTE(word_1C0099FDC) )
    {
      memset((char *)WnodeEventItem + 2, 0, 0x2EuLL);
      HIDWORD(WnodeEventItem[5]) = 0x20000;
      LOWORD(WnodeEventItem[0]) = 48;
      WnodeEventItem[1] = qword_1C0099FD0;
      *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
      BYTE4(WnodeEventItem[0]) = 24;
      IoWMIWriteEvent(WnodeEventItem);
    }
    ndisReferenceMiniportNoCheck((__int64)a1);
    ndisInsertInWorkQueue(
      (struct _KSEMAPHORE *)qword_1C0097F40 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number,
      &a1->PeriodicReceiveQueue.WorkItem,
      a2);
  }
}
