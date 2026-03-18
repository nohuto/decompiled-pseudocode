/*
 * XREFs of MmPerformMemoryListCommand @ 0x140430948
 * Callers:
 *     PfPowerActionNotify @ 0x1404309DC (PfPowerActionNotify.c)
 *     PfpPowerActionStartScenarioTracing @ 0x140430C28 (PfpPowerActionStartScenarioTracing.c)
 *     MmIssueMemoryListCommand @ 0x1406E275C (MmIssueMemoryListCommand.c)
 *     PfpLogScenarioEvent @ 0x1406F268C (PfpLogScenarioEvent.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14003ADE0 (MiGetProcessPartition.c)
 *     MiCaptureAllWorkingSetAccessBits @ 0x14021CEB8 (MiCaptureAllWorkingSetAccessBits.c)
 *     MiEmptyAllWorkingSets @ 0x14021D424 (MiEmptyAllWorkingSets.c)
 *     MiFlushAllPages @ 0x1402259EC (MiFlushAllPages.c)
 *     MiPurgePartitionStandby @ 0x14022B540 (MiPurgePartitionStandby.c)
 */

__int64 MmPerformMemoryListCommand()
{
  __int64 ProcessPartition; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r8
  int v5; // r8d
  int v6; // r8d
  unsigned int v8; // edx
  int v9; // edx

  ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( !(_DWORD)v2 )
  {
    v9 = 0;
    goto LABEL_15;
  }
  v2 = (unsigned int)(v2 - 1);
  if ( !(_DWORD)v2 )
  {
    v9 = 1;
LABEL_15:
    MiCaptureAllWorkingSetAccessBits(ProcessPartition, v9, v2, v3);
    return 0LL;
  }
  v4 = (unsigned int)(v2 - 1);
  if ( (_DWORD)v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
          return 3221225659LL;
        v8 = 1;
      }
      else
      {
        v8 = 8;
      }
      MiPurgePartitionStandby(ProcessPartition, v8);
    }
    else
    {
      MiFlushAllPages(ProcessPartition, 0);
    }
  }
  else
  {
    MiEmptyAllWorkingSets(ProcessPartition, v1, v4, v3);
  }
  return 0LL;
}
