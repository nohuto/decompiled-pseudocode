/*
 * XREFs of IoReleaseRemoveLockAndWaitEx @ 0x140132450
 * Callers:
 *     PopFxAcpiUnregisterDevice @ 0x14024D3C0 (PopFxAcpiUnregisterDevice.c)
 *     PopFxUnregisterDevice @ 0x1406F944C (PopFxUnregisterDevice.c)
 *     ViFilterDispatchPnp @ 0x1407C2D20 (ViFilterDispatchPnp.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x1407B48F8 (VfRemLockReportBadReleaseAndWaitTag.c)
 */

void __stdcall IoReleaseRemoveLockAndWaitEx(PIO_REMOVE_LOCK RemoveLock, PVOID Tag, ULONG RemlockSize)
{
  struct _LIST_ENTRY *Blink; // r8

  RemoveLock->Common.Removed = 1;
  _InterlockedDecrement(&RemoveLock->Common.IoCount);
  if ( _InterlockedExchangeAdd(&RemoveLock->Common.IoCount, 0xFFFFFFFF) > 1 )
    KeWaitForSingleObject(&RemoveLock->Common.RemoveEvent, Executive, 0, 0, 0LL);
  if ( RemlockSize == 120
    && _InterlockedDecrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead) < 0 )
  {
    Blink = RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink->Blink;
    if ( Tag != Blink
      && ((MmVerifierData & 0x800) == 0
       || !(unsigned int)VfRemLockReportBadReleaseAndWaitTag((ULONG_PTR)RemoveLock, (ULONG_PTR)Tag, (ULONG_PTR)Blink)) )
    {
      _InterlockedIncrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead);
    }
    ExFreePoolWithTag(RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink, 0);
    RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)MmBadPointer;
  }
}
