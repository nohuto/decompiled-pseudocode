/*
 * XREFs of PspRundownSingleProcess @ 0x1404DAA68
 * Callers:
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 *     PspTerminateAllThreads @ 0x1404D6C7C (PspTerminateAllThreads.c)
 *     PspTerminateProcess @ 0x1404D9890 (PspTerminateProcess.c)
 *     NtCreateUserProcess @ 0x14053B4F4 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x140599DF0 (PspCreateProcess.c)
 *     PspProcessRundownWorker @ 0x1407191F0 (PspProcessRundownWorker.c)
 *     PspProcessRundownWorkerSingle @ 0x1407192A0 (PspProcessRundownWorkerSingle.c)
 *     PsCreateMinimalProcess @ 0x140719A94 (PsCreateMinimalProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1400ADB30 (ExRundownCompleted.c)
 *     KeSetProcess @ 0x1400AE74C (KeSetProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     RtlInterlockedSetClearBits @ 0x1400D4814 (RtlInterlockedSetClearBits.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeRundownSecureProcess @ 0x140202FB4 (KeRundownSecureProcess.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MmCleanProcessAddressSpace @ 0x1404D2F70 (MmCleanProcessAddressSpace.c)
 *     PspClearProcessThreadCidRefs @ 0x1404D5438 (PspClearProcessThreadCidRefs.c)
 *     ObKillProcess @ 0x1404DCFD4 (ObKillProcess.c)
 *     ExSweepHandleTable @ 0x1404DD240 (ExSweepHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x140506A2C (ObReferenceProcessHandleTable.c)
 *     PspNotifyEmptyJobsInJobChain @ 0x14050CFA4 (PspNotifyEmptyJobsInJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x14050E398 (PspRemoveProcessFromJobChain.c)
 *     PspSendProcessNotificationToJobChain @ 0x14051259C (PspSendProcessNotificationToJobChain.c)
 */

bool __fastcall PspRundownSingleProcess(ULONG_PTR BugCheckParameter1, bool a2)
{
  struct _KTHREAD *CurrentThread; // r14
  bool v3; // bp
  __int64 v5; // r11
  __int64 v6; // rdx
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rdx
  volatile signed __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r8
  $709EDFC2F9E0D4565D6AA3C4377BC643 v14; // [rsp+20h] [rbp-58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  if ( a2 )
    goto LABEL_2;
  --CurrentThread->KernelApcDisable;
  v11 = (volatile signed __int64 *)(BugCheckParameter1 + 728);
  ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 728, 0LL);
  if ( !*(_DWORD *)(BugCheckParameter1 + 1176) )
  {
    _m_prefetchw((const void *)(BugCheckParameter1 + 772));
    v3 = (_InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 772), 0x2000008u) & 0x2000000) == 0;
  }
  if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v11);
  KeAbPostRelease((ULONG_PTR)v11);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v3 )
  {
LABEL_2:
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
    ExRundownCompleted((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
    if ( *(_QWORD *)(BugCheckParameter1 + 944) && (*(_DWORD *)(BugCheckParameter1 + 768) & 1) == 0 )
    {
      RtlInterlockedSetClearBits((volatile signed __int32 *)(BugCheckParameter1 + 768), 8, 32);
      PspSendProcessNotificationToJobChain(BugCheckParameter1, v5, *(_QWORD *)(BugCheckParameter1 + 736));
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 720) )
      KeRundownSecureProcess(BugCheckParameter1);
    if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 0x40000) != 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v14);
      if ( *(_QWORD *)(BugCheckParameter1 + 1048) )
        ObKillProcess(BugCheckParameter1);
      MmCleanProcessAddressSpace(BugCheckParameter1, v6);
      KiUnstackDetachProcess(&v14, 0LL);
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 1824) )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 1840, 0LL);
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(BugCheckParameter1 + 1824) + 8LL), 0);
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 1824), 0);
      *(_QWORD *)(BugCheckParameter1 + 1824) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 1840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 1840));
      KeAbPostRelease(BugCheckParameter1 + 1840);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    v7 = *(void **)(BugCheckParameter1 + 952);
    if ( v7 )
    {
      *(_QWORD *)(BugCheckParameter1 + 952) = 0LL;
      ObfDereferenceObject(v7);
    }
    v8 = *(void **)(BugCheckParameter1 + 1096);
    if ( v8 )
    {
      ObfDereferenceObjectWithTag(v8, 0x72437350u);
      *(_QWORD *)(BugCheckParameter1 + 1096) = 0LL;
    }
    if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 0x40000) != 0 )
      KeSetProcess(BugCheckParameter1);
    if ( *(_QWORD *)(BugCheckParameter1 + 944) )
    {
      PspRemoveProcessFromJobChain(BugCheckParameter1);
      PspNotifyEmptyJobsInJobChain(BugCheckParameter1);
    }
    v9 = *(_QWORD *)(BugCheckParameter1 + 736);
    if ( v9 )
      PspClearProcessThreadCidRefs((__int64)CurrentThread, v9, BugCheckParameter1);
  }
  else
  {
    v12 = ObReferenceProcessHandleTable(BugCheckParameter1);
    if ( v12 )
    {
      LOBYTE(v13) = 1;
      ExSweepHandleTable(BugCheckParameter1, v12, v13);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
    }
  }
  return v3;
}
