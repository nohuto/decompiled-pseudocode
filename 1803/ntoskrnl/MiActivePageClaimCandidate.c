/*
 * XREFs of MiActivePageClaimCandidate @ 0x140121970
 * Callers:
 *     MiTradePage @ 0x140121260 (MiTradePage.c)
 *     MiPfnsWorthTrying @ 0x140124360 (MiPfnsWorthTrying.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiHyperPage @ 0x1400D1A9C (MiHyperPage.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiIsPfnFileOnly @ 0x140121930 (MiIsPfnFileOnly.c)
 */

__int64 __fastcall MiActivePageClaimCandidate(__int64 a1, __int64 a2, int a3)
{
  int v3; // r10d
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // r9
  __int64 *v13; // r10
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  int v17; // r11d
  unsigned __int64 v18; // rcx
  unsigned int v19; // r10d
  unsigned int v20; // r9d
  __int64 v21; // r8
  unsigned __int64 v22; // rcx
  __int64 v24; // rdx
  unsigned __int16 v25; // ax
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r9
  unsigned int i; // r10d
  __int64 v29; // rax
  unsigned __int64 v30; // r8
  unsigned __int16 v31; // ax
  bool v32; // cc
  unsigned __int64 v33; // r8
  unsigned __int16 v34; // ax

  v3 = a3;
  v5 = 1LL;
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v8 = ((unsigned __int64)v7 >> 63) + (v7 >> 3);
  v9 = v6 | 0x8000000000000000uLL;
  if ( (*(_BYTE *)(a2 + 35) & 8) == 0 )
  {
    v10 = *(_QWORD *)(a2 + 40);
    v11 = *(_QWORD *)(qword_1403CBD88 + 8 * ((v10 >> 40) & 0x3FF));
    if ( v11 == a1 )
    {
      if ( *(_BYTE *)(a1 + 4766) )
      {
        v12 = 0LL;
        v13 = MiLargePageSizes;
        v14 = a1 + 5000;
        while ( !*(_QWORD *)v14 || !_bittest64(*(const signed __int64 **)(v14 + 8), v8 / *v13) )
        {
          v12 = (unsigned int)(v12 + 1);
          v14 += 16LL;
          ++v13;
          if ( (unsigned int)v12 >= 2 )
          {
            v3 = a3;
            goto LABEL_9;
          }
        }
        return MiLargePageSizes[v12];
      }
      else
      {
LABEL_9:
        if ( (v10 & 0x200000000000000LL) != 0 )
        {
          v24 = *(_QWORD *)(a2 + 24);
          if ( (v24 & 0x4000000000000000LL) == 0
            && v9 != qword_1403CB670
            && v9 != qword_1403CB678
            && (v3 != 1 || (unsigned int)MiIsPfnFileOnly(a2) != 1) )
          {
            if ( (v10 & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
            {
              return 512LL;
            }
            else
            {
              v25 = *(_WORD *)(a2 + 32);
              if ( v25 <= 1u && v25 <= (v24 & 0x3FFFFFFFFFFFFFFFuLL) && (*(_BYTE *)a2 & 1) != 0 && v6 < 0 )
                return 0LL;
            }
          }
        }
        else if ( v9 != -8LL
               && (v9 < 0xFFFF800000000000uLL
                || ((*((unsigned __int8 *)&MiState[946] + ((v9 >> 39) & 0x1FF)) - 5) & 0xFFFFFFF7) != 0)
               && ((v10 >> 54) & 7) != 1
               && (v10 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL
               && v9 >= 0xFFFFF68000000000uLL
               && v9 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          v15 = (__int64)(v9 << 25) >> 16;
          if ( (*(_DWORD *)a2 & 1) != 0 )
          {
            if ( !PsInitialSystemProcess || v8 != PsInitialSystemProcess->DirectoryTableBase >> 12 )
            {
              v26 = 0xFFFFF6FB40000000uLL;
              v27 = 0xFFFFF6FB5FFFFFF8uLL;
              for ( i = 0; i < 3; ++i )
              {
                if ( v9 <= v27 && v9 >= v26 )
                {
                  if ( *(_WORD *)(a2 + 32) <= 1u && (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
                    return 0LL;
                  return v5;
                }
                v26 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v27 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              }
              if ( (v10 & 0xFFFFFFFFFLL) == v8 )
              {
                v5 = 0LL;
                if ( v9 != 0xFFFFF6FB7DBEDF68uLL || *(_WORD *)(a2 + 32) > 1u )
                  return 1LL;
              }
              else
              {
                v29 = *(_QWORD *)(a2 + 24);
                v30 = v29 & 0x3FFFFFFFFFFFFFFFLL;
                if ( (v29 & 0x3FFFFFFFFFFFFFFFuLL) > 1 )
                {
                  if ( (unsigned int)MiGetSystemRegionType((__int64)(v9 << 25) >> 16) == 6 )
                  {
                    if ( *(_WORD *)(a2 + 32) <= 1u && v33 < 0x10000 )
                      return 0LL;
                  }
                  else if ( (unsigned int)MiHyperPage(a2) )
                  {
                    v32 = *(_WORD *)(a2 + 32) <= 1u;
                    goto LABEL_62;
                  }
                }
                else if ( (v29 & 0xFFFFFFFFFLL) != 0 && (v15 < qword_1403CB640 || v15 >= qword_1403CB640 + 12288) )
                {
                  v31 = *(_WORD *)(a2 + 32);
                  if ( v31 <= 1u )
                  {
                    v32 = v31 <= v30;
LABEL_62:
                    if ( !v32 )
                      return v5;
                    return 0LL;
                  }
                }
              }
            }
          }
          else
          {
            v16 = (((unsigned __int64)qword_1403CD100 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v17 = 0;
            v18 = v6 | 0x8000000000000000uLL;
            do
            {
              if ( v18 > 0xFFFFF6FFFFFFFFFFuLL )
                break;
              if ( v18 <= (((unsigned __int64)qword_1403CBB70 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL && v18 >= v16 )
              {
                v34 = *(_WORD *)(a2 + 32);
                if ( v34 > 1u || v34 > (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) )
                  return v5;
                return 0LL;
              }
              ++v17;
              v16 &= 0xFFFFFFFFFFFFF000uLL;
              v18 = (__int64)(v18 << 25) >> 16;
            }
            while ( v18 >= 0xFFFFF68000000000uLL );
            v19 = *(_DWORD *)(v11 + 6872);
            v20 = 0;
            if ( v19 )
            {
              v21 = v11 + 6880;
              do
              {
                v22 = *(_QWORD *)(*(_QWORD *)v21 + 216LL);
                if ( v22 )
                {
                  if ( v15 >= v22 && v15 < v22 + 4LL * *(_QWORD *)(*(_QWORD *)v21 + 8LL) )
                    return 0LL;
                }
                ++v20;
                v21 += 8LL;
              }
              while ( v20 < v19 );
            }
            if ( v15 >= 0xFFFF800000000000uLL
              && *((_BYTE *)&MiState[946] + ((v15 >> 39) & 0x1FF)) == 5
              && *(_WORD *)(a2 + 32) <= 1u
              && (MiFlags & 0x800) == 0 )
            {
              if ( a3 != 1 )
                return 0LL;
              if ( (MI_READ_PTE_LOCK_FREE(v9) & 0x201) == 1 )
                return 0LL;
            }
          }
        }
      }
    }
  }
  return v5;
}
