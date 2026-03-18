/*
 * XREFs of ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C02BA300
 * Callers:
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00914E0 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00D5ABC (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C00D5C18 (-UmfdCancelServerOutstandingRequests@@YAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel(
        CMultipleConsumerWorkQueue::CWaitableWorkItem *this)
{
  *((_DWORD *)this + 2) = 4;
  KeSetEvent(**(PRKEVENT **)(*((_QWORD *)this + 5) + 8LL), 1, 0);
}
