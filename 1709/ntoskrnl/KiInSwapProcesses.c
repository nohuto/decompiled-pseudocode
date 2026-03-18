/*
 * XREFs of KiInSwapProcesses @ 0x14011465C
 * Callers:
 *     KeSwapProcessOrStack @ 0x140142E10 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiReadyOutSwappedThreads @ 0x140090BC0 (KiReadyOutSwappedThreads.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     MmInSwapProcess @ 0x140114710 (MmInSwapProcess.c)
 */

__int64 __fastcall KiInSwapProcesses(_QWORD *a1)
{
  _QWORD *v2; // rbx
  unsigned __int8 CurrentIrql; // si
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx
  __int64 result; // rax

  do
  {
    v2 = a1 - 33;
    a1 = (_QWORD *)*a1;
    _InterlockedXor((volatile signed __int32 *)v2 + 143, 6u);
    MmInSwapProcess(v2);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v2);
    v4 = v2 + 31;
    v5 = (_QWORD *)v2[31];
    if ( v5 == v2 + 31 )
    {
      v5 = 0LL;
    }
    else
    {
      if ( (_QWORD *)v5[1] != v4 || (v6 = (_QWORD *)v2[32], (_QWORD *)*v6 != v4) )
        __fastfail(3u);
      *v6 = v5;
      v5[1] = v6;
      v2[32] = v2 + 31;
      *v4 = v4;
    }
    _InterlockedXor((volatile signed __int32 *)v2 + 143, 4u);
    _InterlockedAnd((volatile signed __int32 *)v2, 0xFFFFFF7F);
    if ( v5 )
    {
      result = KiReadyOutSwappedThreads(v5, CurrentIrql);
    }
    else
    {
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  while ( a1 );
  return result;
}
