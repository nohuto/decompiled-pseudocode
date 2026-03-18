/*
 * XREFs of MiActivePageClaimCandidate @ 0x140078F50
 * Callers:
 *     MiTradePage @ 0x140078860 (MiTradePage.c)
 *     MiPfnsWorthTrying @ 0x1400C5DF0 (MiPfnsWorthTrying.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiHyperPage @ 0x14012DB1C (MiHyperPage.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

__int64 __fastcall MiActivePageClaimCandidate(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rsi
  __int64 v11; // r13
  unsigned int v12; // r10d
  __int64 v13; // r8
  __int64 *v14; // r11
  unsigned __int16 v15; // ax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned int v19; // r11d
  unsigned int v20; // r10d
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int16 v24; // ax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // r9
  unsigned __int16 v30; // ax

  v5 = 1LL;
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v8 = ((unsigned __int64)v7 >> 63) + (v7 >> 3);
  v9 = v6 | 0x8000000000000000uLL;
  if ( (*(_BYTE *)(a2 + 35) & 8) != 0 )
    return v5;
  v10 = *(_QWORD *)(a2 + 40);
  v11 = *(_QWORD *)(qword_140388AF0 + 8 * ((v10 >> 40) & 0x3FF));
  if ( v11 != a1 )
    return v5;
  v12 = 0;
  if ( !*(_BYTE *)(a1 + 4678) )
  {
LABEL_9:
    if ( (v10 & 0x200000000000000LL) != 0 )
    {
      if ( (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) == 0
        && v9 != qword_1403884E8
        && (a3 != 1 || (v10 & 0x10000000000000LL) == 0) )
      {
        if ( (v10 & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
        {
          return 512LL;
        }
        else
        {
          v15 = *(_WORD *)(a2 + 32);
          if ( v15 <= 1u && v15 <= (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) && (*(_DWORD *)a2 & 1) != 0 && v6 < 0 )
            return 0LL;
        }
      }
      return v5;
    }
    if ( v9 == -8LL
      || v9 >= 0xFFFF800000000000uLL
      && (*((_BYTE *)&MiState[794] + ((v9 >> 39) & 0x1FF)) == 5 || *((_BYTE *)&MiState[794] + ((v9 >> 39) & 0x1FF)) == 13)
      || ((v10 >> 54) & 7) == 1
      || (v10 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL
      || v9 < 0xFFFFF68000000000uLL
      || v9 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      return v5;
    }
    v16 = (__int64)(v9 << 25) >> 16;
    if ( (*(_DWORD *)a2 & 1) != 0 )
    {
      if ( PsInitialSystemProcess && v8 == PsInitialSystemProcess->DirectoryTableBase >> 12 )
        return v5;
      v25 = 0xFFFFF6FB40000000uLL;
      v26 = 0xFFFFF6FB5FFFFFF8uLL;
      do
      {
        if ( v9 >= v25 && v9 <= v26 )
        {
          if ( *(_WORD *)(a2 + 32) <= 1u && (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
            return 0LL;
          return v5;
        }
        v25 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v26 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        ++v12;
      }
      while ( v12 < 3 );
      if ( (v10 & 0xFFFFFFFFFLL) == v8 )
      {
        v5 = 0LL;
        if ( v9 != 0xFFFFF6FB7DBEDF68uLL || *(_WORD *)(a2 + 32) > 1u )
          return 1LL;
        return v5;
      }
      v27 = *(_QWORD *)(a2 + 24);
      v28 = v27 & 0x3FFFFFFFFFFFFFFFLL;
      if ( (v27 & 0x3FFFFFFFFFFFFFFFuLL) <= 1 )
      {
        if ( (v27 & 0xFFFFFFFFFLL) != 0 && (v16 < qword_1403884B8 || v16 >= qword_1403884B8 + 0x2000) )
        {
          v30 = *(_WORD *)(a2 + 32);
          if ( v30 <= 1u && v30 <= v28 )
            return 0LL;
        }
        return v5;
      }
      if ( (unsigned int)MiGetSystemRegionType(v16) == 6 )
      {
        if ( *(_WORD *)(a2 + 32) <= 1u && v29 < 0x10000 )
          return 0LL;
        return v5;
      }
      if ( !(unsigned int)MiHyperPage(a2) || *(_WORD *)(a2 + 32) > 1u )
        return v5;
    }
    else
    {
      v17 = (((unsigned __int64)qword_140389B40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v18 = v6 | 0x8000000000000000uLL;
      do
      {
        if ( v18 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        if ( v18 >= v17 && v18 <= (((unsigned __int64)qword_140388958 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        {
          v24 = *(_WORD *)(a2 + 32);
          if ( v24 <= 1u && v24 <= (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) )
            return 0LL;
          return v5;
        }
        ++v12;
        v17 &= 0xFFFFFFFFFFFFF000uLL;
        v18 = (__int64)(v18 << 25) >> 16;
      }
      while ( v18 >= 0xFFFFF68000000000uLL );
      v19 = *(_DWORD *)(v11 + 5784);
      v20 = 0;
      if ( !v19 )
      {
LABEL_42:
        if ( v16 >= 0xFFFF800000000000uLL
          && *((_BYTE *)&MiState[794] + ((v16 >> 39) & 0x1FF)) == 5
          && *(_WORD *)(a2 + 32) <= 1u
          && (MiFlags & 0x800) == 0 )
        {
          if ( a3 != 1 )
            return 0LL;
          v23 = *(_QWORD *)v9;
          if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL )
            LOWORD(v23) = MiReadPteShadow(v9, *(_QWORD *)v9);
          if ( (v23 & 1) != 0 && (v23 & 0x200) == 0 )
            return 0LL;
        }
        return v5;
      }
      v21 = v11 + 5792;
      while ( 1 )
      {
        v22 = *(_QWORD *)(*(_QWORD *)v21 + 216LL);
        if ( v22 )
        {
          if ( v16 >= v22 && v16 < v22 + 4LL * *(_QWORD *)(*(_QWORD *)v21 + 8LL) )
            break;
        }
        ++v20;
        v21 += 8LL;
        if ( v20 >= v19 )
          goto LABEL_42;
      }
    }
    return 0LL;
  }
  v13 = a1 + 4936;
  v14 = MiLargePageSizes;
  while ( !*(_QWORD *)v13 || !_bittest64(*(const signed __int64 **)(v13 + 8), v8 / *v14) )
  {
    ++v12;
    v13 += 16LL;
    ++v14;
    if ( v12 >= 2 )
    {
      v12 = 0;
      goto LABEL_9;
    }
  }
  return MiLargePageSizes[v12];
}
