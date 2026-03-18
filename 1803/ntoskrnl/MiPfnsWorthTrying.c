/*
 * XREFs of MiPfnsWorthTrying @ 0x140124360
 * Callers:
 *     MiFindContiguousPages @ 0x140123CF0 (MiFindContiguousPages.c)
 *     MiFindRebuildCandidate @ 0x14026D51C (MiFindRebuildCandidate.c)
 *     MiScrubNode @ 0x1402707F0 (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x14075693C (MmRelocatePfnList.c)
 * Callees:
 *     MiGetLeafPfnBuddy @ 0x140003F94 (MiGetLeafPfnBuddy.c)
 *     MiActivePageClaimCandidate @ 0x140121970 (MiActivePageClaimCandidate.c)
 *     MiFreeZeroPageSizeIndex @ 0x140121FC0 (MiFreeZeroPageSizeIndex.c)
 *     MiPfnLargeBitSet @ 0x140123C90 (MiPfnLargeBitSet.c)
 *     MiClusterVadFull @ 0x1402693A4 (MiClusterVadFull.c)
 */

__int64 __fastcall MiPfnsWorthTrying(__int16 *a1, unsigned __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  __int16 v5; // r12
  unsigned __int64 v6; // rbp
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 v11; // r9
  char v12; // dl
  unsigned __int8 v13; // al
  char v14; // cl
  int v15; // r13d
  __int64 v16; // r8
  int v17; // eax
  __int64 active; // rax
  __int64 v20; // rdx
  PVOID *v21; // rax
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  _QWORD *v24; // rax
  int v25; // eax
  __int64 v26; // r9
  __int64 v27; // r10
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rdx
  bool v30; // zf
  unsigned __int64 v31; // r8
  __int64 v32; // rdi
  __int64 v33; // rax
  unsigned __int64 LeafPfnBuddy; // rax
  int v35; // eax
  __int64 v36; // r8

  v5 = *a1;
  v6 = -1LL;
  v8 = a2 + 48 * a3;
  v9 = a2;
  *a5 = 0;
  if ( a2 >= v8 )
    return 0LL;
  while ( 1 )
  {
    v11 = 0x2AAAAAAAAAAAAAABLL;
    if ( (((unsigned int)HIDWORD(*(_QWORD *)(v9 + 40)) >> 8) & 0x3FF) != v5 )
    {
      v35 = MiPfnLargeBitSet((__int64)&MiSystemPartition, (__int64)(v9 + 0x58000000000LL) / 48);
      if ( v35 != -1 )
        v9 = 48 * (v36 & ~(MiLargePageSizes[v35] - 1)) - 0x58000000000LL;
LABEL_69:
      v32 = v8 - v9;
LABEL_36:
      v33 = 0x2AAAAAAAAAAAAAABLL;
      return ((__int64)((unsigned __int128)(v32 * (__int128)v33) >> 64) >> 3)
           + ((unsigned __int64)((unsigned __int128)(v32 * (__int128)v33) >> 64) >> 63);
    }
    v12 = *(_BYTE *)(v9 + 34);
    v13 = v12 & 7;
    if ( (v12 & 7u) <= 1 )
    {
      v25 = MiFreeZeroPageSizeIndex(v9);
      if ( v25 != -1 )
      {
        v28 = MiLargePageSizes[v25];
        v29 = ((unsigned __int64)((unsigned __int128)((__int64)(v9 - v27) * (__int128)v26) >> 64) >> 63)
            + ((__int64)((unsigned __int128)((__int64)(v9 - v27) * (__int128)v26) >> 64) >> 3);
        if ( v28 >= 0x200 )
          v30 = (a4 & 0x2000000) == 0;
        else
          v30 = (a4 & 0x1000000) == 0;
        if ( !v30 )
        {
          v32 = v8 - 48 * (v29 & ~(v28 - 1)) - v27;
          v33 = v26;
          return ((__int64)((unsigned __int128)(v32 * (__int128)v33) >> 64) >> 3)
               + ((unsigned __int64)((unsigned __int128)(v32 * (__int128)v33) >> 64) >> 63);
        }
        v31 = v28 - (v29 & (v28 - 1));
        if ( v31 > ((unsigned __int64)((unsigned __int128)((__int64)(v8 - v9) * (__int128)v26) >> 64) >> 63)
                 + ((__int64)((unsigned __int128)((__int64)(v8 - v9) * (__int128)v26) >> 64) >> 3) )
          v31 = ((unsigned __int64)((unsigned __int128)((__int64)(v8 - v9) * (__int128)v26) >> 64) >> 63)
              + ((__int64)((unsigned __int128)((__int64)(v8 - v9) * (__int128)v26) >> 64) >> 3);
        v9 = 48 * v31 + v9 - 48;
      }
      goto LABEL_17;
    }
    if ( v13 == 5 )
      break;
    v14 = *(_BYTE *)(v9 + 35);
    v15 = 0;
    if ( v14 < 0 )
    {
      if ( v13 == 2 )
      {
        if ( *(_WORD *)(v9 + 32) )
          goto LABEL_41;
        goto LABEL_17;
      }
      if ( v13 != 6
        || (v12 & 0x10) != 0
        || *(_WORD *)(v9 + 32) != 1
        || ((*(_QWORD *)(v9 + 40) >> 54) & 7) == 2
        || (v14 & 8) != 0
        || (*(_DWORD *)v9 & 1) == 0 )
      {
        goto LABEL_41;
      }
    }
    else
    {
      if ( v13 <= 4u )
      {
        if ( *(_WORD *)(v9 + 32) || (a4 & 0x4000000) == 0 && *(__int64 *)(v9 + 8) >= 0 )
          goto LABEL_41;
        goto LABEL_17;
      }
      v16 = (__int64)(v9 + 0x58000000000LL) / 48;
      if ( (v16 & 0xFFFFFFFFFFFFFE00uLL) != v6 )
      {
        v6 = ((__int64)(v9 + 0x58000000000LL) / 48) & 0xFFFFFFFFFFFFFE00uLL;
        v17 = MiPfnLargeBitSet((__int64)a1, (__int64)(v9 + 0x58000000000LL) / 48);
        if ( v17 != -1 )
        {
          v32 = v8 - 48 * (v16 & ~(MiLargePageSizes[v17] - 1)) + 0x58000000000LL;
          goto LABEL_36;
        }
        v11 = 0x2AAAAAAAAAAAAAABLL;
      }
      if ( (*(_BYTE *)(v9 + 34) & 7) != 6 )
        goto LABEL_41;
      if ( ((*(_QWORD *)(v9 + 40) >> 54) & 7) == 2 )
      {
        if ( (a4 & 8) != 0 )
          goto LABEL_41;
        LeafPfnBuddy = MiGetLeafPfnBuddy((_QWORD *)v9);
        if ( LeafPfnBuddy == -32LL )
          goto LABEL_41;
        if ( !LeafPfnBuddy )
          *a5 = 1;
        goto LABEL_17;
      }
      if ( (a4 & 0x800000) != 0 )
      {
        if ( (*(_QWORD *)(v9 + 40) & 0x200000000000000LL) != 0 )
        {
          if ( (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 )
            goto LABEL_41;
        }
        else if ( v16 == (v16 & 0xFFFFFFFFFFFFFFF0uLL) && (__int64)(v8 - v9) >= 768 )
        {
          v15 = 1;
        }
      }
    }
    active = MiActivePageClaimCandidate((__int64)a1, v9, 0);
    if ( active )
      return (__int64)(v8 + 0x58000000000LL) / 48 - (~(active - 1) & ((__int64)(v9 + 0x58000000000LL) / 48));
    if ( (a4 & 8) != 0 || v15 == 1 && (unsigned int)MiClusterVadFull(v9, 0LL) == 1 )
      goto LABEL_69;
LABEL_17:
    v9 += 48LL;
    if ( v9 >= v8 )
      return 0LL;
  }
  if ( (*(_QWORD *)(v9 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL )
    goto LABEL_41;
  if ( (*(_BYTE *)v9 & 1) != 0 )
    goto LABEL_17;
  v20 = (__int64)(v9 + 0x58000000000LL) / 48;
  v21 = &qword_1403CC468;
  v22 = 0;
  while ( (PVOID)v20 != *v21 )
  {
    ++v22;
    ++v21;
    if ( v22 >= 4 )
    {
      v23 = 0;
      v24 = &unk_1403CC448;
      while ( v20 != *v24 )
      {
        ++v23;
        ++v24;
        if ( v23 >= 4 )
          goto LABEL_17;
      }
      break;
    }
  }
LABEL_41:
  v32 = v8 - v9;
  v33 = v11;
  return ((__int64)((unsigned __int128)(v32 * (__int128)v33) >> 64) >> 3)
       + ((unsigned __int64)((unsigned __int128)(v32 * (__int128)v33) >> 64) >> 63);
}
