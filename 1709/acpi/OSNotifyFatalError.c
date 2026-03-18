/*
 * XREFs of OSNotifyFatalError @ 0x1C00528C0
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
    dword_1C0078E20 = a1;
    dword_1C0078E24 = a2;
    dword_1C0078E28 = a3;
    qword_1C0078E30 = a4;
    ExQueueWorkItem(&AcpiFatalContext, DelayedWorkQueue);
  }
  return 0LL;
}
