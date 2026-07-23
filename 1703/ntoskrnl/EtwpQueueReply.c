/*
 * XREFs of EtwpQueueReply @ 0x140429088
 * Callers:
 *     EtwpSendReplyDataBlock @ 0x140428FA0 (EtwpSendReplyDataBlock.c)
 *     EtwpDeleteRegistrationObject @ 0x140480960 (EtwpDeleteRegistrationObject.c)
 * Callees:
 *     KeInsertQueue @ 0x140010DA0 (KeInsertQueue.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     EtwpUnreferenceDataBlock @ 0x140553DE0 (EtwpUnreferenceDataBlock.c)
 *     EtwpAllocDataBlock @ 0x1405541BC (EtwpAllocDataBlock.c)
 */

__int64 __fastcall EtwpQueueReply(PRKQUEUE Queue, unsigned int *a2)
{
  int v3; // edi
  _LIST_ENTRY *PoolWithTag; // rax
  _LIST_ENTRY *v5; // rsi

  v3 = EtwpAllocDataBlock(a2[1], a2);
  if ( v3 < 0 )
  {
    _InterlockedIncrement(&Queue[1].Header.Lock);
  }
  else
  {
    PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x72777445u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x38uLL);
      v5[1].Flink = 0LL;
      KeInsertQueue(Queue, v5);
    }
    else
    {
      v3 = -1073741801;
      _InterlockedIncrement(&Queue[1].Header.Lock);
      EtwpUnreferenceDataBlock(0LL);
    }
  }
  return (unsigned int)v3;
}
