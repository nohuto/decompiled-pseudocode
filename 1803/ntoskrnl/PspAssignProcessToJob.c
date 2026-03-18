/*
 * XREFs of PspAssignProcessToJob @ 0x1405306C8
 * Callers:
 *     PsAssignProcessToJobObject @ 0x140530390 (PsAssignProcessToJobObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PsInvokeWin32Callout @ 0x1404B6460 (PsInvokeWin32Callout.c)
 *     PspUnlockJobAssignment @ 0x1404F10B4 (PspUnlockJobAssignment.c)
 *     PspLockJobAssignment @ 0x1404F1104 (PspLockJobAssignment.c)
 *     PsQueryProcessAttributes @ 0x1404F8F34 (PsQueryProcessAttributes.c)
 *     PspGetNextJobProcess @ 0x14052F0B0 (PspGetNextJobProcess.c)
 *     PspIsSetJobIoAttribution @ 0x14052F6BC (PspIsSetJobIoAttribution.c)
 *     PspGetJobLockHierarchyForAssignment @ 0x140530408 (PspGetJobLockHierarchyForAssignment.c)
 *     PspLockJobsAndProcessExclusive @ 0x140530470 (PspLockJobsAndProcessExclusive.c)
 *     PspGetJobAssignmentDisposition @ 0x1405304F0 (PspGetJobAssignmentDisposition.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x1405305E0 (PspValidateJobAssignmentSiloPolicy.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x14053064C (PspUnlockJobsAndProcessExclusive.c)
 *     PspValidateJobAssignmentMemoryPartition @ 0x140530E10 (PspValidateJobAssignmentMemoryPartition.c)
 *     PspValidateJobChainLimits @ 0x140530E98 (PspValidateJobChainLimits.c)
 *     PspEstablishJobHierarchy @ 0x140530FA8 (PspEstablishJobHierarchy.c)
 *     PspIncrementJobChainProcessCounts @ 0x140531494 (PspIncrementJobChainProcessCounts.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x14053154C (PspApplyWorkingSetLimitsToProcess.c)
 *     MmAssignProcessToJob @ 0x140531714 (MmAssignProcessToJob.c)
 *     PspApplyJobChainLimitsToProcess @ 0x1405319B4 (PspApplyJobChainLimitsToProcess.c)
 *     PspChangeProcessExecutionState @ 0x140532AF8 (PspChangeProcessExecutionState.c)
 *     PspRemoveProcessFromJobChain @ 0x140534D34 (PspRemoveProcessFromJobChain.c)
 *     PspChargeJobWakeCounter @ 0x140536740 (PspChargeJobWakeCounter.c)
 *     PspUnlockJob @ 0x140536FD0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x140537010 (PspLockJobExclusive.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x14058409C (PspDoesJobHierarchyPermitUILimits.c)
 *     PspIsJobMovable @ 0x14077BA14 (PspIsJobMovable.c)
 *     PspQuitNextJobProcess @ 0x14077BC9C (PspQuitNextJobProcess.c)
 */

__int64 __fastcall PspAssignProcessToJob(ULONG_PTR BugCheckParameter3, _QWORD *Object, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v9; // r14d
  char v10; // bl
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int JobAssignmentDisposition; // eax
  int v15; // ecx
  __int64 v16; // rax
  ULONG_PTR v17; // r12
  int v18; // edi
  __int64 v19; // rdi
  char v20; // bl
  __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v25; // rax
  int v26; // [rsp+40h] [rbp-59h] BYREF
  char v27[4]; // [rsp+44h] [rbp-55h] BYREF
  __int64 v28; // [rsp+48h] [rbp-51h]
  struct _KTHREAD *v29; // [rsp+50h] [rbp-49h]
  unsigned int v30; // [rsp+58h] [rbp-41h] BYREF
  ULONG_PTR v31; // [rsp+60h] [rbp-39h] BYREF
  int v32; // [rsp+68h] [rbp-31h]
  __int64 v33; // [rsp+70h] [rbp-29h]
  _QWORD v34[3]; // [rsp+78h] [rbp-21h] BYREF
  unsigned int v35[10]; // [rsp+90h] [rbp-9h] BYREF

  memset(v35, 0, sizeof(v35));
  CurrentThread = KeGetCurrentThread();
  v9 = 0;
  v10 = 0;
  v29 = CurrentThread;
  v26 = 0;
  if ( a4 == 5 )
  {
    a3 = Object[118];
    Object = PspGetNextJobProcess(BugCheckParameter3, (__int64)CurrentThread, v34, 0LL);
    ObfReferenceObjectWithTag(Object, 0x624A7350u);
    v10 = 1;
    PspQuitNextJobProcess(BugCheckParameter3, CurrentThread, v34, Object);
    v9 = v26;
  }
  if ( Object )
  {
    if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 95) )
    {
      v18 = -1073741558;
      goto LABEL_56;
    }
    v10 |= 0x10u;
  }
  PspGetJobLockHierarchyForAssignment(BugCheckParameter3, (__int64)Object, a3, a4, (__int64)v35);
  v10 |= 6u;
  PspLockJobAssignment((__int64)CurrentThread);
  PspLockJobsAndProcessExclusive(v35, (__int64)Object, (__int64)CurrentThread, 1);
  if ( a4 == 5 )
  {
    if ( (unsigned __int8)PspIsJobMovable(BugCheckParameter3) )
    {
      v25 = Object[118];
      v26 = 5;
      if ( v25 != BugCheckParameter3 || (*((_DWORD *)Object + 435) & 0x1000) == 0 )
      {
        v9 = v26;
        v18 = -1073741790;
        goto LABEL_56;
      }
      v9 = v26;
      goto LABEL_10;
    }
LABEL_85:
    v18 = -1073741790;
    goto LABEL_56;
  }
  JobAssignmentDisposition = PspGetJobAssignmentDisposition(BugCheckParameter3, (__int64)Object, a3, &v26);
  v9 = v26;
  if ( JobAssignmentDisposition < 0 )
    goto LABEL_85;
  if ( v26 != a4 )
  {
    v18 = -1073741267;
    goto LABEL_56;
  }
  if ( v26 == 2 )
  {
    v18 = 0;
    goto LABEL_56;
  }
