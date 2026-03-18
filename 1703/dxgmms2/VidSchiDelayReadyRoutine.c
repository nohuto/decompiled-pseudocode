/*
 * XREFs of VidSchiDelayReadyRoutine @ 0x1C00021D0
 * Callers:
 *     VidSchiCancelDelayTimerContext @ 0x1C0002174 (VidSchiCancelDelayTimerContext.c)
 * Callees:
 *     VidSchiUnwaitContext @ 0x1C000DA38 (VidSchiUnwaitContext.c)
 */

void __fastcall VidSchiDelayReadyRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v5; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(DeferredContext[12] + 24LL);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1880), &LockHandle);
  if ( (DeferredContext[22] & 0x40) != 0 )
  {
    *((_DWORD *)DeferredContext + 44) &= ~0x40u;
    if ( (unsigned __int8)VidSchiUnwaitContext(DeferredContext, 24438LL) )
    {
      *(_QWORD *)(v5 + 1376) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(v5 + 1344), 0, 0);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
