/*
 * XREFs of MiGetPerfectColorHeadPage @ 0x1400CAD78
 * Callers:
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiRemovePageAnyColor @ 0x1400C7CB8 (MiRemovePageAnyColor.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140050BA0 (MiUnlinkFreeOrZeroedPage.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     MiReplenishPageSlist @ 0x1400C53D0 (MiReplenishPageSlist.c)
 *     MiReturnFreeZeroPage @ 0x1400CABF0 (MiReturnFreeZeroPage.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x1400CAF3C (KxTryToAcquireQueuedSpinLock.c)
 */

__int64 __fastcall MiGetPerfectColorHeadPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int16 a5)
{
  unsigned __int64 v5; // rsi
  int v6; // r12d
  unsigned int i; // r13d
  __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // di
  volatile __int64 *v12; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a2 + 16);
  v6 = a4;
  for ( i = a3; v5 != 0xFFFFFFFFFLL; v5 = *(_QWORD *)(a2 + 16) )
  {
    v10 = 48 * v5 - 0x58000000000LL;
    if ( (a5 & 1) != 0 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
        return 0LL;
      CurrentIrql = 17;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (a5 & 0x1000) != 0 )
      {
        MiLockPageAtDpcInline(48 * v5 - 0x58000000000LL);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        goto LABEL_23;
      }
    }
    if ( (*(_BYTE *)(v10 + 34) & 7) == v6 )
    {
      LockHandle.LockQueue.Next = 0LL;
      v12 = (volatile __int64 *)(a2 + 32);
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a2 + 32);
      if ( (a5 & 0x1000) != 0 )
      {
        KxAcquireQueuedSpinLock((__int64)&LockHandle, v12);
      }
      else if ( !(unsigned int)KxTryToAcquireQueuedSpinLock(&LockHandle, v12, a3, a4) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( CurrentIrql != 17 )
        {
LABEL_23:
          __writecr8(CurrentIrql);
          return 0LL;
        }
        return 0LL;
      }
      if ( v5 == *(_QWORD *)(a2 + 16) )
      {
        if ( (unsigned int)MiUnlinkFreeOrZeroedPage(v5, a2, a5) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (a5 & 1) == 0 && *(_QWORD *)(a2 + 16) != 0xFFFFFFFFFLL )
            MiReplenishPageSlist(a1, v6, i);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( CurrentIrql != 17 )
            __writecr8(CurrentIrql);
          return 48 * v5 - 0x58000000000LL;
        }
        else
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          MiReturnFreeZeroPage(48 * v5 - 0x58000000000LL, 0);
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( CurrentIrql != 17 )
            __writecr8(CurrentIrql);
          return 1LL;
        }
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
      __writecr8(CurrentIrql);
  }
  return 0LL;
}
