/*
 * XREFs of PspImplicitAssignProcessToJob @ 0x140546C9C
 * Callers:
 *     PspInsertProcess @ 0x14049CB2C (PspInsertProcess.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1400949B0 (PsGetEffectiveServerSilo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     MmAssignProcessToJob @ 0x14011D7EC (MmAssignProcessToJob.c)
 *     PspUnlockJobChain @ 0x140545EBC (PspUnlockJobChain.c)
 *     PspLockJobChain @ 0x140545F4C (PspLockJobChain.c)
 *     PspChangeProcessExecutionState @ 0x140547580 (PspChangeProcessExecutionState.c)
 *     PspAddProcessToJobChain @ 0x140547D90 (PspAddProcessToJobChain.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x14054BB34 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspEstablishJobHierarchy @ 0x14054BD84 (PspEstablishJobHierarchy.c)
 *     PspValidateJobMemoryPartitionAssignment @ 0x14054C324 (PspValidateJobMemoryPartitionAssignment.c)
 */

__int64 __fastcall PspImplicitAssignProcessToJob(_QWORD *Object, ULONG_PTR BugCheckParameter1, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // r14
  _QWORD *EffectiveServerSilo; // rbx
  int v8; // edi
  int v9; // ebx
  volatile signed __int32 *v11; // rax
  __int64 v12; // rcx

  CurrentThread = KeGetCurrentThread();
  PspLockJobChain((__int64)Object, (__int64)CurrentThread, 0);
  if ( (a3 & 0x400) != 0 )
  {
    EffectiveServerSilo = (_QWORD *)PsGetEffectiveServerSilo((__int64)Object);
  }
  else
  {
    for ( EffectiveServerSilo = Object; EffectiveServerSilo; EffectiveServerSilo = (_QWORD *)EffectiveServerSilo[134] )
    {
      if ( (EffectiveServerSilo[32] & 0x1000) == 0 && ((EffectiveServerSilo[32] & 0x800) == 0 || (a3 & 1) == 0) )
        break;
    }
    if ( (a3 & 1) != 0 && EffectiveServerSilo == Object && (EffectiveServerSilo[163] & 0x40000000) == 0 )
    {
      v8 = -1073741790;
      goto LABEL_18;
    }
  }
  if ( !EffectiveServerSilo )
  {
    v8 = 0;
LABEL_18:
    PspUnlockJobChain((__int64)Object, (__int64)CurrentThread, 0);
    return (unsigned int)v8;
  }
  v8 = PspValidateJobMemoryPartitionAssignment(BugCheckParameter1, EffectiveServerSilo, 1LL);
  if ( v8 < 0 )
    goto LABEL_18;
  v8 = PspEstablishJobHierarchy(EffectiveServerSilo);
  if ( v8 < 0 )
    goto LABEL_18;
  v8 = PspAddProcessToJobChain(EffectiveServerSilo, 0LL, BugCheckParameter1, a3);
  if ( v8 < 0 )
    goto LABEL_18;
  if ( (EffectiveServerSilo[163] & 0x1000) != 0 )
  {
    v11 = (volatile signed __int32 *)(BugCheckParameter1 + 2024);
    v12 = 7LL;
    do
    {
      _interlockedbittestandset(v11++, 0x1Fu);
      --v12;
    }
    while ( v12 );
    _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 2060), 0x1Fu);
  }
  PspUnlockJobChain((__int64)Object, (__int64)CurrentThread, 0);
  v9 = PspApplyWorkingSetLimitsToProcess(BugCheckParameter1);
  if ( v9 >= 0 && !(unsigned int)MmAssignProcessToJob(BugCheckParameter1) )
    v9 = -1073741756;
  --CurrentThread->KernelApcDisable;
  PspChangeProcessExecutionState(BugCheckParameter1);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return (unsigned int)v9;
}
