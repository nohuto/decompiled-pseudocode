/*
 * XREFs of PsGetNextProcess @ 0x1404FD830
 * Callers:
 *     MiEmptyAccessLogs @ 0x140230750 (MiEmptyAccessLogs.c)
 *     PfpRpControlRequestReset @ 0x14043D754 (PfpRpControlRequestReset.c)
 *     PsEnumProcesses @ 0x1404FD1C8 (PsEnumProcesses.c)
 *     ExGetNextProcess @ 0x1404FD7E4 (ExGetNextProcess.c)
 *     DbgkpCloseObject @ 0x1406A9D70 (DbgkpCloseObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x1406B9408 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x1406C0E2C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     MiScrubProcesses @ 0x1406EEA90 (MiScrubProcesses.c)
 *     PsUpdateActiveProcessAffinity @ 0x140716588 (PsUpdateActiveProcessAffinity.c)
 *     PsShutdownSystem @ 0x140718C64 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x140718F50 (PsWaitForAllProcesses.c)
 *     PspProcessRundownWorker @ 0x1407191F0 (PspProcessRundownWorker.c)
 *     NtGetNextProcess @ 0x14071C6A0 (NtGetNextProcess.c)
 *     EtwpLogMemInfoWs @ 0x14074665C (EtwpLogMemInfoWs.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140747E84 (EtwQueryPerformanceTraceInformation.c)
 *     ExpDebuggerWorker @ 0x140796030 (ExpDebuggerWorker.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140083060 (ObReferenceObjectSafeWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     PspUnlockProcessListShared @ 0x1400B9AC8 (PspUnlockProcessListShared.c)
 */

unsigned __int64 __fastcall PsGetNextProcess(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v2; // r14
  int v3; // esi
  __int64 *v5; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v3 = 0;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
  v5 = (__int64 *)PsActiveProcessHead;
  if ( Object )
    v5 = (__int64 *)Object[93];
  while ( v5 != &PsActiveProcessHead )
  {
    v2 = v5 - 93;
    if ( ObReferenceObjectSafeWithTag((__int64)(v5 - 93)) )
    {
      v3 = 1;
      break;
    }
    v5 = (__int64 *)*v5;
  }
  PspUnlockProcessListShared((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return (unsigned __int64)v2 & -(__int64)(v3 != 0);
}
