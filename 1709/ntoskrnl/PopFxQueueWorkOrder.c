/*
 * XREFs of PopFxQueueWorkOrder @ 0x140127734
 * Callers:
 *     PopFxIdleComponent @ 0x1400E403C (PopFxIdleComponent.c)
 *     PopFxRequestWorker @ 0x1401276D0 (PopFxRequestWorker.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x140132270 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x14023E334 (PopFxIssueComponentPerfStateChanges.c)
 * Callees:
 *     ExTryQueueWorkItem @ 0x140021AA0 (ExTryQueueWorkItem.c)
 *     PopFxAddRefDevice @ 0x1400FD858 (PopFxAddRefDevice.c)
 *     KeInsertQueue @ 0x14012E710 (KeInsertQueue.c)
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
    result = ExTryQueueWorkItem((__int64)Entry, 0x30u);
    if ( !(_BYTE)result )
      return KeInsertQueue(Queue, Entry);
  }
  return result;
}
