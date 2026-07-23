/*
 * XREFs of PspExitThread @ 0x1405401EC
 * Callers:
 *     KiSchedulerApcTerminate @ 0x140443330 (KiSchedulerApcTerminate.c)
 *     NtTerminateProcess @ 0x14054E9C0 (NtTerminateProcess.c)
 *     PspTerminateThreadByPointer @ 0x14054F0D0 (PspTerminateThreadByPointer.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x14000CFD0 (ObReferenceObjectSafe.c)
 *     PsGetHostSilo @ 0x14001ED90 (PsGetHostSilo.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140044420 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     PspRevertContainerImpersonation @ 0x140044790 (PspRevertContainerImpersonation.c)
 *     ExTimerRundown @ 0x14004E2AC (ExTimerRundown.c)
 *     PsAttachSiloToCurrentThread @ 0x14006F5B0 (PsAttachSiloToCurrentThread.c)
 *     PopPowerRequestCleanUp @ 0x140071694 (PopPowerRequestCleanUp.c)
 *     PsGetProcessServerSilo @ 0x140085020 (PsGetProcessServerSilo.c)
 *     MmSessionGetWin32Callouts @ 0x14008BBF0 (MmSessionGetWin32Callouts.c)
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     ObFastDereferenceObject @ 0x1400EE840 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExWaitForRundownProtectionRelease @ 0x14010EFC0 (ExWaitForRundownProtectionRelease.c)
 *     KeQuerySystemTimeUnsafe @ 0x1401104F8 (KeQuerySystemTimeUnsafe.c)
 *     KeQuerySystemTimePrecise @ 0x140110600 (KeQuerySystemTimePrecise.c)
 *     KiRundownMutants @ 0x140111510 (KiRundownMutants.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KeTerminateThread @ 0x140114224 (KeTerminateThread.c)
 *     KeForceResumeProcess @ 0x1401202A4 (KeForceResumeProcess.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140136B30 (ExfAcquireReleasePushLockExclusive.c)
 *     ZwFreeVirtualMemory @ 0x14017E300 (ZwFreeVirtualMemory.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KeUnsecureThread @ 0x1401FCDA4 (KeUnsecureThread.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PspExitProcess @ 0x140498A28 (PspExitProcess.c)
 *     ExWnfExitProcess @ 0x140498BC4 (ExWnfExitProcess.c)
 *     LpcExitProcess @ 0x140498C20 (LpcExitProcess.c)
 *     MmDeleteTeb @ 0x140499B6C (MmDeleteTeb.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14049DB70 (SeAuditingWithTokenForSubcategory.c)
 *     EtwTraceThread @ 0x1404B07F4 (EtwTraceThread.c)
 *     PspClearProcessThreadCidRefs @ 0x1404F8D74 (PspClearProcessThreadCidRefs.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     ExCallCallBack @ 0x1404F9EF4 (ExCallCallBack.c)
 *     PspCallThreadNotifyRoutines @ 0x1404FA280 (PspCallThreadNotifyRoutines.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 *     LpcRequestPort @ 0x14053F060 (LpcRequestPort.c)
 *     PspEmptyPropertySet @ 0x14053F0CC (PspEmptyPropertySet.c)
 *     PsCaptureExceptionPort @ 0x14053F0F0 (PsCaptureExceptionPort.c)
 *     IoCancelThreadIo @ 0x14053F190 (IoCancelThreadIo.c)
 *     CmNotifyRunDown @ 0x14053F248 (CmNotifyRunDown.c)
 *     KeRundownApcQueues @ 0x140540148 (KeRundownApcQueues.c)
 *     PspRundownSingleProcess @ 0x140546EDC (PspRundownSingleProcess.c)
 *     DbgkExitProcess @ 0x14068192C (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x1406819D8 (DbgkExitThread.c)
 *     PspUmsUnInitThread @ 0x1406E26B4 (PspUmsUnInitThread.c)
 *     PspCatchCriticalBreak @ 0x1406E2BD8 (PspCatchCriticalBreak.c)
 *     SeAuditProcessExit @ 0x1406F1F9C (SeAuditProcessExit.c)
 */

