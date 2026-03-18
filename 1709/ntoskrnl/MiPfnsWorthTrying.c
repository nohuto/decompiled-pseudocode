/*
 * XREFs of MiPfnsWorthTrying @ 0x1400C5DF0
 * Callers:
 *     MiFindContiguousPages @ 0x140078120 (MiFindContiguousPages.c)
 *     MiFindRebuildCandidate @ 0x140232BE4 (MiFindRebuildCandidate.c)
 *     MiScrubNode @ 0x140238CDC (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x1406ED4E8 (MmRelocatePfnList.c)
 * Callees:
 *     MiActivePageClaimCandidate @ 0x140078F50 (MiActivePageClaimCandidate.c)
 *     MiPfnLargeBitSet @ 0x1400C61C0 (MiPfnLargeBitSet.c)
 *     MiFreeZeroPageSizeIndex @ 0x1400C70F0 (MiFreeZeroPageSizeIndex.c)
 *     MiGetLeafPfnBuddy @ 0x1400D00B8 (MiGetLeafPfnBuddy.c)
 *     MiClusterVadFull @ 0x14022EDF4 (MiClusterVadFull.c)
 */

__int64 __fastcall MiPfnsWorthTrying(__int16 *a1, unsigned __int64 a2, __int64 a3, int a4, _DWORD *a5, _QWORD *a6)
{
  __int16 v8; // r13
  __int64 v9; // r9
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  __int64 v14; // r10
  char v15; // dl
  unsigned __int8 v16; // al
  char v17; // cl
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // eax
  __int64 active; // rax
  int v23; // eax
  __int64 v24; // r10
  __int64 v25; // r11
  __int64 v26; // rdi
  __int64 v27; // rax
  unsigned int v28; // ecx
  __int64 v29; // rdx
  PVOID *v30; // rax
  unsigned int v31; // ecx
  _QWORD *v32; // rax
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // rdx
  bool v35; // zf
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // rax
  __int64 LeafPfnBuddy; // rax
  int v39; // eax
  __int64 v40; // r8
  unsigned int v41; // [rsp+78h] [rbp+30h]

  v8 = *a1;
  v9 = 0LL;
  v10 = -1LL;
  v11 = a2 + 48 * a3;
  *a6 = 0LL;
  *a5 = 0;
  v12 = a2;
  if ( a2 >= v11 )
    return 0LL;
  while ( 1 )
  {
    v14 = 0x2AAAAAAAAAAAAAABLL;
    if ( (((unsigned int)HIDWORD(*(_QWORD *)(v12 + 40)) >> 8) & 0x3FF) != v8 )
    {
      v39 = MiPfnLargeBitSet(&MiSystemPartition, (__int64)(v12 + 0x58000000000LL) / 48);
      if ( v39 != -1 )
        v12 = 48 * (v40 & ~(MiLargePageSizes[v39] - 1)) - 0x58000000000LL;
LABEL_71:
      v26 = v11 - v12;
LABEL_20:
      v27 = 0x2AAAAAAAAAAAAAABLL;
      return ((__int64)((unsigned __int128)(v26 * (__int128)v27) >> 64) >> 3)
           + ((unsigned __int64)((unsigned __int128)(v26 * (__int128)v27) >> 64) >> 63);
    }
    v15 = *(_BYTE *)(v12 + 34);
    v16 = v15 & 7;
    if ( (v15 & 7u) <= 1 )
    {
      v23 = MiFreeZeroPageSizeIndex(v12);
      if ( v23 == -1 )
      {
        ++*a6;
      }
      else
      {
        v33 = MiLargePageSizes[v23];
        v34 = ((unsigned __int64)((unsigned __int128)((__int64)(v12 - v25) * (__int128)v24) >> 64) >> 63)
            + ((__int64)((unsigned __int128)((__int64)(v12 - v25) * (__int128)v24) >> 64) >> 3);
        if ( v33 >= 0x200 )
          v35 = (a4 & 0x2000000) == 0;
        else
          v35 = (a4 & 0x1000000) == 0;
        if ( !v35 )
        {
          v26 = v11 - 48 * (v34 & ~(v33 - 1)) - v25;
          v27 = v24;
          return ((__int64)((unsigned __int128)(v26 * (__int128)v27) >> 64) >> 3)
               + ((unsigned __int64)((unsigned __int128)(v26 * (__int128)v27) >> 64) >> 63);
        }
        v36 = v33 - (v34 & (v33 - 1));
        v37 = (unsigned __int64)((unsigned __int128)((__int64)(v11 - v12) * (__int128)v24) >> 64) >> 63;
        if ( v36 > v37 + ((__int64)((unsigned __int128)((__int64)(v11 - v12) * (__int128)v24) >> 64) >> 3) )
          v36 = v37 + ((__int64)((unsigned __int128)((__int64)(v11 - v12) * (__int128)v24) >> 64) >> 3);
        v12 += 48 * v36 - 48;
        *a6 += v36;
      }
      goto LABEL_17;
    }
    if ( v16 == 5 )
      break;
    v17 = *(_BYTE *)(v12 + 35);
    v41 = v9;
    if ( v17 < 0 )
    {
      if ( v16 != 2 )
      {
        if ( v16 != 6
          || (v15 & 0x10) != 0
          || *(_WORD *)(v12 + 32) != 1
          || ((*(_QWORD *)(v12 + 40) >> 54) & 7) == 2
          || (v17 & 8) != 0
          || (*(_DWORD *)v12 & 1) == 0 )
        {
          goto LABEL_37;
        }
LABEL_13:
        active = MiActivePageClaimCandidate((__int64)a1, v12, 0);
        if ( active )
          return (__int64)(v11 + 0x58000000000LL) / 48 - (~(active - 1) & ((__int64)(v12 + 0x58000000000LL) / 48));
        if ( (a4 & 8) != 0 || v41 == 1 && (unsigned int)MiClusterVadFull(v12, 0LL) == 1 )
          goto LABEL_71;
        goto LABEL_33;
      }
      if ( *(_WORD *)(v12 + 32) )
        goto LABEL_37;
LABEL_33:
      v9 = 0LL;
      goto LABEL_17;
    }
    if ( v16 <= 4u )
    {
      if ( *(_WORD *)(v12 + 32) || (a4 & 0x4000000) == 0 && *(__int64 *)(v12 + 8) >= 0 )
        goto LABEL_37;
      goto LABEL_33;
    }
    v18 = (unsigned __int128)((__int64)(v12 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v19 = (__int64)(v12 + 0x58000000000LL) / 48;
    if ( (v19 & 0xFFFFFFFFFFFFFE00uLL) != v10 )
    {
      v10 = ((__int64)(v12 + 0x58000000000LL) / 48) & 0xFFFFFFFFFFFFFE00uLL;
      v20 = MiPfnLargeBitSet(a1, (__int64)(v12 + 0x58000000000LL) / 48);
      if ( v20 != -1 )
      {
        v26 = v11 - 48 * (v19 & ~(MiLargePageSizes[v20] - 1)) + 0x58000000000LL;
        goto LABEL_20;
      }
      v9 = v41;
      v14 = 0x2AAAAAAAAAAAAAABLL;
    }
    if ( (*(_BYTE *)(v12 + 34) & 7) != 6 )
      goto LABEL_37;
    if ( ((*(_QWORD *)(v12 + 40) >> 54) & 7) != 2 )
    {
      if ( (a4 & 0x800000) != 0 )
      {
        if ( (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) != 0 )
        {
          if ( (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 )
            goto LABEL_37;
        }
        else if ( v19 == (v19 & 0xFFFFFFFFFFFFFFF0uLL) )
        {
          if ( (__int64)(v11 - v12) >= 768 )
            LODWORD(v9) = 1;
          v41 = v9;
        }
      }
      goto LABEL_13;
    }
    if ( (a4 & 8) != 0 )
      goto LABEL_37;
    LeafPfnBuddy = MiGetLeafPfnBuddy(v12, v18, v19, v9);
    if ( LeafPfnBuddy == -32 )
      goto LABEL_37;
    v9 = 0LL;
    if ( !LeafPfnBuddy )
      *a5 = 1;
LABEL_17:
    v12 += 48LL;
    if ( v12 >= v11 )
      return 0LL;
  }
  if ( (*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL )
    goto LABEL_37;
  if ( (*(_DWORD *)v12 & 1) != 0 )
    goto LABEL_17;
  v28 = v9;
  v29 = (__int64)(v12 + 0x58000000000LL) / 48;
  v30 = &qword_1403891E8;
  while ( (PVOID)v29 != *v30 )
  {
    ++v28;
    ++v30;
    if ( v28 >= 4 )
    {
      v31 = v9;
      v32 = &unk_1403891C8;
      while ( v29 != *v32 )
      {
        ++v31;
        ++v32;
        if ( v31 >= 4 )
          goto LABEL_17;
      }
      break;
    }
  }
LABEL_37:
  v26 = v11 - v12;
  v27 = v14;
  return ((__int64)((unsigned __int128)(v26 * (__int128)v27) >> 64) >> 3)
       + ((unsigned __int64)((unsigned __int128)(v26 * (__int128)v27) >> 64) >> 63);
}
