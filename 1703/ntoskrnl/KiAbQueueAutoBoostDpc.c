/*
 * XREFs of KiAbQueueAutoBoostDpc @ 0x14011F45C
 * Callers:
 *     KiRemoveBoostThread @ 0x1400414C0 (KiRemoveBoostThread.c)
 *     KiQuantumEnd @ 0x140041B30 (KiQuantumEnd.c)
 *     KiSetPriorityThread @ 0x140042AF0 (KiSetPriorityThread.c)
 *     KeSetPriorityBoost @ 0x140042F40 (KeSetPriorityBoost.c)
 *     KeSetPriorityThread @ 0x140043440 (KeSetPriorityThread.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x140064EC4 (KiSetBasePriorityAndClearDecrement.c)
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x140066A7C (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     PsBoostThreadIoEx @ 0x14008D210 (PsBoostThreadIoEx.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14008FC20 (ExpAcquireResourceExclusiveLite.c)
 *     ExpApplyPriorityBoost @ 0x1400913C0 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x140091CD0 (ExpBoostIoAfterAcquire.c)
 *     KiDeferredReadyThread @ 0x1400E05F0 (KiDeferredReadyThread.c)
 *     KiDirectSwitchThread @ 0x1400E1C90 (KiDirectSwitchThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     KiTryUnwaitThreadWithPriority @ 0x1400FD8B0 (KiTryUnwaitThreadWithPriority.c)
 *     NtYieldExecution @ 0x140112EE0 (NtYieldExecution.c)
 *     KiUpdateThreadPriority @ 0x1401147E0 (KiUpdateThreadPriority.c)
 *     KiAbThreadBoostIoPriority @ 0x14011F390 (KiAbThreadBoostIoPriority.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x140205384 (KeAbProcessEffectiveIoPriorityChange.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1400F14F0 (KeInsertQueueDpc.c)
 */

BOOLEAN __fastcall KiAbQueueAutoBoostDpc(struct _KDPC *SystemArgument1)
{
  BOOLEAN result; // al

  if ( !SystemArgument1[407].DeferredContext )
  {
    result = KeInsertQueueDpc(SystemArgument1 + 407, SystemArgument1, 0LL);
    SystemArgument1[407].DeferredContext = (PVOID)1;
  }
  return result;
}
