/*
 * XREFs of sub_180029840 @ 0x180029840
 * Callers:
 *     sub_180020404 @ 0x180020404 (sub_180020404.c)
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 *     sub_180025780 @ 0x180025780 (sub_180025780.c)
 * Callees:
 *     sub_180007334 @ 0x180007334 (sub_180007334.c)
 *     sub_180007E7C @ 0x180007E7C (sub_180007E7C.c)
 *     sub_180009CF8 @ 0x180009CF8 (sub_180009CF8.c)
 *     sub_18001E750 @ 0x18001E750 (sub_18001E750.c)
 *     RtlRbInsertNodeEx @ 0x18001E790 (RtlRbInsertNodeEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x180028010 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180077520 @ 0x180077520 (sub_180077520.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180029840(__int64 SRWLock, unsigned __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 v5; // r10
  unsigned __int64 v6; // rdi
  int v7; // ebx
  unsigned __int64 v8; // rsi
  int v10; // ebp
  unsigned __int16 v11; // r13
  unsigned int v12; // ecx
  unsigned int v13; // r12d
  unsigned int v14; // ebp
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rbx
  unsigned int v19; // r9d
  __int64 v20; // rdx
  int v21; // r8d
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned __int64 v24; // rdx
  unsigned int v25; // r9d
  unsigned int v26; // r8d
  __int64 v27; // rcx
  unsigned int v28; // r8d
  unsigned int v29; // eax
  unsigned int v30; // edx
  unsigned __int64 v31; // r9
  BOOLEAN v32; // r8
  _RTL_BALANCED_NODE *v33; // rdx
  _RTL_BALANCED_NODE *v34; // rax
  signed __int64 v35; // rax
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // r14
  __int64 v40; // rcx
  __int64 (__fastcall *v41)(__int64, __int64, char); // rax
  __int64 v42; // rdx
  signed __int64 v43; // rcx
  signed __int64 v44; // rdx
  signed __int64 v45; // rtt
  int v46; // eax
  unsigned __int64 v47; // rsi
  int v48; // ecx
  unsigned __int16 v49; // [rsp+30h] [rbp-58h]
  int v50; // [rsp+30h] [rbp-58h]
  __int64 v51; // [rsp+38h] [rbp-50h]
  __int64 v52; // [rsp+40h] [rbp-48h]
  __int64 v53; // [rsp+48h] [rbp-40h]
  unsigned int i; // [rsp+98h] [rbp+10h]
  int v55; // [rsp+A0h] [rbp+18h]

  v5 = qword_18015BFA8;
  v6 = a3 - 16;
  v7 = a3;
  v8 = a2;
  if ( !a2 )
  {
    v46 = HIDWORD(qword_18015BFA8) ^ HIDWORD(v6) ^ HIDWORD(*(_QWORD *)v6);
    v47 = a3 - 16;
    if ( (v46 & 0xFF0000) != 0 )
    {
      v48 = (unsigned __int8)(qword_18015BFA8 ^ v6 ^ *(_BYTE *)(v6 + 8));
    }
    else if ( (_WORD)v46 )
    {
      v47 = v6 - 16LL * (unsigned __int16)(WORD2(qword_18015BFA8) ^ WORD2(v6) ^ HIDWORD(*(_QWORD *)v6));
      v48 = (unsigned __int8)(qword_18015BFA8 ^ v47 ^ *(_BYTE *)(v47 + 8));
    }
    else
    {
      v48 = 0;
    }
    v8 = (v47 - (unsigned int)(v48 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  }
  if ( (*(_WORD *)(v8 + 34) ^ 0xABED) == *(_WORD *)(v8 + 32) )
  {
    v10 = a4 & 1;
    v55 = v10;
    *a5 = 16 * (WORD1(qword_18015BFA8) ^ WORD1(v6) ^ *(unsigned __int16 *)(v6 + 2)) - 16;
    if ( (a4 & 1) == 0 )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)SRWLock);
      v5 = qword_18015BFA8;
    }
    if ( ((HIDWORD(v6) ^ HIDWORD(v5) ^ HIDWORD(*(_QWORD *)v6)) & 0xFF0000) != 0 )
    {
      v11 = v49;
      for ( i = 0; ; i = v14 )
      {
        HIDWORD(v51) &= 0xFF00FFFF;
        v12 = (unsigned __int16)((v5 ^ v6 ^ *(_QWORD *)v6) >> 32);
        v13 = ((unsigned int)v5 ^ (unsigned int)v6 ^ *(_DWORD *)v6) >> 16;
        v14 = v13;
        v51 ^= v5 ^ v6;
        *(_BYTE *)(v6 + 6) = BYTE6(v51);
        if ( v12 )
        {
          v15 = v6 - 16LL * v12;
          v16 = v5 ^ v15 ^ *(_QWORD *)v15;
          if ( (v16 & 0xFF000000000000LL) == 0 )
          {
            sub_180009CF8(SRWLock, v8, v6 - 16LL * v12);
            v5 = qword_18015BFA8;
            v6 = v15;
            v14 = WORD1(v16) + v13;
          }
        }
        v17 = v6 + 16LL * v14;
        if ( v17 < v8 + 48 + 16LL * *(unsigned __int16 *)(v8 + 32) )
        {
          v18 = v5 ^ v17 ^ *(_QWORD *)v17;
          if ( (v18 & 0xFF000000000000LL) == 0 )
          {
            RtlRbRemoveNode((PRTL_RB_TREE)(SRWLock + 8), (PRTL_BALANCED_NODE)(v17 + 8));
            v5 = qword_18015BFA8;
            v19 = qword_18015BFA8 ^ *(_DWORD *)v17 ^ v17;
            v20 = 16 * HIWORD(v19);
            v21 = (((v17 & 0xFFF) + v20 + 4095) >> 12) - ((unsigned __int64)(v20 + 4095) >> 12);
            LODWORD(v20) = (v17 + v20 - v8) & 0xFFFFF000;
            v22 = (v17 - v8 + 4127) & 0xFFFFF000;
            v23 = v20 - v22;
            if ( v22 >= (unsigned int)v20 )
              v23 = 0;
            *(_QWORD *)(SRWLock + 48) -= v21 + (v23 >> 12) - (unsigned __int16)v19;
            v14 += WORD1(v18);
          }
        }
        if ( v13 != v14 )
        {
          v24 = v6 + 16LL * v14;
          v50 = v5 ^ v6 ^ ((v14 << 16) | v11);
          v11 ^= v5 ^ (unsigned __int16)v6;
          *(_WORD *)(v6 + 2) = HIWORD(v50);
          if ( v24 < v8 + 48 + 16LL * *(unsigned __int16 *)(v8 + 32) )
          {
            HIDWORD(v52) ^= (unsigned __int16)(v14 ^ WORD2(v52));
            v52 ^= v5 ^ v24;
            *(_WORD *)(v24 + 4) = WORD2(v52);
          }
        }
        if ( v14 == *(unsigned __int16 *)(v8 + 32) )
        {
          sub_180007E7C(SRWLock, (_QWORD *)v8);
          goto LABEL_33;
        }
        if ( v14 <= i )
          break;
        v25 = (v6 - v8 + 4127) & 0xFFFFF000;
        v26 = (v6 + 16 * (WORD1(qword_18015BFA8) ^ WORD1(v6) ^ *(unsigned __int16 *)(v6 + 2)) - v8) & 0xFFFFF000;
        if ( v25 >= v26 )
          break;
        v37 = *(_QWORD *)(v8 + 16) & (-1LL << (v25 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                      - (unsigned __int8)((unsigned __int64)(v26 - 1) >> 12)));
        if ( v26 - v25 < 0x1000 || !v37 )
          break;
        v38 = *(_QWORD *)(SRWLock + 40) >> 7;
        v39 = (0x101010101010101LL
             * ((((v37 - ((v37 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v37 - ((v37 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
               + ((((v37 - ((v37 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v37 - ((v37 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
        if ( v38 <= 8 )
          v38 = 8LL;
        if ( *(_QWORD *)(SRWLock + 48) + (unsigned __int64)(unsigned int)v39 <= v38 )
          break;
        HIDWORD(v53) = HIDWORD(v53) & 0xFF00FFFF | 0x10000;
        v53 ^= v5 ^ v6;
        *(_BYTE *)(v6 + 6) = BYTE6(v53);
        *(_DWORD *)(v6 + 8) = (unsigned __int8)(v5 ^ v6 ^ ((unsigned int)(v6 - v8) >> 12)) | 0x200;
        if ( !v55 )
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)SRWLock);
        sub_180007334(SRWLock, (_RTL_SRWLOCK *)v8, v37, v39, 0, a4);
        if ( !v55 )
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)SRWLock);
        *(_DWORD *)(v6 + 8) &= ~0x200u;
        v5 = qword_18015BFA8;
      }
      v27 = 16 * (WORD1(qword_18015BFA8) ^ WORD1(v6) ^ *(unsigned __int16 *)(v6 + 2));
      v28 = (v6 - v8 + 4127) & 0xFFFFF000;
      v29 = (v27 + v6 - v8) & 0xFFFFF000;
      if ( v28 < v29 )
      {
        v30 = v29 - v28;
        v31 = *(_QWORD *)(v8 + 16) & (-1LL << (v28 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                      - (unsigned __int8)((unsigned __int64)(v29 - 1) >> 12)));
      }
      else
      {
        v30 = 0;
        v31 = 0LL;
      }
      v32 = 0;
      *(_QWORD *)(SRWLock + 48) += (unsigned int)((0x101010101010101LL
                                                 * ((((v31 - ((v31 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                   + (((v31 - ((v31 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                   + ((((v31 - ((v31 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                     + (((v31 - ((v31 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      *(_WORD *)v6 = v5 ^ v6 ^ (((v27 + (v6 & 0xFFF) + 4095) >> 12)
                              - ((unsigned __int64)(v27 + 4095) >> 12)
                              + (v30 >> 12)
                              - ((0x101010101010101LL
                                * ((((v31 - ((v31 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                  + (((v31 - ((v31 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                  + ((((v31 - ((v31 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                    + (((v31 - ((v31 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
      v33 = *(_RTL_BALANCED_NODE **)(SRWLock + 8);
      if ( v33 )
      {
        while ( 1 )
        {
          if ( ((unsigned int)v5 ^ (unsigned int)v6 ^ *(_DWORD *)v6) < ((unsigned int)v5 ^ ((_DWORD)v33 - 8) ^ *(_DWORD *)&v33[-1].16) )
          {
            v34 = v33->Children[0];
            if ( (*(_BYTE *)(SRWLock + 16) & 1) != 0 )
            {
              if ( !v34 )
              {
LABEL_30:
                v32 = 0;
                break;
              }
              v34 = (_RTL_BALANCED_NODE *)((unsigned __int64)v33 ^ (unsigned __int64)v34);
            }
            if ( !v34 )
              goto LABEL_30;
          }
          else
          {
            v34 = v33->Children[1];
            if ( (*(_BYTE *)(SRWLock + 16) & 1) != 0 )
            {
              if ( !v34 )
              {
LABEL_31:
                v32 = 1;
                break;
              }
              v34 = (_RTL_BALANCED_NODE *)((unsigned __int64)v33 ^ (unsigned __int64)v34);
            }
            if ( !v34 )
              goto LABEL_31;
          }
          v33 = v34;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)(SRWLock + 8), v33, v32, (PRTL_BALANCED_NODE)(v6 + 8));
      v8 = 0LL;
LABEL_33:
      if ( !v55 )
      {
        v35 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 0LL, 1LL);
        if ( v35 != 1 )
        {
          do
          {
            v42 = 3LL;
            v43 = v35 & 6;
            if ( v43 != 2 )
              v42 = -1LL;
            v44 = v35 + v42;
            v45 = v35;
            v35 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v44, v35);
          }
          while ( v45 != v35 );
          if ( v43 == 2 )
            sub_180077520(SRWLock, v44, 0LL);
        }
      }
      if ( v8 )
      {
        v40 = *(_QWORD *)(SRWLock + 56);
        v41 = (__int64 (__fastcall *)(__int64, __int64, char))(SRWLock ^ qword_18015BFA8 ^ *(_QWORD *)(SRWLock + 72));
        if ( v41 == sub_18001E750 )
          sub_18001E750(v40, v8, a4);
        else
          v41(v40, v8, a4);
      }
      return 1LL;
    }
    else
    {
      sub_1800A4DFC(8, *(_QWORD *)(SRWLock + 56), v7, v6, 0LL, 0LL);
      if ( !v10 )
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)SRWLock);
      return 0LL;
    }
  }
  else
  {
    sub_1800A4DFC(17, *(_QWORD *)(SRWLock + 56), v8, 0, 0LL, 0LL);
    return 0LL;
  }
}
