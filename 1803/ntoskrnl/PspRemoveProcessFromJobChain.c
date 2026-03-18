/*
 * XREFs of PspRemoveProcessFromJobChain @ 0x140534D34
 * Callers:
 *     PspProcessDelete @ 0x14006F630 (PspProcessDelete.c)
 *     PspTerminateProcessesJobCallback @ 0x14052F000 (PspTerminateProcessesJobCallback.c)
 *     PspAssignProcessToJob @ 0x1405306C8 (PspAssignProcessToJob.c)
 *     PspRundownSingleProcess @ 0x1405322EC (PspRundownSingleProcess.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140536C40 (PspEnforceLimitsJobPostCallback.c)
 * Callees:
 *     PspSendJobNotification @ 0x14008522C (PspSendJobNotification.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PspRequestProcessExecutionState @ 0x140532010 (PspRequestProcessExecutionState.c)
 *     PspUnlinkJobProcess @ 0x1405322A8 (PspUnlinkJobProcess.c)
 *     PspChangeProcessExecutionState @ 0x140532AF8 (PspChangeProcessExecutionState.c)
 *     PspFoldProcessAccountingIntoJob @ 0x140532D24 (PspFoldProcessAccountingIntoJob.c)
 *     PspLockRootJobFromProcess @ 0x1405348AC (PspLockRootJobFromProcess.c)
 *     PspLockJobConditionally @ 0x140534D04 (PspLockJobConditionally.c)
 *     PspUnlockJob @ 0x140536FD0 (PspUnlockJob.c)
 *     PspUnlockJobConditionally @ 0x140537718 (PspUnlockJobConditionally.c)
 *     PsTerminateProcess @ 0x14057FB00 (PsTerminateProcess.c)
 *     PsQueryStatisticsProcess @ 0x1405A1840 (PsQueryStatisticsProcess.c)
 *     PspSubtractAccountingValues @ 0x1405C3FD0 (PspSubtractAccountingValues.c)
 *     EtwTraceJobRemoveProcess @ 0x1407A79B0 (EtwTraceJobRemoveProcess.c)
 */

_QWORD *__fastcall PspRemoveProcessFromJobChain(PEPROCESS Process, _QWORD *a2, unsigned int a3, unsigned int a4)
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
  if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 || (a3 & 1) != 0 )
  {
    memset(v18, 0, 0x58uLL);
    CurrentThread = KeGetCurrentThread();
    v17 = CurrentThread;
    v9 = !_interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0);
    v10 = 0;
    v14 = 0;
    if ( (v6 & 2) != 0
      && (Process[1].DirectoryTableBase & 0x400000000000000LL) != 0
      && (Process[2].ActiveProcessors.Bitmap[0] & 0x4000000000LL) == 0 )
    {
      PsTerminateProcess(Process, a4);
      v14 = 1;
    }
    v11 = 1;
    PspLockRootJobFromProcess((__int64)Process, (__int64)CurrentThread, &v16, &v15);
    if ( (PerfGlobalGroupMask & 0x80000) != 0 )
      EtwTraceJobRemoveProcess(Process, v6, a4);
    if ( (v6 & 4) != 0 && !_interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase, 1u) )
    {
      _InterlockedAnd((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0xFFFFFFDF);
      PsQueryStatisticsProcess(Process, v18);
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
          if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x2000000000LL) != 0 )
            --*(_DWORD *)(v12 + 1212);
        }
        if ( (v6 & 8) != 0 && v9 )
          ++*(_DWORD *)(v12 + 220);
        if ( a2 && (!*a2 || *a2 == v12) && *(_QWORD *)(v12 + 456) && ((1 << a2[1]) & *(_DWORD *)(v12 + 876)) != 0 )
          PspSendJobNotification(v12, a2[1], a2[2], 0);
        if ( v10 )
        {
          PspFoldProcessAccountingIntoJob(v12, (__int64)Process, v18);
          if ( v12 == Process[1].Affinity.Bitmap[16] && *(_DWORD *)(v12 + 1216) != PspEnforcementSequenceNumber )
            v11 = 0;
          if ( v11 == 1 )
          {
            v13 = (_QWORD *)(v12 + 1120);
            if ( v12 + 1120 < (unsigned __int64)(v12 + 1208) )
            {
              while ( !*v13 )
              {
                if ( (unsigned __int64)++v13 >= v12 + 1208 )
                  goto LABEL_13;
              }
              PspSubtractAccountingValues(v12 + 1120, v18);
              v11 = 2;
            }
          }
        }
LABEL_13:
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
      PspUnlinkJobProcess(v12, (__int64)Process);
      PspUnlockJobConditionally(v12, &v15);
      return (_QWORD *)PspUnlockJob(v15, CurrentThread);
    }
    else
    {
      if ( v9 && (Process[1].DirectoryTableBase & 4) != 0 && !v14 )
        PspRequestProcessExecutionState((__int64)Process, 0, 0);
      PspUnlockJobConditionally(v12, &v15);
      PspUnlockJob(v15, CurrentThread);
      --CurrentThread->KernelApcDisable;
      PspChangeProcessExecutionState(Process);
      return KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
  }
  return result;
}
