/*
 * XREFs of MiActivePageClaimCandidate @ 0x1400B8C20
 * Callers:
 *     MiPfnsWorthTrying @ 0x1400B6AD0 (MiPfnsWorthTrying.c)
 *     MiAllocateMostlyContiguous @ 0x1400B8420 (MiAllocateMostlyContiguous.c)
 *     MiClaimPhysicalRun @ 0x14010E174 (MiClaimPhysicalRun.c)
 * Callees:
 *     MiHyperPage @ 0x140039380 (MiHyperPage.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiActivePageClaimCandidate(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // r15
  __int64 v6; // rdx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rdi
  unsigned int v9; // ebx
  unsigned __int64 v11; // rbp
  __int64 v12; // r13
  unsigned int v13; // r10d
  __int64 *v14; // r11
  __int64 v15; // rcx
  __int64 v16; // rbp
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  int v19; // r11d
  unsigned __int64 v20; // rcx
  unsigned int v21; // r10d
  unsigned int v22; // r9d
  __int64 v23; // r8
  unsigned __int64 v24; // rcx
  unsigned __int16 v25; // ax
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r10
  unsigned int i; // r14d
  __int64 v29; // rax
  unsigned __int64 v30; // r9
  unsigned __int16 v31; // ax
  unsigned __int64 v32; // r9

  v5 = *(_QWORD *)(a2 + 8);
  v6 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v7 = ((unsigned __int64)v6 >> 63) + (v6 >> 3);
  v8 = v5 | 0x8000000000000000uLL;
  if ( (*(_BYTE *)(a2 + 35) & 8) != 0 )
    return 1;
  v11 = *(_QWORD *)(a2 + 40);
  v12 = *(_QWORD *)(qword_14036C8F8 + 8 * ((v11 >> 40) & 0x3FF));
  if ( v12 != a1 )
    return 1;
  v9 = 0;
  if ( *(_BYTE *)(a1 + 4550) )
  {
    v13 = 0;
    v14 = MiLargePageSizes;
    v15 = a1 + 4808;
    while ( !*(_QWORD *)v15 || !_bittest64(*(const signed __int64 **)(v15 + 8), v7 / *v14) )
    {
      ++v13;
      v15 += 16LL;
      ++v14;
      if ( v13 >= 2 )
        goto LABEL_10;
    }
    return ((unsigned int)v7 & (LODWORD(MiLargePageSizes[v13]) - 1)) + 1;
  }
LABEL_10:
  if ( (v11 & 0x200000000000000LL) == 0 )
  {
    if ( v8 != -8LL
      && (v8 < 0xFFFF800000000000uLL
       || *((_BYTE *)&MiState + ((v8 >> 39) & 0x1FF) + 6400) != 5
       && *((_BYTE *)&MiState + ((v8 >> 39) & 0x1FF) + 6400) != 13)
      && ((v11 >> 54) & 7) != 1 )
    {
      v16 = v11 & 0xFFFFFFFFFLL;
      if ( v16 != 0xFFFFFFFFDLL && v8 >= 0xFFFFF68000000000uLL && v8 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v17 = (__int64)(v8 << 25) >> 16;
        if ( *(_QWORD *)a2 )
        {
          if ( !PsInitialSystemProcess || v7 != PsInitialSystemProcess->DirectoryTableBase >> 12 )
          {
            v26 = 0xFFFFF6FB40000000uLL;
            v27 = 0xFFFFF6FB5FFFFFF8uLL;
            for ( i = 0; i < 3; ++i )
            {
              if ( v8 <= v27 && v8 >= v26 )
              {
                if ( *(_WORD *)(a2 + 32) > 1u )
                  return 1;
                if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000 )
                  return 1;
                return v9;
              }
              v26 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v27 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            }
            if ( v16 == v7 )
            {
              if ( v8 == 0xFFFFF6FB7DBEDF68uLL && *(_WORD *)(a2 + 32) <= 1u )
                return v9;
            }
            else
            {
              v29 = *(_QWORD *)(a2 + 24);
              v30 = v29 & 0x3FFFFFFFFFFFFFFFLL;
              if ( (v29 & 0x3FFFFFFFFFFFFFFFuLL) > 1 )
              {
                if ( (unsigned int)MiGetSystemRegionType((__int64)(v8 << 25) >> 16) == 6 )
                {
                  if ( *(_WORD *)(a2 + 32) > 1u )
                    return 1;
                  LOBYTE(v9) = v32 >= 0x10000;
                }
                else
                {
                  if ( !(unsigned int)MiHyperPage(a2) )
                    return 1;
                  if ( *(_WORD *)(a2 + 32) > 1u )
                    return 1;
                }
                return v9;
              }
              if ( (v29 & 0xFFFFFFFFFLL) != 0 && (v17 < qword_14036C178 || v17 >= qword_14036C178 + 0x2000) )
              {
                v31 = *(_WORD *)(a2 + 32);
                if ( v31 <= 1u && v31 <= v30 )
                  return v9;
              }
            }
          }
        }
        else
        {
          v18 = (((unsigned __int64)qword_14036D870 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v19 = 0;
          v20 = v5 | 0x8000000000000000uLL;
          do
          {
            if ( v20 > 0xFFFFF6FFFFFFFFFFuLL )
              break;
            if ( v20 <= (((unsigned __int64)qword_14036C5D0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL && v20 >= v18 )
              return v9;
            ++v19;
            v20 = (__int64)(v20 << 25) >> 16;
            v18 &= 0xFFFFFFFFFFFFF000uLL;
          }
          while ( v20 >= 0xFFFFF68000000000uLL );
          v21 = *(_DWORD *)(v12 + 5592);
          v22 = 0;
          if ( v21 )
          {
            v23 = v12 + 5600;
            do
            {
              v24 = *(_QWORD *)(*(_QWORD *)v23 + 216LL);
              if ( v24 )
              {
                if ( v17 >= v24 && v17 < v24 + 4LL * *(_QWORD *)(*(_QWORD *)v23 + 8LL) )
                  return v9;
              }
              ++v22;
              v23 += 8LL;
            }
            while ( v22 < v21 );
          }
          if ( v17 >= 0xFFFF800000000000uLL && *((_BYTE *)&MiState + ((v17 >> 39) & 0x1FF) + 6400) == 5 )
          {
            if ( *(_WORD *)(a2 + 32) <= 1u
              && (MiFlags & 0x800) == 0
              && (a3 != 1 || (MI_READ_PTE_LOCK_FREE(v8) & 0x201) == 1) )
            {
              return v9;
            }
          }
          else if ( v17 >= MmPfnDatabase )
          {
            return 1;
          }
        }
      }
    }
    return 1;
  }
  if ( (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0
    || v8 == qword_14036C1A8
    || a3 == 1 && (v11 & 0x10000000000000LL) != 0 )
  {
    return 1;
  }
  if ( (v11 & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
    return (unsigned int)(v7 & 0x1FF) + 1;
  v25 = *(_WORD *)(a2 + 32);
  if ( v25 > 1u || v25 > (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) || !*(_QWORD *)a2 || v5 >= 0 )
    return 1;
  return v9;
}
