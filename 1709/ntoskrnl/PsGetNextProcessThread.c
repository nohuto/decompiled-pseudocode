/*
 * XREFs of PsGetNextProcessThread @ 0x1404D9170
 * Callers:
 *     NtGetNextThread @ 0x14046DCC8 (NtGetNextThread.c)
 *     NtSetInformationThread @ 0x1404CD4F0 (NtSetInformationThread.c)
 *     PspTerminateAllThreads @ 0x1404D6C7C (PspTerminateAllThreads.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x1404D6FA4 (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     PspBoostJobIoPriorityCallback @ 0x1404D99C0 (PspBoostJobIoPriorityCallback.c)
 *     PsResumeProcess @ 0x140575920 (PsResumeProcess.c)
 *     PsSuspendProcess @ 0x140582840 (PsSuspendProcess.c)
 *     PsEnumProcessThreads @ 0x1405D6210 (PsEnumProcessThreads.c)
 *     DbgkpPostFakeThreadMessages @ 0x1406AA3AC (DbgkpPostFakeThreadMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x1406AACFC (DbgkpSetProcessDebugObject.c)
 *     PspWaitForUsermodeExit @ 0x1407193A8 (PspWaitForUsermodeExit.c)
 *     ExSwapinWorkerThreads @ 0x14075E51C (ExSwapinWorkerThreads.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140083060 (ObReferenceObjectSafeWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
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
    v9 = (_QWORD *)a2[213];
  else
    v9 = *v3;
  if ( v9 != v3 )
  {
    while ( 1 )
    {
      v6 = v9 - 213;
      if ( ObReferenceObjectSafeWithTag((__int64)(v9 - 213)) )
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
