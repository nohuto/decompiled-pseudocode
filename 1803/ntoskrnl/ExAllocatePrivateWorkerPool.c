/*
 * XREFs of ExAllocatePrivateWorkerPool @ 0x14064720C
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x14007DAD0 (-SmFirstTimeInit@@YAJKK@Z.c)
 * Callees:
 *     ExpPartitionCreatePool @ 0x140647230 (ExpPartitionCreatePool.c)
 */

__int64 __fastcall ExAllocatePrivateWorkerPool(__int64 a1, __int64 a2, __int64 a3)
{
  return ExpPartitionCreatePool(*((_QWORD *)PspSystemPartition + 2), a2, a3, a1);
}
