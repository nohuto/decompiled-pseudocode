/*
 * XREFs of PsGetNextProcessThread @ 0x14047F100
 * Callers:
 *     NtGetNextThread @ 0x14041F564 (NtGetNextThread.c)
 *     PsResumeProcess @ 0x140440D70 (PsResumeProcess.c)
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x14048BDA0 (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     PsEnumProcessThreads @ 0x1404B0AF8 (PsEnumProcessThreads.c)
 *     PspBoostJobIoPriorityCallback @ 0x14054D1E0 (PspBoostJobIoPriorityCallback.c)
 *     PspTerminateAllThreads @ 0x14054EDAC (PspTerminateAllThreads.c)
 *     ExSwapinWorkerThreads @ 0x1405778AC (ExSwapinWorkerThreads.c)
 *     DbgkpPostFakeThreadMessages @ 0x14067F234 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x14067FB20 (DbgkpSetProcessDebugObject.c)
 *     PspWaitForUsermodeExit @ 0x1406E2DE4 (PspWaitForUsermodeExit.c)
 *     PsSuspendProcess @ 0x1406E4240 (PsSuspendProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400EFD50 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 */

_QWORD *__fastcall PsGetNextProcessThread(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r12
  _QWORD **v3; // r13
  __int64 v4; // rbx
  _QWORD *v6; // r15
  int v7; // r14d
  signed __int64 *v8; // rbp
  _QWORD *v9; // rsi

  CurrentThread = KeGetCurrentThread();
  v3 = (_QWORD **)(a1 + 1160);
  v4 = 0LL;
  v6 = 0LL;
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  v8 = (signed __int64 *)(a1 + 728);
  ExAcquirePushLockSharedEx(a1 + 728, 0LL);
  if ( a2 )
    v9 = (_QWORD *)a2[212];
  else
    v9 = *v3;
  if ( v9 != v3 )
  {
    while ( 1 )
    {
      v6 = v9 - 212;
      if ( ObReferenceObjectSafeWithTag((__int64)(v9 - 212)) )
        break;
      v9 = (_QWORD *)*v9;
      if ( v9 == v3 )
        goto LABEL_6;
    }
    v7 = 1;
  }
LABEL_6:
  if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  if ( v7 )
    return v6;
  return (_QWORD *)v4;
}
