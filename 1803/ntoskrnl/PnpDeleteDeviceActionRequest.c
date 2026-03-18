/*
 * XREFs of PnpDeleteDeviceActionRequest @ 0x140146378
 * Callers:
 *     PnpDeviceActionWorker @ 0x140145DC0 (PnpDeviceActionWorker.c)
 *     PnpRemoveDeviceActionRequests @ 0x14014D264 (PnpRemoveDeviceActionRequests.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x14023C56C (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PiControlGetSetDeviceStatus @ 0x14050BD60 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x14073B9A0 (PiQueueDeviceRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeleteDeviceActionRequest(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 18, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0x32706E50u);
}
