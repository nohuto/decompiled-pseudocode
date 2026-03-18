/*
 * XREFs of KiSelectNextThread @ 0x140113E30
 * Callers:
 *     KiExitThreadWait @ 0x140017FB0 (KiExitThreadWait.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14001A410 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14001AB48 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiQuantumEnd @ 0x140041B30 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140042440 (KiGroupSchedulingQuantumEnd.c)
 *     KeWaitForMultipleObjects @ 0x1400E8C50 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1400EBB90 (KiSearchForNewThreadOnProcessor.c)
 *     KiSetSystemAffinityThread @ 0x140113A08 (KiSetSystemAffinityThread.c)
 *     KiSetHeteroPolicyThread @ 0x14020467C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiCheckThreadAffinity @ 0x14004144C (KiCheckThreadAffinity.c)
 *     KiSelectReadyThread @ 0x1400EC0C0 (KiSelectReadyThread.c)
 *     KiIsThreadRankNonZero @ 0x1401138D0 (KiIsThreadRankNonZero.c)
 *     KiSelectLowestRankedThread @ 0x140113F6C (KiSelectLowestRankedThread.c)
 *     KiAddThreadToReadyQueue @ 0x140203C24 (KiAddThreadToReadyQueue.c)
 */

__int64 __fastcall KiSelectNextThread(struct _KPRCB *a1, struct _LIST_ENTRY **a2, _QWORD *a3)
{
  char Priority; // si
  _KTHREAD *IdleThread; // rbx
  _QWORD *v7; // r8
  int IdleState; // eax
  _KNODE *ParentNode; // rdx
  int v10; // eax
  unsigned __int64 CoreProcessorSet; // rcx
  __int64 result; // rax
  $5D97DFBD8A3B57106D897333810A8BD0 *v13; // rbx

  Priority = 1;
  while ( 1 )
  {
    IdleThread = (_KTHREAD *)KiSelectReadyThread(1, (__int64)a1, a3);
    if ( !IdleThread )
    {
      IdleThread = (_KTHREAD *)KiSelectLowestRankedThread(a1);
      if ( !IdleThread )
        IdleThread = (_KTHREAD *)KiSelectReadyThread(0, (__int64)a1, v7);
    }
    if ( !IdleThread )
      break;
    if ( KiCheckThreadAffinity((__int64)IdleThread) )
      goto LABEL_11;
    if ( !a2 )
    {
      KiAddThreadToReadyQueue((_DWORD)a1, 0, (_DWORD)IdleThread, 1, 1);
      break;
    }
    IdleThread->WaitBlockFill6[68] = 7;
    v13 = &IdleThread->216;
    v13->WaitListEntry.Flink = *a2;
    *a2 = &v13->WaitListEntry;
  }
  IdleState = a1->IdleState;
  IdleThread = a1->IdleThread;
  ParentNode = a1->ParentNode;
  a1->IdleSchedule = 1;
  if ( (IdleState & 1) != 0 )
  {
    v10 = IdleState - 1;
    a1->IdleState = v10;
    if ( !v10 )
      _interlockedbittestandset64((volatile signed __int32 *)ParentNode, a1->GroupIndex);
    _interlockedbittestandset64((volatile signed __int32 *)&ParentNode->IdleCpuSet, a1->GroupIndex);
    CoreProcessorSet = a1->CoreProcessorSet;
    if ( (CoreProcessorSet & ParentNode->IdleCpuSet) == CoreProcessorSet )
      _InterlockedOr64((volatile signed __int64 *)&ParentNode->IdleSmtSet, CoreProcessorSet);
  }
LABEL_11:
  if ( (IdleThread->Header.Size & 4) != 0 )
  {
    if ( !KiIsThreadRankNonZero((__int64)IdleThread, a1) )
      Priority = IdleThread->Priority;
  }
  else
  {
    Priority = IdleThread->Priority;
  }
  *a1->PriorityState = Priority;
  a1->NextThread = IdleThread;
  result = IdleThread->WaitBlockFill6[68];
  if ( (_BYTE)result == 1 )
  {
    result = IdleThread->ReadyTime - IdleThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
    IdleThread->ReadyTime = result;
  }
  IdleThread->WaitBlockFill6[68] = 3;
  return result;
}
