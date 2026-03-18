/*
 * XREFs of ExpNodeHotAddProcessorWorker @ 0x14075E6C0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetNextPartition @ 0x140001044 (PsGetNextPartition.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     PsQuitNextPartition @ 0x14024FD6C (PsQuitNextPartition.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x14057D8A8 (KeSynchronizeWithDynamicProcessors.c)
 *     ExpWorkQueueManagerStart @ 0x1405DDC44 (ExpWorkQueueManagerStart.c)
 */

void __fastcall ExpNodeHotAddProcessorWorker(__int64 a1)
{
  volatile signed __int64 *v2; // rcx
  int v3; // eax
  volatile signed __int64 *NextPartition; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  volatile signed __int64 *v7; // rbx
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
      PsQuitNextPartition((PVOID)v7);
      Interval.QuadPart = -500000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      *(_QWORD *)(a1 + 320) = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 320), DelayedWorkQueue);
      return;
    }
  }
}
