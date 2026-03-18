/*
 * XREFs of KiOutSwapProcesses @ 0x140111E50
 * Callers:
 *     KeSwapProcessOrStack @ 0x140142E10 (KeSwapProcessOrStack.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiReadyOutSwappedThreads @ 0x140090BC0 (KiReadyOutSwappedThreads.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     MmOutSwapProcess @ 0x140111FF0 (MmOutSwapProcess.c)
 */

__int64 __fastcall KiOutSwapProcesses(_QWORD *a1)
{
  _QWORD *v2; // rbx
  unsigned __int8 CurrentIrql; // bp
  int v4; // eax
  _QWORD *v5; // rsi
  _QWORD *v6; // r8
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  __int64 result; // rax
  char v10; // r14
  signed __int64 *v11; // rdx
  signed __int64 v12; // rax
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
      v10 = 0;
      KeGetCurrentIrql();
      __writecr8(2uLL);
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v2);
      if ( (_QWORD *)*v5 == v5 )
      {
        result = 4LL;
      }
      else
      {
        v11 = v2 + 33;
        _m_prefetchw(&KiProcessInSwapListHead);
        v12 = KiProcessInSwapListHead;
        do
        {
          *v11 = v12;
          v13 = v12;
          v12 = _InterlockedCompareExchange64(&KiProcessInSwapListHead, (signed __int64)v11, v12);
        }
        while ( v12 != v13 );
        if ( !v12 )
          v10 = 1;
        result = 7LL;
      }
      _InterlockedXor((volatile signed __int32 *)v2 + 143, result);
      _InterlockedAnd((volatile signed __int32 *)v2, 0xFFFFFF7F);
      if ( v10 )
      {
        result = KiAcquireKobjectLockSafe(&KiSwapEvent.Header.Lock);
        KiSwapEvent.Header.SignalState = 1;
        _InterlockedAnd((volatile signed __int32 *)&KiSwapEvent, 0xFFFFFF7F);
      }
      __writecr8(CurrentIrql);
    }
    else
    {
      v7 = (_QWORD *)*v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v8 = (_QWORD *)v2[32], (_QWORD *)*v8 != v5) )
        __fastfail(3u);
      *v8 = v7;
      v7[1] = v8;
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
