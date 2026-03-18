/*
 * XREFs of PspAssignProcessToJob @ 0x14050BFAC
 * Callers:
 *     PsAssignProcessToJobObject @ 0x14050BD70 (PsAssignProcessToJobObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MmAssignProcessToJob @ 0x1400D43A8 (MmAssignProcessToJob.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x1404508F4 (PspDoesJobHierarchyPermitUILimits.c)
 *     PsQueryProcessAttributes @ 0x140486A80 (PsQueryProcessAttributes.c)
 *     PsInvokeWin32Callout @ 0x1404D24E0 (PsInvokeWin32Callout.c)
 *     PspIsSetJobIoAttribution @ 0x14050B318 (PspIsSetJobIoAttribution.c)
 *     PspGetJobLockHierarchyForAssignment @ 0x14050BDE8 (PspGetJobLockHierarchyForAssignment.c)
 *     PspGetJobAssignmentDisposition @ 0x14050BE50 (PspGetJobAssignmentDisposition.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x14050BF40 (PspValidateJobAssignmentSiloPolicy.c)
 *     PspValidateJobAssignmentMemoryPartition @ 0x14050C42C (PspValidateJobAssignmentMemoryPartition.c)
 *     PspValidateJobChainLimits @ 0x14050C4B4 (PspValidateJobChainLimits.c)
 *     PspEstablishJobHierarchy @ 0x14050C5C4 (PspEstablishJobHierarchy.c)
 *     PspIncrementJobChainProcessCounts @ 0x14050CAB0 (PspIncrementJobChainProcessCounts.c)
 *     PspGetNextJobProcess @ 0x14050CEAC (PspGetNextJobProcess.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x14050D218 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspApplyJobChainLimitsToProcess @ 0x14050D3E4 (PspApplyJobChainLimitsToProcess.c)
 *     PspLockJobAssignment @ 0x14050DBF4 (PspLockJobAssignment.c)
 *     PspUnlockJobAssignment @ 0x14050DC20 (PspUnlockJobAssignment.c)
 *     PspChangeProcessExecutionState @ 0x14050DC70 (PspChangeProcessExecutionState.c)
 *     PspRemoveProcessFromJobChain @ 0x14050E398 (PspRemoveProcessFromJobChain.c)
 *     PspChargeJobWakeCounter @ 0x14050F8C0 (PspChargeJobWakeCounter.c)
 *     PspUnlockJob @ 0x1405102A0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1405102E0 (PspLockJobExclusive.c)
 *     PspLockJobsAndProcessExclusive @ 0x1405127BC (PspLockJobsAndProcessExclusive.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x14051283C (PspUnlockJobsAndProcessExclusive.c)
 *     PspIsJobMovable @ 0x1407179F4 (PspIsJobMovable.c)
 *     PspQuitNextJobProcess @ 0x140717C7C (PspQuitNextJobProcess.c)
 */

