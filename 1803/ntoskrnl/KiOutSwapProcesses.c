/*
 * XREFs of KiOutSwapProcesses @ 0x1400EB1B0
 * Callers:
 *     KeSwapProcessOrStack @ 0x140176C50 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KiReadyOutSwappedThreads @ 0x1400EB350 (KiReadyOutSwappedThreads.c)
 *     MmOutSwapProcess @ 0x1400EB550 (MmOutSwapProcess.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiOutSwapProcesses(signed __int64 *a1)
{
  signed __int64 *v2; // r14
  volatile signed __int32 *v3; // rbx
  unsigned __int8 CurrentIrql; // bp
  int v5; // eax
  _QWORD *v6; // rsi
  volatile signed __int32 *v7; // r8
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 result; // rax
  char v11; // r15
  signed __int64 v12; // rax
  signed __int64 v13; // rcx
  int v14; // [rsp+50h] [rbp+8h] BYREF

  do
  {
    v2 = a1;
    v3 = (volatile signed __int32 *)(a1 - 33);
    a1 = (signed __int64 *)*a1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v14 = 0;
    while ( _interlockedbittestandset(v3, 7u) )
    {
      do
        KeYieldProcessorEx(&v14);
      while ( (*v3 & 0x80u) != 0 );
    }
    v5 = *((_DWORD *)v3 + 143);
    v6 = v3 + 62;
    v7 = (volatile signed __int32 *)*((_QWORD *)v3 + 31);
    if ( v7 == v3 + 62 || (v5 & 7) == 6 )
    {
      _InterlockedXor(v3 + 143, ((unsigned __int8)v5 ^ 0xFD) & 7);
      _InterlockedAnd(v3, 0xFFFFFF7F);
      __writecr8(CurrentIrql);
      MmOutSwapProcess(v3);
      v11 = 0;
      KeGetCurrentIrql();
      __writecr8(2uLL);
      KiAcquireKobjectLockSafe(v3);
      if ( (_QWORD *)*v6 == v6 )
      {
        result = 4LL;
      }
      else
      {
        _m_prefetchw(&KiProcessInSwapListHead);
        v12 = KiProcessInSwapListHead;
        do
        {
          *v2 = v12;
          v13 = v12;
          v12 = _InterlockedCompareExchange64(&KiProcessInSwapListHead, (signed __int64)v2, v12);
        }
        while ( v12 != v13 );
        if ( !v12 )
          v11 = 1;
        result = 7LL;
      }
      _InterlockedXor(v3 + 143, result);
      _InterlockedAnd(v3, 0xFFFFFF7F);
      if ( v11 )
      {
        result = KiAcquireKobjectLockSafe(&KiSwapEvent.Header.Lock);
        KiSwapEvent.Header.SignalState = 1;
        _InterlockedAnd((volatile signed __int32 *)&KiSwapEvent, 0xFFFFFF7F);
      }
      __writecr8(CurrentIrql);
    }
    else
    {
      v8 = (_QWORD *)*v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v9 = (_QWORD *)*((_QWORD *)v3 + 32), (_QWORD *)*v9 != v6) )
        __fastfail(3u);
      *v9 = v8;
      v8[1] = v9;
      *((_QWORD *)v3 + 32) = v3 + 62;
      *v6 = v6;
      _InterlockedXor(v3 + 143, 3u);
      _InterlockedAnd(v3, 0xFFFFFF7F);
      result = KiReadyOutSwappedThreads(v7, CurrentIrql);
    }
  }
  while ( a1 );
  return result;
}
