/*
 * XREFs of KiAbQueueAutoBoostDpc @ 0x14010F97C
 * Callers:
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x140021908 (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     KiTryUnwaitThreadWithPriority @ 0x140062020 (KiTryUnwaitThreadWithPriority.c)
 *     KiDeferredReadyThread @ 0x140072C60 (KiDeferredReadyThread.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140080900 (ExpAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIoEx @ 0x1400813D0 (PsBoostThreadIoEx.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     KiRemoveBoostThread @ 0x14008B160 (KiRemoveBoostThread.c)
 *     ExpApplyPriorityBoost @ 0x14008B550 (ExpApplyPriorityBoost.c)
 *     KeSetPriorityThread @ 0x14008BE00 (KeSetPriorityThread.c)
 *     KiUpdateThreadPriority @ 0x14008C870 (KiUpdateThreadPriority.c)
 *     NtYieldExecution @ 0x14008D810 (NtYieldExecution.c)
 *     KiDirectSwitchThread @ 0x14008DBB0 (KiDirectSwitchThread.c)
 *     KiQuantumEnd @ 0x140090E30 (KiQuantumEnd.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1400D3C50 (KiSetBasePriorityAndClearDecrement.c)
 *     ExpBoostIoAfterAcquire @ 0x1400F19F0 (ExpBoostIoAfterAcquire.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x14010F854 (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiAbThreadBoostIoPriority @ 0x14010F8BC (KiAbThreadBoostIoPriority.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140094390 (KeInsertQueueDpc.c)
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
