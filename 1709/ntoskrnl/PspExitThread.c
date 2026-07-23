/*
 * XREFs of PspExitThread @ 0x1404D5FB4
 * Callers:
 *     PspTerminateThreadByPointer @ 0x1404D6B90 (PspTerminateThreadByPointer.c)
 *     KiSchedulerApcTerminate @ 0x1404D6C40 (KiSchedulerApcTerminate.c)
 *     NtTerminateProcess @ 0x1404D9A54 (NtTerminateProcess.c)
 * Callees:
 *     PsGetHostSilo @ 0x140004290 (PsGetHostSilo.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1400071FC (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeQuerySystemTimePrecise @ 0x140025920 (KeQuerySystemTimePrecise.c)
 *     KeQuerySystemTimeUnsafe @ 0x140025A60 (KeQuerySystemTimeUnsafe.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     ObFastDereferenceObject @ 0x140081E20 (ObFastDereferenceObject.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140083060 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     PsGetProcessServerSilo @ 0x1400893E0 (PsGetProcessServerSilo.c)
 *     PspRevertContainerImpersonation @ 0x1400A0A50 (PspRevertContainerImpersonation.c)
 *     MmSessionGetWin32Callouts @ 0x1400A54D0 (MmSessionGetWin32Callouts.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiRundownMutants @ 0x1400A95EC (KiRundownMutants.c)
 *     ExTimerRundown @ 0x1400A9724 (ExTimerRundown.c)
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 *     KeTerminateThread @ 0x1400A987C (KeTerminateThread.c)
 *     KeForceResumeProcess @ 0x1400ACDDC (KeForceResumeProcess.c)
 *     PsAttachSiloToCurrentThread @ 0x1400AF1A0 (PsAttachSiloToCurrentThread.c)
 *     PopPowerRequestCleanUp @ 0x1400AFDC8 (PopPowerRequestCleanUp.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1401324CC (ExfAcquireReleasePushLockExclusive.c)
 *     ZwFreeVirtualMemory @ 0x14017DC80 (ZwFreeVirtualMemory.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KeUnsecureThread @ 0x140202BC4 (KeUnsecureThread.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 *     ExCallCallBack @ 0x1404D25EC (ExCallCallBack.c)
 *     PspCallThreadNotifyRoutines @ 0x1404D28E0 (PspCallThreadNotifyRoutines.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     PspClearProcessThreadCidRefs @ 0x1404D5438 (PspClearProcessThreadCidRefs.c)
 *     CmNotifyRunDown @ 0x1404D66B0 (CmNotifyRunDown.c)
 *     IoCancelThreadIo @ 0x1404D68F8 (IoCancelThreadIo.c)
 *     PsCaptureExceptionPort @ 0x1404D69B0 (PsCaptureExceptionPort.c)
 *     PspEmptyPropertySet @ 0x1404D6A50 (PspEmptyPropertySet.c)
 *     KeRundownApcQueues @ 0x1404D6A74 (KeRundownApcQueues.c)
 *     LpcRequestPort @ 0x1404D6B20 (LpcRequestPort.c)
 *     PspRundownSingleProcess @ 0x1404DAA68 (PspRundownSingleProcess.c)
 *     ExWnfExitProcess @ 0x1404FCB34 (ExWnfExitProcess.c)
 *     LpcExitProcess @ 0x1404FCC90 (LpcExitProcess.c)
 *     PspExitProcess @ 0x1404FCEF4 (PspExitProcess.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14053A2B0 (SeAuditingWithTokenForSubcategory.c)
 *     MmDeleteTeb @ 0x14056A768 (MmDeleteTeb.c)
 *     DbgkExitProcess @ 0x1406ACBF8 (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x1406ACCA4 (DbgkExitThread.c)
 *     PspUmsUnInitThread @ 0x140718B08 (PspUmsUnInitThread.c)
 *     PspCatchCriticalBreak @ 0x140719040 (PspCatchCriticalBreak.c)
 *     SeAuditProcessExit @ 0x140729A2C (SeAuditProcessExit.c)
 *     EtwTraceThread @ 0x14074619C (EtwTraceThread.c)
 */

