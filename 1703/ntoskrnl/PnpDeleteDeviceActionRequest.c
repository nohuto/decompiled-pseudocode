/*
 * XREFs of PnpDeleteDeviceActionRequest @ 0x14003D738
 * Callers:
 *     PnpDeviceActionWorker @ 0x14003D340 (PnpDeviceActionWorker.c)
 *     PnpRemoveDeviceActionRequests @ 0x140131F9C (PnpRemoveDeviceActionRequests.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x1401F9C80 (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PiControlGetSetDeviceStatus @ 0x14048A0B0 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x1406A8DFC (PiQueueDeviceRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeleteDeviceActionRequest(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 18, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0x32706E50u);
}
