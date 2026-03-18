/*
 * XREFs of KiAbQueueAutoBoostDpc @ 0x140039664
 * Callers:
 *     KiDirectSwitchThread @ 0x1400399E0 (KiDirectSwitchThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x140043934 (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x14006B24C (KiSetBasePriorityAndClearDecrement.c)
 *     ExpBoostIoAfterAcquire @ 0x1400884C0 (ExpBoostIoAfterAcquire.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x1400BEEF0 (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiAbThreadBoostIoPriority @ 0x1400CE508 (KiAbThreadBoostIoPriority.c)
 *     KiUpdateThreadPriority @ 0x1400EDCB0 (KiUpdateThreadPriority.c)
 *     KiRemoveBoostThread @ 0x1400EE080 (KiRemoveBoostThread.c)
 *     ExpApplyPriorityBoost @ 0x1400EE7A0 (ExpApplyPriorityBoost.c)
 *     KiDeferredReadyThread @ 0x1400FBA30 (KiDeferredReadyThread.c)
 *     PsBoostThreadIoEx @ 0x1400FE2D0 (PsBoostThreadIoEx.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     KiTryUnwaitThreadWithPriority @ 0x140128300 (KiTryUnwaitThreadWithPriority.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140039000 (KeInsertQueueDpc.c)
 */

BOOLEAN __fastcall KiAbQueueAutoBoostDpc(struct _KDPC *SystemArgument1)
{
  BOOLEAN result; // al

  if ( !SystemArgument1[402].DeferredContext )
  {
    result = KeInsertQueueDpc(SystemArgument1 + 402, SystemArgument1, 0LL);
    SystemArgument1[402].DeferredContext = (PVOID)1;
  }
  return result;
}