__int64 __fastcall PspExitThread(unsigned int a1)
{
  unsigned int v1; // r12d
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v3; // r14
  ULONG_PTR v4; // r8
  struct _LIST_ENTRY *Blink; // rbx
  volatile signed __int64 *v6; // rbx
  LARGE_INTEGER v8; // rcx
  _QWORD *StackLimit; // r15
  void *v10; // rbx
  int v11; // eax
  UCHAR Reserved1; // al
  unsigned __int64 Teb; // rbx
  LIST_ENTRY *p_WaitListHead; // rbx
  PVOID v15; // rcx
  __int64 v17; // rax
  void *v18; // rcx
  __int16 v19; // dx
  __int16 v20; // dx
  _RTL_RUN_ONCE *Win32Callouts; // rax
  _QWORD *v22; // r15
  _QWORD *v23; // rax
  _QWORD *v24; // r12
  _RTL_RUN_ONCE *v25; // rax
  PACCESS_TOKEN v26; // rbx
  void *v27; // rcx
  int v28; // eax
  _QWORD *v29; // rbx
  _DWORD *v30; // rbx
  signed __int32 v31[8]; // [rsp+0h] [rbp-F8h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-D8h]
  void *v33; // [rsp+30h] [rbp-C8h]
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-C0h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-B8h] BYREF
  ULONG_PTR v36; // [rsp+48h] [rbp-B0h] BYREF
  PVOID v37[2]; // [rsp+50h] [rbp-A8h] BYREF
  _KPROCESS *Process; // [rsp+60h] [rbp-98h]
  __m256i v39; // [rsp+68h] [rbp-90h] BYREF
  __int64 v40; // [rsp+90h] [rbp-68h]
  struct _KTHREAD *v41; // [rsp+98h] [rbp-60h] BYREF
  int v42; // [rsp+A0h] [rbp-58h]
  ULONG_PTR v43; // [rsp+A8h] [rbp-50h] BYREF
  int v44; // [rsp+B0h] [rbp-48h]
  char v46; // [rsp+108h] [rbp+10h]
  PVOID Object; // [rsp+110h] [rbp+18h]
  PMDL MemoryDescriptorList; // [rsp+118h] [rbp+20h] BYREF

  v1 = a1;
  CurrentThread = KeGetCurrentThread();
  v37[1] = CurrentThread;
  Process = CurrentThread->Process;
  v3 = (ULONG_PTR)Process;
  PspClearProcessThreadCidRefs((__int64)CurrentThread, (__int64)CurrentThread[1].KernelStack, (ULONG_PTR)CurrentThread);
  v4 = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( Process != (_KPROCESS *)v4 )
    KeBugCheckEx(5u, (ULONG_PTR)Process, v4, CurrentThread->ApcStateIndex, (ULONG_PTR)CurrentThread);
  __writecr8(0LL);
  if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 1) != 0 )
    KeBugCheckEx(0xE9u, (ULONG_PTR)CurrentThread, 0LL, 0LL, 0LL);
  if ( CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x20u, 0LL, CurrentThread->CombinedApcDisable, 0LL, 1uLL);
  if ( CurrentThread[1].SListFaultAddress )
  {
    KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, 0LL);
    ObfDereferenceObjectWithTag(CurrentThread[1].SListFaultAddress, 0x79517350u);
    CurrentThread[1].SListFaultAddress = 0LL;
  }
  PspEmptyPropertySet(&CurrentThread[1].WaitBlock[1].SparePtr);
  PspRevertContainerImpersonation((__int64)CurrentThread);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&CurrentThread[1].WaitStatus);
  Blink = CurrentThread[1].ApcState.ApcListHead[1].Blink;
  if ( Blink )
  {
    PopPowerRequestCleanUp(CurrentThread[1].ApcState.ApcListHead[1].Blink);
    ObfDereferenceObject(Blink);
    CurrentThread[1].ApcState.ApcListHead[1].Blink = 0LL;
  }
  v46 = 0;
  Object = 0LL;
  LODWORD(CurrentThread[1].Timer.Header.WaitListHead.Blink) = v1;
  if ( (PerfGlobalGroupMask & 2) != 0 )
    EtwTraceThread((__int64)CurrentThread, 0LL, 0LL);
  --CurrentThread->KernelApcDisable;
  if ( (*(_DWORD *)(v3 + 1740) & 1) == 0 || *(_QWORD *)(v3 + 1808) )
    PspCallThreadNotifyRoutines(CurrentThread, 0, 0);
  v6 = (volatile signed __int64 *)(v3 + 728);
  ExAcquirePushLockExclusiveEx(v3 + 728, 0LL);
  if ( (*(_DWORD *)(v3 + 1176))-- == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(v3 + 772), 0x2000008u);
    KeForceResumeProcess(v3);
    v46 = 1;
    if ( *(_DWORD *)(v3 + 1572) == 259 )
    {
      if ( v1 == -1073741749 )
        *(_DWORD *)(v3 + 1572) = *(_DWORD *)(v3 + 1188);
      else
        *(_DWORD *)(v3 + 1572) = v1;
    }
    v22 = *(_QWORD **)(v3 + 1160);
    if ( v22 != (_QWORD *)(v3 + 1160) )
    {
      v23 = (_QWORD *)(v3 + 1160);
      v24 = 0LL;
      do
      {
        if ( v22 - 212 != (_QWORD *)CurrentThread )
        {
          if ( !(unsigned __int8)*((_DWORD *)v22 - 423) && ObReferenceObjectSafe((__int64)(v22 - 212)) )
          {
            if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v3 + 728));
            KeAbPostRelease(v3 + 728);
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
            KeWaitForSingleObject(v22 - 212, Executive, 0, 0, 0LL);
            if ( v24 )
              ObfDereferenceObject(v24);
            v24 = v22 - 212;
            --CurrentThread->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v3 + 728, 0LL);
          }
          v23 = (_QWORD *)(v3 + 1160);
        }
        v22 = (_QWORD *)*v22;
      }
      while ( v22 != v23 );
      Object = v24;
      v1 = a1;
    }
  }
  else if ( v1 != -1073741749 )
  {
    *(_DWORD *)(v3 + 1188) = v1;
  }
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v3 + 728));
  KeAbPostRelease(v3 + 728);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObject(Object);
  v8.QuadPart = -3LL;
  if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] != -3LL )
  {
    v30 = (_DWORD *)PsAttachSiloToCurrentThread(-3LL);
    if ( v30 == (_DWORD *)PsGetHostSilo()
      || (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v30 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v30 - 48) >> 8)] != PsJobType
      || (v30[327] & 2) == 0 )
    {
      KeBugCheckEx(0x1CBu, (ULONG_PTR)CurrentThread, (ULONG_PTR)v30, v3, 1uLL);
    }
    ObfDereferenceObjectWithTag(v30, 0x6D497350u);
  }
  if ( *(_QWORD *)(v3 + 1056) && (CurrentThread->MiscFlags & 0x400) == 0 )
  {
    if ( v46 )
      DbgkExitProcess(*(unsigned int *)(v3 + 1572));
    else
      DbgkExitThread(v1);
  }
  if ( *(_QWORD *)(v3 + 720) && (int)KeUnsecureThread((__int64)&MemoryDescriptorList) >= 0 )
  {
    MmUnlockPages(MemoryDescriptorList);
    ExFreePoolWithTag(MemoryDescriptorList, 0x65537350u);
  }
  if ( (_BYTE)KdDebuggerEnabled )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x20) != 0 )
    {
      v8.QuadPart = HIDWORD(CurrentThread->Process[1].DirectoryTableBase);
      if ( (v8.LowPart & 0x40000008) == 0 )
      {
        PsGetProcessServerSilo(v3);
        LODWORD(Timeout) = v1;
        PspCatchCriticalBreak("Critical thread 0x%p (in %s) exited\n", CurrentThread, (const char *)(v3 + 1104));
      }
    }
  }
  if ( v46 && (*(_DWORD *)(v3 + 772) & 0x2000) != 0 )
  {
    PsGetProcessServerSilo(v3);
    LODWORD(Timeout) = v1;
    PspCatchCriticalBreak("Critical process 0x%p (%s) exited\n", (const void *)v3, (const char *)(v3 + 1104));
  }
  StackLimit = CurrentThread[1].StackLimit;
  if ( StackLimit )
  {
    v39.m256i_i64[0] = 0x600300008LL;
    v40 = *(_QWORD *)&CurrentThread[1].Header.Lock;
    do
    {
      while ( 1 )
      {
        v28 = LpcRequestPort(StackLimit[1], &v39);
        if ( v28 != -1073741801 && v28 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject((PVOID)StackLimit[1]);
      v29 = (_QWORD *)*StackLimit;
      ExFreePoolWithTag(StackLimit, 0x70547350u);
      StackLimit = v29;
    }
    while ( v29 );
  }
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
  {
    v10 = PsCaptureExceptionPort(v3);
    if ( v10 )
    {
      v39.m256i_i64[0] = 0x600300008LL;
      v40 = *(_QWORD *)&CurrentThread[1].Header.Lock;
      while ( 1 )
      {
        v11 = LpcRequestPort((__int64)v10, &v39);
        if ( v11 != -1073741801 && v11 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject(v10);
    }
  }
  if ( CurrentThread->WaitBlock[2].SparePtr )
  {
    v41 = CurrentThread;
    v42 = 1;
    Win32Callouts = MmSessionGetWin32Callouts();
    ExCallCallBack((signed __int64 *)Win32Callouts, 1LL, (__int64)&v41);
  }
  if ( v46 && *(_QWORD *)(v3 + 936) )
  {
    v43 = v3;
    v44 = 0;
    v25 = MmSessionGetWin32Callouts();
    ExCallCallBack((signed __int64 *)v25, 0LL, (__int64)&v43);
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) == 0 )
    KeBugCheckEx(0x94u, 0LL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  IoCancelThreadIo(v8);
  ExTimerRundown();
  CmNotifyRunDown((__int64)CurrentThread);
  KiRundownMutants((ULONG_PTR)KeGetCurrentThread());
  Reserved1 = CurrentThread->Header.Reserved1;
  if ( (Reserved1 & 0x40) != 0 || Reserved1 >= 0x80u )
    PspUmsUnInitThread(CurrentThread);
  Teb = (unsigned __int64)CurrentThread->Teb;
  if ( Teb )
  {
    CurrentThread->Teb = 0LL;
    --CurrentThread->KernelApcDisable;
    _InterlockedOr(v31, 0);
    if ( ((__int64)CurrentThread[1].WaitBlockList & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((unsigned __int64 *)&CurrentThread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( (CurrentThread->MiscFlags & 0x400) == 0 && (*(_DWORD *)(v3 + 772) & 0x40000008) == 0 )
    {
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
      {
        v33 = *(void **)(Teb + 5240);
        BaseAddress = v33;
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        v17 = *(_QWORD *)(v3 + 1064);
        if ( v17 )
        {
          v19 = *(_WORD *)(v17 + 8);
          if ( v19 == 332 || v19 == 452 )
          {
            v20 = *(_WORD *)(v17 + 8);
            if ( v20 == 332 || v20 == 452 )
            {
              v37[0] = (PVOID)*(unsigned int *)(Teb + 11788);
              v36 = 0LL;
              ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v37, &v36, 0x8000u);
            }
          }
        }
      }
      v18 = *(void **)(Teb + 5800);
      if ( v18 )
        ObCloseHandle(v18, 1);
      MmDeleteTeb((_KPROCESS *)v3, Teb);
    }
  }
  p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
  if ( KeQuerySystemTimeUnsafe() )
    KeQuerySystemTimePrecise((LARGE_INTEGER *)&CurrentThread[1].Header.WaitListHead);
  else
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000014];
  if ( v46 )
  {
    *(_QWORD *)(v3 + 1680) = p_WaitListHead->Flink;
    PspExitProcess(1, v3);
    v26 = PsReferencePrimaryToken((PEPROCESS)v3);
    if ( SeAuditingWithTokenForSubcategory(134, (__int64)v26) )
      SeAuditProcessExit((PEPROCESS)v3);
    ObFastDereferenceObject((signed __int64 *)(v3 + 856), (unsigned __int64)v26);
    ExWnfExitProcess(v3, 0);
    PspRundownSingleProcess(v3);
    LpcExitProcess((struct _KPROCESS *)v3);
    v27 = *(void **)(v3 + 1688);
    if ( v27 )
    {
      ExFreePoolWithTag(v27, 0);
      *(_QWORD *)(v3 + 1688) = 0LL;
    }
  }
  KeRundownApcQueues((__int64)CurrentThread);
  if ( CurrentThread->SchedulerApc.SystemArgument2 && PspLegoNotifyRoutine )
    PspLegoNotifyRoutine(CurrentThread);
  v15 = CurrentThread[1].WaitBlock[3].Object;
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0x63537350u);
    CurrentThread[1].WaitBlock[3].Object = 0LL;
  }
  return KeTerminateThread((ULONG_PTR)CurrentThread);
}
