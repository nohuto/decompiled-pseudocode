/*
 * XREFs of PspExitThread @ 0x1404B8D70
 * Callers:
 *     PspTerminateThreadByPointer @ 0x1404BB3D0 (PspTerminateThreadByPointer.c)
 *     KiSchedulerApcTerminate @ 0x14056A3A0 (KiSchedulerApcTerminate.c)
 *     NtTerminateProcess @ 0x14056E088 (NtTerminateProcess.c)
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x14003E9A0 (MmSessionGetWin32Callouts.c)
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     ExTimerRundown @ 0x140040D7C (ExTimerRundown.c)
 *     KiRundownMutants @ 0x140040DFC (KiRundownMutants.c)
 *     KeTerminateThread @ 0x140040FBC (KeTerminateThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140060FE0 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     PsGetHostSilo @ 0x14006CDB0 (PsGetHostSilo.c)
 *     PsGetProcessServerSilo @ 0x14006CFF0 (PsGetProcessServerSilo.c)
 *     PsAttachSiloToCurrentThread @ 0x140073560 (PsAttachSiloToCurrentThread.c)
 *     PopPowerRequestCleanUp @ 0x140075F04 (PopPowerRequestCleanUp.c)
 *     KeForceResumeProcess @ 0x1400BCFB4 (KeForceResumeProcess.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400C5D80 (ExfAcquireReleasePushLockExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     PspRevertContainerImpersonation @ 0x1400F1810 (PspRevertContainerImpersonation.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400FED50 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     ObFastDereferenceObject @ 0x140105100 (ObFastDereferenceObject.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     KeQuerySystemTimeUnsafe @ 0x140132974 (KeQuerySystemTimeUnsafe.c)
 *     KeQuerySystemTimePrecise @ 0x140132A60 (KeQuerySystemTimePrecise.c)
 *     ZwFreeVirtualMemory @ 0x1401A7880 (ZwFreeVirtualMemory.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KeUnsecureThread @ 0x1402401B8 (KeUnsecureThread.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     ExCallCallBack @ 0x1404B63E4 (ExCallCallBack.c)
 *     PspCallThreadNotifyRoutines @ 0x1404B67E0 (PspCallThreadNotifyRoutines.c)
 *     PspClearProcessThreadCidRefs @ 0x1404B7BE4 (PspClearProcessThreadCidRefs.c)
 *     PsCaptureExceptionPort @ 0x1404B9494 (PsCaptureExceptionPort.c)
 *     PspEmptyPropertySet @ 0x1404B9534 (PspEmptyPropertySet.c)
 *     CmNotifyRunDown @ 0x1404B9558 (CmNotifyRunDown.c)
 *     IoCancelThreadIo @ 0x1404B979C (IoCancelThreadIo.c)
 *     KeRundownApcQueues @ 0x1404B9854 (KeRundownApcQueues.c)
 *     LpcRequestPort @ 0x1404B9C80 (LpcRequestPort.c)
 *     PsReferencePrimaryToken @ 0x1404C13D0 (PsReferencePrimaryToken.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1404ECCC0 (SeAuditingWithTokenForSubcategory.c)
 *     EtwTraceThread @ 0x1404FD384 (EtwTraceThread.c)
 *     PspExitProcess @ 0x14050FEC8 (PspExitProcess.c)
 *     ExWnfExitProcess @ 0x14051130C (ExWnfExitProcess.c)
 *     LpcExitProcess @ 0x140511A70 (LpcExitProcess.c)
 *     PspRundownSingleProcess @ 0x1405322EC (PspRundownSingleProcess.c)
 *     MmDeleteTeb @ 0x140562BFC (MmDeleteTeb.c)
 *     DbgkExitProcess @ 0x1407114A4 (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x14071154C (DbgkExitThread.c)
 *     PspUmsUnInitThread @ 0x14077CAD4 (PspUmsUnInitThread.c)
 *     PspCatchCriticalBreak @ 0x14077D014 (PspCatchCriticalBreak.c)
 *     SeAuditProcessExit @ 0x14078DDCC (SeAuditProcessExit.c)
 */

