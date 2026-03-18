/*
 * XREFs of MiFreeUnmappedPageTables @ 0x1400F6C7C
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1400A4150 (MiReleaseSystemCacheView.c)
 *     MiReturnSystemVa @ 0x1400F6A90 (MiReturnSystemVa.c)
 *     MiDeletePteRange @ 0x1402151D4 (MiDeletePteRange.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiDecrementShareCount @ 0x1400EB4C0 (MiDecrementShareCount.c)
 */

void __fastcall MiFreeUnmappedPageTables(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rbp
  unsigned __int8 v9; // r12

  v3 = 0LL;
  v6 = a1;
  if ( a1 )
  {
    do
    {
      v7 = *(_QWORD *)v6;
      v8 = 48 * (*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v9 = MiLockPageInline(v6);
      *(_BYTE *)(v6 + 34) = *(_BYTE *)(v6 + 34) & 0xF8 | 6;
      if ( (unsigned int)MiDecrementShareCount(v6) == 3 )
        ++a2[1];
      if ( a3 == 1 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiLockPageAtDpcInline(v8);
        MiDecrementShareCount(v8);
        v6 = v8;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v9);
      ++v3;
      v6 = v7;
    }
    while ( v7 );
  }
  a2[3] += v3;
  *a2 += v3;
}
