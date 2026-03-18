/*
 * XREFs of PspRundownSingleProcess @ 0x1405322EC
 * Callers:
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 *     PspTerminateAllThreads @ 0x1404E89FC (PspTerminateAllThreads.c)
 *     PspTerminateProcess @ 0x1404E9088 (PspTerminateProcess.c)
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 *     NtCreateUserProcess @ 0x1404F200C (NtCreateUserProcess.c)
 *     PspProcessRundownWorkerSingle @ 0x140584A50 (PspProcessRundownWorkerSingle.c)
 *     PspCreateProcess @ 0x1405E9350 (PspCreateProcess.c)
 *     PsCreateMinimalProcess @ 0x14062C5DC (PsCreateMinimalProcess.c)
 *     PspProcessRundownWorker @ 0x14077D1C0 (PspProcessRundownWorker.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     RtlInterlockedSetClearBits @ 0x14008ABB8 (RtlInterlockedSetClearBits.c)
 *     ExRundownCompleted @ 0x14008AE10 (ExRundownCompleted.c)
 *     KeSetProcess @ 0x14008AE20 (KeSetProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeRundownSecureProcess @ 0x14024062C (KeRundownSecureProcess.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ObReferenceProcessHandleTable @ 0x1404B7304 (ObReferenceProcessHandleTable.c)
 *     PspClearProcessThreadCidRefs @ 0x1404B7BE4 (PspClearProcessThreadCidRefs.c)
 *     ObKillProcess @ 0x1404F8400 (ObKillProcess.c)
 *     PspNotifyEmptyJobsInJobChain @ 0x1405325AC (PspNotifyEmptyJobsInJobChain.c)
 *     PspSendProcessNotificationToJobChain @ 0x140532A40 (PspSendProcessNotificationToJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x140534D34 (PspRemoveProcessFromJobChain.c)
 *     ExSweepHandleTable @ 0x1405541A0 (ExSweepHandleTable.c)
 *     MmCleanProcessAddressSpace @ 0x140595928 (MmCleanProcessAddressSpace.c)
 */

bool __fastcall PspRundownSingleProcess(__int64 BugCheckParameter1, bool a2)
{
  struct _KTHREAD *CurrentThread; // r14
  bool v3; // bp
  __int64 v5; // r11
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rdx
  volatile signed __int64 *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _BYTE v19[48]; // [rsp+20h] [rbp-58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  if ( a2 )
    goto LABEL_2;
  --CurrentThread->KernelApcDisable;
  v10 = (volatile signed __int64 *)(BugCheckParameter1 + 728);
  ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 728, 0LL);
  if ( !*(_DWORD *)(BugCheckParameter1 + 1176) )
  {
    _m_prefetchw((const void *)(BugCheckParameter1 + 772));
    v3 = (_InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 772), 0x2000008u) & 0x2000000) == 0;
  }
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10, v11, v12, v13);
  KeAbPostRelease((ULONG_PTR)v10);
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
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v19);
      if ( *(_QWORD *)(BugCheckParameter1 + 1048) )
        ObKillProcess(BugCheckParameter1);
      MmCleanProcessAddressSpace(BugCheckParameter1);
      KiUnstackDetachProcess((__int64)v19, 0LL);
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 1824) )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 1840, 0LL);
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(BugCheckParameter1 + 1824) + 8LL), 0);
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 1824), 0);
      *(_QWORD *)(BugCheckParameter1 + 1824) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 1840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 1840), v16, v17, v18);
      KeAbPostRelease(BugCheckParameter1 + 1840);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    v6 = *(void **)(BugCheckParameter1 + 952);
    if ( v6 )
    {
      *(_QWORD *)(BugCheckParameter1 + 952) = 0LL;
      ObfDereferenceObject(v6);
    }
    v7 = *(void **)(BugCheckParameter1 + 1096);
    if ( v7 )
    {
      ObfDereferenceObjectWithTag(v7, 0x72437350u);
      *(_QWORD *)(BugCheckParameter1 + 1096) = 0LL;
    }
    if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 0x40000) != 0 )
      KeSetProcess(BugCheckParameter1);
    if ( *(_QWORD *)(BugCheckParameter1 + 944) )
    {
      PspRemoveProcessFromJobChain((PEPROCESS)BugCheckParameter1);
      PspNotifyEmptyJobsInJobChain(BugCheckParameter1);
    }
    v8 = *(_QWORD *)(BugCheckParameter1 + 736);
    if ( v8 )
      PspClearProcessThreadCidRefs((__int64)CurrentThread, v8, BugCheckParameter1);
  }
  else
  {
    v14 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)BugCheckParameter1);
    if ( v14 )
    {
      LOBYTE(v15) = 1;
      ExSweepHandleTable(BugCheckParameter1, v14, v15);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
    }
  }
  return v3;
}
