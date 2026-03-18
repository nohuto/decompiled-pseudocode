/*
 * XREFs of KeInitializeSemaphore @ 0x140110510
 * Callers:
 *     PopWakeDeviceList @ 0x140408914 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x140408A78 (PopSleepDeviceList.c)
 *     AlpcpInitializePort @ 0x140475F6C (AlpcpInitializePort.c)
 *     PspAllocateThread @ 0x14053F490 (PspAllocateThread.c)
 *     NtCreateSemaphore @ 0x14053FFB0 (NtCreateSemaphore.c)
 *     MiInitializeSections @ 0x1405A1DA8 (MiInitializeSections.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeSemaphore(PRKSEMAPHORE Semaphore, LONG Count, LONG Limit)
{
  Semaphore->Header.Type = 5;
  Semaphore->Header.Size = 8;
  Semaphore->Header.SignalState = Count;
  Semaphore->Header.WaitListHead.Blink = &Semaphore->Header.WaitListHead;
  Semaphore->Header.WaitListHead.Flink = &Semaphore->Header.WaitListHead;
  Semaphore->Limit = Limit;
}
