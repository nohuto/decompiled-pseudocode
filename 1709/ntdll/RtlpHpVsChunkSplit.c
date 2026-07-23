/*
 * XREFs of RtlpHpVsChunkSplit @ 0x18003D9A0
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180040E70 (RtlpAllocateHeapInternal.c)
 *     RtlpHpVsContextAllocate @ 0x18004C21C (RtlpHpVsContextAllocate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x18003A130 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x18003A530 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x18004AECC (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x180061864 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsFreeChunkRemove @ 0x1800720D4 (RtlpHpVsFreeChunkRemove.c)
 */

__int64 __fastcall RtlpHpVsChunkSplit(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  unsigned __int16 v5; // r13
  unsigned int v7; // ebx
  __int64 v10; // rsi
  unsigned int v11; // r14d
  __int64 v12; // r11
  unsigned int v13; // r9d
  unsigned int v14; // r10d
  __int64 v15; // r8
  unsigned int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  bool v19; // cf
  unsigned int v20; // ebx
  unsigned int v21; // r9d
  int v22; // r10d
  int v23; // eax
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r8
  int v26; // edx
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // r10
  unsigned int v31; // r8d
  unsigned int v32; // ecx
  unsigned int v33; // edx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // r8
  __int64 v37; // rbx
  unsigned int v38; // r9d
  unsigned int v39; // r8d
  __int64 v40; // rcx
  unsigned int v41; // r9d
  unsigned int v42; // r8d
  unsigned __int64 v43; // rdx
  BOOLEAN v44; // r8
  unsigned __int64 v45; // rax
  _RTL_BALANCED_NODE *v46; // rdx
  _RTL_BALANCED_NODE *v47; // rax
  unsigned __int64 v49; // rbx
  int v50; // ecx
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // rdx
  int v53; // [rsp+30h] [rbp-38h]
  __int64 v54; // [rsp+38h] [rbp-30h]
  __int64 v55; // [rsp+40h] [rbp-28h]
  __int64 v56; // [rsp+48h] [rbp-20h]
  unsigned __int64 v57; // [rsp+50h] [rbp-18h]
  unsigned __int64 v59; // [rsp+B8h] [rbp+50h]
  __int64 v60; // [rsp+B8h] [rbp+50h]
  unsigned int v61; // [rsp+B8h] [rbp+50h]
  int v62; // [rsp+B8h] [rbp+50h]
  int v63; // [rsp+BCh] [rbp+54h]
  unsigned int i; // [rsp+C0h] [rbp+58h]
  unsigned int v65; // [rsp+C8h] [rbp+60h]

  v5 = WORD1(RtlpHeapKey);
  v7 = WORD1(RtlpHeapKey) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2);
  RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 8), (PRTL_BALANCED_NODE)(a3 + 8));
  v10 = RtlpHeapKey;
  v11 = 0;
  v12 = a1;
  v13 = RtlpHeapKey ^ *(_DWORD *)a3 ^ a3;
  v14 = a3 - a2;
  v15 = 16 * HIWORD(v13);
  v16 = (a3 - a2 + 4127) & 0xFFFFF000;
  v17 = ((v15 + a3 - a2) & 0xFFFFF000) - v16;
  if ( v16 >= (((_DWORD)v15 + (_DWORD)a3 - (_DWORD)a2) & 0xFFFFF000) )
    v17 = 0;
  v18 = v7 - a4;
  *(_QWORD *)(a1 + 48) -= (unsigned int)((v15 + (unsigned __int64)(a3 & 0xFFF) + 4095) >> 12)
                        + (v17 >> 12)
                        - (unsigned int)((unsigned __int64)(v15 + 4095) >> 12)
                        - (unsigned __int16)v13;
  v19 = 16 * (v7 - a4) < 0x20;
  if ( 16 * (v7 - a4) < 0x20 )
    a4 = v7;
  v20 = 0;
  if ( !v19 )
    v20 = v18;
  v21 = v14 >> 12;
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE6(v10) ^ ((v63 & 0xFF00FFFF | 0x10000) >> 16);
  v22 = (unsigned __int8)(v10 ^ (v14 >> 12) ^ a3);
  *(_DWORD *)(a3 + 8) = v22;
  v23 = 16 * a4 + 32;
  if ( !v20 )
    v23 = 16 * a4;
  v24 = (-1LL << v21) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                 - (unsigned __int8)((unsigned __int64)(unsigned int)(v23 + a3 - a2 - 1) >> 12)));
  v25 = (v24 ^ *(_QWORD *)(a2 + 16)) & v24;
  v59 = v25;
  if ( v25 )
  {
    *(_DWORD *)(a3 + 8) = v22 | 0x200;
    if ( (a5 & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)a1);
      LODWORD(v12) = a1;
      v25 = v59;
    }
    if ( (int)RtlpHpVsSubsegmentCommitPages(
                v12,
                a2,
                v25,
                (unsigned int)((0x101010101010101LL
                              * ((((v25 - ((v25 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                + (((v25 - ((v25 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                + ((((v25 - ((v25 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                  + (((v25 - ((v25 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24,
                1) < 0 )
    {
      v20 += a4;
      a4 = 0;
    }
    if ( (a5 & 1) == 0 )
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)a1);
    *(_DWORD *)(a3 + 8) &= ~0x200u;
    v10 = RtlpHeapKey;
    v5 = WORD1(RtlpHeapKey);
    v12 = a1;
  }
  v26 = (unsigned __int16)a4;
  *(_WORD *)(a3 + 2) = v5 ^ a4 ^ WORD1(a3);
  if ( v20 )
  {
    v27 = 16LL * a4 + a3;
    if ( !a4 )
      v26 = (unsigned __int16)(WORD2(v27) ^ WORD2(v10) ^ HIDWORD(*(_QWORD *)v27));
    HIDWORD(v60) = v26 & 0xFF00FFFF | 0x10000;
    LODWORD(v60) = v20 << 16;
    *(_QWORD *)v27 = v27 ^ v60 ^ v10;
    v28 = v27 + 16LL * v20;
    *(_DWORD *)(v27 + 8) = (unsigned __int8)(v10 ^ v27 ^ ((unsigned int)(v27 - a2) >> 12));
    if ( v28 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
      *(_WORD *)(v28 + 4) = WORD2(v28) ^ WORD2(v10) ^ v20;
    v29 = 0LL;
    for ( i = 0; ; i = v65 )
    {
      v30 = a2 + 48;
      HIDWORD(v54) &= 0xFF00FFFF;
      v31 = (unsigned __int16)((v10 ^ v27 ^ *(_QWORD *)v27) >> 32);
      v32 = ((unsigned int)v10 ^ (unsigned int)v27 ^ *(_DWORD *)v27) >> 16;
      v61 = v32;
      v54 ^= v10 ^ v27;
      v33 = v32;
      v65 = v32;
      *(_BYTE *)(v27 + 6) = BYTE6(v54);
      if ( v31 )
      {
        v34 = v27 - 16LL * v31;
        v57 = v34;
        v35 = *(_QWORD *)v34 ^ v10 ^ v34;
        if ( (v35 & 0xFF000000000000LL) != 0 )
        {
          v32 = v33;
        }
        else
        {
          RtlpHpVsFreeChunkRemove(v12, a2, v34, v29);
          v30 = a2 + 48;
          v27 = v57;
          v32 = v61;
          v12 = a1;
          v29 = i;
          v33 = WORD1(v35) + v65;
          v65 = v33;
        }
      }
      v36 = v27 + 16LL * v33;
      if ( v36 < v30 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
      {
        v37 = v10 ^ v36 ^ *(_QWORD *)v36;
        if ( (v37 & 0xFF000000000000LL) == 0 )
        {
          RtlpHpVsFreeChunkRemove(v12, a2, v36, v29);
          v30 = a2 + 48;
          v32 = v61;
          v29 = i;
          v33 = WORD1(v37) + v65;
          v65 = v33;
        }
      }
      if ( v32 != v33 )
      {
        v36 = v27 + 16LL * v33;
        v53 = v10 ^ v27 ^ ((v33 << 16) | (unsigned __int16)v53);
        *(_WORD *)(v27 + 2) = HIWORD(v53);
        if ( v36 < v30 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
        {
          HIDWORD(v55) ^= (unsigned __int16)(v33 ^ WORD2(v55));
          v55 ^= v10 ^ v36;
          *(_WORD *)(v36 + 4) = WORD2(v55);
        }
      }
      if ( v33 == *(unsigned __int16 *)(a2 + 32) )
      {
        RtlpHpVsSubsegmentCleanup(a1, a2, v36, v29);
        return a4;
      }
      if ( v33 <= (unsigned int)v29 )
        break;
      v38 = (v27 - a2 + 4127) & 0xFFFFF000;
      v39 = (v27 + 16 * (v5 ^ WORD1(v27) ^ *(unsigned __int16 *)(v27 + 2)) - a2) & 0xFFFFF000;
      if ( v38 >= v39 )
        break;
      v49 = *(_QWORD *)(a2 + 16) & (-1LL << (v38 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                    - (unsigned __int8)((unsigned __int64)(v39 - 1) >> 12)));
      if ( v39 - v38 < 0x1000 || !v49 )
        break;
      v50 = a1;
      v51 = *(_QWORD *)(a1 + 40) >> 7;
      v52 = (0x101010101010101LL
           * ((((v49 - ((v49 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v49 - ((v49 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v49 - ((v49 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v49 - ((v49 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      v62 = v52;
      if ( v51 <= 8 )
        v51 = 8LL;
      if ( *(_QWORD *)(a1 + 48) + (unsigned __int64)(unsigned int)v52 <= v51 )
        break;
      HIDWORD(v56) = HIDWORD(v56) & 0xFF00FFFF | 0x10000;
      v56 ^= v10 ^ v27;
      *(_BYTE *)(v27 + 6) = BYTE6(v56);
      *(_DWORD *)(v27 + 8) = (unsigned __int8)(v10 ^ v27 ^ ((unsigned int)(v27 - a2) >> 12)) | 0x200;
      if ( (a5 & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)a1);
        v50 = a1;
        LODWORD(v52) = v62;
      }
      RtlpHpVsSubsegmentCommitPages(v50, a2, v49, v52, 0);
      if ( (a5 & 1) == 0 )
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)a1);
      v29 = v65;
      *(_DWORD *)(v27 + 8) &= ~0x200u;
      v10 = RtlpHeapKey;
      v5 = WORD1(RtlpHeapKey);
      v12 = a1;
    }
    v40 = 16 * (v5 ^ ((*(_DWORD *)v27 ^ (unsigned int)v27) >> 16));
    v41 = (v27 - a2 + 4127) & 0xFFFFF000;
    v42 = (v27 + 16 * (v5 ^ ((*(_DWORD *)v27 ^ (unsigned int)v27) >> 16)) - a2) & 0xFFFFF000;
    if ( v41 < v42 )
    {
      v11 = v42 - v41;
      v43 = *(_QWORD *)(a2 + 16) & (-1LL << (v41 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                    - (unsigned __int8)((unsigned __int64)(v42 - 1) >> 12)));
    }
    else
    {
      v43 = 0LL;
    }
    v44 = 0;
    v45 = ((v43 - ((v43 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((v43 - ((v43 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
    *(_QWORD *)(a1 + 48) += (unsigned int)((0x101010101010101LL * ((v45 + (v45 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
    *(_WORD *)v27 = v10 ^ v27 ^ (((v40 + (v27 & 0xFFF) + 4095) >> 12)
                               - ((unsigned __int64)(v40 + 4095) >> 12)
                               + (v11 >> 12)
                               - ((0x101010101010101LL * ((v45 + (v45 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
    v46 = *(_RTL_BALANCED_NODE **)(a1 + 8);
    if ( v46 )
    {
      while ( 1 )
      {
        if ( ((unsigned int)v10 ^ (unsigned int)v27 ^ *(_DWORD *)v27) < ((unsigned int)v10 ^ ((_DWORD)v46 - 8) ^ *(_DWORD *)&v46[-1].0) )
        {
          v47 = v46->Children[0];
          if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
          {
            if ( !v47 )
            {
LABEL_35:
              v44 = 0;
              break;
            }
            v47 = (_RTL_BALANCED_NODE *)((unsigned __int64)v46 ^ (unsigned __int64)v47);
          }
          if ( !v47 )
            goto LABEL_35;
        }
        else
        {
          v47 = v46->Children[1];
          if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
          {
            if ( !v47 )
            {
LABEL_36:
              v44 = 1;
              break;
            }
            v47 = (_RTL_BALANCED_NODE *)((unsigned __int64)v46 ^ (unsigned __int64)v47);
          }
          if ( !v47 )
            goto LABEL_36;
        }
        v46 = v47;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 8), v46, v44, (PRTL_BALANCED_NODE)(v27 + 8));
  }
  return a4;
}
