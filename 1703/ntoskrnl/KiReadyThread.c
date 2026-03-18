/*
 * XREFs of KiReadyThread @ 0x1400E2E20
 * Callers:
 *     KiProcessThreadWaitList @ 0x14001C060 (KiProcessThreadWaitList.c)
 *     KiReadyOutSwappedThreads @ 0x140041050 (KiReadyOutSwappedThreads.c)
 *     KiTimer2Expiration @ 0x140047B60 (KiTimer2Expiration.c)
 *     KiProcessExpiredTimerList @ 0x1400E40B0 (KiProcessExpiredTimerList.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiRequestProcessInSwap @ 0x1400B2AE0 (KiRequestProcessInSwap.c)
 *     KiDeferredReadyThread @ 0x1400E05F0 (KiDeferredReadyThread.c)
 */

char __fastcall KiReadyThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  signed __int64 v7; // rax
  volatile signed __int32 *v8; // rdi
  signed __int64 *v9; // rbx
  signed __int64 v10; // rcx
  __int64 v11; // rsi

  v4 = *(_DWORD *)(a2 + 120);
  if ( (v4 & 0x10000) != 0 )
  {
    if ( (v4 & 0x80000) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0x13u);
      if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 184) + 572LL), 8u) & 7) != 0 )
      {
        v11 = *(_QWORD *)(a2 + 184);
        KiAcquireKobjectLockSafe((volatile signed __int32 *)v11);
        if ( (*(_DWORD *)(v11 + 572) & 7) != 0 )
        {
          LOBYTE(v7) = KiRequestProcessInSwap(a2, v11);
          return v7;
        }
        _InterlockedAnd((volatile signed __int32 *)v11, 0xFFFFFF7F);
      }
    }
    LOBYTE(v7) = KiDeferredReadyThread(a1, a2, a3, a4);
    return v7;
  }
  v8 = *(volatile signed __int32 **)(a2 + 184);
  KiAcquireKobjectLockSafe(v8);
  if ( (v8[143] & 7) != 0 )
  {
    LOBYTE(v7) = KiRequestProcessInSwap(a2, (__int64)v8);
  }
  else
  {
    _InterlockedExchangeAdd(v8 + 143, 8u);
    _InterlockedAnd(v8, 0xFFFFFF7F);
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0x13u);
    *(_BYTE *)(a2 + 388) = 6;
    v9 = (signed __int64 *)(a2 + 216);
    _m_prefetchw(&KiStackInSwapListHead);
    v7 = KiStackInSwapListHead;
    do
    {
      *v9 = v7;
      v10 = v7;
      v7 = _InterlockedCompareExchange64(&KiStackInSwapListHead, (signed __int64)v9, v7);
    }
    while ( v7 != v10 );
    if ( !v7 )
      LOBYTE(v7) = KeSetEvent(&KiSwapEvent, 10, 0);
  }
  return v7;
}
