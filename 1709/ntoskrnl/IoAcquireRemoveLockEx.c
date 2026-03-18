/*
 * XREFs of IoAcquireRemoveLockEx @ 0x1400FD8A0
 * Callers:
 *     PopFxAllocatePowerIrp @ 0x1400B420C (PopFxAllocatePowerIrp.c)
 *     PoFxPrepareDevice @ 0x1400FCDC8 (PoFxPrepareDevice.c)
 *     PopFxAddRefDevice @ 0x1400FD858 (PopFxAddRefDevice.c)
 *     PopFxProcessWork @ 0x1400FD9F8 (PopFxProcessWork.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1400FE7B8 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopFxLockDevice @ 0x1400FF2FC (PopFxLockDevice.c)
 *     PoFxPowerControl @ 0x14023D690 (PoFxPowerControl.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x14023DF18 (PopFxFindAndReferenceAcpiDevice.c)
 *     PopFxPlatformIdleVeto @ 0x14023E750 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x14023E970 (PopFxProcessorIdleVeto.c)
 *     PopFxUpdatePlatformIdleState @ 0x14023F920 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x14023FA20 (PopFxUpdateProcessorIdleState.c)
 *     PopFxAcpiForwardNotification @ 0x14024CF68 (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x14024D0A0 (PopFxAcpiForwardPepWorkRequest.c)
 *     PopFxAcpiUnregisterDevice @ 0x14024D3C0 (PopFxAcpiUnregisterDevice.c)
 *     ViFilterDispatchGeneric @ 0x1407C2C50 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x1407C2D20 (ViFilterDispatchPnp.c)
 *     ViFilterDispatchPower @ 0x1407C2EE0 (ViFilterDispatchPower.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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
