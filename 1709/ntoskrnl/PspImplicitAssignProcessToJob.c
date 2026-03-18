/*
 * XREFs of PspImplicitAssignProcessToJob @ 0x14050CBD0
 * Callers:
 *     PspInsertProcess @ 0x140539300 (PspInsertProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     PsGetEffectiveServerSilo @ 0x1400D4220 (PsGetEffectiveServerSilo.c)
 *     MmAssignProcessToJob @ 0x1400D43A8 (MmAssignProcessToJob.c)
 *     PspValidateJobAssignmentMemoryPartition @ 0x14050C42C (PspValidateJobAssignmentMemoryPartition.c)
 *     PspValidateJobChainLimits @ 0x14050C4B4 (PspValidateJobChainLimits.c)
 *     PspEstablishJobHierarchy @ 0x14050C5C4 (PspEstablishJobHierarchy.c)
 *     PspIncrementJobChainProcessCounts @ 0x14050CAB0 (PspIncrementJobChainProcessCounts.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x14050D218 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspApplyJobChainLimitsToProcess @ 0x14050D3E4 (PspApplyJobChainLimitsToProcess.c)
 *     PspChangeProcessExecutionState @ 0x14050DC70 (PspChangeProcessExecutionState.c)
 *     PspUnlockJobChain @ 0x14050DEA8 (PspUnlockJobChain.c)
 *     PspLockJobChain @ 0x14050DF38 (PspLockJobChain.c)
 */

__int64 __fastcall PspImplicitAssignProcessToJob(char *Object, ULONG_PTR a2, __int16 a3)
{
  struct _KTHREAD *CurrentThread; // r14
  char *EffectiveServerSilo; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // esi
  int v11; // ebx
  volatile signed __int32 *v13; // rax
  __int64 v14; // rcx

  CurrentThread = KeGetCurrentThread();
  PspLockJobChain(Object, CurrentThread, 0LL);
  if ( (a3 & 0x400) != 0 )
  {
    EffectiveServerSilo = (char *)PsGetEffectiveServerSilo((__int64)Object);
  }
  else
  {
    for ( EffectiveServerSilo = Object;
          EffectiveServerSilo;
          EffectiveServerSilo = (char *)*((_QWORD *)EffectiveServerSilo + 134) )
    {
      if ( (*((_DWORD *)EffectiveServerSilo + 64) & 0x1000) == 0
        && ((*((_DWORD *)EffectiveServerSilo + 64) & 0x800) == 0 || (a3 & 1) == 0) )
      {
        break;
      }
    }
    if ( (a3 & 1) != 0 && EffectiveServerSilo == Object && (*((_DWORD *)EffectiveServerSilo + 326) & 0x40000000) == 0 )
    {
      v10 = -1073741790;
      goto LABEL_18;
    }
  }
  if ( !EffectiveServerSilo )
  {
    v10 = 0;
LABEL_18:
    PspUnlockJobChain(Object, CurrentThread, 0LL);
    return (unsigned int)v10;
  }
  if ( !PspValidateJobAssignmentMemoryPartition((__int64)EffectiveServerSilo, 0LL, a2, 1) )
  {
    v10 = -1073741637;
    goto LABEL_18;
  }
  v10 = PspValidateJobChainLimits((__int64)EffectiveServerSilo, v8, v9, a3);
  if ( v10 < 0 )
    goto LABEL_18;
  v10 = PspEstablishJobHierarchy(EffectiveServerSilo, a2, 0LL, 1u);
  if ( v10 < 0 )
    goto LABEL_18;
  PspIncrementJobChainProcessCounts((__int64)EffectiveServerSilo, 0LL, a2, a3);
  PspApplyJobChainLimitsToProcess(EffectiveServerSilo, 0LL, a2);
  if ( (*((_DWORD *)EffectiveServerSilo + 326) & 0x1000) != 0 )
  {
    v13 = (volatile signed __int32 *)(a2 + 2048);
    v14 = 7LL;
    do
    {
      _interlockedbittestandset(v13++, 0x1Fu);
      --v14;
    }
    while ( v14 );
    _interlockedbittestandset((volatile signed __int32 *)(a2 + 2084), 0x1Fu);
  }
  PspUnlockJobChain(Object, CurrentThread, 0LL);
  v11 = PspApplyWorkingSetLimitsToProcess(a2);
  if ( v11 >= 0 && !(unsigned int)MmAssignProcessToJob(a2) )
    v11 = -1073741756;
  --CurrentThread->KernelApcDisable;
  PspChangeProcessExecutionState(a2);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return (unsigned int)v11;
}
