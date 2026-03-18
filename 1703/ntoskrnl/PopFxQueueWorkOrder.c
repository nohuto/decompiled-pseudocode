/*
 * XREFs of PopFxQueueWorkOrder @ 0x14006882C
 * Callers:
 *     PopFxRequestWorker @ 0x1400687D0 (PopFxRequestWorker.c)
 *     PopFxIdleComponent @ 0x140069D5C (PopFxIdleComponent.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x14014B470 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x14022B014 (PopFxIssueComponentPerfStateChanges.c)
 * Callees:
 *     KeInsertQueue @ 0x140010DA0 (KeInsertQueue.c)
 *     ExTryQueueWorkItem @ 0x1400688A0 (ExTryQueueWorkItem.c)
 *     PopFxAddRefDevice @ 0x140069078 (PopFxAddRefDevice.c)
 */

signed __int32 __fastcall PopFxQueueWorkOrder(PRKQUEUE Queue, PLIST_ENTRY Entry, ULONG_PTR BugCheckParameter2, char a4)
{
  signed __int32 result; // eax

  result = _InterlockedIncrement((volatile signed __int32 *)&Entry[2]);
  if ( result == 1 )
  {
    if ( BugCheckParameter2 )
      PopFxAddRefDevice(BugCheckParameter2);
    if ( a4 )
      return KeInsertQueue(Queue, Entry);
    result = ExTryQueueWorkItem(Entry, 48LL);
    if ( !(_BYTE)result )
      return KeInsertQueue(Queue, Entry);
  }
  return result;
}
