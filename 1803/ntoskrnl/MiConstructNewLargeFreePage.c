/*
 * XREFs of MiConstructNewLargeFreePage @ 0x1400A3550
 * Callers:
 *     MiCoalesceFreeLargePages @ 0x1400E89A0 (MiCoalesceFreeLargePages.c)
 *     MiRebuildLargePage @ 0x14026D668 (MiRebuildLargePage.c)
 * Callees:
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiInsertLargePageInNodeListHelper @ 0x140122680 (MiInsertLargePageInNodeListHelper.c)
 */

__int64 __fastcall MiConstructNewLargeFreePage(ULONG_PTR a1, unsigned int a2, char a3)
{
  __int64 v5; // r15
  unsigned __int64 v6; // r14
  __int64 v7; // rbp
  unsigned int v8; // edi
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rsi
  unsigned __int8 CurrentIrql; // bp
  __int64 v12; // rdx
  __int64 v13; // rax
  char v14; // r9
  char v15; // r9
  __int64 v16; // rbx
  unsigned __int64 v17; // rdi
  __int64 result; // rax
  __int64 v19; // [rsp+60h] [rbp+8h]
  int v20; // [rsp+68h] [rbp+10h] BYREF

  v5 = a2;
  v6 = MiLargePageSizes[v5];
  v7 = 48 * a1 - 0x58000000000LL;
  v8 = 0;
  v19 = v7;
  if ( v6 )
  {
    v9 = (volatile signed __int32 *)(v7 + 24);
    v10 = 0LL;
    do
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v20 = 0;
      while ( _interlockedbittestandset64(v9, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v20);
        while ( *(__int64 *)v9 < 0 );
      }
      v12 = MiLargePageSizes[v5];
      v13 = 48 * (v10 + a1) - 0x58000000000LL;
      *(_QWORD *)(v13 + 24) &= 0xC000000000000000uLL;
      *(_QWORD *)(v13 + 40) &= ~0x200000000000000uLL;
      v14 = *(_BYTE *)(v13 + 34);
      *(_BYTE *)(v13 + 35) &= 0xF8u;
      v15 = v14 & 0xEF;
      *(_BYTE *)(v13 + 34) = v15;
      *(_QWORD *)(v13 + 8) = 0LL;
      if ( ((v12 - 1) & (v10 + a1)) != 0 )
      {
        *(_QWORD *)(v13 + 40) ^= (*(_QWORD *)(v13 + 40) ^ MiLargePageContainingFrames[v5]) & 0xFFFFFFFFFLL;
        *(_BYTE *)(v13 + 34) = v15 ^ (a3 ^ v15) & 7;
      }
      _InterlockedAnd64((volatile signed __int64 *)v9, 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      ++v8;
      v9 += 12;
      v10 = v8;
    }
    while ( v8 < v6 );
    v7 = v19;
  }
  v16 = MiLargePageContainingFrames[v5];
  v17 = (unsigned __int8)MiLockPageInline(v7);
  *(_QWORD *)(v7 + 40) ^= (v16 ^ *(_QWORD *)(v7 + 40)) & 0xFFFFFFFFFLL;
  *(_BYTE *)(v7 + 34) ^= (a3 ^ *(_BYTE *)(v7 + 34)) & 7;
  MiInsertLargePageInNodeListHelper(a1);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v17);
  return result;
}
