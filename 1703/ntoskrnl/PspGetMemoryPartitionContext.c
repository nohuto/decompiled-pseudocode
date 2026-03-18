/*
 * XREFs of PspGetMemoryPartitionContext @ 0x140545308
 * Callers:
 *     NtCreateUserProcess @ 0x140544094 (NtCreateUserProcess.c)
 * Callees:
 *     PspGetMemoryPartitionImplicit @ 0x140545DE4 (PspGetMemoryPartitionImplicit.c)
 *     PspGetMemoryPartitionFromJobList @ 0x1406E15D4 (PspGetMemoryPartitionFromJobList.c)
 */

__int64 __fastcall PspGetMemoryPartitionContext(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int MemoryPartitionImplicit; // r10d
  __int64 v7; // rcx

  MemoryPartitionImplicit = 0;
  *a4 = 0LL;
  if ( !a1
    || !*(_QWORD *)(a1 + 944)
    || (MemoryPartitionImplicit = PspGetMemoryPartitionImplicit(*(_QWORD *)(a1 + 944), a2, a4),
        MemoryPartitionImplicit >= 0) )
  {
    if ( !*a4 )
    {
      v7 = *(_QWORD *)(a3 + 392);
      if ( v7 )
        return (unsigned int)PspGetMemoryPartitionFromJobList(v7, *(unsigned int *)(a3 + 404), a4);
    }
  }
  return (unsigned int)MemoryPartitionImplicit;
}
