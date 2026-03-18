/*
 * XREFs of KeInitializeQueue @ 0x14011C630
 * Callers:
 *     PopFxRegisterPluginEx @ 0x14023EB10 (PopFxRegisterPluginEx.c)
 *     NtCreateIoCompletion @ 0x140574D7C (NtCreateIoCompletion.c)
 *     KeInitializeUmsThread @ 0x1406D89F0 (KeInitializeUmsThread.c)
 *     EtwpCreateUmReplyObject @ 0x1407441E8 (EtwpCreateUmReplyObject.c)
 *     FsRtlInitializeWorkerThread @ 0x1408513B8 (FsRtlInitializeWorkerThread.c)
 *     IopInitializePassiveInterruptServices @ 0x140852230 (IopInitializePassiveInterruptServices.c)
 *     PoFxInitPowerManagement @ 0x1408527CC (PoFxInitPowerManagement.c)
 *     ExpWorkerFactoryInitialization @ 0x140855B44 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x14008D0E0 (KeQueryActiveProcessorCountEx.c)
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
