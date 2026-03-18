/*
 * XREFs of MmGetProcessPartitionObject @ 0x140213AE8
 * Callers:
 *     PspValidateJobMemoryPartitionAssignment @ 0x14054C324 (PspValidateJobMemoryPartitionAssignment.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetProcessPartitionObject(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(a1 + 1452)) + 200LL);
}
