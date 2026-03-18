/*
 * XREFs of KiSelectNextThread @ 0x1400A70C0
 * Callers:
 *     KiSetSystemAffinityThread @ 0x14003AA28 (KiSetSystemAffinityThread.c)
 *     KiExitThreadWait @ 0x140089090 (KiExitThreadWait.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1400A6F7C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400EABEC (KiGroupSchedulingQuantumEnd.c)
 *     KiQuantumEnd @ 0x1400EBA30 (KiQuantumEnd.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1400F7A90 (KiSearchForNewThreadOnProcessor.c)
 *     KeWaitForMultipleObjects @ 0x1400FF3A0 (KeWaitForMultipleObjects.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140135EA0 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetHeteroPolicyThread @ 0x140248B08 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x14003A860 (KiIsThreadRankNonZero.c)
 *     KiSelectLowestRankedThread @ 0x1400A723C (KiSelectLowestRankedThread.c)
 *     KiCheckThreadAffinity @ 0x1400A7380 (KiCheckThreadAffinity.c)
 *     KiSelectReadyThread @ 0x1400F8040 (KiSelectReadyThread.c)
 *     KiAddThreadToReadyQueue @ 0x140247D94 (KiAddThreadToReadyQueue.c)
 */

__int64 __fastcall KiSelectNextThread(struct _KPRCB *a1, _QWORD *a2)
{
  __int64 ready; // rbx
  _BYTE *SchedulerAssist; // rdx
  _KNODE *ParentNode; // rcx
  int IdleState; // eax
  int v8; // eax
  unsigned __int64 CoreProcessorSet; // rdx
  char v10; // cl
  _BYTE *v11; // rdx
  _KTHREAD *IdleThread; // rax
  __int64 result; // rax
  _QWORD *v14; // rbx
  int v15; // eax

  while ( 1 )
  {
    ready = KiSelectReadyThread(1LL, a1);
    if ( !ready )
    {
      ready = KiSelectLowestRankedThread(a1);
      if ( !ready )
        ready = KiSelectReadyThread(0LL, a1);
    }
    if ( !ready )
      break;
    if ( (unsigned int)KiCheckThreadAffinity(ready) )
      goto LABEL_12;
    if ( !a2 )
    {
      KiAddThreadToReadyQueue((_DWORD)a1, 0, ready, 1, 1);
      break;
    }
    *(_BYTE *)(ready + 388) = 7;
    v14 = (_QWORD *)(ready + 216);
    *v14 = *a2;
    *a2 = v14;
  }
  SchedulerAssist = a1->SchedulerAssist;
  ready = (__int64)a1->IdleThread;
  ParentNode = a1->ParentNode;
  IdleState = a1->IdleState;
  if ( SchedulerAssist )
    SchedulerAssist[24] = 1;
  a1->IdleSchedule = 1;
  if ( (IdleState & 1) != 0 )
  {
    v8 = IdleState - 1;
    a1->IdleState = v8;
    if ( !v8 )
      _interlockedbittestandset64((volatile signed __int32 *)ParentNode, a1->GroupIndex);
    _interlockedbittestandset64((volatile signed __int32 *)&ParentNode->IdleCpuSet, a1->GroupIndex);
    CoreProcessorSet = a1->CoreProcessorSet;
    if ( (ParentNode->IdleCpuSet & CoreProcessorSet) == CoreProcessorSet )
      _InterlockedOr64((volatile signed __int64 *)&ParentNode->IdleSmtSet, CoreProcessorSet);
  }
LABEL_12:
  if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
  {
    if ( KiIsThreadRankNonZero(ready, a1) )
      v10 = 1;
    else
      v10 = *(_BYTE *)(ready + 195);
  }
  else
  {
    v10 = *(_BYTE *)(ready + 195);
  }
  *a1->PriorityState = v10;
  v11 = a1->SchedulerAssist;
  if ( v11 )
  {
    v15 = KiVpThreadSystemWorkPriority;
    if ( (_KTHREAD *)ready != a1->IdleThread )
      v15 = v10;
    *(_DWORD *)v11 = v15;
    v11 = a1->SchedulerAssist;
  }
  IdleThread = a1->IdleThread;
  a1->NextThread = (_KTHREAD *)ready;
  if ( v11 )
    v11[24] = ready == (_QWORD)IdleThread;
  result = *(unsigned __int8 *)(ready + 388);
  if ( (_BYTE)result == 1 )
  {
    result = (unsigned int)(*(_DWORD *)(ready + 132) - *(_DWORD *)(ready + 436) + MEMORY[0xFFFFF78000000320]);
    *(_DWORD *)(ready + 132) = result;
  }
  *(_BYTE *)(ready + 388) = 3;
  return result;
}