__int64 __fastcall PspAssignProcessToJob(ULONG_PTR BugCheckParameter3, __int64 Object, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v9; // r14d
  char v10; // bl
  int JobAssignmentDisposition; // eax
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rax
  ULONG_PTR v15; // r12
  int v16; // edi
  __int64 v17; // rdi
  char v18; // bl
  __int64 v19; // rdx
  __int64 v21; // rax
  int v22; // [rsp+40h] [rbp-59h] BYREF
  char v23[4]; // [rsp+44h] [rbp-55h] BYREF
  __int64 v24; // [rsp+48h] [rbp-51h]
  struct _KTHREAD *v25; // [rsp+50h] [rbp-49h]
  unsigned int v26; // [rsp+58h] [rbp-41h] BYREF
  ULONG_PTR v27; // [rsp+60h] [rbp-39h] BYREF
  int v28; // [rsp+68h] [rbp-31h]
  __int64 v29; // [rsp+70h] [rbp-29h]
  _BYTE v30[24]; // [rsp+78h] [rbp-21h] BYREF
  _DWORD v31[10]; // [rsp+90h] [rbp-9h] BYREF

  v31[0] = 0;
  memset(&v31[2], 0, 0x20uLL);
  CurrentThread = KeGetCurrentThread();
  v9 = 0;
  v10 = 0;
  v25 = CurrentThread;
  v22 = 0;
  if ( a4 == 5 )
  {
    a3 = *(_QWORD *)(Object + 944);
    Object = PspGetNextJobProcess(BugCheckParameter3, CurrentThread, v30, 0LL);
    ObfReferenceObjectWithTag((PVOID)Object, 0x624A7350u);
    v10 = 1;
    PspQuitNextJobProcess(BugCheckParameter3, CurrentThread, v30, Object);
    v9 = v22;
  }
  if ( Object )
  {
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(Object + 760)) )
    {
      v16 = -1073741558;
      goto LABEL_55;
    }
    v10 |= 0x10u;
  }
  PspGetJobLockHierarchyForAssignment(BugCheckParameter3, Object, a3, a4, (__int64)v31);
  v10 |= 6u;
  PspLockJobAssignment(CurrentThread);
  PspLockJobsAndProcessExclusive(v31, Object, CurrentThread, 1LL);
  if ( a4 != 5 )
  {
    JobAssignmentDisposition = PspGetJobAssignmentDisposition(BugCheckParameter3, Object, a3, &v22);
    v9 = v22;
    if ( JobAssignmentDisposition >= 0 )
    {
      if ( v22 != a4 )
      {
        v16 = -1073741267;
        goto LABEL_55;
      }
      if ( v22 == 2 )
      {
        v16 = 0;
        goto LABEL_55;
      }
      goto LABEL_10;
    }
LABEL_82:
    v16 = -1073741790;
    goto LABEL_55;
  }
  if ( !(unsigned __int8)PspIsJobMovable(BugCheckParameter3) )
    goto LABEL_82;
  v21 = *(_QWORD *)(Object + 944);
  v22 = 5;
  if ( v21 != BugCheckParameter3 || (*(_DWORD *)(Object + 1740) & 0x1000) == 0 )
  {
    v9 = v22;
    v16 = -1073741790;
    goto LABEL_55;
  }
  v9 = v22;
LABEL_10:
  if ( Object && v9 != 5 )
  {
    a3 = *(_QWORD *)(Object + 944);
    v9 = v22;
  }
  if ( v9 == 4
    && (*(_DWORD *)(BugCheckParameter3 + 1304) & 0x10) != 0
    && ((*(_DWORD *)(a3 + 1304) & 0x10) != 0 || !PspDoesJobHierarchyPermitUILimits((_QWORD *)a3, 1))
    || !PspValidateJobAssignmentSiloPolicy(BugCheckParameter3, a3, Object, v9)
    || !(unsigned __int8)PspValidateJobAssignmentMemoryPartition(BugCheckParameter3, a3, Object, v9) )
  {
    goto LABEL_88;
  }
  v12 = 4294967292LL;
  if ( v9 == 5 )
  {
    if ( (*(_DWORD *)(BugCheckParameter3 + 848) & 1) != 0 )
      goto LABEL_88;
  }
  else if ( ((v9 - 4) & 0xFFFFFFFC) != 0 || v9 == 6 )
  {
    goto LABEL_20;
  }
  if ( (unsigned int)*(unsigned __int8 *)(a3 + 874) + 1 > 0x64 )
    goto LABEL_88;
LABEL_20:
  if ( ((v9 - 4) & 0xFFFFFFFC) == 0 && v9 != 6 )
  {
    v13 = 0;
    while ( (unsigned int)(v13 - 1) <= 1
         || (*(_DWORD *)(BugCheckParameter3 + 1304) & 0x2000000) == 0
         || (*(_DWORD *)(a3 + 1304) & 0x2000000) == 0 )
    {
      if ( ++v13 >= 3 )
        goto LABEL_25;
    }
    goto LABEL_88;
  }
LABEL_25:
  if ( ((v9 - 4) & 0xFFFFFFFC) == 0
    && v9 != 6
    && (*(_DWORD *)(a3 + 1332) || PspIsSetJobIoAttribution((_QWORD *)a3, 4294967292LL, 1))
    && (*(_DWORD *)(BugCheckParameter3 + 1332) || PspIsSetJobIoAttribution((_QWORD *)BugCheckParameter3, v12, 0)) )
  {
LABEL_88:
    v16 = -1073741637;
    goto LABEL_55;
  }
  if ( v9 == 1 || v9 == 3 )
  {
    v14 = a3;
LABEL_31:
    v15 = BugCheckParameter3;
    goto LABEL_32;
  }
  if ( v9 == 4 )
  {
    v14 = 0LL;
    goto LABEL_31;
  }
  if ( v9 != 5 )
  {
    v15 = 0LL;
    v24 = 0LL;
    goto LABEL_34;
  }
  v15 = a3;
  v14 = 0LL;
LABEL_32:
  v24 = v14;
  if ( v15 )
  {
    v16 = PspValidateJobChainLimits(v15, v14, Object, 0LL);
    if ( v16 < 0 )
      goto LABEL_100;
  }
