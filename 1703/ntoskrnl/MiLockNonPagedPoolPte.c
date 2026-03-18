/*
 * XREFs of MiLockNonPagedPoolPte @ 0x1400A7D10
 * Callers:
 *     MiProtectPool @ 0x1400A5D90 (MiProtectPool.c)
 *     MiClearNonPagedPtes @ 0x1400A7AB0 (MiClearNonPagedPtes.c)
 *     MiProbeLockFrame @ 0x1400B3EF0 (MiProbeLockFrame.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x1400DD2E0 (MiInsertNonPagedPoolOnSlist.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiLockNonPagedPoolPte(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v6; // r9
  __int64 v7; // rax
  int v9; // [rsp+68h] [rbp+10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  while ( 1 )
  {
    v10 = MI_READ_PTE_LOCK_FREE(a1);
    v4 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v10) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v6);
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v9);
      while ( *(__int64 *)(v4 + 24) < 0 );
    }
    *a2 = CurrentIrql;
    v7 = MI_READ_PTE_LOCK_FREE(a1);
    if ( v10 == v7 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
  }
  return v4;
}
