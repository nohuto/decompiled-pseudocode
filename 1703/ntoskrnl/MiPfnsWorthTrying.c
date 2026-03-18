/*
 * XREFs of MiPfnsWorthTrying @ 0x1400B6AD0
 * Callers:
 *     MiFindContiguousPages @ 0x1400B65D0 (MiFindContiguousPages.c)
 *     MiFindRebuildCandidate @ 0x140223E98 (MiFindRebuildCandidate.c)
 *     MiScrubNode @ 0x140226610 (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x1406BF984 (MmRelocatePfnList.c)
 * Callees:
 *     MiFreeZeroPageSizeIndex @ 0x1400B6080 (MiFreeZeroPageSizeIndex.c)
 *     MiActivePageClaimCandidate @ 0x1400B8C20 (MiActivePageClaimCandidate.c)
 *     MiClusterVadFull @ 0x140221F98 (MiClusterVadFull.c)
 *     MiPfnLargeBitSet @ 0x140224620 (MiPfnLargeBitSet.c)
 */

__int64 __fastcall MiPfnsWorthTrying(__int16 *a1, unsigned __int64 a2, __int64 a3, int a4, _DWORD *a5, _QWORD *a6)
{
  __int16 v7; // cx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbp
  char v12; // cl
  unsigned __int8 v13; // r11
  unsigned __int8 v14; // al
  BOOL v15; // esi
  unsigned __int64 v16; // rsi
  unsigned int v17; // r9d
  __int16 *v18; // rcx
  __int64 *v19; // r10
  __int64 active; // rax
  __int128 v21; // rax
  int v23; // eax
  __int64 v24; // rdi
  unsigned int v25; // ecx
  __int64 v26; // rdx
  PVOID *v27; // rax
  unsigned int v28; // ecx
  _QWORD *v29; // rax
  unsigned __int64 v30; // r8
  __int64 v31; // rdx
  bool v32; // zf
  unsigned __int64 v33; // r8
  int v34; // eax
  __int16 v35; // [rsp+60h] [rbp+8h]
  int v36; // [rsp+78h] [rbp+20h]

  v36 = a4;
  v7 = *a1;
  v8 = a2 + 48 * a3;
  v9 = -1LL;
  v35 = v7;
  *a6 = 0LL;
  v10 = a2;
  *a5 = 0;
  if ( a2 >= v8 )
    return 0LL;
  while ( 1 )
  {
    v11 = *(_QWORD *)(v10 + 40);
    if ( ((HIDWORD(v11) >> 8) & 0x3FF) != v7 )
    {
      v34 = MiPfnLargeBitSet(&MiSystemPartition, (__int64)(v10 + 0x58000000000LL) / 48);
      if ( v34 != -1 )
        v10 = 48 * (((__int64)(v10 + 0x58000000000LL) / 48) & ~(MiLargePageSizes[v34] - 1)) - 0x58000000000LL;
LABEL_56:
      v24 = v8 - v10;
LABEL_26:
      v21 = v24 * (__int128)0x2AAAAAAAAAAAAAABLL;
      return (*((__int64 *)&v21 + 1) >> 3) + (*((_QWORD *)&v21 + 1) >> 63);
    }
    v12 = *(_BYTE *)(v10 + 34);
    v13 = v12 & 7;
    if ( (v12 & 7u) > 1 )
      break;
    v23 = MiFreeZeroPageSizeIndex(v10);
    if ( v23 == -1 )
    {
      ++*a6;
      goto LABEL_23;
    }
    v30 = MiLargePageSizes[v23];
    v31 = (__int64)(v10 + 0x58000000000LL) / 48;
    if ( v30 >= 0x200 )
      v32 = (a4 & 0x2000000) == 0;
    else
      v32 = (a4 & 0x1000000) == 0;
    if ( !v32 )
    {
      v24 = v8 - 48 * (v31 & ~(v30 - 1)) + 0x58000000000LL;
      goto LABEL_26;
    }
    v33 = v30 - (v31 & (v30 - 1));
    if ( v33 > (__int64)(v8 - v10) / 48 )
      v33 = (__int64)(v8 - v10) / 48;
    v10 += 48 * v33 - 48;
    *a6 += v33;
LABEL_23:
    v10 += 48LL;
    if ( v10 >= v8 )
      return 0LL;
    v7 = v35;
  }
  if ( v13 != 5 )
  {
    v14 = *(_BYTE *)(v10 + 35);
    v15 = 0;
    if ( v14 >= 0x80u )
    {
      if ( v13 == 2 )
      {
        if ( *(_WORD *)(v10 + 32) )
          goto LABEL_55;
        goto LABEL_23;
      }
      if ( v13 != 6
        || (v12 & 0x10) != 0
        || *(_WORD *)(v10 + 32) != 1
        || ((v11 >> 54) & 7) == 2
        || (v14 & 8) != 0
        || !*(_QWORD *)v10 )
      {
        goto LABEL_55;
      }
      goto LABEL_18;
    }
    if ( v13 <= 4u )
    {
      if ( *(_WORD *)(v10 + 32) || (a4 & 0x4000000) == 0 && *(__int64 *)(v10 + 8) >= 0 )
        goto LABEL_55;
      goto LABEL_23;
    }
    v16 = (__int64)(v10 + 0x58000000000LL) / 48;
    if ( (v16 & 0xFFFFFFFFFFFFFE00uLL) != v9 )
    {
      v9 = ((__int64)(v10 + 0x58000000000LL) / 48) & 0xFFFFFFFFFFFFFE00uLL;
      if ( *((_BYTE *)a1 + 4550) )
      {
        v17 = 0;
        v18 = a1 + 2404;
        v19 = MiLargePageSizes;
        while ( !*(_QWORD *)v18 || !_bittest64(*((const signed __int64 **)v18 + 1), v16 / *v19) )
        {
          ++v17;
          v18 += 8;
          ++v19;
          if ( v17 >= 2 )
          {
            a4 = v36;
            goto LABEL_14;
          }
        }
        v24 = v8 - 48 * (v16 & ~(MiLargePageSizes[v17] - 1)) + 0x58000000000LL;
        goto LABEL_26;
      }
    }
LABEL_14:
    if ( v13 != 6 )
      goto LABEL_56;
    if ( ((v11 >> 54) & 7) == 2 )
    {
      if ( (a4 & 8) != 0 || *(_QWORD *)v10 == -5LL )
        goto LABEL_56;
      if ( (*(_QWORD *)v10 & 1) == 0 )
        *a5 = 1;
      goto LABEL_23;
    }
    if ( (a4 & 0x800000) != 0 )
    {
      if ( (v11 & 0x200000000000000LL) != 0 )
      {
        if ( (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 )
          goto LABEL_56;
      }
      else if ( v16 == (v16 & 0xFFFFFFFFFFFFFFF0uLL) )
      {
        v15 = (__int64)(v8 - v10) >= 768;
        goto LABEL_18;
      }
    }
    v15 = 0;
LABEL_18:
    active = MiActivePageClaimCandidate(a1, v10, 0LL);
    if ( active )
    {
      v21 = (__int64)(48 * active - v10 + v8 - 48) * (__int128)0x2AAAAAAAAAAAAAABLL;
      return (*((__int64 *)&v21 + 1) >> 3) + (*((_QWORD *)&v21 + 1) >> 63);
    }
    a4 = v36;
    if ( (v36 & 8) != 0 )
      goto LABEL_56;
    if ( v15 )
    {
      if ( (unsigned int)MiClusterVadFull(v10, 0LL) == 1 )
        goto LABEL_56;
      a4 = v36;
    }
    goto LABEL_23;
  }
  if ( (*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL )
    goto LABEL_55;
  if ( *(_QWORD *)v10 )
    goto LABEL_23;
  v25 = 0;
  v26 = (__int64)(v10 + 0x58000000000LL) / 48;
  v27 = &qword_14036CF28;
  while ( (PVOID)v26 != *v27 )
  {
    ++v25;
    ++v27;
    if ( v25 >= 4 )
    {
      v28 = 0;
      v29 = &unk_14036CF08;
      while ( v26 != *v29 )
      {
        ++v28;
        ++v29;
        if ( v28 >= 4 )
          goto LABEL_23;
      }
      break;
    }
  }
LABEL_55:
  v21 = (__int64)(v8 - v10) * (__int128)0x2AAAAAAAAAAAAAABLL;
  return (*((__int64 *)&v21 + 1) >> 3) + (*((_QWORD *)&v21 + 1) >> 63);
}
