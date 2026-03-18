/*
 * XREFs of MiInitializeLargeNonPagedPoolLeafFrames @ 0x140127490
 * Callers:
 *     MiExpandNonPagedPool @ 0x140126E74 (MiExpandNonPagedPool.c)
 *     MiInitializeNonPagedPool @ 0x140803DE4 (MiInitializeNonPagedPool.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiInitializeLargeNonPagedPoolLeafFrames(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  __int64 CurrentIrql; // r14
  __int16 v6; // r9
  unsigned __int64 v7; // r9
  __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int64 result; // rax
  int v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h]

  v2 = a1;
  v3 = 48 * a2 - 0x58000000000LL;
  v4 = (unsigned __int64)MI_READ_PTE_LOCK_FREE((((((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12;
  CurrentIrql = KeGetCurrentIrql();
  v13 = CurrentIrql;
  __writecr8(2uLL);
  v7 = v6 & 0x1FF;
  if ( v7 < 0x200 )
  {
    v8 = v4 & 0xFFFFFFFFFLL;
    v9 = 512 - v7;
    do
    {
      v12 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v12);
        while ( *(__int64 *)(v3 + 24) < 0 );
      }
      *(_QWORD *)(v3 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
      v10 = *(_QWORD *)(v3 + 24) & 0xC000000000000001uLL;
      *(_QWORD *)(v3 + 8) = v2;
      *(_QWORD *)v3 = 0LL;
      *(_QWORD *)(v3 + 24) = v10 | 1;
      LOBYTE(v10) = *(_BYTE *)(v3 + 34) & 0xFE;
      *(_WORD *)(v3 + 32) = 1;
      *(_BYTE *)(v3 + 34) = v10 | 6;
      *(_QWORD *)(v3 + 40) = v8 | *(_QWORD *)(v3 + 40) & 0xFFFFFFF000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v3 += 48LL;
      v2 += 8LL;
      --v9;
    }
    while ( v9 );
    LOBYTE(CurrentIrql) = v13;
  }
  result = (unsigned __int8)CurrentIrql;
  __writecr8((unsigned __int8)CurrentIrql);
  return result;
}
