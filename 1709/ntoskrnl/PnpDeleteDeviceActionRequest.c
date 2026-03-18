/*
 * XREFs of PnpDeleteDeviceActionRequest @ 0x1400FFD98
 * Callers:
 *     PnpDeviceActionWorker @ 0x1400FF730 (PnpDeviceActionWorker.c)
 *     PnpRemoveDeviceActionRequests @ 0x14015ABF0 (PnpRemoveDeviceActionRequests.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x1401FFAA0 (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PiQueueDeviceRequest @ 0x14044E618 (PiQueueDeviceRequest.c)
 *     PiControlGetSetDeviceStatus @ 0x140526EE0 (PiControlGetSetDeviceStatus.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeleteDeviceActionRequest(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 18, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0x32706E50u);
}
