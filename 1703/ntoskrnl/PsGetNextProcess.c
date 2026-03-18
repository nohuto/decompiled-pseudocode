/*
 * XREFs of PsGetNextProcess @ 0x1404995D0
 * Callers:
 *     MiEmptyAccessLogs @ 0x14013F820 (MiEmptyAccessLogs.c)
 *     ExGetNextProcess @ 0x140499578 (ExGetNextProcess.c)
 *     PsEnumProcesses @ 0x1404B0354 (PsEnumProcesses.c)
 *     NtGetNextProcess @ 0x14057BB10 (NtGetNextProcess.c)
 *     PfpRpControlRequestReset @ 0x1405D8730 (PfpRpControlRequestReset.c)
 *     DbgkpCloseObject @ 0x14067EC20 (DbgkpCloseObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x14068D72C (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140695064 (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     MiScrubProcesses @ 0x1406C0060 (MiScrubProcesses.c)
 *     PsUpdateActiveProcessAffinity @ 0x1406DFF78 (PsUpdateActiveProcessAffinity.c)
 *     PsShutdownSystem @ 0x1406E2814 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x1406E2AF4 (PsWaitForAllProcesses.c)
 *     PspProcessRundownWorker @ 0x1406E2D40 (PspProcessRundownWorker.c)
 *     EtwpLogMemInfoWs @ 0x14070B538 (EtwpLogMemInfoWs.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14070C7F8 (EtwQueryPerformanceTraceInformation.c)
 *     ExpDebuggerWorker @ 0x140789040 (ExpDebuggerWorker.c)
 * Callees:
 *     PspUnlockProcessListShared @ 0x1400623E0 (PspUnlockProcessListShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400EFD50 (ObReferenceObjectSafeWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
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
