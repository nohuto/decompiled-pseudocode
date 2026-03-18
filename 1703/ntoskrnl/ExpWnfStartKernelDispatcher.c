/*
 * XREFs of ExpWnfStartKernelDispatcher @ 0x1404447C8
 * Callers:
 *     ExpWnfNotifySubscription @ 0x1404446CC (ExpWnfNotifySubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1404EE658 (ExpWnfNotifyNameSubscribers.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 */

void __fastcall ExpWnfStartKernelDispatcher(int a1)
{
  if ( a1 )
  {
    ExpWnfDispatchKernelSubscription();
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(ExpWnfDispatcher + 40), 2u);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(ExpWnfDispatcher + 40), 3, 2) == 2 )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(ExpWnfDispatcher + 8), DelayedWorkQueue);
  }
}