LABEL_10:
  if ( Object && v9 != 5 )
  {
    a3 = Object[118];
    v9 = v26;
  }
  if ( v9 == 4
    && (*(_DWORD *)(BugCheckParameter3 + 1304) & 0x10) != 0
    && ((*(_DWORD *)(a3 + 1304) & 0x10) != 0 || !(unsigned __int8)PspDoesJobHierarchyPermitUILimits(a3))
    || !PspValidateJobAssignmentSiloPolicy(BugCheckParameter3, a3, (__int64)Object, v9)
    || !(unsigned __int8)PspValidateJobAssignmentMemoryPartition(BugCheckParameter3, a3, Object, v9) )
  {
    goto LABEL_91;
  }
  v11 = 4294967292LL;
  if ( v9 == 5 )
  {
    if ( (*(_DWORD *)(BugCheckParameter3 + 848) & 1) != 0 )
      goto LABEL_91;
  }
  else if ( ((v9 - 4) & 0xFFFFFFFC) != 0 || v9 == 6 )
  {
    goto LABEL_20;
  }
  if ( (unsigned int)*(unsigned __int8 *)(a3 + 874) + 1 > 0x64 )
    goto LABEL_91;
LABEL_20:
  if ( ((v9 - 4) & 0xFFFFFFFC) == 0 && v9 != 6 )
  {
    v15 = 0;
    v12 = 0x2000000LL;
    while ( (unsigned int)(v15 - 1) <= 1
         || (*(_DWORD *)(BugCheckParameter3 + 1304) & 0x2000000) == 0
         || (*(_DWORD *)(a3 + 1304) & 0x2000000) == 0 )
    {
      if ( ++v15 >= 3 )
        goto LABEL_25;
    }
    goto LABEL_91;
  }
LABEL_25:
  if ( ((v9 - 4) & 0xFFFFFFFC) == 0
    && v9 != 6
    && (*(_DWORD *)(a3 + 1332) || PspIsSetJobIoAttribution((_QWORD *)a3, 4294967292LL, 1))
    && (*(_DWORD *)(BugCheckParameter3 + 1332) || PspIsSetJobIoAttribution((_QWORD *)BugCheckParameter3, v11, 0)) )
  {
LABEL_91:
    v18 = -1073741637;
    goto LABEL_56;
  }
  if ( v9 == 1 || v9 == 3 )
  {
    v16 = a3;
LABEL_31:
    v17 = BugCheckParameter3;
    goto LABEL_32;
  }
  if ( v9 == 4 )
  {
    v16 = 0LL;
    goto LABEL_31;
  }
  if ( v9 != 5 )
  {
    v17 = 0LL;
    v28 = 0LL;
    goto LABEL_34;
  }
  v17 = a3;
  v16 = 0LL;
LABEL_32:
  v28 = v16;
  if ( v17 )
  {
    v18 = PspValidateJobChainLimits(v17, v16, Object, 0LL);
    if ( v18 < 0 )
      goto LABEL_103;
  }
