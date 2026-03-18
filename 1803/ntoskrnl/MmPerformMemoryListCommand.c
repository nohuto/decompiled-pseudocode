/*
 * XREFs of MmPerformMemoryListCommand @ 0x140478484
 * Callers:
 *     PfpPowerActionStartScenarioTracing @ 0x140471198 (PfpPowerActionStartScenarioTracing.c)
 *     PfPowerActionNotify @ 0x140471F34 (PfPowerActionNotify.c)
 *     PfpLogScenarioEvent @ 0x1405EC760 (PfpLogScenarioEvent.c)
 *     MmIssueMemoryListCommand @ 0x140612AB4 (MmIssueMemoryListCommand.c)
 * Callees:
 *     MiGetProcessPartition @ 0x1401199C8 (MiGetProcessPartition.c)
 *     MiPurgePartitionStandby @ 0x14014FB3C (MiPurgePartitionStandby.c)
 *     MiFlushAllPages @ 0x1401577E8 (MiFlushAllPages.c)
 *     MiCaptureAllWorkingSetAccessBits @ 0x14016D378 (MiCaptureAllWorkingSetAccessBits.c)
 *     MiEmptyAllWorkingSets @ 0x1402597C0 (MiEmptyAllWorkingSets.c)
 */

__int64 MmPerformMemoryListCommand()
{
  __int64 ProcessPartition; // rax
  int v1; // r8d
  int v2; // r8d
  int v3; // edx
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  __int64 v8; // rdx

  ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( !v1 )
  {
    v3 = 0;
    goto LABEL_4;
  }
  v2 = v1 - 1;
  if ( !v2 )
  {
    v3 = 1;
LABEL_4:
    MiCaptureAllWorkingSetAccessBits(ProcessPartition, v3);
    return 0LL;
  }
  v5 = v2 - 1;
  if ( !v5 )
  {
    MiEmptyAllWorkingSets(ProcessPartition);
    return 0LL;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    MiFlushAllPages(ProcessPartition, 0);
    return 0LL;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v8 = 8LL;
    goto LABEL_14;
  }
  if ( v7 == 1 )
  {
    v8 = 1LL;
LABEL_14:
    MiPurgePartitionStandby(ProcessPartition, v8);
    return 0LL;
  }
  return 3221225659LL;
}
