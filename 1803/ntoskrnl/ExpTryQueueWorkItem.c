/*
 * XREFs of ExpTryQueueWorkItem @ 0x14008F7AC
 * Callers:
 *     ExTryQueueWorkItem @ 0x14008F780 (ExTryQueueWorkItem.c)
 *     IoTryQueueWorkItem @ 0x14014B8C0 (IoTryQueueWorkItem.c)
 * Callees:
 *     MmGetNextNode @ 0x14003AFD8 (MmGetNextNode.c)
 *     KeInsertPriQueue @ 0x14008F920 (KeInsertPriQueue.c)
 *     ExpTypeToPriority @ 0x14008FAA8 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x14008FAC8 (ExpValidateWorkItem.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x1400C40C4 (ExpPartitionCreateThreadIfNecessary.c)
 *     ExpIsPoolReadyForWork @ 0x140128280 (ExpIsPoolReadyForWork.c)
 */

char __fastcall ExpTryQueueWorkItem(__int64 a1, ULONG_PTR a2, unsigned int a3, int a4)
{
  int v4; // r13d
  __int64 v5; // r12
  char inserted; // si
  __int64 CurrentIrql; // r15
  unsigned __int16 v10; // r14
  unsigned __int16 NextNode; // ax
  __int64 v12; // r10
  __int64 v13; // rdi
  int v14; // r9d
  __int64 v15; // r10
  int v16; // r11d
  __int64 v17; // rbx
  int v19; // [rsp+30h] [rbp-38h]
  int v20; // [rsp+34h] [rbp-34h] BYREF
  __int64 v21; // [rsp+38h] [rbp-30h]

  v4 = a2;
  v5 = a4;
  v20 = 0;
  inserted = 0;
  ExpValidateWorkItem(a2);
  v19 = ExpTypeToPriority(a3);
  CurrentIrql = KeGetCurrentIrql();
  v21 = CurrentIrql;
  __writecr8(2uLL);
  v10 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  NextNode = v10;
  if ( v10 < (unsigned __int16)KeNumberNodes )
  {
    v12 = 0LL;
    while ( 1 )
    {
      v13 = KeNodeBlock[NextNode];
      if ( (_UNKNOWN *)v13 == (_UNKNOWN *)((char *)&KiNodeInit + 384 * NextNode) )
        v13 = v12;
      if ( (unsigned __int8)ExpIsPoolReadyForWork(a1, v13, (unsigned int)v5) )
      {
        v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *(unsigned __int16 *)(v13 + 146)) + 8 * v5);
        if ( (v17 & 1) != 0 )
          v17 = v15;
        inserted = KeInsertPriQueue(v17, v4, v19, v14, v16);
        if ( inserted )
        {
LABEL_9:
          LOBYTE(CurrentIrql) = v21;
          break;
        }
        *(_DWORD *)(v17 + 716) |= 0x80000000;
        ExpPartitionCreateThreadIfNecessary(a1, v13, v17);
      }
      NextNode = MmGetNextNode(v10, &v20);
      if ( NextNode >= (unsigned __int16)KeNumberNodes )
        goto LABEL_9;
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  return inserted;
}
