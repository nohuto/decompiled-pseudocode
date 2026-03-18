/*
 * XREFs of OSNotifyFatalError @ 0x1C002F4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall OSNotifyFatalError(int a1, int a2, int a3, __int64 a4)
{
  KIRQL v8; // al

  v8 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  if ( AcpiFatalOutstanding )
  {
    KeReleaseSpinLock(&AcpiPowerLock, v8);
  }
  else
  {
    AcpiFatalOutstanding = 1;
    KeReleaseSpinLock(&AcpiPowerLock, v8);
    AcpiFatalContext.List.Flink = 0LL;
    AcpiFatalContext.WorkerRoutine = (void (__fastcall *)(void *))OSNotifyFatalErrorWorker;
    AcpiFatalContext.Parameter = &AcpiFatalContext;
    dword_1C0066E80 = a1;
    dword_1C0066E84 = a2;
    dword_1C0066E88 = a3;
    qword_1C0066E90 = a4;
    ExQueueWorkItem(&AcpiFatalContext, DelayedWorkQueue);
  }
  return 0LL;
}
