/*
 * XREFs of KiOutSwapProcesses @ 0x140040840
 * Callers:
 *     KeSwapProcessOrStack @ 0x14015C090 (KeSwapProcessOrStack.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MmOutSwapProcess @ 0x140040CE4 (MmOutSwapProcess.c)
 *     KiReadyOutSwappedThreads @ 0x140041050 (KiReadyOutSwappedThreads.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 */

signed __int64 __fastcall KiOutSwapProcesses(_QWORD *a1)
{
  _QWORD *v2; // rbx
  unsigned __int8 CurrentIrql; // bp
  int v4; // eax
  _QWORD *v5; // rsi
  _QWORD *v6; // r8
  char v7; // r14
  signed __int64 result; // rax
  int v9; // edx
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  signed __int64 *v12; // r8
  signed __int64 v13; // rcx
  int v14; // [rsp+40h] [rbp+8h] BYREF

  do
  {
    v2 = a1 - 33;
    a1 = (_QWORD *)*a1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v14 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)v2, 7u) )
    {
      do
        KeYieldProcessorEx(&v14);
      while ( (*(_DWORD *)v2 & 0x80u) != 0 );
    }
    v4 = *((_DWORD *)v2 + 143);
    v5 = v2 + 31;
    v6 = (_QWORD *)v2[31];
    if ( v6 == v2 + 31 || (v4 & 7) == 6 )
    {
      _InterlockedXor((volatile signed __int32 *)v2 + 143, ((unsigned __int8)v4 ^ 0xFD) & 7);
      _InterlockedAnd((volatile signed __int32 *)v2, 0xFFFFFF7F);
      __writecr8(CurrentIrql);
      MmOutSwapProcess(v2);
      v7 = 0;
      KeGetCurrentIrql();
      __writecr8(2uLL);
      result = KiAcquireKobjectLockSafe(v2);
      if ( (_QWORD *)*v5 == v5 )
      {
        v9 = 1;
      }
      else
      {
        v9 = 2;
        v12 = v2 + 33;
        _m_prefetchw(&KiProcessInSwapListHead);
        result = KiProcessInSwapListHead;
        do
        {
          *v12 = result;
          v13 = result;
          result = _InterlockedCompareExchange64(&KiProcessInSwapListHead, (signed __int64)v12, result);
        }
        while ( result != v13 );
        if ( !result )
          v7 = 1;
      }
      _InterlockedXor((volatile signed __int32 *)v2 + 143, v9 ^ 5);
      _InterlockedAnd((volatile signed __int32 *)v2, 0xFFFFFF7F);
      if ( v7 )
      {
        result = KiAcquireKobjectLockSafe(&KiSwapEvent);
        KiSwapEvent.Header.SignalState = 1;
        _InterlockedAnd((volatile signed __int32 *)&KiSwapEvent, 0xFFFFFF7F);
      }
      __writecr8(CurrentIrql);
    }
    else
    {
      v10 = (_QWORD *)*v5;
      v11 = (_QWORD *)v2[32];
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v11 != v5 )
        __fastfail(3u);
      *v11 = v10;
      v10[1] = v11;
      v2[32] = v2 + 31;
      *v5 = v5;
      _InterlockedXor((volatile signed __int32 *)v2 + 143, 3u);
      _InterlockedAnd((volatile signed __int32 *)v2, 0xFFFFFF7F);
      result = KiReadyOutSwappedThreads(v6, CurrentIrql);
    }
  }
  while ( a1 );
  return result;
}
