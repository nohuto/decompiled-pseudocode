/*
 * XREFs of PsSetProcessWin32Process @ 0x140570180
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PsSetProcessWin32Process(_QWORD *Object, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v4; // edi
  volatile signed __int64 *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v14; // r14

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  v8 = Object + 91;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(Object + 91), 0LL);
  if ( a2 )
  {
    if ( (*((_DWORD *)Object + 193) & 8) != 0 || Object[117] )
    {
      v4 = -1073741558;
    }
    else
    {
      Object[117] = a2;
      if ( ((Object[249] | (Object[249] >> 30)) & 0x3FFFFFFFLL) != 0 )
      {
        PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x65446954u);
        v14 = PoolWithTag;
        if ( PoolWithTag )
        {
          ObfReferenceObjectWithTag(Object, 0x624A7350u);
          v14[1].List.Flink = (struct _LIST_ENTRY *)Object;
          v14->WorkerRoutine = (void (__fastcall *)(void *))PspTimerDelayWorkerRoutine;
          v14->Parameter = v14;
          v14->List.Flink = 0LL;
          ExQueueWorkItem(v14, NormalWorkQueue);
        }
      }
    }
  }
  else if ( Object[117] == a3 )
  {
    Object[117] = 0LL;
  }
  else
  {
    v4 = -1073741823;
  }
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8, v9, v10, v11);
  KeAbPostRelease((ULONG_PTR)v8);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v4;
}
