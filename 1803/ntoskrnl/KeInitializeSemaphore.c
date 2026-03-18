/*
 * XREFs of KeInitializeSemaphore @ 0x14005C7F0
 * Callers:
 *     PopWakeDeviceList @ 0x140472790 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1404728F4 (PopSleepDeviceList.c)
 *     NtCreateSemaphore @ 0x1404C2310 (NtCreateSemaphore.c)
 *     AlpcpInitializePort @ 0x1404DD334 (AlpcpInitializePort.c)
 *     PspAllocateThread @ 0x1405B8EE8 (PspAllocateThread.c)
 *     MiInitializeSections @ 0x14061BF24 (MiInitializeSections.c)
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
