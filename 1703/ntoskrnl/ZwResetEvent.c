/*
 * XREFs of ZwResetEvent @ 0x140180CA0
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140457020 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14046688C (PfSnVolumeCheckSeekPenalty.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1406C4D34 (PfSnVolumeCheckIsSdBus.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwResetEvent(HANDLE EventHandle, PLONG NumberOfWaitingThreads)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
