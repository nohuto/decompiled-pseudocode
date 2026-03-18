/*
 * XREFs of ExTryQueueWorkItemFromIo @ 0x140130680
 * Callers:
 *     IoTryQueueWorkItem @ 0x140130640 (IoTryQueueWorkItem.c)
 * Callees:
 *     MmGetNextNode @ 0x140067EB0 (MmGetNextNode.c)
 *     KeInsertPriQueue @ 0x1400689F0 (KeInsertPriQueue.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExpNewThreadNecessary @ 0x1400FC9E0 (ExpNewThreadNecessary.c)
 *     ExpIsPoolReadyForWork @ 0x1400FD850 (ExpIsPoolReadyForWork.c)
 *     ExpValidateWorkItem @ 0x1400FEDD4 (ExpValidateWorkItem.c)
 *     ExpTypeToPriority @ 0x140101958 (ExpTypeToPriority.c)
 */

char __fastcall ExTryQueueWorkItemFromIo(__int64 *a1, unsigned int a2)
{
  char inserted; // si
  int v5; // r12d
  __int64 CurrentIrql; // r14
  unsigned __int16 v7; // bp
  unsigned __int16 NextNode; // ax
  __int64 v9; // rdi
  __int64 v10; // r9
  __int64 v11; // rbx
  int v13; // [rsp+80h] [rbp+18h] BYREF
  __int64 v14; // [rsp+88h] [rbp+20h]

  inserted = 0;
  v13 = 0;
  ExpValidateWorkItem(a1, a2);
  v5 = ExpTypeToPriority(a2);
  CurrentIrql = KeGetCurrentIrql();
  v14 = CurrentIrql;
  __writecr8(2uLL);
  v7 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  NextNode = v7;
  if ( v7 < (unsigned __int16)KeNumberNodes )
  {
    while ( 1 )
    {
      v9 = KeNodeBlock[NextNode];
      if ( (_UNKNOWN *)v9 == (_UNKNOWN *)((char *)&KiNodeInit + 320 * NextNode) )
        v9 = 0LL;
      if ( ExpIsPoolReadyForWork(v9, 1) )
      {
        v11 = *(_QWORD *)(v9 + 328);
        if ( (v11 & 1) != 0 )
          v11 = 0LL;
        inserted = KeInsertPriQueue(v11, a1, v5, v10, 2);
        if ( inserted )
        {
LABEL_8:
          LOBYTE(CurrentIrql) = v14;
          break;
        }
        *(_DWORD *)(v11 + 708) |= 0x80000000;
        if ( ExpNewThreadNecessary(v11, *(_DWORD *)(v11 + 712)) )
          KeSetEvent((PRKEVENT)(v9 + 1824), 0, 0);
      }
      NextNode = MmGetNextNode(v7, &v13);
      if ( NextNode >= (unsigned __int16)KeNumberNodes )
        goto LABEL_8;
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  return inserted;
}
