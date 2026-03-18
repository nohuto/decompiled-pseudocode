/*
 * XREFs of KeInitializeQueue @ 0x140024C20
 * Callers:
 *     PopFxRegisterPluginEx @ 0x14022B7A0 (PopFxRegisterPluginEx.c)
 *     EtwpCreateUmReplyObject @ 0x14043FEB4 (EtwpCreateUmReplyObject.c)
 *     NtCreateIoCompletion @ 0x140440074 (NtCreateIoCompletion.c)
 *     KeInitializeUmsThread @ 0x1406AD5AC (KeInitializeUmsThread.c)
 *     FsRtlInitializeWorkerThread @ 0x1408195D8 (FsRtlInitializeWorkerThread.c)
 *     IopInitializePassiveInterruptServices @ 0x140820B54 (IopInitializePassiveInterruptServices.c)
 *     PoFxInitPowerManagement @ 0x140820D80 (PoFxInitPowerManagement.c)
 *     ExpWorkerFactoryInitialization @ 0x14082478C (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140089140 (KeQueryActiveProcessorCountEx.c)
 */

void __stdcall KeInitializeQueue(PRKQUEUE Queue, ULONG Count)
{
  Queue->Header.Type = 4;
  *(_WORD *)((char *)&Queue->Header.Lock + 1) = 4096;
  Queue->Header.SignalState = 0;
  Queue->Header.WaitListHead.Blink = &Queue->Header.WaitListHead;
  Queue->Header.WaitListHead.Flink = &Queue->Header.WaitListHead;
  Queue->EntryListHead.Blink = &Queue->EntryListHead;
  Queue->EntryListHead.Flink = &Queue->EntryListHead;
  Queue->ThreadListHead.Blink = &Queue->ThreadListHead;
  Queue->ThreadListHead.Flink = &Queue->ThreadListHead;
  Queue->CurrentCount = 0;
  if ( Count )
    Queue->MaximumCount = Count;
  else
    Queue->MaximumCount = KeQueryActiveProcessorCountEx(0xFFFFu);
}
