/*
 * XREFs of PspRemoveProcessFromJobChain @ 0x14050E398
 * Callers:
 *     PspProcessDelete @ 0x1400B8F70 (PspProcessDelete.c)
 *     PspRundownSingleProcess @ 0x1404DAA68 (PspRundownSingleProcess.c)
 *     PspTerminateProcessesJobCallback @ 0x14050BBC0 (PspTerminateProcessesJobCallback.c)
 *     PspAssignProcessToJob @ 0x14050BFAC (PspAssignProcessToJob.c)
 *     PspEnforceLimitsJobPostCallback @ 0x14050FF00 (PspEnforceLimitsJobPostCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     PspSendJobNotification @ 0x1400D2E84 (PspSendJobNotification.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PsQueryStatisticsProcess @ 0x1404AD730 (PsQueryStatisticsProcess.c)
 *     PspUnlinkJobProcess @ 0x14050CE68 (PspUnlinkJobProcess.c)
 *     PspFoldProcessAccountingIntoJob @ 0x14050CFF0 (PspFoldProcessAccountingIntoJob.c)
 *     PspRequestProcessExecutionState @ 0x14050D8F0 (PspRequestProcessExecutionState.c)
 *     PspChangeProcessExecutionState @ 0x14050DC70 (PspChangeProcessExecutionState.c)
 *     PspLockRootJobFromProcess @ 0x14050DFD0 (PspLockRootJobFromProcess.c)
 *     PspUnlockJob @ 0x1405102A0 (PspUnlockJob.c)
 *     PspUnlockJobConditionally @ 0x140510B94 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x140510BC0 (PspLockJobConditionally.c)
 *     PsTerminateProcess @ 0x140596078 (PsTerminateProcess.c)
 *     PspSubtractAccountingValues @ 0x14059EA20 (PspSubtractAccountingValues.c)
 *     EtwTraceJobRemoveProcess @ 0x140745A44 (EtwTraceJobRemoveProcess.c)
 */

_QWORD *__fastcall PspRemoveProcessFromJobChain(
        __int64 BugCheckParameter1,
        _QWORD *a2,
        unsigned int a3,
        unsigned int a4)
{
  _QWORD *result; // rax
  unsigned int v6; // r14d
  struct _KTHREAD *CurrentThread; // rsi
  bool v9; // r12
  char v10; // r15
  int v11; // r13d
  __int64 v12; // rbx
  _QWORD *v13; // rax
  char v14; // [rsp+28h] [rbp-59h]
  __int64 v15; // [rsp+30h] [rbp-51h] BYREF
  __int64 v16; // [rsp+38h] [rbp-49h] BYREF
  struct _KTHREAD *v17; // [rsp+40h] [rbp-41h]
  __int64 v18[18]; // [rsp+48h] [rbp-39h] BYREF
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+5Fh] BYREF
  char v21; // [rsp+F8h] [rbp+77h]

  result = &retaddr;
  v21 = a3;
  v6 = a3;
  if ( (*(_DWORD *)(BugCheckParameter1 + 1740) & 0x1000) == 0 || (a3 & 1) != 0 )
  {
    memset(v18, 0, 0x58uLL);
    CurrentThread = KeGetCurrentThread();
    v17 = CurrentThread;
    v9 = !_interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 768), 0);
    v10 = 0;
    v14 = 0;
    if ( (v6 & 2) != 0
      && (*(_DWORD *)(BugCheckParameter1 + 772) & 0x4000000) != 0
      && (*(_DWORD *)(BugCheckParameter1 + 1740) & 0x40) == 0 )
    {
      PsTerminateProcess(BugCheckParameter1, a4);
      v14 = 1;
    }
    v11 = 1;
    PspLockRootJobFromProcess(BugCheckParameter1, (__int64)CurrentThread, &v16, &v15);
    if ( (PerfGlobalGroupMask & 0x80000) != 0 )
      EtwTraceJobRemoveProcess(BugCheckParameter1, v6, a4);
    if ( (v6 & 4) != 0 && !_interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 768), 1u) )
    {
      _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter1 + 768), 0xFFFFFFDF);
      PsQueryStatisticsProcess(BugCheckParameter1, v18);
      v10 = 1;
    }
    v12 = v16;
    if ( v16 )
    {
      do
      {
        PspLockJobConditionally(v12, &v15);
        if ( v9 )
        {
          --*(_DWORD *)(v12 + 216);
          if ( (*(_DWORD *)(BugCheckParameter1 + 1740) & 0x20) != 0 )
            --*(_DWORD *)(v12 + 1212);
        }
        if ( (v6 & 8) != 0 && v9 )
          ++*(_DWORD *)(v12 + 220);
        if ( a2 && (!*a2 || *a2 == v12) && *(_QWORD *)(v12 + 456) && ((1 << a2[1]) & *(_DWORD *)(v12 + 876)) != 0 )
          PspSendJobNotification(v12, a2[1], a2[2], 0);
        if ( v10 )
        {
          PspFoldProcessAccountingIntoJob(v12, BugCheckParameter1, v18);
          if ( v12 == *(_QWORD *)(BugCheckParameter1 + 944) && *(_DWORD *)(v12 + 1216) != PspEnforcementSequenceNumber )
            v11 = 0;
          if ( v11 == 1 )
          {
            v13 = (_QWORD *)(v12 + 1120);
            if ( v12 + 1120 < (unsigned __int64)(v12 + 1208) )
            {
              while ( !*v13 )
              {
                if ( (unsigned __int64)++v13 >= v12 + 1208 )
                  goto LABEL_35;
              }
              PspSubtractAccountingValues(v12 + 1120, v18);
              v11 = 2;
            }
          }
        }
LABEL_35:
        PspUnlockJobConditionally(v12, &v15);
        v12 = *(_QWORD *)(v12 + 1072);
      }
      while ( v12 );
      v12 = v16;
      CurrentThread = v17;
      LOBYTE(v6) = v21;
    }
    PspLockJobConditionally(v12, &v15);
    if ( (v6 & 1) != 0 )
    {
      PspUnlinkJobProcess(v12, BugCheckParameter1);
      PspUnlockJobConditionally(v12, &v15);
      return (_QWORD *)PspUnlockJob(v15, CurrentThread);
    }
    else
    {
      if ( v9 && (*(_DWORD *)(BugCheckParameter1 + 768) & 4) != 0 && !v14 )
        PspRequestProcessExecutionState(BugCheckParameter1, 0, 0);
      PspUnlockJobConditionally(v12, &v15);
      PspUnlockJob(v15, CurrentThread);
      --CurrentThread->KernelApcDisable;
      PspChangeProcessExecutionState((_KPROCESS *)BugCheckParameter1);
      return KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
  }
  return result;
}
