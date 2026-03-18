/*
 * XREFs of IoAcquireRemoveLockEx @ 0x1400692E0
 * Callers:
 *     PoFxPrepareDevice @ 0x14006776C (PoFxPrepareDevice.c)
 *     PopFxAddRefDevice @ 0x140069078 (PopFxAddRefDevice.c)
 *     PopFxProcessWork @ 0x140069444 (PopFxProcessWork.c)
 *     PopFxLockDevice @ 0x14013257C (PopFxLockDevice.c)
 *     PoFxPowerControl @ 0x14013D5E0 (PoFxPowerControl.c)
 *     PopFxAllocatePowerIrp @ 0x1401467CC (PopFxAllocatePowerIrp.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x14015EFF8 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x14022AD48 (PopFxFindAndReferenceAcpiDevice.c)
 *     PopFxPlatformIdleVeto @ 0x14022B3E0 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x14022B600 (PopFxProcessorIdleVeto.c)
 *     PopFxUpdatePlatformIdleState @ 0x14022C560 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x14022C660 (PopFxUpdateProcessorIdleState.c)
 *     PopFxAcpiForwardNotification @ 0x140237EB8 (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x140237FF0 (PopFxAcpiForwardPepWorkRequest.c)
 *     PopFxAcpiUnregisterDevice @ 0x140238310 (PopFxAcpiUnregisterDevice.c)
 *     ViFilterDispatchGeneric @ 0x140780AA0 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x140780B70 (ViFilterDispatchPnp.c)
 *     ViFilterDispatchPower @ 0x140780D30 (ViFilterDispatchPower.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoAcquireRemoveLockEx(
        PIO_REMOVE_LOCK RemoveLock,
        PVOID Tag,
        PCSTR File,
        ULONG Line,
        ULONG RemlockSize)
{
  NTSTATUS v9; // ebp
  struct _LIST_ENTRY *PoolWithTag; // rax
  struct _LIST_ENTRY *v12; // r14
  unsigned __int64 v13; // rbx

  _InterlockedIncrement(&RemoveLock->Common.IoCount);
  v9 = 0;
  if ( RemoveLock->Common.Removed )
  {
    if ( _InterlockedExchangeAdd(&RemoveLock->Common.IoCount, 0xFFFFFFFF) == 1 )
      KeSetEvent(&RemoveLock->Common.RemoveEvent, 0, 0);
    return -1073741738;
  }
  else if ( RemlockSize == 120 )
  {
    PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(
                                          NonPagedPoolNx,
                                          0x28uLL,
                                          (ULONG)RemoveLock[1].Common.RemoveEvent.Header.WaitListHead.Flink);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x28uLL);
      v12->Blink = (struct _LIST_ENTRY *)Tag;
      v12[1].Blink = (struct _LIST_ENTRY *)File;
      LODWORD(v12[2].Flink) = Line;
      v12[1].Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent);
      v12->Flink = RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink;
      RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink = v12;
      KxReleaseSpinLock((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent);
      __writecr8(v13);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead);
    }
  }
  return v9;
}
