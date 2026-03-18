/*
 * XREFs of ExpWorkQueueManagerStart @ 0x14064718C
 * Callers:
 *     ExpPartitionStart @ 0x1406470E8 (ExpPartitionStart.c)
 *     ExpNodeHotAddProcessorWorker @ 0x1407C5580 (ExpNodeHotAddProcessorWorker.c)
 * Callees:
 *     ExpPartitionCreateSystemThread @ 0x14052C384 (ExpPartitionCreateSystemThread.c)
 */

__int64 __fastcall ExpWorkQueueManagerStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int SystemThread; // ecx
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 264), 1LL, 0LL) )
  {
    return 0;
  }
  else
  {
    SystemThread = ExpPartitionCreateSystemThread(
                     *(_QWORD *)a1,
                     *(_QWORD *)(a1 + 8),
                     a3,
                     a4,
                     v7,
                     (__int64)ExpWorkQueueManagerThread,
                     a1,
                     0LL,
                     (__int64)&v8);
    if ( SystemThread < 0 )
      _InterlockedExchange64((volatile __int64 *)(a1 + 264), 0LL);
    else
      _InterlockedExchange64((volatile __int64 *)(a1 + 264), v8);
  }
  return (unsigned int)SystemThread;
}
