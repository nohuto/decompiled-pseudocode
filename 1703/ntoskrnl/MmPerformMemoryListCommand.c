/*
 * XREFs of MmPerformMemoryListCommand @ 0x14040E2BC
 * Callers:
 *     PfPowerActionNotify @ 0x140409780 (PfPowerActionNotify.c)
 *     PfpPowerActionStartScenarioTracing @ 0x140409D7C (PfpPowerActionStartScenarioTracing.c)
 *     PfpLogScenarioEvent @ 0x1405760BC (PfpLogScenarioEvent.c)
 *     MmIssueMemoryListCommand @ 0x14057CB60 (MmIssueMemoryListCommand.c)
 * Callees:
 *     MiGetProcessPartition @ 0x1400D0EA8 (MiGetProcessPartition.c)
 *     MiPurgePartitionStandby @ 0x140138E54 (MiPurgePartitionStandby.c)
 *     MiFlushAllPages @ 0x14013F290 (MiFlushAllPages.c)
 *     MiCaptureAllWorkingSetAccessBits @ 0x1401400E0 (MiCaptureAllWorkingSetAccessBits.c)
 *     MiEmptyAllWorkingSets @ 0x140214E74 (MiEmptyAllWorkingSets.c)
 */

__int64 MmPerformMemoryListCommand()
{
  __int64 ProcessPartition; // rax
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // edx
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  unsigned int v8; // edx

  ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( !(_DWORD)v1 )
  {
    v3 = 0;
    goto LABEL_4;
  }
  v1 = (unsigned int)(v1 - 1);
  if ( !(_DWORD)v1 )
  {
    v3 = 1;
LABEL_4:
    MiCaptureAllWorkingSetAccessBits(ProcessPartition, v3, v1, v2);
    return 0LL;
  }
  v5 = v1 - 1;
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
    v8 = 8;
    goto LABEL_14;
  }
  if ( v7 == 1 )
  {
    v8 = 1;
LABEL_14:
    MiPurgePartitionStandby(ProcessPartition, v8);
    return 0LL;
  }
  return 3221225659LL;
}
