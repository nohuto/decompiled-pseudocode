/*
 * XREFs of IoReleaseRemoveLockEx @ 0x1400BA4B0
 * Callers:
 *     PopFxProcessWork @ 0x140077B28 (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x140078628 (PopFxCompleteComponentActivation.c)
 *     PopFxActivateDevice @ 0x140146BBC (PopFxActivateDevice.c)
 *     PoFxPrepareDevice @ 0x140146F44 (PoFxPrepareDevice.c)
 *     PoFxNotifySurprisePowerOn @ 0x140155070 (PoFxNotifySurprisePowerOn.c)
 *     PoFxPowerControl @ 0x140155870 (PoFxPowerControl.c)
 *     PopRequestCompletion @ 0x140165E50 (PopRequestCompletion.c)
 *     PopFxReleasePowerIrp @ 0x1401665F4 (PopFxReleasePowerIrp.c)
 *     PopRequestPowerIrp @ 0x1401671C0 (PopRequestPowerIrp.c)
 *     PopFxAllocatePowerIrp @ 0x140167CD0 (PopFxAllocatePowerIrp.c)
 *     PopFxComponentWork @ 0x14016D8E0 (PopFxComponentWork.c)
 *     PopFxComponentPerfWork @ 0x140275050 (PopFxComponentPerfWork.c)
 *     PopFxDestroyDeviceDpm @ 0x140275108 (PopFxDestroyDeviceDpm.c)
 *     PopFxDeviceWork @ 0x140275230 (PopFxDeviceWork.c)
 *     PopFxPlatformIdleVeto @ 0x140275AC0 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x140275CE0 (PopFxProcessorIdleVeto.c)
 *     PopFxReleaseAcpiRefDevice @ 0x1402761C4 (PopFxReleaseAcpiRefDevice.c)
 *     PopFxReleaseDevice @ 0x1402761E8 (PopFxReleaseDevice.c)
 *     PopFxUpdatePlatformIdleState @ 0x140276F00 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x140277000 (PopFxUpdateProcessorIdleState.c)
 *     PopFxAcpiForwardNotification @ 0x140282D00 (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x140282DA4 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x140282E38 (PopFxAcpiForwardPepWorkRequest.c)
 *     ViFilterDeviceUsageNotificationCompletion @ 0x140830100 (ViFilterDeviceUsageNotificationCompletion.c)
 *     ViFilterGenericCompletionRoutine @ 0x140830590 (ViFilterGenericCompletionRoutine.c)
 *     ViFilterStartCompletionRoutine @ 0x140830680 (ViFilterStartCompletionRoutine.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x140821AF4 (VfRemLockReportBadReleaseTag.c)
 */

void __stdcall IoReleaseRemoveLockEx(PIO_REMOVE_LOCK RemoveLock, PVOID Tag, ULONG RemlockSize)
{
  char v5; // bp
  LIST_ENTRY *p_WaitListHead; // rsi
  KIRQL v7; // r13
  struct _LIST_ENTRY *Flink; // rdi
  PVOID *p_Flink; // rcx
  struct _LIST_ENTRY *v10; // rax
  PVOID **v11; // r14

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
          p_Flink = (PVOID *)*p_Flink;
        }
        else
        {
          v5 = 1;
          v10 = (struct _LIST_ENTRY *)*p_Flink;
          if ( p_Flink == (PVOID *)p_WaitListHead->Flink )
          {
            p_WaitListHead->Flink = v10;
            v11 = (PVOID **)&RemoveLock[3].Common.RemoveEvent.Header.WaitListHead;
          }
          else
          {
            Flink->Flink = v10;
            v11 = (PVOID **)Flink;
          }
          ExFreePoolWithTag(p_Flink, 0);
          p_Flink = *v11;
        }
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
