/*
 * XREFs of ExpPartitionCreateSystemThread @ 0x140554C20
 * Callers:
 *     ExpCreateWorkerThread @ 0x140554C74 (ExpCreateWorkerThread.c)
 *     ExpWorkQueueManagerStart @ 0x1405DDC44 (ExpWorkQueueManagerStart.c)
 * Callees:
 *     ExpNodeCreateSystemThread @ 0x140554884 (ExpNodeCreateSystemThread.c)
 */

__int64 __fastcall ExpPartitionCreateSystemThread(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8,
        __int64 a9)
{
  int v10; // [rsp+20h] [rbp-38h]

  return ExpNodeCreateSystemThread(a2, a2, a3, *(_QWORD *)(*(_QWORD *)a1 + 112LL), v10, a6, a7, a8, a9);
}
