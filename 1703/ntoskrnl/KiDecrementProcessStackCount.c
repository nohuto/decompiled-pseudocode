/*
 * XREFs of KiDecrementProcessStackCount @ 0x14003FB0C
 * Callers:
 *     KiOutSwapKernelStacks @ 0x14002B858 (KiOutSwapKernelStacks.c)
 *     KeDeleteThread @ 0x14003FA70 (KeDeleteThread.c)
 *     KiSuspendThread @ 0x14007301C (KiSuspendThread.c)
 *     KiCommitThreadWait @ 0x1400EAB20 (KiCommitThreadWait.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 */

__int64 __fastcall KiDecrementProcessStackCount(__int64 a1)
{
  __int64 result; // rax
  char v3; // di
  unsigned __int8 CurrentIrql; // si
  unsigned __int32 v5; // eax
  unsigned __int32 v6; // ett
  signed __int64 *v7; // rbx
  signed __int64 v8; // rax
  signed __int64 v9; // rcx

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 572), 0xFFFFFFF8) & 0xFFFFFFF8;
  if ( (_DWORD)result == 8 )
  {
    v3 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    KiAcquireKobjectLockSafe(a1);
    v5 = *(_DWORD *)(a1 + 572);
    if ( (v5 & 7) == 0 && *(_QWORD *)(a1 + 48) != a1 + 48 )
    {
      while ( v5 < 8 )
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 572), v5 & 0xFFFFFFF8 | 3, v5);
        if ( v6 == v5 )
        {
          v3 = 1;
          break;
        }
      }
    }
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    if ( v3 )
    {
      v7 = (signed __int64 *)(a1 + 264);
      _m_prefetchw(&KiProcessOutSwapListHead);
      v8 = KiProcessOutSwapListHead;
      do
      {
        *v7 = v8;
        v9 = v8;
        v8 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v7, v8);
      }
      while ( v8 != v9 );
      if ( !v8 )
        KeSetEvent(&KiSwapEvent, 10, 0);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
