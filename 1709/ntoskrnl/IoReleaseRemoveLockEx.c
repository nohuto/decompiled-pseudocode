/*
 * XREFs of IoReleaseRemoveLockEx @ 0x14011AF40
 * Callers:
 *     PopRequestPowerIrp @ 0x1400B3BA0 (PopRequestPowerIrp.c)
 *     PopFxAllocatePowerIrp @ 0x1400B420C (PopFxAllocatePowerIrp.c)
 *     PopFxActivateDevice @ 0x1400FC950 (PopFxActivateDevice.c)
 *     PoFxPrepareDevice @ 0x1400FCDC8 (PoFxPrepareDevice.c)
 *     PopFxProcessWork @ 0x1400FD9F8 (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x1400FE048 (PopFxCompleteComponentActivation.c)
 *     PopRequestCompletion @ 0x140122EF0 (PopRequestCompletion.c)
 *     PopFxReleasePowerIrp @ 0x1401233B0 (PopFxReleasePowerIrp.c)
 *     PopFxComponentWork @ 0x140158960 (PopFxComponentWork.c)
 *     PoFxNotifySurprisePowerOn @ 0x14015CEA0 (PoFxNotifySurprisePowerOn.c)
 *     PoFxPowerControl @ 0x14023D690 (PoFxPowerControl.c)
 *     PopFxComponentPerfWork @ 0x14023DAA0 (PopFxComponentPerfWork.c)
 *     PopFxDestroyDeviceDpm @ 0x14023DB58 (PopFxDestroyDeviceDpm.c)
 *     PopFxDeviceWork @ 0x14023DE70 (PopFxDeviceWork.c)
 *     PopFxPlatformIdleVeto @ 0x14023E750 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x14023E970 (PopFxProcessorIdleVeto.c)
 *     PopFxReleaseAcpiRefDevice @ 0x14023EE5C (PopFxReleaseAcpiRefDevice.c)
 *     PopFxReleaseDevice @ 0x14023EE80 (PopFxReleaseDevice.c)
 *     PopFxUpdatePlatformIdleState @ 0x14023F920 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x14023FA20 (PopFxUpdateProcessorIdleState.c)
 *     PopFxAcpiForwardNotification @ 0x14024CF68 (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x14024D00C (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x14024D0A0 (PopFxAcpiForwardPepWorkRequest.c)
 *     PopDripsCallbackTakeAction @ 0x14070A6BC (PopDripsCallbackTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x14070A8CC (PopDripsWatchdogTakeAction.c)
 *     ViFilterDeviceUsageNotificationCompletion @ 0x1407C2B90 (ViFilterDeviceUsageNotificationCompletion.c)
 *     ViFilterGenericCompletionRoutine @ 0x1407C3010 (ViFilterGenericCompletionRoutine.c)
 *     ViFilterStartCompletionRoutine @ 0x1407C3100 (ViFilterStartCompletionRoutine.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x1407B4924 (VfRemLockReportBadReleaseTag.c)
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
      && ((MmVerifierData & 0x800) == 0
       || !(unsigned int)VfRemLockReportBadReleaseTag((ULONG_PTR)RemoveLock, (ULONG_PTR)Tag)) )
    {
      _InterlockedIncrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead);
    }
  }
  if ( _InterlockedExchangeAdd(&RemoveLock->Common.IoCount, 0xFFFFFFFF) == 1 )
    KeSetEvent(&RemoveLock->Common.RemoveEvent, 0, 0);
}
