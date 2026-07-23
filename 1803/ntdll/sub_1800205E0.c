/*
 * XREFs of sub_1800205E0 @ 0x1800205E0
 * Callers:
 *     sub_180011EF8 @ 0x180011EF8 (sub_180011EF8.c)
 *     sub_180016A80 @ 0x180016A80 (sub_180016A80.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x180021260 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x180021C90 (RtlRbInsertNodeEx.c)
 *     sub_1800235C8 @ 0x1800235C8 (sub_1800235C8.c)
 *     sub_180023F18 @ 0x180023F18 (sub_180023F18.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180060688 @ 0x180060688 (sub_180060688.c)
 *     sub_1800610A4 @ 0x1800610A4 (sub_1800610A4.c)
 *     sub_180070AAC @ 0x180070AAC (sub_180070AAC.c)
 *     sub_18007203C @ 0x18007203C (sub_18007203C.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     sub_180105C90 @ 0x180105C90 (sub_180105C90.c)
 */

__int64 __fastcall sub_1800205E0(PRTL_SRWLOCK SRWLock, unsigned __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // rdi
  int v6; // ebx
  __int64 v9; // rdx
  unsigned int v10; // r14d
  __int64 v11; // rcx
  int v12; // eax
  int v13; // ecx
  __int64 v14; // rsi
  int v15; // eax
  int v17; // r12d
  unsigned __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // r15
  unsigned __int16 v21; // dx
  unsigned __int64 v22; // r12
  __int64 v23; // r15
  __int64 v24; // r10
  unsigned int v25; // r8d
  unsigned int v26; // ecx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r8
  __int64 v29; // r15
  unsigned __int64 v30; // rdx
  unsigned int v31; // r10d
  unsigned int v32; // r8d
  unsigned int v33; // edx
  unsigned int v34; // r10d
  unsigned __int64 v35; // r15
  unsigned __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rcx
  unsigned int v39; // r9d
  unsigned int v40; // eax
  unsigned int v41; // r8d
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rax
  unsigned __int64 Ptr; // rcx
  unsigned __int64 v45; // rdx
  BOOLEAN v46; // al
  unsigned __int64 v47; // rax
  signed __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  signed __int64 v51; // rtt
  int v52; // [rsp+30h] [rbp-68h]
  __int64 v53; // [rsp+38h] [rbp-60h]
  __int64 v54; // [rsp+40h] [rbp-58h]
  unsigned int v55; // [rsp+A0h] [rbp+8h]
  int v56; // [rsp+A8h] [rbp+10h]
  __int64 v57; // [rsp+B0h] [rbp+18h]

  v5 = a3 - 16;
  v6 = a3;
  if ( ((__int64)SRWLock[14].Ptr & 1) != 0 && (a3 & 0xFFF) == 0 )
    v5 = a3 - 32;
  v9 = qword_18015A440;
  v10 = 0;
  if ( !a2 )
  {
    v11 = HIDWORD(*(_QWORD *)v5);
    v12 = HIDWORD(v5) ^ v11 ^ HIDWORD(qword_18015A440);
    if ( (v12 & 0xFF0000) != 0 )
    {
      v13 = (unsigned __int8)(qword_18015A440 ^ v5 ^ *(_BYTE *)(v5 + 8));
LABEL_14:
      v14 = v5;
      goto LABEL_15;
    }
    if ( !(_WORD)v12 )
    {
      v13 = 0;
      goto LABEL_14;
    }
    v14 = v5 - 16LL * (unsigned __int16)(WORD2(qword_18015A440) ^ WORD2(v5) ^ v11);
    v15 = HIDWORD(v14) ^ HIDWORD(qword_18015A440) ^ HIDWORD(*(_QWORD *)v14);
    if ( (v15 & 0xFF0000) == 0 )
    {
      if ( !(_WORD)v15 )
      {
        v13 = 0;
        goto LABEL_15;
      }
      v14 -= 16LL * (unsigned __int16)(WORD2(qword_18015A440) ^ WORD2(v14) ^ HIDWORD(*(_QWORD *)v14));
    }
    v13 = (unsigned __int8)(qword_18015A440 ^ v14 ^ *(_BYTE *)(v14 + 8));
LABEL_15:
    a2 = (v14 - (unsigned int)(v13 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  }
  if ( (*(_WORD *)(a2 + 34) ^ 0xABED) == *(_WORD *)(a2 + 32) )
  {
    v17 = a4 & 1;
    v56 = v17;
    *a5 = 16 * (WORD1(qword_18015A440) ^ WORD1(v5) ^ *(unsigned __int16 *)(v5 + 2)) - 16;
    if ( (a4 & 1) == 0 )
    {
      RtlAcquireSRWLockExclusive(SRWLock);
      v9 = qword_18015A440;
    }
    if ( ((*(_QWORD *)v5 ^ v5 ^ v9) & 0xFF000000000000LL) != 0 )
    {
      while ( 1 )
      {
        v18 = a2 + 48;
        v55 = v10;
        HIDWORD(v57) &= 0xFF00FFFF;
        v19 = v9 ^ v5 ^ *(_QWORD *)v5;
        v10 = ((unsigned int)v9 ^ (unsigned int)v5 ^ *(_DWORD *)v5) >> 16;
        v57 ^= v9 ^ v5;
        *(_BYTE *)(v5 + 6) = BYTE6(v57);
        if ( WORD2(v19) )
        {
          v20 = qword_18015A440 ^ (v5 - 16LL * WORD2(v19)) ^ *(_QWORD *)(v5 - 16LL * WORD2(v19));
          if ( (v20 & 0xFF000000000000LL) == 0 )
          {
            sub_180023F18(SRWLock, a2, v5 - 16LL * WORD2(v19), v18);
            v18 = a2 + 48;
            v10 += WORD1(v20);
            v5 -= 16LL * WORD2(v19);
          }
        }
        v21 = *(_WORD *)(a2 + 32);
        v22 = v5 + 16LL * v10;
        if ( v22 < v18 + 16LL * v21 )
        {
          v23 = qword_18015A440 ^ v22 ^ *(_QWORD *)v22;
          if ( (v23 & 0xFF000000000000LL) == 0 )
          {
            RtlRbRemoveNode((PRTL_RB_TREE)&SRWLock[2], (PRTL_BALANCED_NODE)(v22 + 8));
            v25 = (v22 - a2 + 4127) & 0xFFFFF000;
            v26 = ((v22 + 16 * (WORD1(qword_18015A440) ^ ((*(_DWORD *)v22 ^ (unsigned int)v22) >> 16)) - a2) & 0xFFFFF000)
                - v25;
            v18 = a2 + 48;
            if ( v25 >= (((_DWORD)v22
                        + 16 * (WORD1(qword_18015A440) ^ ((*(_DWORD *)v22 ^ (unsigned int)v22) >> 16))
                        - (_DWORD)a2) & 0xFFFFF000) )
              v26 = 0;
            v24 = 16 * (WORD1(qword_18015A440) ^ ((*(_DWORD *)v22 ^ (unsigned int)v22) >> 16));
            SRWLock[7].Ptr = (char *)SRWLock[7].Ptr
                           - ((unsigned int)(((unsigned __int64)(((_WORD)v5 + 16 * (_WORD)v10) & 0xFFF) + v24 + 4095) >> 12)
                            + (v26 >> 12)
                            - (unsigned __int16)(*(_WORD *)v22 ^ qword_18015A440 ^ v22)
                            - (unsigned int)((unsigned __int64)(v24 + 4095) >> 12));
            v21 = *(_WORD *)(a2 + 32);
            v10 += WORD1(v23);
          }
        }
        v27 = v21;
        if ( ((__int64)SRWLock[14].Ptr & 1) != 0 )
        {
          v28 = v5 + 16LL * v10;
          if ( v28 < v18 + 16LL * v21 )
          {
            v29 = qword_18015A440 ^ *(_QWORD *)v28 ^ v28;
            if ( (v29 & 0xFF000000000000LL) == 0 )
            {
              sub_180023F18(SRWLock, a2, v28, v18);
              v27 = *(unsigned __int16 *)(a2 + 32);
              v10 += WORD1(v29);
            }
          }
        }
        if ( WORD1(v19) != v10 )
        {
          v30 = v5 + 16LL * v10;
          v52 = qword_18015A440 ^ v5 ^ ((v10 << 16) | (unsigned __int16)v52);
          *(_WORD *)(v5 + 2) = HIWORD(v52);
          v27 = *(unsigned __int16 *)(a2 + 32);
          if ( v30 < a2 + 48 + 16 * v27 )
          {
            HIDWORD(v53) ^= (unsigned __int16)(v10 ^ WORD2(v53));
            v53 ^= qword_18015A440 ^ v30;
            *(_WORD *)(v30 + 4) = WORD2(v53);
            v27 = *(unsigned __int16 *)(a2 + 32);
          }
        }
        if ( v10 == (unsigned __int16)v27 )
        {
          sub_1800610A4(SRWLock, a2);
          goto LABEL_80;
        }
        if ( v10 <= v55 )
          break;
        v31 = (v5 - a2 + 4127) & 0xFFFFF000;
        v32 = (v5 + 16 * (WORD1(qword_18015A440) ^ WORD1(v5) ^ *(unsigned __int16 *)(v5 + 2)) - a2) & 0xFFFFF000;
        if ( v31 >= v32 )
          break;
        v33 = v32 - v31;
        v34 = v31 >> 12;
        v27 = (unsigned __int8)v34;
        v35 = *(_QWORD *)(a2 + 16) & (-1LL << v34) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                              - (unsigned __int8)((unsigned __int64)(v32 - 1) >> 12)));
        if ( v33 < 0x1000 || !v35 )
          break;
        v36 = (0x101010101010101LL
             * ((((v35 - ((v35 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v35 - ((v35 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
               + ((((v35 - ((v35 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v35 - ((v35 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
        if ( ((__int64)SRWLock[14].Ptr & 2) == 0 )
        {
          v27 = (unsigned __int64)SRWLock[6].Ptr >> 7;
          if ( v27 <= 8 )
            v27 = 8LL;
          if ( (char *)SRWLock[7].Ptr + (unsigned int)v36 <= (PVOID)v27 )
            break;
        }
        HIDWORD(v54) = HIDWORD(v54) & 0xFF00FFFF | 0x10000;
        v54 ^= qword_18015A440 ^ v5;
        *(_BYTE *)(v5 + 6) = BYTE6(v54);
        *(_DWORD *)(v5 + 8) = (unsigned __int8)(qword_18015A440 ^ v5 ^ ((unsigned int)(v5 - a2) >> 12)) | 0x200;
        if ( !v56 )
          RtlReleaseSRWLockExclusive(SRWLock);
        sub_18007203C((_DWORD)SRWLock, a2, v35, v36, 0);
        if ( !v56 )
          RtlAcquireSRWLockExclusive(SRWLock);
        *(_DWORD *)(v5 + 8) &= ~0x200u;
        v9 = qword_18015A440;
      }
      if ( ((__int64)SRWLock[14].Ptr & 1) != 0 && ((v5 + 32) & 0xFFF) != 0 )
      {
        v37 = sub_180105C90(v27, a2, v5);
        if ( v37 )
          sub_1800235C8(SRWLock, a2, v37);
      }
      v38 = 16 * (WORD1(qword_18015A440) ^ WORD1(v5) ^ *(unsigned __int16 *)(v5 + 2));
      v39 = (v5 - a2 + 4127) & 0xFFFFF000;
      v40 = (v38 + v5 - a2) & 0xFFFFF000;
      if ( v39 >= v40 )
      {
        v41 = 0;
        v42 = 0LL;
      }
      else
      {
        v41 = v40 - v39;
        v42 = *(_QWORD *)(a2 + 16) & (-1LL << (v39 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                      - (unsigned __int8)((unsigned __int64)(v40 - 1) >> 12)));
      }
      v43 = v42 - ((v42 >> 1) & 0x5555555555555555LL);
      SRWLock[7].Ptr = (char *)SRWLock[7].Ptr
                     + ((unsigned int)((0x101010101010101LL
                                      * (((v43 & 0x3333333333333333LL)
                                        + ((v43 >> 2) & 0x3333333333333333LL)
                                        + (((v43 & 0x3333333333333333LL) + ((v43 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24);
      *(_WORD *)v5 = qword_18015A440 ^ v5 ^ (((v38 + (unsigned __int64)(v5 & 0xFFF) + 4095) >> 12)
                                           - ((unsigned __int64)(v38 + 4095) >> 12)
                                           + (v41 >> 12)
                                           - ((0x101010101010101LL
                                             * (((v43 & 0x3333333333333333LL)
                                               + ((v43 >> 2) & 0x3333333333333333LL)
                                               + (((v43 & 0x3333333333333333LL) + ((v43 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
      if ( ((__int64)SRWLock[3].Ptr & 1) != 0 )
      {
        Ptr = (unsigned __int64)SRWLock[2].Ptr;
        if ( Ptr )
          v45 = Ptr ^ (unsigned __int64)&SRWLock[2];
        else
          v45 = 0LL;
      }
      else
      {
        v45 = (unsigned __int64)SRWLock[2].Ptr;
      }
      v46 = 0;
      if ( v45 )
      {
        while ( 1 )
        {
          if ( ((unsigned int)qword_18015A440 ^ *(_DWORD *)v5 ^ (unsigned int)v5) < (*(_DWORD *)(v45 - 8) ^ (unsigned int)qword_18015A440 ^ ((_DWORD)v45 - 8)) )
          {
            v47 = *(_QWORD *)v45;
            if ( ((__int64)SRWLock[3].Ptr & 1) != 0 )
            {
              if ( !v47 )
                goto LABEL_77;
              v47 ^= v45;
            }
            if ( !v47 )
            {
LABEL_77:
              v46 = 0;
              break;
            }
          }
          else
          {
            v47 = *(_QWORD *)(v45 + 8);
            if ( ((__int64)SRWLock[3].Ptr & 1) != 0 )
            {
              if ( !v47 )
                goto LABEL_71;
              v47 ^= v45;
            }
            if ( !v47 )
            {
LABEL_71:
              v46 = 1;
              break;
            }
          }
          v45 = v47;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)&SRWLock[2], (PRTL_BALANCED_NODE)v45, v46, (PRTL_BALANCED_NODE)(v5 + 8));
      a2 = 0LL;
LABEL_80:
      if ( !v56 )
      {
        v48 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 0LL, 1LL);
        if ( v48 != 1 )
        {
          do
          {
            if ( (v48 & 4) != 0 || (v48 & 2) == 0 )
              v49 = -1LL;
            else
              v49 = 3LL;
            v50 = v49 + v48;
            v51 = v48;
            v48 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v49 + v48, v48);
          }
          while ( v51 != v48 );
          if ( v49 == 3 )
            sub_180070AAC(SRWLock, v50, 0LL);
        }
      }
      if ( a2 )
        sub_180060688(SRWLock, a2, a4);
      return 1LL;
    }
    else
    {
      sub_18009A5F0(8, (unsigned int)SRWLock ^ LODWORD(SRWLock[8].Ptr), v6, v5, 0LL, 0LL);
      if ( !v17 )
        RtlReleaseSRWLockExclusive(SRWLock);
      return 0LL;
    }
  }
  else
  {
    sub_18009A5F0(18, (unsigned int)SRWLock ^ LODWORD(SRWLock[8].Ptr), a2, 0, 0LL, 0LL);
    return 0LL;
  }
}
