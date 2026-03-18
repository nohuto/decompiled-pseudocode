/*
 * XREFs of CcReEngageWorkerThreads @ 0x140136378
 * Callers:
 *     CcWorkerThread @ 0x1400AB860 (CcWorkerThread.c)
 *     CcAdjustWriteBehindThreadPool @ 0x1400ADE84 (CcAdjustWriteBehindThreadPool.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 */

void __fastcall CcReEngageWorkerThreads(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ebp
  struct _WORK_QUEUE_ITEM **v7; // rbx
  struct _WORK_QUEUE_ITEM *v8; // rcx
  struct _LIST_ENTRY *Flink; // rax
  unsigned int v10; // esi
  struct _WORK_QUEUE_ITEM **v11; // rbx
  struct _WORK_QUEUE_ITEM *v12; // rcx
  struct _LIST_ENTRY *v13; // rax

  v3 = 0;
  if ( a2 )
  {
    v7 = (struct _WORK_QUEUE_ITEM **)(a1 + 280);
    do
    {
      if ( *v7 == (struct _WORK_QUEUE_ITEM *)v7 )
        break;
      v8 = *v7;
      Flink = (*v7)->List.Flink;
      if ( (struct _WORK_QUEUE_ITEM **)(*v7)->List.Blink != v7 || (struct _WORK_QUEUE_ITEM *)Flink->Blink != v8 )
        __fastfail(3u);
      *v7 = (struct _WORK_QUEUE_ITEM *)Flink;
      Flink->Blink = (struct _LIST_ENTRY *)v7;
      ++*(_DWORD *)(a1 + 276);
      v8->List.Flink = 0LL;
      ExQueueWorkItem(v8, CriticalWorkQueue);
      ++v3;
    }
    while ( v3 < a2 );
  }
  v10 = 0;
  if ( a3 )
  {
    v11 = (struct _WORK_QUEUE_ITEM **)(a1 + 360);
    do
    {
      if ( *v11 == (struct _WORK_QUEUE_ITEM *)v11 )
        break;
      v12 = *v11;
      v13 = (*v11)->List.Flink;
      if ( (struct _WORK_QUEUE_ITEM **)(*v11)->List.Blink != v11 || (struct _WORK_QUEUE_ITEM *)v13->Blink != v12 )
        __fastfail(3u);
      *v11 = (struct _WORK_QUEUE_ITEM *)v13;
      v13->Blink = (struct _LIST_ENTRY *)v11;
      ++*(_DWORD *)(a1 + 376);
      v12->List.Flink = 0LL;
      ExQueueWorkItem(v12, CriticalWorkQueue);
      ++v10;
    }
    while ( v10 < a3 );
  }
}
