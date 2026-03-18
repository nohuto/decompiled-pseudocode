/*
 * XREFs of ExpNodeHotAddProcessorWorker @ 0x1407C5580
 * Callers:
 *     <none>
 * Callees:
 *     PsGetNextPartition @ 0x1400043F8 (PsGetNextPartition.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     PsQuitNextPartition @ 0x14028582C (PsQuitNextPartition.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1405709B4 (KeSynchronizeWithDynamicProcessors.c)
 *     ExpWorkQueueManagerStart @ 0x14064718C (ExpWorkQueueManagerStart.c)
 */

void __fastcall ExpNodeHotAddProcessorWorker(__int64 a1)
{
  void *v2; // rcx
  int v3; // eax
  void *NextPartition; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  void *v7; // rbx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  KeSynchronizeWithDynamicProcessors();
  v2 = 0LL;
  while ( 1 )
  {
    NextPartition = PsGetNextPartition(v2);
    v7 = NextPartition;
    if ( !NextPartition )
      break;
    v3 = ExpWorkQueueManagerStart(
           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NextPartition + 2) + 16LL) + 8LL * *(unsigned __int16 *)(a1 + 146)),
           *(unsigned __int16 *)(a1 + 146),
           v5,
           v6);
    v2 = v7;
    if ( v3 < 0 )
    {
      PsQuitNextPartition(v7);
      Interval.QuadPart = -500000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      *(_QWORD *)(a1 + 384) = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 384), DelayedWorkQueue);
      return;
    }
  }
}
