/*
 * XREFs of IopAcquireReleaseDispatcherLock @ 0x1406951FC
 * Callers:
 *     IopPassiveInterruptWorker @ 0x1401F88D0 (IopPassiveInterruptWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall IopAcquireReleaseDispatcherLock(struct _KEVENT *a1, char a2)
{
  struct _KEVENT *v2; // rcx
  struct _KTHREAD *CurrentThread; // rax

  v2 = a1 + 7;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    return KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
  }
  else
  {
    KeSetEvent(v2, 0, 0);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
}
