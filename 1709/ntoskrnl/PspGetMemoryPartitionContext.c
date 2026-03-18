/*
 * XREFs of PspGetMemoryPartitionContext @ 0x14053AF58
 * Callers:
 *     NtCreateUserProcess @ 0x14053B4F4 (NtCreateUserProcess.c)
 *     PsCreateMinimalProcess @ 0x140719A94 (PsCreateMinimalProcess.c)
 * Callees:
 *     PspGetMemoryPartitionImplicit @ 0x14050D130 (PspGetMemoryPartitionImplicit.c)
 *     PspGetMemoryPartitionFromJobList @ 0x1407178B8 (PspGetMemoryPartitionFromJobList.c)
 */

__int64 __fastcall PspGetMemoryPartitionContext(__int64 a1, __int16 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int MemoryPartitionImplicit; // r10d

  MemoryPartitionImplicit = 0;
  *a5 = 0LL;
  if ( !a1
    || !*(_QWORD *)(a1 + 944)
    || (MemoryPartitionImplicit = PspGetMemoryPartitionImplicit(*(_QWORD *)(a1 + 944), a2, a5),
        MemoryPartitionImplicit >= 0) )
  {
    if ( !*a5 && a4 )
      return (unsigned int)PspGetMemoryPartitionFromJobList(a3, a4, a5);
  }
  return (unsigned int)MemoryPartitionImplicit;
}
