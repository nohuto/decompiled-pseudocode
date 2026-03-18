/*
 * XREFs of PsGetNextPartition @ 0x1400043F8
 * Callers:
 *     MmSetTrimWhileAgingState @ 0x1400043BC (MmSetTrimWhileAgingState.c)
 *     MiFreeExcessSegments @ 0x1400C6548 (MiFreeExcessSegments.c)
 *     MiCheckControlArea @ 0x1400E5110 (MiCheckControlArea.c)
 *     MiFinishResume @ 0x14014F670 (MiFinishResume.c)
 *     MmFlushAllPagesEx @ 0x140157768 (MmFlushAllPagesEx.c)
 *     MmEmptyAllWorkingSets @ 0x14025A990 (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x14025AAD8 (MmTrimFilePagesFromWorkingSets.c)
 *     ExpCheckForWorker @ 0x1402BB594 (ExpCheckForWorker.c)
 *     MmEnablePeriodicAccessClearing @ 0x1404782E0 (MmEnablePeriodicAccessClearing.c)
 *     MmSetMinimumAgeRate @ 0x14048C4C4 (MmSetMinimumAgeRate.c)
 *     ExpNodeHotAddProcessorWorker @ 0x1407C5580 (ExpNodeHotAddProcessorWorker.c)
 * Callees:
 *     PsGetNextPartitionUnsafe @ 0x14000457C (PsGetNextPartitionUnsafe.c)
 *     PsDereferencePartition @ 0x14006FEF8 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x14006FF20 (PsReferencePartitionSafe.c)
 */

void *__fastcall PsGetNextPartition(void *a1)
{
  void *v1; // rbx
  void *v2; // rdi
  __int64 NextPartitionUnsafe; // rax
  __int64 v4; // rdx
  void *v5; // r8

  v1 = a1;
  v2 = 0LL;
  while ( 1 )
  {
    NextPartitionUnsafe = PsGetNextPartitionUnsafe(a1);
    v5 = (void *)NextPartitionUnsafe;
    if ( !NextPartitionUnsafe )
      break;
    if ( (unsigned __int8)PsReferencePartitionSafe(NextPartitionUnsafe, v4, NextPartitionUnsafe) )
    {
      v2 = v5;
      break;
    }
    a1 = v5;
  }
  if ( v1 )
    PsDereferencePartition(v1, v4, v5);
  return v2;
}