__int64 __fastcall PspExitThread(unsigned int a1)
{
  unsigned int v1; // r13d
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v3; // r14
  ULONG_PTR v4; // r8
  struct _LIST_ENTRY *Blink; // rbx
  volatile signed __int64 *v6; // rbx
  void *InitialStack; // r15
  void *v9; // rbx
  int v10; // eax
  char Reserved1; // al
  _QWORD *Teb; // rbx
  __int64 v13; // rcx
  LIST_ENTRY *p_WaitListHead; // rbx
  PVOID v15; // rcx
  __int64 v17; // rdx
  void *v18; // rcx
  __int16 v19; // ax
  _RTL_RUN_ONCE *Win32Callouts; // rax
  _QWORD *v21; // rcx
  _QWORD *v22; // r15
  _QWORD *v23; // r12
  _RTL_RUN_ONCE *v24; // rax
  PACCESS_TOKEN v25; // rbx
  void *v26; // rcx
  int v27; // eax
  void *v28; // rbx
  _DWORD *v29; // rbx
  signed __int32 v30[8]; // [rsp+0h] [rbp-F8h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-D8h]
  void *v32; // [rsp+30h] [rbp-C8h]
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-C0h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-B8h] BYREF
  ULONG_PTR v35; // [rsp+48h] [rbp-B0h] BYREF
  PVOID v36[2]; // [rsp+50h] [rbp-A8h] BYREF
  _KPROCESS *Process; // [rsp+60h] [rbp-98h]
  int v38; // [rsp+68h] [rbp-90h] BYREF
  int v39; // [rsp+6Ch] [rbp-8Ch]
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
  v36[1] = CurrentThread;
  Process = CurrentThread->Process;
  v3 = (ULONG_PTR)Process;
  PspClearProcessThreadCidRefs(
    (__int64)CurrentThread,
    *(_QWORD *)&CurrentThread[1].CurrentRunTime,
    (ULONG_PTR)CurrentThread);
  v4 = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( Process != (_KPROCESS *)v4 )
    KeBugCheckEx(5u, (ULONG_PTR)Process, v4, CurrentThread->ApcStateIndex, (ULONG_PTR)CurrentThread);
  __writecr8(0LL);
  if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 1) != 0 )
    KeBugCheckEx(0xE9u, (ULONG_PTR)CurrentThread, 0LL, 0LL, 0LL);
  if ( CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x20u, 0LL, CurrentThread->CombinedApcDisable, 0LL, 1uLL);
  if ( CurrentThread[1].ApcState.ApcListHead[1].Flink )
  {
    KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, 0LL);
    ObfDereferenceObjectWithTag(CurrentThread[1].ApcState.ApcListHead[1].Flink, 0x79517350u);
    CurrentThread[1].ApcState.ApcListHead[1].Flink = 0LL;
  }
  PspEmptyPropertySet(&CurrentThread[1].WaitBlockFill11[88]);
  PspRevertContainerImpersonation((__int64)CurrentThread);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&CurrentThread[1].WaitStatus);
  Blink = CurrentThread[1].ApcState.ApcListHead[1].Blink;
  if ( Blink )
  {
    PopPowerRequestCleanUp((PVOID *)&CurrentThread[1].ApcState.ApcListHead[1].Blink->Flink);
    ObfDereferenceObject(Blink);
    CurrentThread[1].ApcState.ApcListHead[1].Blink = 0LL;
  }
  v46 = 0;
  Object = 0LL;
  LODWORD(CurrentThread[1].Timer.Header.WaitListHead.Blink) = v1;
  if ( (PerfGlobalGroupMask & 2) != 0 )
    EtwTraceThread(CurrentThread, 0LL, 0LL);
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
    v21 = (_QWORD *)(v3 + 1160);
    v22 = *(_QWORD **)(v3 + 1160);
    if ( v22 != (_QWORD *)(v3 + 1160) )
    {
      v23 = 0LL;
      do
      {
        if ( v22 - 213 != (_QWORD *)CurrentThread && !(unsigned __int8)*((_DWORD *)v22 - 425) )
        {
          if ( ObReferenceObjectSafeWithTag((__int64)(v22 - 213)) )
          {
            if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v3 + 728));
            KeAbPostRelease(v3 + 728);
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
            KeWaitForSingleObject(v22 - 213, Executive, 0, 0, 0LL);
            if ( v23 )
              ObfDereferenceObjectWithTag(v23, 0x65547350u);
            v23 = v22 - 213;
            --CurrentThread->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v3 + 728, 0LL);
          }
          v21 = (_QWORD *)(v3 + 1160);
        }
        v22 = (_QWORD *)*v22;
      }
      while ( v22 != v21 );
      Object = v23;
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
    ObfDereferenceObjectWithTag(Object, 0x65547350u);
  if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] != -3LL )
  {
    v29 = (_DWORD *)PsAttachSiloToCurrentThread(-3LL);
    if ( v29 == (_DWORD *)PsGetHostSilo()
      || (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v29 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v29 - 48) >> 8)] != PsJobType
      || (v29[327] & 2) == 0 )
    {
      KeBugCheckEx(0x1CBu, (ULONG_PTR)CurrentThread, (ULONG_PTR)v29, v3, 1uLL);
    }
    ObfDereferenceObjectWithTag(v29, 0x6D497350u);
  }
  if ( *(_QWORD *)(v3 + 1056) && (CurrentThread->MiscFlags & 0x400) == 0 )
  {
    if ( v46 )
      DbgkExitProcess(*(unsigned int *)(v3 + 1572));
    else
      DbgkExitThread(v1);
  }
  if ( (*(_BYTE *)(v3 + 720) & 1) != 0 && (int)KeUnsecureThread((__int64)&MemoryDescriptorList) >= 0 )
  {
    MmUnlockPages(MemoryDescriptorList);
    ExFreePoolWithTag(MemoryDescriptorList, 0x65537350u);
  }
  if ( (_BYTE)KdDebuggerEnabled
    && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x20) != 0
    && (CurrentThread->Process[1].DirectoryTableBase & 0x4000000800000000LL) == 0 )
  {
    PsGetProcessServerSilo(v3);
    LODWORD(Timeout) = v1;
    PspCatchCriticalBreak("Critical thread 0x%p (in %s) exited\n", CurrentThread, (const char *)(v3 + 1104));
  }
  if ( v46 && (*(_DWORD *)(v3 + 772) & 0x2000) != 0 )
  {
    PsGetProcessServerSilo(v3);
    LODWORD(Timeout) = v1;
    PspCatchCriticalBreak("Critical process 0x%p (%s) exited\n", (const void *)v3, (const char *)(v3 + 1104));
  }
  InitialStack = CurrentThread[1].InitialStack;
  if ( InitialStack )
  {
    v38 = 3145736;
    v39 = 6;
    v40 = *(_QWORD *)&CurrentThread[1].Header.Lock;
    do
    {
      while ( 1 )
      {
        v27 = LpcRequestPort(*((_QWORD *)InitialStack + 1), &v38);
        if ( v27 != -1073741801 && v27 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject(*((PVOID *)InitialStack + 1));
      v28 = *(void **)InitialStack;
      ExFreePoolWithTag(InitialStack, 0x70547350u);
      InitialStack = v28;
    }
    while ( v28 );
  }
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
  {
    v9 = (void *)PsCaptureExceptionPort(v3);
    if ( v9 )
    {
      v38 = 3145736;
      v39 = 6;
      v40 = *(_QWORD *)&CurrentThread[1].Header.Lock;
      while ( 1 )
      {
        v10 = LpcRequestPort(v9, &v38);
        if ( v10 != -1073741801 && v10 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject(v9);
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
    v24 = MmSessionGetWin32Callouts();
    ExCallCallBack((signed __int64 *)v24, 0LL, (__int64)&v43);
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x40) == 0 )
    KeBugCheckEx(0x94u, 0LL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  IoCancelThreadIo();
  ExTimerRundown();
  CmNotifyRunDown(CurrentThread);
  KiRundownMutants((ULONG_PTR)KeGetCurrentThread());
  Reserved1 = CurrentThread->Header.Reserved1;
  if ( (Reserved1 & 0x40) != 0 || Reserved1 < 0 )
    PspUmsUnInitThread(CurrentThread);
  Teb = CurrentThread->Teb;
  if ( Teb )
  {
    CurrentThread->Teb = 0LL;
    --CurrentThread->KernelApcDisable;
    _InterlockedOr(v30, 0);
    if ( ((__int64)CurrentThread[1].WaitBlockList & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((unsigned __int64 *)&CurrentThread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( (CurrentThread->MiscFlags & 0x400) == 0 && (*(_DWORD *)(v3 + 772) & 0x40000008) == 0 )
    {
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
      {
        v32 = (void *)Teb[655];
        BaseAddress = v32;
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        v17 = *(_QWORD *)(v3 + 1064);
        if ( v17 )
        {
          v19 = *(_WORD *)(v17 + 8);
          if ( v19 == 332 || v19 == 452 )
          {
            v36[0] = (PVOID)*((unsigned int *)Teb + 2947);
            v35 = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v36, &v35, 0x8000u);
          }
        }
      }
      v18 = (void *)Teb[725];
      if ( v18 )
        ObCloseHandle(v18, 1);
      MmDeleteTeb(v3);
    }
  }
  p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
  if ( KeQuerySystemTimeUnsafe() )
    KeQuerySystemTimePrecise(&CurrentThread[1].Header.WaitListHead.Flink);
  else
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000014];
  if ( v46 )
  {
    *(_QWORD *)(v3 + 1680) = p_WaitListHead->Flink;
    LOBYTE(v13) = 1;
    PspExitProcess(v13, v3);
    v25 = PsReferencePrimaryToken((PEPROCESS)v3);
    if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(134LL, v25) )
      SeAuditProcessExit((PEPROCESS)v3);
    ObFastDereferenceObject((signed __int64 *)(v3 + 856), (unsigned __int64)v25);
    ExWnfExitProcess(v3, 0LL);
    PspRundownSingleProcess(v3);
    LpcExitProcess(v3);
    v26 = *(void **)(v3 + 1688);
    if ( v26 )
    {
      ExFreePoolWithTag(v26, 0);
      *(_QWORD *)(v3 + 1688) = 0LL;
    }
  }
  KeRundownApcQueues(CurrentThread);
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
