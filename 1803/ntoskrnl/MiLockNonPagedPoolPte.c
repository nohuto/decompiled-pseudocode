/*
 * XREFs of MiLockNonPagedPoolPte @ 0x1400DC2A0
 * Callers:
 *     MiProbeLockFrame @ 0x140020C00 (MiProbeLockFrame.c)
 *     MmProtectPool @ 0x14004B80C (MmProtectPool.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x1400DBD80 (MiInsertNonPagedPoolOnSlist.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiLockNonPagedPoolPte(ULONG_PTR BugCheckParameter3, unsigned __int8 *a2)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r10
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v9; // rax
  unsigned __int64 v10; // r11
  unsigned __int64 v12; // r8
  __int64 v13; // rcx
  int v14; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  while ( 1 )
  {
    v4 = MI_READ_PTE_LOCK_FREE(BugCheckParameter3);
    v15 = v4;
    if ( (v4 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x5307uLL, (__int64)(BugCheckParameter3 << 25) >> 16, BugCheckParameter3, 0LL);
    if ( (unsigned __int64)&v15 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v15 <= v6
      && (MiFlags & 0x1800000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v4 & 1) != 0
      && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
    {
      v12 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 8 * (((unsigned __int64)&v15 >> 3) & 0x1FF));
        if ( (v13 & 0x20) != 0 )
          v4 |= 0x20uLL;
        if ( (v13 & 0x42) != 0 )
          v4 |= 0x42uLL;
      }
    }
    v7 = 48 * ((v4 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v5);
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v14);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    *a2 = CurrentIrql;
    v9 = MI_READ_PTE_LOCK_FREE(BugCheckParameter3);
    if ( v15 == v9 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), v10);
    __writecr8(CurrentIrql);
  }
  return v7;
}
