/*
 * XREFs of VidSchiDelayReadyRoutine @ 0x1C000EA00
 * Callers:
 *     VidSchiCancelDelayTimerContext @ 0x1C000E9A4 (VidSchiCancelDelayTimerContext.c)
 * Callees:
 *     VidSchiUnwaitContext @ 0x1C000D6E4 (VidSchiUnwaitContext.c)
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
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1888), &LockHandle);
  if ( (DeferredContext[22] & 0x40) != 0 )
  {
    *((_DWORD *)DeferredContext + 44) &= ~0x40u;
    if ( VidSchiUnwaitContext((__int64)DeferredContext, 0x61A8u) )
    {
      *(_QWORD *)(v5 + 1384) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(v5 + 1352), 0, 0);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
