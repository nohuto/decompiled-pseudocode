/*
 * XREFs of IoReleaseRemoveLockAndWaitEx @ 0x1401F7A10
 * Callers:
 *     PopFxAcpiUnregisterDevice @ 0x140238310 (PopFxAcpiUnregisterDevice.c)
 *     PopFxUnregisterDevice @ 0x1406C8A30 (PopFxUnregisterDevice.c)
 *     ViFilterDispatchPnp @ 0x140780B70 (ViFilterDispatchPnp.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x140772B38 (VfRemLockReportBadReleaseAndWaitTag.c)
 */

void __stdcall IoReleaseRemoveLockAndWaitEx(PIO_REMOVE_LOCK RemoveLock, PVOID Tag, ULONG RemlockSize)
{
  RemoveLock->Common.Removed = 1;
  _InterlockedDecrement(&RemoveLock->Common.IoCount);
  if ( _InterlockedExchangeAdd(&RemoveLock->Common.IoCount, 0xFFFFFFFF) > 1 )
    KeWaitForSingleObject(&RemoveLock->Common.RemoveEvent, Executive, 0, 0, 0LL);
  if ( RemlockSize == 120
    && _InterlockedDecrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead) < 0 )
  {
    if ( Tag != RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink->Blink
      && ((MmVerifierData & 0x800) == 0 || !(unsigned int)VfRemLockReportBadReleaseAndWaitTag(RemoveLock, Tag)) )
    {
      _InterlockedIncrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead);
    }
    ExFreePoolWithTag(RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink, 0);
    RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)MmBadPointer;
  }
}
