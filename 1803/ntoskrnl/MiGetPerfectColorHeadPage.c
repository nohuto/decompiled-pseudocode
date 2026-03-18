/*
 * XREFs of MiGetPerfectColorHeadPage @ 0x1400D4EA0
 * Callers:
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiRemovePageAnyColor @ 0x1400B80E0 (MiRemovePageAnyColor.c)
 * Callees:
 *     MiUnlinkFreeOrZeroedPage @ 0x14002D3C0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiReturnFreeZeroPage @ 0x1400517A8 (MiReturnFreeZeroPage.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x1400D508C (KxTryToAcquireQueuedSpinLock.c)
 *     MiReplenishPageSlist @ 0x1400D5110 (MiReplenishPageSlist.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 */

__int64 __fastcall MiGetPerfectColorHeadPage(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int16 a5)
{
  ULONG_PTR v5; // rsi
  __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // di
  int v11; // r14d
  unsigned __int64 v12; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a2 + 16);
  if ( v5 == 0xFFFFFFFFFLL )
    return 0LL;
  while ( 1 )
  {
    v9 = 48 * v5 - 0x58000000000LL;
    if ( (a5 & 1) != 0 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
        return 0LL;
      CurrentIrql = 17;
      v11 = a5 & 0x4000;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v11 = a5 & 0x4000;
      if ( (a5 & 0x4000) != 0 )
      {
        MiLockPageAtDpcInline(48 * v5 - 0x58000000000LL);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        goto LABEL_24;
      }
    }
    if ( (*(_BYTE *)(v9 + 34) & 7) == a4 )
      break;
LABEL_19:
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
      __writecr8(CurrentIrql);
    v5 = *(_QWORD *)(a2 + 16);
    if ( v5 == 0xFFFFFFFFFLL )
      return 0LL;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a2 + 32);
  if ( v11 )
  {
    KxAcquireQueuedSpinLock(&LockHandle, a2 + 32);
  }
  else if ( !(unsigned int)KxTryToAcquireQueuedSpinLock(&LockHandle) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql == 17 )
      return 0LL;
LABEL_24:
    __writecr8(CurrentIrql);
    return 0LL;
  }
  if ( v5 != *(_QWORD *)(a2 + 16) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_19;
  }
  if ( (unsigned int)MiUnlinkFreeOrZeroedPage(v5, a2, a5, v12) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (a5 & 1) == 0 && *(_QWORD *)(a2 + 16) != 0xFFFFFFFFFLL )
      MiReplenishPageSlist(a1, a4, a3);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( CurrentIrql != 17 )
      __writecr8(CurrentIrql);
    return 48 * v5 - 0x58000000000LL;
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    MiReturnFreeZeroPage(48 * v5 - 0x58000000000LL, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
      __writecr8(CurrentIrql);
    return 1LL;
  }
}
