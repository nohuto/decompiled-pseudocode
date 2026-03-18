/*
 * XREFs of IoReleaseRemoveLockEx @ 0x140022800
 * Callers:
 *     PoFxPrepareDevice @ 0x14006776C (PoFxPrepareDevice.c)
 *     PopFxActivateDevice @ 0x14006816C (PopFxActivateDevice.c)
 *     PopFxProcessWork @ 0x140069444 (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x140069C9C (PopFxCompleteComponentActivation.c)
 *     PoFxPowerControl @ 0x14013D5E0 (PoFxPowerControl.c)
 *     PopRequestCompletion @ 0x140144A90 (PopRequestCompletion.c)
 *     PopFxReleasePowerIrp @ 0x140144FDC (PopFxReleasePowerIrp.c)
 *     PopRequestPowerIrp @ 0x140145E60 (PopRequestPowerIrp.c)
 *     PopFxAllocatePowerIrp @ 0x1401467CC (PopFxAllocatePowerIrp.c)
 *     PopFxComponentWork @ 0x14014A960 (PopFxComponentWork.c)
 *     PoFxNotifySurprisePowerOn @ 0x14014B4C0 (PoFxNotifySurprisePowerOn.c)
 *     PopFxComponentPerfWork @ 0x14022A8D0 (PopFxComponentPerfWork.c)
 *     PopFxDestroyDeviceDpm @ 0x14022A988 (PopFxDestroyDeviceDpm.c)
 *     PopFxDeviceWork @ 0x14022ACA0 (PopFxDeviceWork.c)
 *     PopFxPlatformIdleVeto @ 0x14022B3E0 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x14022B600 (PopFxProcessorIdleVeto.c)
 *     PopFxReleaseAcpiRefDevice @ 0x14022BAD8 (PopFxReleaseAcpiRefDevice.c)
 *     PopFxUpdatePlatformIdleState @ 0x14022C560 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x14022C660 (PopFxUpdateProcessorIdleState.c)
 *     PopFxAcpiForwardNotification @ 0x140237EB8 (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x140237F5C (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x140237FF0 (PopFxAcpiForwardPepWorkRequest.c)
 *     PopDripsWatchdogTakeAction @ 0x1406D4DDC (PopDripsWatchdogTakeAction.c)
 *     ViFilterDeviceUsageNotificationCompletion @ 0x1407809E0 (ViFilterDeviceUsageNotificationCompletion.c)
 *     ViFilterGenericCompletionRoutine @ 0x140780E60 (ViFilterGenericCompletionRoutine.c)
 *     ViFilterStartCompletionRoutine @ 0x140780F50 (ViFilterStartCompletionRoutine.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x140772B64 (VfRemLockReportBadReleaseTag.c)
 */

void __stdcall IoReleaseRemoveLockEx(PIO_REMOVE_LOCK RemoveLock, PVOID Tag, ULONG RemlockSize)
{
  char v5; // si
  LIST_ENTRY *p_WaitListHead; // r14
  KIRQL v7; // r12
  struct _LIST_ENTRY *Flink; // rdi
  PVOID *p_Flink; // rcx
  struct _LIST_ENTRY *v10; // rax

  if ( RemlockSize == 120 )
  {
    v5 = 0;
    p_WaitListHead = &RemoveLock[3].Common.RemoveEvent.Header.WaitListHead;
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent);
    Flink = RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink;
    p_Flink = (PVOID *)&Flink->Flink;
    if ( Flink )
    {
      do
      {
        if ( v5 || p_Flink[1] != Tag )
        {
          Flink = (struct _LIST_ENTRY *)p_Flink;
        }
        else
        {
          v10 = (struct _LIST_ENTRY *)*p_Flink;
          v5 = 1;
          if ( p_Flink == (PVOID *)p_WaitListHead->Flink )
          {
            p_WaitListHead->Flink = v10;
            ExFreePoolWithTag(p_Flink, 0);
            p_Flink = (PVOID *)&RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink;
          }
          else
          {
            Flink->Flink = v10;
            ExFreePoolWithTag(p_Flink, 0);
            p_Flink = (PVOID *)&Flink->Flink;
          }
        }
        p_Flink = (PVOID *)*p_Flink;
      }
      while ( p_Flink );
    }
    KxReleaseSpinLock((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent);
    __writecr8(v7);
    if ( !v5
      && _InterlockedDecrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead) < 0
      && ((MmVerifierData & 0x800) == 0 || !(unsigned int)VfRemLockReportBadReleaseTag(RemoveLock, Tag)) )
    {
      _InterlockedIncrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead);
    }
  }
  if ( _InterlockedExchangeAdd(&RemoveLock->Common.IoCount, 0xFFFFFFFF) == 1 )
    KeSetEvent(&RemoveLock->Common.RemoveEvent, 0, 0);
}