LABEL_34:
  v16 = PspEstablishJobHierarchy((PVOID)BugCheckParameter3);
  if ( v16 < 0 )
  {
LABEL_100:
    CurrentThread = v25;
    goto LABEL_55;
  }
  if ( !Object )
  {
    v16 = 0;
    goto LABEL_100;
  }
  if ( (*(_DWORD *)(BugCheckParameter3 + 1304) & 0x1000) != 0 )
  {
    v17 = 0LL;
    do
    {
      if ( (*(_DWORD *)(Object + 4LL * (int)v17 + 2048) & 0x7FFFFFFF) != 0 )
        PspChargeJobWakeCounter((PVOID)BugCheckParameter3, 0, 0LL, 6451018LL);
      _interlockedbittestandset((volatile signed __int32 *)(Object + 4 * v17 + 2048), 0x1Fu);
      v17 = (unsigned int)(v17 + 1);
    }
    while ( (unsigned int)v17 < 7 );
    if ( (*(_DWORD *)(Object + 2084) & 0x7FFFFFFF) != 0 )
      PspChargeJobWakeCounter((PVOID)BugCheckParameter3, 4, 0LL, 6451018LL);
    _interlockedbittestandset((volatile signed __int32 *)(Object + 2084), 0x1Fu);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Object + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(Object + 728));
  KeAbPostRelease(Object + 728);
  v9 = v22;
  v18 = v10 | 8;
  v19 = v24;
  if ( v22 == 4 )
    v19 = a3;
  PspIncrementJobChainProcessCounts(v15, v19, Object, 0LL);
  PspApplyJobChainLimitsToProcess(BugCheckParameter3, a3, Object);
  CurrentThread = v25;
  PspUnlockJobsAndProcessExclusive(v31, 0LL, v25);
  v10 = v18 & 0xFB;
  if ( (*(_DWORD *)(BugCheckParameter3 + 1304) & 0x1000000) == 0 )
  {
    PsQueryProcessAttributes((struct _KPROCESS *)Object, v23, 0LL);
    if ( v23[0] )
      _InterlockedOr((volatile signed __int32 *)(BugCheckParameter3 + 1304), 0x1000000u);
    else
      _InterlockedOr((volatile signed __int32 *)(BugCheckParameter3 + 1304), 0x1800000u);
    v9 = v22;
  }
  v16 = PspApplyWorkingSetLimitsToProcess(Object);
  if ( v16 >= 0 )
  {
    if ( (unsigned int)MmAssignProcessToJob(Object) )
    {
      PspUnlockJobAssignment(CurrentThread);
      v10 &= ~2u;
      --CurrentThread->KernelApcDisable;
      PspChangeProcessExecutionState(Object);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( !*(_QWORD *)(Object + 936) || !*(_DWORD *)(BugCheckParameter3 + 448) )
        goto LABEL_53;
      v27 = BugCheckParameter3;
      v28 = 1;
      v29 = *(_QWORD *)(Object + 936);
      v26 = *(_DWORD *)(BugCheckParameter3 + 480);
      if ( v26 <= 0xFFFFFFFD )
      {
        PspLockJobExclusive(BugCheckParameter3, CurrentThread);
        v16 = PsInvokeWin32Callout(6, (__int64)&v27, 1, (__int64)&v26);
        PspUnlockJob(BugCheckParameter3, CurrentThread);
      }
      if ( v16 >= 0 )
      {
LABEL_53:
        if ( v9 == 5 )
        {
          v16 = -1073741267;
          v10 |= 0x20u;
        }
      }
    }
    else
    {
      v16 = -1073741756;
    }
  }
LABEL_55:
  if ( (v10 & 0x20) == 0 && v16 < 0 && (v10 & 8) != 0 )
  {
    if ( v9 == 5 )
      KeBugCheckEx(0xEFu, Object, 0LL, BugCheckParameter3, v16);
    PspRemoveProcessFromJobChain(Object);
  }
  if ( (v10 & 4) != 0 )
    PspUnlockJobsAndProcessExclusive(v31, Object, CurrentThread);
  if ( (v10 & 2) != 0 )
    PspUnlockJobAssignment(CurrentThread);
  if ( (v10 & 0x10) != 0 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(Object + 760));
  if ( (v10 & 1) != 0 )
    ObfDereferenceObjectWithTag((PVOID)Object, 0x624A7350u);
  return (unsigned int)v16;
}
