/*
 * XREFs of PspGetMemoryPartitionContext @ 0x1404F4070
 * Callers:
 *     NtCreateUserProcess @ 0x1404F200C (NtCreateUserProcess.c)
 *     PsCreateMinimalProcess @ 0x14062C5DC (PsCreateMinimalProcess.c)
 * Callees:
 *     PspGetMemoryPartitionImplicit @ 0x1404F0EAC (PspGetMemoryPartitionImplicit.c)
 *     PspGetMemoryPartitionFromJobList @ 0x14077B8C8 (PspGetMemoryPartitionFromJobList.c)
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
