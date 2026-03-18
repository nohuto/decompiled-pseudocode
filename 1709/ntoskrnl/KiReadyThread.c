/*
 * XREFs of KiReadyThread @ 0x1400932D0
 * Callers:
 *     KiReadyOutSwappedThreads @ 0x140090BC0 (KiReadyOutSwappedThreads.c)
 *     KiProcessExpiredTimerList @ 0x1400939C0 (KiProcessExpiredTimerList.c)
 *     KiProcessThreadWaitList @ 0x1401122C0 (KiProcessThreadWaitList.c)
 *     KiSetSystemTimeDpc @ 0x140149AE0 (KiSetSystemTimeDpc.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KiDeferredReadyThread @ 0x140072C60 (KiDeferredReadyThread.c)
 *     KiRequestProcessInSwap @ 0x1400BFCE0 (KiRequestProcessInSwap.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 */

int __fastcall KiReadyThread(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  signed __int64 v6; // rax
  volatile signed __int32 *v7; // rdi
  signed __int64 *v8; // rbx
  signed __int64 v9; // rcx
  __int64 v10; // rsi

  v3 = *(_DWORD *)(a2 + 120);
  if ( (v3 & 0x20000) != 0 )
  {
    if ( (v3 & 0x100000) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0x14u);
      if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 184) + 572LL), 8u) & 7) != 0 )
      {
        v10 = *(_QWORD *)(a2 + 184);
        KiAcquireKobjectLockSafe(v10);
        if ( (*(_DWORD *)(v10 + 572) & 7) != 0 )
        {
          LODWORD(v6) = KiRequestProcessInSwap(a2, v10);
          return v6;
        }
        _InterlockedAnd((volatile signed __int32 *)v10, 0xFFFFFF7F);
      }
    }
    LODWORD(v6) = KiDeferredReadyThread(a1, a2, a3);
    return v6;
  }
  v7 = *(volatile signed __int32 **)(a2 + 184);
  KiAcquireKobjectLockSafe(v7);
  if ( (v7[143] & 7) != 0 )
  {
    LODWORD(v6) = KiRequestProcessInSwap(a2, v7);
  }
  else
  {
    _InterlockedExchangeAdd(v7 + 143, 8u);
    _InterlockedAnd(v7, 0xFFFFFF7F);
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0x14u);
    *(_BYTE *)(a2 + 388) = 6;
    v8 = (signed __int64 *)(a2 + 216);
    _m_prefetchw(&KiStackInSwapListHead);
    v6 = KiStackInSwapListHead;
    do
    {
      *v8 = v6;
      v9 = v6;
      v6 = _InterlockedCompareExchange64(&KiStackInSwapListHead, (signed __int64)v8, v6);
    }
    while ( v6 != v9 );
    if ( !v6 )
      LODWORD(v6) = KeSetEvent(&KiSwapEvent, 10, 0);
  }
  return v6;
}
