/*
 * XREFs of PsGetNextProcess @ 0x140538C80
 * Callers:
 *     MiEmptyAccessLogs @ 0x14016A490 (MiEmptyAccessLogs.c)
 *     PsEnumProcesses @ 0x1405385E4 (PsEnumProcesses.c)
 *     ExGetNextProcess @ 0x140538C34 (ExGetNextProcess.c)
 *     PsGetNextProcessEx @ 0x1405793E0 (PsGetNextProcessEx.c)
 *     NtGetNextProcess @ 0x14060E220 (NtGetNextProcess.c)
 *     PfpRpControlRequestReset @ 0x14064A3D0 (PfpRpControlRequestReset.c)
 *     DbgkpCloseObject @ 0x14070E4D0 (DbgkpCloseObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x14071E3A8 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140726B0C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     MiScrubProcesses @ 0x140757F60 (MiScrubProcesses.c)
 *     PsUpdateActiveProcessAffinity @ 0x14077A61C (PsUpdateActiveProcessAffinity.c)
 *     PsShutdownSystem @ 0x14077CC34 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x14077CF24 (PsWaitForAllProcesses.c)
 *     PspProcessRundownWorker @ 0x14077D1C0 (PspProcessRundownWorker.c)
 *     EtwpLogMemInfoWs @ 0x1407A8264 (EtwpLogMemInfoWs.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1407A95C8 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpCoverageSamplerStop @ 0x1407B8748 (EtwpCoverageSamplerStop.c)
 *     ExpDebuggerWorker @ 0x140803030 (ExpDebuggerWorker.c)
 *     PopEtInit @ 0x1408C3458 (PopEtInit.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400FED50 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 */

unsigned __int64 __fastcall PsGetNextProcess(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 *v3; // rbp
  int v4; // edi
  __int64 *v5; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
  v5 = (__int64 *)PsActiveProcessHead;
  if ( Object )
    v5 = (__int64 *)Object[93];
  while ( v5 != &PsActiveProcessHead )
  {
    v3 = v5 - 93;
    if ( ObReferenceObjectSafeWithTag((__int64)(v5 - 93)) )
    {
      v4 = 1;
      break;
    }
    v5 = (__int64 *)*v5;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
  KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return (unsigned __int64)v3 & -(__int64)(v4 != 0);
}
