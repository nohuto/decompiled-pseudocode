/*
 * XREFs of VidSchiDelayReadyRoutine @ 0x1C0012B20
 * Callers:
 *     VidSchiCancelDelayTimerContext @ 0x1C0012AC4 (VidSchiCancelDelayTimerContext.c)
 * Callees:
 *     VidSchiUnwaitContext @ 0x1C0011080 (VidSchiUnwaitContext.c)
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
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1904), &LockHandle);
  if ( (DeferredContext[23] & 0x40) != 0 )
  {
    *((_DWORD *)DeferredContext + 46) &= ~0x40u;
    if ( VidSchiUnwaitContext((__int64)DeferredContext, 0x6231u) )
    {
      *(_QWORD *)(v5 + 1400) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(v5 + 1368), 0, 0);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