LABEL_34:
  v18 = PspEstablishJobHierarchy((PVOID)BugCheckParameter3);
  if ( v18 < 0 )
  {
LABEL_103:
    CurrentThread = v29;
    goto LABEL_56;
  }
  if ( !Object )
  {
    v18 = 0;
    goto LABEL_103;
  }
  if ( (*(_DWORD *)(BugCheckParameter3 + 1304) & 0x1000) != 0 )
  {
    v19 = 0LL;
    do
    {
      if ( (*((_DWORD *)Object + (int)v19 + 512) & 0x7FFFFFFF) != 0 )
        PspChargeJobWakeCounter((PVOID)BugCheckParameter3, 0, 0LL, 6451018LL);
      _interlockedbittestandset((volatile signed __int32 *)Object + v19 + 512, 0x1Fu);
      v19 = (unsigned int)(v19 + 1);
    }
    while ( (unsigned int)v19 < 7 );
    if ( (*((_DWORD *)Object + 521) & 0x7FFFFFFF) != 0 )
      PspChargeJobWakeCounter((PVOID)BugCheckParameter3, 4, 0LL, 6451018LL);
    _interlockedbittestandset((volatile signed __int32 *)Object + 521, 0x1Fu);
  }
  if ( (_InterlockedExchangeAdd64(Object + 91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(Object + 91, v11, v12, v13);
  KeAbPostRelease((ULONG_PTR)(Object + 91));
  v9 = v26;
  v20 = v10 | 8;
  v21 = v28;
  if ( v26 == 4 )
    v21 = a3;
  PspIncrementJobChainProcessCounts(v17, v21, Object, 0LL);
  PspApplyJobChainLimitsToProcess(BugCheckParameter3, a3, Object);
  CurrentThread = v29;
  PspUnlockJobsAndProcessExclusive((int *)v35, 0LL, (__int64)v29, v22);
  v10 = v20 & 0xFB;
  if ( (*(_DWORD *)(BugCheckParameter3 + 1304) & 0x1000000) == 0 )
  {
    PsQueryProcessAttributes((struct _KPROCESS *)Object, (__int64)v27, 0LL);
    if ( v27[0] )
      _InterlockedOr((volatile signed __int32 *)(BugCheckParameter3 + 1304), 0x1000000u);
    else
      _InterlockedOr((volatile signed __int32 *)(BugCheckParameter3 + 1304), 0x1800000u);
    v9 = v26;
  }
  v18 = PspApplyWorkingSetLimitsToProcess((ULONG_PTR)Object);
  if ( v18 >= 0 )
  {
    v23 = 0LL;
    if ( v9 == 5 )
      v23 = 4LL;
    if ( (unsigned int)MmAssignProcessToJob(Object, a3, v23) )
    {
      PspUnlockJobAssignment((__int64)CurrentThread, v11, v12, v13);
      v10 &= ~2u;
      --CurrentThread->KernelApcDisable;
      PspChangeProcessExecutionState((PEPROCESS)Object);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( !Object[117] || !*(_DWORD *)(BugCheckParameter3 + 448) )
        goto LABEL_54;
      v31 = BugCheckParameter3;
      v32 = 1;
      v33 = Object[117];
      v30 = *(_DWORD *)(BugCheckParameter3 + 480);
      if ( v30 <= 0xFFFFFFFD )
      {
        PspLockJobExclusive(BugCheckParameter3, CurrentThread);
        v18 = PsInvokeWin32Callout(6, (__int64)&v31, 1, (__int64)&v30);
        PspUnlockJob(BugCheckParameter3, CurrentThread);
      }
      if ( v18 >= 0 )
      {
LABEL_54:
        if ( v9 == 5 )
        {
          v18 = -1073741267;
          v10 |= 0x20u;
        }
      }
    }
    else
    {
      v18 = -1073741756;
    }
  }
LABEL_56:
  if ( (v10 & 0x10) != 0 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)Object + 95);
  if ( (v10 & 0x20) == 0 && v18 < 0 && (v10 & 8) != 0 )
  {
    if ( v9 == 5 )
      KeBugCheckEx(0xEFu, (ULONG_PTR)Object, 0LL, BugCheckParameter3, v18);
    PspRemoveProcessFromJobChain((PEPROCESS)Object);
  }
  if ( (v10 & 4) != 0 )
    PspUnlockJobsAndProcessExclusive((int *)v35, (__int64)Object, (__int64)CurrentThread, v13);
  if ( (v10 & 2) != 0 )
    PspUnlockJobAssignment((__int64)CurrentThread, v11, v12, v13);
  if ( (v10 & 1) != 0 )
    ObfDereferenceObjectWithTag(Object, 0x624A7350u);
  return (unsigned int)v18;
}
