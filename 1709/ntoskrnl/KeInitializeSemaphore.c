/*
 * XREFs of KeInitializeSemaphore @ 0x140025A40
 * Callers:
 *     PopSleepDeviceList @ 0x140437778 (PopSleepDeviceList.c)
 *     PopWakeDeviceList @ 0x140437D84 (PopWakeDeviceList.c)
 *     AlpcpInitializePort @ 0x140466B0C (AlpcpInitializePort.c)
 *     NtCreateSemaphore @ 0x1404935D0 (NtCreateSemaphore.c)
 *     PspAllocateThread @ 0x140493710 (PspAllocateThread.c)
 *     MiInitializeSections @ 0x1405B353C (MiInitializeSections.c)
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