__int64 __fastcall PspExitThread(unsigned int a1)
{
  unsigned int v1; // r13d
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v3; // r14
  ULONG_PTR v4; // r8
  struct _LIST_ENTRY *Blink; // rbx
  volatile signed __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  void *InitialStack; // r12
  void *v11; // rbx
  int v12; // eax
  __int64 *v13; // rdx
  char Reserved1; // al
  _QWORD *Teb; // rbx
  __int64 v16; // rcx
  LIST_ENTRY *p_WaitListHead; // rbx
  PVOID v18; // rcx
  __int64 v20; // rdx
  void *v21; // rcx
  __int16 v22; // ax
  _RTL_RUN_ONCE *Win32Callouts; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // r12
  _QWORD *v26; // r15
  _RTL_RUN_ONCE *v27; // rax
  PACCESS_TOKEN v28; // rbx
  void *v29; // rcx
  int v30; // eax
  void *v31; // rbx
  _DWORD *v32; // rbx
  signed __int32 v33[8]; // [rsp+0h] [rbp-F8h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-D8h]
  void *v35; // [rsp+30h] [rbp-C8h]
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-C0h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-B8h] BYREF
  ULONG_PTR v38; // [rsp+48h] [rbp-B0h] BYREF
  PVOID v39[2]; // [rsp+50h] [rbp-A8h] BYREF
  _KPROCESS *Process; // [rsp+60h] [rbp-98h]
  int v41; // [rsp+68h] [rbp-90h] BYREF
  int v42; // [rsp+6Ch] [rbp-8Ch]
  __int64 v43; // [rsp+90h] [rbp-68h]
  struct _KTHREAD *v44; // [rsp+98h] [rbp-60h] BYREF
  int v45; // [rsp+A0h] [rbp-58h]
  ULONG_PTR v46; // [rsp+A8h] [rbp-50h] BYREF
  int v47; // [rsp+B0h] [rbp-48h]
  char v49; // [rsp+108h] [rbp+10h]
  PVOID Object; // [rsp+110h] [rbp+18h]
  PMDL MemoryDescriptorList; // [rsp+118h] [rbp+20h] BYREF

  v1 = a1;
  CurrentThread = KeGetCurrentThread();
  v39[1] = CurrentThread;
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
  PspRevertContainerImpersonation((ULONG_PTR)CurrentThread);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&CurrentThread[1].WaitStatus);
  Blink = CurrentThread[1].ApcState.ApcListHead[1].Blink;
  if ( Blink )
  {
    PopPowerRequestCleanUp((PVOID *)&CurrentThread[1].ApcState.ApcListHead[1].Blink->Flink);
    ObfDereferenceObject(Blink);
    CurrentThread[1].ApcState.ApcListHead[1].Blink = 0LL;
  }
  v49 = 0;
  Object = 0LL;
  LODWORD(CurrentThread[1].Timer.Header.WaitListHead.Blink) = v1;
  if ( (PerfGlobalGroupMask & 2) != 0 )
    EtwTraceThread(CurrentThread, 0LL, 0LL);
  --CurrentThread->KernelApcDisable;
  if ( (*(_DWORD *)(v3 + 1740) & 1) == 0 || *(_QWORD *)(v3 + 1808) )
    PspCallThreadNotifyRoutines(CurrentThread, 0, 0);
  v6 = (volatile signed __int64 *)(v3 + 728);
  ExAcquirePushLockExclusiveEx(v3 + 728, 0LL);
  if ( --*(_DWORD *)(v3 + 1176) )
  {
    if ( v1 != -1073741749 )
      *(_DWORD *)(v3 + 1188) = v1;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(v3 + 772), 0x2000008u);
    KeForceResumeProcess(v3);
    v49 = 1;
    if ( *(_DWORD *)(v3 + 1572) == 259 )
    {
      if ( v1 == -1073741749 )
        *(_DWORD *)(v3 + 1572) = *(_DWORD *)(v3 + 1188);
      else
        *(_DWORD *)(v3 + 1572) = v1;
    }
    v24 = (_QWORD *)(v3 + 1160);
    v25 = *(_QWORD **)(v3 + 1160);
    if ( v25 != (_QWORD *)(v3 + 1160) )
    {
      v26 = 0LL;
      do
      {
        if ( v25 - 213 != (_QWORD *)CurrentThread && !*((_BYTE *)v25 - 1700) )
        {
          if ( ObReferenceObjectSafeWithTag((__int64)(v25 - 213)) )
          {
            if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v3 + 728), v7, v8, v9);
            KeAbPostRelease(v3 + 728);
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
            KeWaitForSingleObject(v25 - 213, Executive, 0, 0, 0LL);
            if ( v26 )
              ObfDereferenceObjectWithTag(v26, 0x65547350u);
            v26 = v25 - 213;
            --CurrentThread->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v3 + 728, 0LL);
          }
          v24 = (_QWORD *)(v3 + 1160);
        }
        v25 = (_QWORD *)*v25;
      }
      while ( v25 != v24 );
      Object = v26;
      v1 = a1;
    }
  }
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v3 + 728), v7, v8, v9);
  KeAbPostRelease(v3 + 728);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x65547350u);
  if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] != -3LL )
  {
    v32 = (_DWORD *)PsAttachSiloToCurrentThread(-3LL);
    if ( v32 == (_DWORD *)PsGetHostSilo()
      || (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v32 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v32 - 48) >> 8)] != PsJobType
      || (v32[327] & 2) == 0 )
    {
      KeBugCheckEx(0x1CBu, (ULONG_PTR)CurrentThread, (ULONG_PTR)v32, v3, 1uLL);
    }
    ObfDereferenceObjectWithTag(v32, 0x6D497350u);
  }
  if ( *(_QWORD *)(v3 + 1056) && (CurrentThread->MiscFlags & 0x400) == 0 )
  {
    if ( v49 )
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
  if ( v49 && (*(_DWORD *)(v3 + 772) & 0x2000) != 0 )
  {
    PsGetProcessServerSilo(v3);
    LODWORD(Timeout) = v1;
    PspCatchCriticalBreak("Critical process 0x%p (%s) exited\n", (const void *)v3, (const char *)(v3 + 1104));
  }
  InitialStack = CurrentThread[1].InitialStack;
  if ( InitialStack )
  {
    v41 = 3145736;
    v42 = 6;
    v43 = *(_QWORD *)&CurrentThread[1].Header.Lock;
    do
    {
      while ( 1 )
      {
        v30 = LpcRequestPort(*((_QWORD *)InitialStack + 1), &v41);
        if ( v30 != -1073741801 && v30 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject(*((PVOID *)InitialStack + 1));
      v31 = *(void **)InitialStack;
      ExFreePoolWithTag(InitialStack, 0x70547350u);
      InitialStack = v31;
    }
    while ( v31 );
  }
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
  {
    v11 = (void *)PsCaptureExceptionPort(v3);
    if ( v11 )
    {
      v41 = 3145736;
      v42 = 6;
      v43 = *(_QWORD *)&CurrentThread[1].Header.Lock;
      while ( 1 )
      {
        v12 = LpcRequestPort(v11, &v41);
        if ( v12 != -1073741801 && v12 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject(v11);
    }
  }
  if ( CurrentThread->WaitBlock[2].SparePtr )
  {
    v44 = CurrentThread;
    v45 = 1;
    Win32Callouts = MmSessionGetWin32Callouts();
    ExCallCallBack((signed __int64 *)Win32Callouts, 1LL, (__int64)&v44);
  }
  if ( v49 && *(_QWORD *)(v3 + 936) )
  {
    v46 = v3;
    v47 = 0;
    v27 = MmSessionGetWin32Callouts();
    ExCallCallBack((signed __int64 *)v27, 0LL, (__int64)&v46);
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x40) == 0 )
    KeBugCheckEx(0x94u, 0LL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  IoCancelThreadIo();
  ExTimerRundown();
  CmNotifyRunDown(CurrentThread);
  KiRundownMutants((ULONG_PTR)KeGetCurrentThread(), v13);
  Reserved1 = CurrentThread->Header.Reserved1;
  if ( (Reserved1 & 0x40) != 0 || Reserved1 < 0 )
    PspUmsUnInitThread(CurrentThread);
  Teb = CurrentThread->Teb;
  if ( Teb )
  {
    CurrentThread->Teb = 0LL;
    --CurrentThread->KernelApcDisable;
    _InterlockedOr(v33, 0);
    if ( ((__int64)CurrentThread[1].WaitBlockList & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((unsigned __int64 *)&CurrentThread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( (CurrentThread->MiscFlags & 0x400) == 0 && (*(_DWORD *)(v3 + 772) & 0x40000008) == 0 )
    {
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
      {
        v35 = (void *)Teb[655];
        BaseAddress = v35;
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        v20 = *(_QWORD *)(v3 + 1064);
        if ( v20 )
        {
          v22 = *(_WORD *)(v20 + 8);
          if ( v22 == 332 || v22 == 452 )
          {
            v39[0] = (PVOID)*((unsigned int *)Teb + 2947);
            v38 = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v39, &v38, 0x8000u);
          }
        }
      }
      v21 = (void *)Teb[725];
      if ( v21 )
        ObCloseHandle(v21, 1);
      MmDeleteTeb(v3);
    }
  }
  p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
  if ( KeQuerySystemTimeUnsafe() )
    KeQuerySystemTimePrecise((LARGE_INTEGER *)&CurrentThread[1].Header.WaitListHead);
  else
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000014];
  if ( v49 )
  {
    *(_QWORD *)(v3 + 1680) = p_WaitListHead->Flink;
    LOBYTE(v16) = 1;
    PspExitProcess(v16, v3);
    v28 = PsReferencePrimaryToken((PEPROCESS)v3);
    if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(134LL, v28) )
      SeAuditProcessExit((PEPROCESS)v3);
    ObFastDereferenceObject((signed __int64 *)(v3 + 856), (unsigned __int64)v28);
    ExWnfExitProcess(v3, 0LL);
    PspRundownSingleProcess(v3);
    LpcExitProcess(v3);
    v29 = *(void **)(v3 + 1688);
    if ( v29 )
    {
      ExFreePoolWithTag(v29, 0);
      *(_QWORD *)(v3 + 1688) = 0LL;
    }
  }
  KeRundownApcQueues(CurrentThread);
  if ( CurrentThread->SchedulerApc.SystemArgument2 && PspLegoNotifyRoutine )
    PspLegoNotifyRoutine(CurrentThread);
  v18 = CurrentThread[1].WaitBlock[3].Object;
  if ( v18 )
  {
    ExFreePoolWithTag(v18, 0x63537350u);
    CurrentThread[1].WaitBlock[3].Object = 0LL;
  }
  return KeTerminateThread((ULONG_PTR)CurrentThread);
}
