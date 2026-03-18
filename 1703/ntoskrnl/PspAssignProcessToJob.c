/*
 * XREFs of PspAssignProcessToJob @ 0x14054B358
 * Callers:
 *     PsAssignProcessToJobObject @ 0x14054B2E0 (PsAssignProcessToJobObject.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140085020 (PsGetProcessServerSilo.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     PsGetEffectiveServerSilo @ 0x1400949B0 (PsGetEffectiveServerSilo.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MmAssignProcessToJob @ 0x14011D7EC (MmAssignProcessToJob.c)
 *     PspIsServerSilo @ 0x14011E800 (PspIsServerSilo.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x14045E3B0 (PspDoesJobHierarchyPermitUILimits.c)
 *     PspChargeJobWakeCounter @ 0x140478790 (PspChargeJobWakeCounter.c)
 *     PspUnlockJob @ 0x140479650 (PspUnlockJob.c)
 *     PsQueryProcessAttributes @ 0x1404F7258 (PsQueryProcessAttributes.c)
 *     PsInvokeWin32Callout @ 0x1404F9F70 (PsInvokeWin32Callout.c)
 *     PspUnlockJobAssignment @ 0x140545FE0 (PspUnlockJobAssignment.c)
 *     PspLockJobAssignment @ 0x140546030 (PspLockJobAssignment.c)
 *     PspRemoveProcessFromJobChain @ 0x14054727C (PspRemoveProcessFromJobChain.c)
 *     PspChangeProcessExecutionState @ 0x140547580 (PspChangeProcessExecutionState.c)
 *     PspAddProcessToJobChain @ 0x140547D90 (PspAddProcessToJobChain.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x14054BB34 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x14054BD0C (PspUnlockJobsAndProcessExclusive.c)
 *     PspEstablishJobHierarchy @ 0x14054BD84 (PspEstablishJobHierarchy.c)
 *     PspValidateJobMemoryPartitionAssignment @ 0x14054C324 (PspValidateJobMemoryPartitionAssignment.c)
 *     PspGetJobAssignmentDisposition @ 0x14054C3BC (PspGetJobAssignmentDisposition.c)
 *     PspLockJobsAndProcessExclusive @ 0x14054C4B8 (PspLockJobsAndProcessExclusive.c)
 *     PspGetJobLockHierarchyForAssignment @ 0x14054C538 (PspGetJobLockHierarchyForAssignment.c)
 */

