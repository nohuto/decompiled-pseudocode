/*
 * XREFs of PopFxQueueWorkOrder @ 0x140079DC0
 * Callers:
 *     PopFxIdleComponent @ 0x1400786EC (PopFxIdleComponent.c)
 *     PopFxRequestWorker @ 0x140079D50 (PopFxRequestWorker.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x1401862C0 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1402756D4 (PopFxIssueComponentPerfStateChanges.c)
 * Callees:
 *     PopFxAddRefDevice @ 0x14007826C (PopFxAddRefDevice.c)
 *     ExTryQueueWorkItem @ 0x14008F780 (ExTryQueueWorkItem.c)
 *     KeInsertQueue @ 0x1400C1D70 (KeInsertQueue.c)
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
