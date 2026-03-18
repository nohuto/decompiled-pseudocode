/*
 * XREFs of PspRemoveProcessFromJobChain @ 0x14054727C
 * Callers:
 *     PspProcessDelete @ 0x140061C30 (PspProcessDelete.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140479260 (PspEnforceLimitsJobPostCallback.c)
 *     PspRundownSingleProcess @ 0x140546EDC (PspRundownSingleProcess.c)
 *     PspAssignProcessToJob @ 0x14054B358 (PspAssignProcessToJob.c)
 *     PspTerminateProcessesJobCallback @ 0x14054D280 (PspTerminateProcessesJobCallback.c)
 * Callees:
 *     PspSendJobNotification @ 0x140039434 (PspSendJobNotification.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PspSubtractAccountingValues @ 0x14045E7F0 (PspSubtractAccountingValues.c)
 *     PspUnlockJob @ 0x140479650 (PspUnlockJob.c)
 *     PsQueryStatisticsProcess @ 0x140479C70 (PsQueryStatisticsProcess.c)
 *     PspUnlockJobConditionally @ 0x140479E68 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x14054755C (PspLockJobConditionally.c)
 *     PspChangeProcessExecutionState @ 0x140547580 (PspChangeProcessExecutionState.c)
 *     PspLockRootJobFromProcess @ 0x140547770 (PspLockRootJobFromProcess.c)
 *     PspFoldProcessAccountingIntoJob @ 0x140547818 (PspFoldProcessAccountingIntoJob.c)
 *     PspUnlinkJobProcess @ 0x140547974 (PspUnlinkJobProcess.c)
 *     PsTerminateProcess @ 0x14054E978 (PsTerminateProcess.c)
 *     EtwTraceJobRemoveProcess @ 0x14070ABA0 (EtwTraceJobRemoveProcess.c)
 */

void __fastcall PspRemoveProcessFromJobChain(
        ULONG_PTR BugCheckParameter1,
        _QWORD *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v4; // r15d
  struct _KTHREAD *CurrentThread; // rsi
  bool v8; // r12
  char v9; // r14
  int v10; // r13d
  __int64 v11; // rbx
  _QWORD *v12; // rax
  signed __int32 v13; // eax
  signed __int32 v14; // edx
  char v15; // [rsp+28h] [rbp-59h]
  __int64 v16; // [rsp+30h] [rbp-51h] BYREF
  __int64 v17; // [rsp+38h] [rbp-49h] BYREF
  struct _KTHREAD *v18; // [rsp+40h] [rbp-41h]
  _QWORD v19[18]; // [rsp+48h] [rbp-39h] BYREF
  char v21; // [rsp+F8h] [rbp+77h]

  v21 = a3;
  v4 = a3;
  memset(v19, 0, 0x58uLL);
  CurrentThread = KeGetCurrentThread();
  v18 = CurrentThread;
  v8 = !_interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 768), 0);
  v9 = 0;
  v15 = 0;
  if ( (v4 & 2) != 0
    && (*(_DWORD *)(BugCheckParameter1 + 772) & 0x4000000) != 0
    && (*(_DWORD *)(BugCheckParameter1 + 1740) & 0x100) == 0 )
  {
    PsTerminateProcess(BugCheckParameter1, a4);
    v15 = 1;
  }
  v10 = 1;
  PspLockRootJobFromProcess(BugCheckParameter1, CurrentThread, &v17, &v16);
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJobRemoveProcess(BugCheckParameter1, v4, a4);
  if ( (v4 & 4) != 0 && !_interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 768), 1u) )
  {
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter1 + 768), 0xFFFFFFDF);
    PsQueryStatisticsProcess(BugCheckParameter1, v19);
    v9 = 1;
  }
  v11 = v17;
  if ( v17 )
  {
    do
    {
      PspLockJobConditionally(v11, &v16);
      if ( v8 )
      {
        --*(_DWORD *)(v11 + 216);
        if ( (*(_DWORD *)(BugCheckParameter1 + 1740) & 0x80u) != 0 )
          --*(_DWORD *)(v11 + 1212);
      }
      if ( (v4 & 8) != 0 && v8 )
        ++*(_DWORD *)(v11 + 220);
      if ( a2 && (!*a2 || *a2 == v11) && *(_QWORD *)(v11 + 456) && ((1 << a2[1]) & *(_DWORD *)(v11 + 876)) != 0 )
        PspSendJobNotification(v11, a2[1], a2[2], 0);
      if ( v9 )
      {
        PspFoldProcessAccountingIntoJob(v11, BugCheckParameter1, v19);
        if ( v11 == *(_QWORD *)(BugCheckParameter1 + 944) && *(_DWORD *)(v11 + 1216) != PspEnforcementSequenceNumber )
          v10 = 0;
        if ( v10 == 1 )
        {
          v12 = (_QWORD *)(v11 + 1120);
          if ( v11 + 1120 < (unsigned __int64)(v11 + 1208) )
          {
            while ( !*v12 )
            {
              if ( (unsigned __int64)++v12 >= v11 + 1208 )
                goto LABEL_33;
            }
            PspSubtractAccountingValues((_QWORD *)(v11 + 1120), v19);
            v10 = 2;
          }
        }
      }
LABEL_33:
      PspUnlockJobConditionally(v11, &v16);
      v11 = *(_QWORD *)(v11 + 1072);
    }
    while ( v11 );
    v11 = v17;
    CurrentThread = v18;
    LOBYTE(v4) = v21;
  }
  PspLockJobConditionally(v11, &v16);
  if ( (v4 & 1) != 0 )
  {
    PspUnlinkJobProcess(v11, BugCheckParameter1);
    PspUnlockJobConditionally(v11, &v16);
    PspUnlockJob(v16, (__int64)CurrentThread);
  }
  else
  {
    if ( v8 && (*(_DWORD *)(BugCheckParameter1 + 768) & 4) != 0 && !v15 )
    {
      v13 = *(_DWORD *)(BugCheckParameter1 + 768);
      do
      {
        v14 = v13;
        v13 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter1 + 768), v13 & 0xCFFFFFFF, v13);
      }
      while ( v13 != v14 );
      v11 = v17;
    }
    PspUnlockJobConditionally(v11, &v16);
    PspUnlockJob(v16, (__int64)CurrentThread);
    --CurrentThread->KernelApcDisable;
    PspChangeProcessExecutionState(BugCheckParameter1);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
}