__int64 __fastcall PspAssignProcessToJob(char *Object, ULONG_PTR BugCheckParameter1, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r12
  char v9; // bl
  unsigned int v10; // r15d
  int JobAssignmentDisposition; // edi
  unsigned int v12; // r15d
  __int64 EffectiveServerSilo; // rdi
  int i; // edi
  __int64 v15; // rax
  bool v17; // zf
  unsigned int v18; // eax
  _BYTE v19[3]; // [rsp+41h] [rbp-38h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-35h] BYREF
  int v21; // [rsp+48h] [rbp-31h]
  unsigned int v22; // [rsp+4Ch] [rbp-2Dh] BYREF
  char *v23; // [rsp+50h] [rbp-29h] BYREF
  int v24; // [rsp+58h] [rbp-21h]
  __int64 v25; // [rsp+60h] [rbp-19h]
  _DWORD v26[10]; // [rsp+68h] [rbp-11h] BYREF

  v26[0] = 0;
  v21 = a4;
  memset(&v26[2], 0, 0x20uLL);
  CurrentThread = KeGetCurrentThread();
  v9 = 0;
  v10 = -1073741756;
  if ( BugCheckParameter1 )
  {
    if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
    {
      JobAssignmentDisposition = -1073741558;
      goto LABEL_51;
    }
    v9 = 8;
  }
  PspGetJobLockHierarchyForAssignment((_DWORD)Object, BugCheckParameter1, a3, a4, (__int64)v26);
  v9 |= 3u;
  PspLockJobAssignment((__int64)CurrentThread);
  PspLockJobsAndProcessExclusive(v26, BugCheckParameter1, CurrentThread, 1LL);
  JobAssignmentDisposition = PspGetJobAssignmentDisposition(Object, BugCheckParameter1, a3, &v20);
  if ( JobAssignmentDisposition < 0 )
  {
    JobAssignmentDisposition = -1073741790;
    goto LABEL_51;
  }
  v12 = v20;
  if ( v20 != v21 )
  {
    JobAssignmentDisposition = -1073741267;
LABEL_50:
    v10 = -1073741756;
    goto LABEL_51;
  }
  if ( v20 == 2 )
    goto LABEL_30;
  if ( BugCheckParameter1 )
  {
    a3 = *(_QWORD *)(BugCheckParameter1 + 944);
    v12 = v20;
  }
  if ( v12 == 4 )
  {
    if ( (*((_DWORD *)Object + 326) & 0x10) != 0
      && ((*(_DWORD *)(a3 + 1304) & 0x10) != 0 || !PspDoesJobHierarchyPermitUILimits((_QWORD *)a3, 1)) )
    {
      goto LABEL_58;
    }
    v17 = !PspIsServerSilo((__int64)Object);
  }
  else
  {
    if ( ((v12 - 1) & 0xFFFFFFFD) != 0 )
      goto LABEL_12;
    EffectiveServerSilo = PsGetEffectiveServerSilo((__int64)Object);
    if ( PsGetEffectiveServerSilo(a3) == EffectiveServerSilo )
      goto LABEL_12;
    v17 = EffectiveServerSilo == PsGetProcessServerSilo(BugCheckParameter1);
  }
  if ( !v17 )
  {
LABEL_58:
    JobAssignmentDisposition = -1073741637;
    goto LABEL_50;
  }
LABEL_12:
  JobAssignmentDisposition = PspValidateJobMemoryPartitionAssignment(BugCheckParameter1, Object, v12);
  if ( JobAssignmentDisposition < 0 )
    goto LABEL_50;
  JobAssignmentDisposition = PspEstablishJobHierarchy(Object);
  if ( JobAssignmentDisposition < 0 )
    goto LABEL_50;
  if ( !BugCheckParameter1 )
  {
    JobAssignmentDisposition = 0;
    goto LABEL_31;
  }
  if ( (*((_DWORD *)Object + 326) & 0x1000) != 0 )
  {
    for ( i = 0; (unsigned int)i < 7; ++i )
    {
      if ( (*(_DWORD *)(BugCheckParameter1 + 4LL * i + 2024) & 0x7FFFFFFF) != 0 )
        PspChargeJobWakeCounter(
          Object,
          (char *)a3,
          i,
          *(_DWORD *)(BugCheckParameter1 + 4LL * i + 2024) & 0x7FFFFFFF,
          0,
          0LL,
          6451018LL);
      v15 = (unsigned int)i;
      _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 4 * v15 + 2024), 0x1Fu);
    }
    if ( (*(_DWORD *)(BugCheckParameter1 + 2060) & 0x7FFFFFFF) != 0 )
      PspChargeJobWakeCounter(
        Object,
        (char *)a3,
        0,
        *(_DWORD *)(BugCheckParameter1 + 2060) & 0x7FFFFFFF,
        4,
        0LL,
        6451018LL);
    _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 2060), 0x1Fu);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 728));
  KeAbPostRelease(BugCheckParameter1 + 728);
  JobAssignmentDisposition = PspAddProcessToJobChain((__int64)Object, a3, BugCheckParameter1, 0);
  PspUnlockJobsAndProcessExclusive(v26, 0LL, CurrentThread);
  v9 = v9 & 0xF9 | 4;
  if ( JobAssignmentDisposition < 0 )
    goto LABEL_50;
  if ( (*((_DWORD *)Object + 326) & 0x1000000) == 0 )
  {
    PsQueryProcessAttributes((struct _KPROCESS *)BugCheckParameter1, (__int64)v19, 0LL);
    if ( !v19[0] )
      _InterlockedOr((volatile signed __int32 *)Object + 326, 0x800000u);
    _InterlockedOr((volatile signed __int32 *)Object + 326, 0x1000000u);
  }
  JobAssignmentDisposition = PspApplyWorkingSetLimitsToProcess(BugCheckParameter1);
  if ( JobAssignmentDisposition < 0 )
    goto LABEL_50;
  if ( (unsigned int)MmAssignProcessToJob(BugCheckParameter1) )
  {
    PspUnlockJobAssignment((__int64)CurrentThread);
    v9 &= ~1u;
    --CurrentThread->KernelApcDisable;
    PspChangeProcessExecutionState((_KPROCESS *)BugCheckParameter1);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( *(_QWORD *)(BugCheckParameter1 + 936) )
    {
      if ( *((_DWORD *)Object + 112) )
      {
        v25 = *(_QWORD *)(BugCheckParameter1 + 936);
        v18 = *((_DWORD *)Object + 120);
        v23 = Object;
        v24 = 1;
        v22 = v18;
        if ( v18 <= 0xFFFFFFFD )
        {
          --CurrentThread->SpecialApcDisable;
          ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
          JobAssignmentDisposition = PsInvokeWin32Callout(6, (__int64)&v23, 1, (int *)&v22);
          PspUnlockJob((__int64)Object, (__int64)CurrentThread);
        }
      }
    }
LABEL_30:
    if ( JobAssignmentDisposition >= 0 )
      goto LABEL_31;
    goto LABEL_50;
  }
  v10 = -1073741756;
  JobAssignmentDisposition = -1073741756;
LABEL_51:
  if ( (v9 & 4) != 0 )
  {
    if ( JobAssignmentDisposition == -1073741558 )
      v10 = -1073741558;
    PspRemoveProcessFromJobChain(BugCheckParameter1, 0LL, 0xAu, v10);
  }
LABEL_31:
  if ( (v9 & 2) != 0 )
    PspUnlockJobsAndProcessExclusive(v26, BugCheckParameter1, CurrentThread);
  if ( (v9 & 1) != 0 )
    PspUnlockJobAssignment((__int64)CurrentThread);
  if ( (v9 & 8) != 0 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
  return (unsigned int)JobAssignmentDisposition;
}
