/*
 * XREFs of PspRundownSingleProcess @ 0x140546EDC
 * Callers:
 *     PspProcessRundownWorkerSingle @ 0x14041FD20 (PspProcessRundownWorkerSingle.c)
 *     PspCreateProcess @ 0x14045D9C0 (PspCreateProcess.c)
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 *     NtCreateUserProcess @ 0x140544094 (NtCreateUserProcess.c)
 *     PspTerminateProcess @ 0x14054EBC8 (PspTerminateProcess.c)
 *     PspTerminateAllThreads @ 0x14054EDAC (PspTerminateAllThreads.c)
 *     PsCreateMinimalProcess @ 0x1405D991C (PsCreateMinimalProcess.c)
 *     PspProcessRundownWorker @ 0x1406E2D40 (PspProcessRundownWorker.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExWaitForRundownProtectionRelease @ 0x14010EFC0 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KeSetProcess @ 0x14011603C (KeSetProcess.c)
 *     ExRundownCompleted @ 0x1401161E0 (ExRundownCompleted.c)
 *     RtlInterlockedSetClearBits @ 0x1401161F0 (RtlInterlockedSetClearBits.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeRundownSecureProcess @ 0x1401FD188 (KeRundownSecureProcess.c)
 *     ExSweepHandleTable @ 0x14042F3C0 (ExSweepHandleTable.c)
 *     MmCleanProcessAddressSpace @ 0x14047ABC0 (MmCleanProcessAddressSpace.c)
 *     ObKillProcess @ 0x1404EDAA0 (ObKillProcess.c)
 *     PspClearProcessThreadCidRefs @ 0x1404F8D74 (PspClearProcessThreadCidRefs.c)
 *     ObReferenceProcessHandleTable @ 0x140517F9C (ObReferenceProcessHandleTable.c)
 *     PspSendProcessNotificationToJobChain @ 0x140546E24 (PspSendProcessNotificationToJobChain.c)
 *     PspNotifyEmptyJobsInJobChain @ 0x14054715C (PspNotifyEmptyJobsInJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x14054727C (PspRemoveProcessFromJobChain.c)
 */

bool __fastcall PspRundownSingleProcess(__int64 BugCheckParameter1, bool a2)
{
  struct _KTHREAD *CurrentThread; // r14
  bool v3; // bp
  __int64 v5; // r11
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rdx
  volatile signed __int64 *v10; // rsi
  unsigned __int64 v11; // rax
  $5BC46E0569261879018906DEC3127961 v12; // [rsp+20h] [rbp-58h] BYREF

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
    ExfTryToWakePushLock(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v3 )
  {
LABEL_2:
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
    ExRundownCompleted((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
    if ( *(_QWORD *)(BugCheckParameter1 + 944) && (*(_DWORD *)(BugCheckParameter1 + 768) & 1) == 0 )
    {
      RtlInterlockedSetClearBits((volatile signed __int32 *)(BugCheckParameter1 + 768), 8);
      PspSendProcessNotificationToJobChain(BugCheckParameter1, v5, *(_QWORD *)(BugCheckParameter1 + 736));
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 720) )
      KeRundownSecureProcess(BugCheckParameter1);
    if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 0x40000) != 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v12);
      if ( *(_QWORD *)(BugCheckParameter1 + 1048) )
        ObKillProcess((_KPROCESS *)BugCheckParameter1);
      MmCleanProcessAddressSpace(BugCheckParameter1);
      KiUnstackDetachProcess(&v12, 0LL);
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
      PspRemoveProcessFromJobChain(BugCheckParameter1);
      PspNotifyEmptyJobsInJobChain(BugCheckParameter1);
    }
    v8 = *(_QWORD *)(BugCheckParameter1 + 736);
    if ( v8 )
      PspClearProcessThreadCidRefs((__int64)CurrentThread, v8, BugCheckParameter1);
  }
  else
  {
    v11 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)BugCheckParameter1);
    if ( v11 )
    {
      ExSweepHandleTable((_KPROCESS *)BugCheckParameter1, v11, 1);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
    }
  }
  return v3;
}
