/*
 * XREFs of KeInitializeQueue @ 0x1400BB9B0
 * Callers:
 *     PopFxRegisterPluginEx @ 0x140275E7C (PopFxRegisterPluginEx.c)
 *     NtCreateIoCompletion @ 0x140564C50 (NtCreateIoCompletion.c)
 *     EtwpCreateUmReplyObject @ 0x1405C3160 (EtwpCreateUmReplyObject.c)
 *     KeInitializeUmsThread @ 0x140742ACC (KeInitializeUmsThread.c)
 *     FsRtlInitializeWorkerThread @ 0x1408C1EA8 (FsRtlInitializeWorkerThread.c)
 *     IopInitializePassiveInterruptServices @ 0x1408C314C (IopInitializePassiveInterruptServices.c)
 *     PoFxInitPowerManagement @ 0x1408C3198 (PoFxInitPowerManagement.c)
 *     ExpWorkerFactoryInitialization @ 0x1408C7E8C (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140036ED0 (KeQueryActiveProcessorCountEx.c)
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
  if ( !Count )
    Count = KeQueryActiveProcessorCountEx(0xFFFFu);
  Queue->MaximumCount = Count;
}
