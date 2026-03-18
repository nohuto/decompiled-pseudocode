/*
 * XREFs of ExpPartitionCreatePoolInternal @ 0x140647550
 * Callers:
 *     ExpPartitionCreatePool @ 0x140647230 (ExpPartitionCreatePool.c)
 *     ExpPartitionInitialize @ 0x140647350 (ExpPartitionInitialize.c)
 *     ExpPartitionCreatePoolDelayed @ 0x1407C5608 (ExpPartitionCreatePoolDelayed.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ExpCreateWorkerThread @ 0x14052C3D8 (ExpCreateWorkerThread.c)
 *     ExpWorkQueueInitialize @ 0x14064764C (ExpWorkQueueInitialize.c)
 *     ExpWorkQueueDestroy @ 0x1407C5894 (ExpWorkQueueDestroy.c)
 */

__int64 __fastcall ExpPartitionCreatePoolInternal(__int64 a1, int a2, int a3, __int64 a4, int a5)
{
  __int64 *PoolWithTag; // rbx
  __int64 v10; // r15
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // esi
  int WorkerThread; // edi

  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2E0uLL, 0x6C577845u);
  if ( PoolWithTag )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(unsigned __int16 *)(a4 + 146));
    ExpWorkQueueInitialize((_DWORD)PoolWithTag, a2, a3, a1, a4, a5);
    v13 = 0;
    if ( 2 * *((_DWORD *)PoolWithTag + 179) > 0 )
    {
      while ( 1 )
      {
        WorkerThread = ExpCreateWorkerThread(PoolWithTag, (int *)(v10 + 276), v11, v12);
        if ( WorkerThread < 0 )
          break;
        if ( ++v13 >= (2 * *((_DWORD *)PoolWithTag + 179)) >> 1 )
          goto LABEL_3;
      }
    }
    else
    {
LABEL_3:
      WorkerThread = 0;
    }
    if ( WorkerThread >= 0 )
    {
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *(unsigned __int16 *)(a4 + 146)) + 8LL * a5) = PoolWithTag;
      PoolWithTag = 0LL;
      WorkerThread = 0;
    }
    if ( PoolWithTag )
    {
      ExpWorkQueueDestroy(PoolWithTag);
      ExFreePoolWithTag(PoolWithTag, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)WorkerThread;
}
