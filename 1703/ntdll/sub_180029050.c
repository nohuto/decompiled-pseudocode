/*
 * XREFs of sub_180029050 @ 0x180029050
 * Callers:
 *     sub_180009940 @ 0x180009940 (sub_180009940.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 * Callees:
 *     sub_180007334 @ 0x180007334 (sub_180007334.c)
 *     sub_180007E7C @ 0x180007E7C (sub_180007E7C.c)
 *     sub_180009CF8 @ 0x180009CF8 (sub_180009CF8.c)
 *     RtlRbInsertNodeEx @ 0x18001E790 (RtlRbInsertNodeEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x180028010 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall sub_180029050(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  unsigned __int16 v5; // r13
  unsigned int v7; // ebx
  __int64 v10; // rsi
  unsigned int v11; // r14d
  unsigned int v12; // r10d
  __int64 v13; // rcx
  int v14; // r8d
  unsigned int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // r9
  unsigned int v19; // ecx
  bool v20; // cf
  unsigned int v21; // ebx
  int v22; // r11d
  int v23; // eax
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rdi
  int v27; // edx
  unsigned __int64 v28; // rdx
  unsigned int v29; // r10d
  __int64 v30; // r11
  unsigned int v31; // r8d
  unsigned int v32; // ecx
  unsigned int v33; // edx
  __int64 v34; // rcx
  __int64 v35; // rbx
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // rbx
  unsigned int v38; // r9d
  unsigned int v39; // r8d
  __int64 v40; // rcx
  unsigned int v41; // r8d
  unsigned int v42; // eax
  unsigned __int64 v43; // rdx
  BOOLEAN v44; // r8
  unsigned __int64 v45; // rax
  _RTL_BALANCED_NODE *v46; // rdx
  _RTL_BALANCED_NODE *v47; // rax
  unsigned __int64 v49; // rbx
  __int64 v50; // rcx
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // r8
  int v54; // [rsp+30h] [rbp-38h]
  __int64 v55; // [rsp+38h] [rbp-30h]
  __int64 v56; // [rsp+40h] [rbp-28h]
  __int64 v57; // [rsp+48h] [rbp-20h]
  __int64 v58; // [rsp+50h] [rbp-18h]
  __int64 v60; // [rsp+B8h] [rbp+50h]
  unsigned int v61; // [rsp+B8h] [rbp+50h]
  int v62; // [rsp+B8h] [rbp+50h]
  int v63; // [rsp+BCh] [rbp+54h]
  unsigned __int64 v64; // [rsp+C0h] [rbp+58h]
  unsigned int i; // [rsp+C0h] [rbp+58h]
  unsigned int v66; // [rsp+C8h] [rbp+60h]

  v5 = WORD1(qword_18015BFA8);
  v7 = WORD1(qword_18015BFA8) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2);
  RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 8), (PRTL_BALANCED_NODE)(a3 + 8));
  v10 = qword_18015BFA8;
  v11 = 0;
  v12 = a3 - a2;
  v13 = 16 * (((unsigned int)qword_18015BFA8 ^ *(_DWORD *)a3 ^ (unsigned int)a3) >> 16);
  v14 = ((v13 + (unsigned __int64)(a3 & 0xFFF) + 4095) >> 12) - ((unsigned __int64)(v13 + 4095) >> 12);
  v15 = (a3 - a2 + 4127) & 0xFFFFF000;
  v16 = (v13 + a3 - a2) & 0xFFFFF000;
  v17 = v16 - v15;
  v18 = a1;
  if ( v15 >= v16 )
    v17 = 0;
  *(_QWORD *)(a1 + 48) -= v14 + (v17 >> 12) - (unsigned __int16)(qword_18015BFA8 ^ *(_WORD *)a3 ^ a3);
  v19 = v7 - a4;
  v20 = 16 * (v7 - a4) < 0x20;
  if ( 16 * (v7 - a4) < 0x20 )
    a4 = v7;
  v21 = 0;
  if ( !v20 )
    v21 = v19;
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE6(v10) ^ ((v63 & 0xFF00FFFF | 0x10000) >> 16);
  v22 = (unsigned __int8)(v10 ^ a3 ^ (v12 >> 12));
  *(_DWORD *)(a3 + 8) = v22;
  v23 = 16 * a4 + 32;
  if ( !v21 )
    v23 = 16 * a4;
  v24 = (-1LL << (v12 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                         - (unsigned __int8)((unsigned __int64)(v23 + v12 - 1) >> 12)));
  v25 = (v24 ^ *(_QWORD *)(a2 + 16)) & v24;
  v64 = v25;
  if ( v25 )
  {
    *(_DWORD *)(a3 + 8) = v22 | 0x200;
    if ( (a5 & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)a1);
      v25 = v64;
    }
    if ( (int)sub_180007334(
                a1,
                (_RTL_SRWLOCK *)a2,
                v25,
                (unsigned int)((0x101010101010101LL
                              * ((((v25 - ((v25 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                + (((v25 - ((v25 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                + ((((v25 - ((v25 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                  + (((v25 - ((v25 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24,
                1,
                a5) < 0 )
    {
      v21 += a4;
      a4 = 0;
    }
    if ( (a5 & 1) == 0 )
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)a1);
    *(_DWORD *)(a3 + 8) &= ~0x200u;
    v10 = qword_18015BFA8;
    v5 = WORD1(qword_18015BFA8);
    v18 = a1;
  }
  *(_WORD *)(a3 + 2) = v5 ^ a4 ^ WORD1(a3);
  if ( v21 )
  {
    v26 = 16LL * a4 + a3;
    if ( a4 )
      v27 = (unsigned __int16)a4;
    else
      v27 = (unsigned __int16)(WORD2(v26) ^ WORD2(v10) ^ HIDWORD(*(_QWORD *)v26));
    HIDWORD(v60) = v27 & 0xFF00FFFF | 0x10000;
    LODWORD(v60) = v21 << 16;
    *(_QWORD *)v26 = v26 ^ v60 ^ v10;
    v28 = v26 + 16LL * v21;
    *(_DWORD *)(v26 + 8) = (unsigned __int8)(v10 ^ v26 ^ ((unsigned int)(v26 - a2) >> 12));
    if ( v28 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
      *(_WORD *)(v28 + 4) = WORD2(v28) ^ WORD2(v10) ^ v21;
    v29 = 0;
    for ( i = 0; ; i = v66 )
    {
      v30 = a2 + 48;
      HIDWORD(v55) &= 0xFF00FFFF;
      v31 = (unsigned __int16)((v10 ^ v26 ^ *(_QWORD *)v26) >> 32);
      v32 = ((unsigned int)v10 ^ (unsigned int)v26 ^ *(_DWORD *)v26) >> 16;
      v61 = v32;
      v55 ^= v10 ^ v26;
      v33 = v32;
      v66 = v32;
      *(_BYTE *)(v26 + 6) = BYTE6(v55);
      if ( v31 )
      {
        v34 = v26 - 16LL * v31;
        v58 = v34;
        v35 = *(_QWORD *)v34 ^ v10 ^ v34;
        if ( (v35 & 0xFF000000000000LL) != 0 )
        {
          v32 = v33;
        }
        else
        {
          sub_180009CF8(v18, a2, v34);
          v30 = a2 + 48;
          v26 = v58;
          v32 = v61;
          v18 = a1;
          v29 = i;
          v33 = WORD1(v35) + v66;
          v66 = v33;
        }
      }
      v36 = v26 + 16LL * v33;
      if ( v36 < v30 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
      {
        v37 = v10 ^ v36 ^ *(_QWORD *)v36;
        if ( (v37 & 0xFF000000000000LL) == 0 )
        {
          sub_180009CF8(v18, a2, v36);
          v30 = a2 + 48;
          v32 = v61;
          v29 = i;
          v33 = WORD1(v37) + v66;
          v66 = v33;
        }
      }
      if ( v32 != v33 )
      {
        v53 = v26 + 16LL * v33;
        v54 = v10 ^ v26 ^ ((v33 << 16) | (unsigned __int16)v54);
        *(_WORD *)(v26 + 2) = HIWORD(v54);
        if ( v53 < v30 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
        {
          HIDWORD(v56) ^= (unsigned __int16)(v33 ^ WORD2(v56));
          v56 ^= v10 ^ v53;
          *(_WORD *)(v53 + 4) = WORD2(v56);
        }
      }
      if ( v33 == *(unsigned __int16 *)(a2 + 32) )
      {
        sub_180007E7C(a1, (_QWORD *)a2);
        return a4;
      }
      if ( v33 <= v29 )
        break;
      v38 = (v26 - a2 + 4127) & 0xFFFFF000;
      v39 = (v26 + 16 * (v5 ^ WORD1(v26) ^ *(unsigned __int16 *)(v26 + 2)) - a2) & 0xFFFFF000;
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
      HIDWORD(v57) = HIDWORD(v57) & 0xFF00FFFF | 0x10000;
      v57 ^= v10 ^ v26;
      *(_BYTE *)(v26 + 6) = BYTE6(v57);
      *(_DWORD *)(v26 + 8) = (unsigned __int8)(v10 ^ v26 ^ ((unsigned int)(v26 - a2) >> 12)) | 0x200;
      if ( (a5 & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)a1);
        v50 = a1;
        LODWORD(v52) = v62;
      }
      sub_180007334(v50, (_RTL_SRWLOCK *)a2, v49, v52, 0, a5);
      if ( (a5 & 1) == 0 )
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)a1);
      v29 = v66;
      *(_DWORD *)(v26 + 8) &= ~0x200u;
      v10 = qword_18015BFA8;
      v5 = WORD1(qword_18015BFA8);
      v18 = a1;
    }
    v40 = 16 * (v5 ^ WORD1(v26) ^ *(unsigned __int16 *)(v26 + 2));
    v41 = (v26 - a2 + 4127) & 0xFFFFF000;
    v42 = (v40 + v26 - a2) & 0xFFFFF000;
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
    *(_WORD *)v26 = v10 ^ v26 ^ (((v40 + (v26 & 0xFFF) + 4095) >> 12)
                               - ((unsigned __int64)(v40 + 4095) >> 12)
                               + (v11 >> 12)
                               - ((0x101010101010101LL * ((v45 + (v45 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
    v46 = *(_RTL_BALANCED_NODE **)(a1 + 8);
    if ( v46 )
    {
      while ( 1 )
      {
        if ( ((unsigned int)v10 ^ (unsigned int)v26 ^ *(_DWORD *)v26) < (*(_DWORD *)&v46[-1].16 ^ (unsigned int)v10 ^ ((_DWORD)v46 - 8)) )
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
    RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 8), v46, v44, (PRTL_BALANCED_NODE)(v26 + 8));
  }
  return a4;
}
