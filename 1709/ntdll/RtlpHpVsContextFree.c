/*
 * XREFs of RtlpHpVsContextFree @ 0x18003E180
 * Callers:
 *     RtlpFreeHeapInternal @ 0x18003E860 (RtlpFreeHeapInternal.c)
 *     RtlpHpFreeHeap @ 0x18003FEE0 (RtlpHpFreeHeap.c)
 *     RtlpHpSegFree @ 0x1800481C0 (RtlpHpSegFree.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x18003A130 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x18003A530 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x18004AECC (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpVsSubsegmentFree @ 0x180061818 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x180061864 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsFreeChunkRemove @ 0x1800720D4 (RtlpHpVsFreeChunkRemove.c)
 *     RtlpWakeSRWLock @ 0x180075F18 (RtlpWakeSRWLock.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpVsContextFree(
        PRTL_SRWLOCK SRWLock,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        _DWORD *a5)
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
  unsigned int v19; // ecx
  unsigned int v20; // edx
  unsigned __int64 v21; // rdx
  unsigned int v22; // r9d
  unsigned int v23; // r8d
  __int64 v24; // rdx
  unsigned __int64 v25; // r11
  unsigned int v26; // r9d
  unsigned int v27; // edx
  __int16 v28; // r11
  unsigned int v29; // r8d
  unsigned __int64 v30; // rdx
  BOOLEAN v31; // cl
  unsigned __int64 Value; // rdx
  unsigned __int64 v33; // rax
  signed __int64 v34; // rax
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // r14
  __int64 v39; // rdx
  signed __int64 v40; // rcx
  signed __int64 v41; // rdx
  signed __int64 v42; // rtt
  int v43; // eax
  unsigned __int64 v44; // rsi
  int v45; // ecx
  unsigned __int16 v46; // [rsp+30h] [rbp-58h]
  int v47; // [rsp+30h] [rbp-58h]
  __int64 v48; // [rsp+38h] [rbp-50h]
  __int64 v49; // [rsp+40h] [rbp-48h]
  __int64 v50; // [rsp+48h] [rbp-40h]
  unsigned int i; // [rsp+98h] [rbp+10h]
  int v52; // [rsp+A0h] [rbp+18h]
  unsigned int v53; // [rsp+A8h] [rbp+20h]

  v53 = a4;
  v5 = RtlpHeapKey;
  v6 = a3 - 16;
  v7 = a3;
  v8 = a2;
  if ( !a2 )
  {
    a3 = HIDWORD(RtlpHeapKey);
    v43 = HIDWORD(RtlpHeapKey) ^ HIDWORD(v6) ^ HIDWORD(*(_QWORD *)v6);
    v44 = v6;
    if ( (v43 & 0xFF0000) != 0 )
    {
      v45 = (unsigned __int8)(RtlpHeapKey ^ v6 ^ *(_BYTE *)(v6 + 8));
    }
    else if ( (_WORD)v43 )
    {
      v44 = v6 - 16LL * (unsigned __int16)(WORD2(RtlpHeapKey) ^ WORD2(v6) ^ HIDWORD(*(_QWORD *)v6));
      v45 = (unsigned __int8)(RtlpHeapKey ^ v44 ^ *(_BYTE *)(v44 + 8));
    }
    else
    {
      v45 = 0;
    }
    v8 = (v44 - (unsigned int)(v45 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  }
  if ( (*(_WORD *)(v8 + 34) ^ 0xABED) == *(_WORD *)(v8 + 32) )
  {
    v10 = a4 & 1;
    v52 = v10;
    *a5 = 16 * (WORD1(RtlpHeapKey) ^ WORD1(v6) ^ *(unsigned __int16 *)(v6 + 2)) - 16;
    if ( (a4 & 1) == 0 )
    {
      RtlAcquireSRWLockExclusive(SRWLock);
      v5 = RtlpHeapKey;
    }
    if ( ((HIDWORD(v6) ^ HIDWORD(v5) ^ HIDWORD(*(_QWORD *)v6)) & 0xFF0000) != 0 )
    {
      v11 = v46;
      for ( i = 0; ; i = v14 )
      {
        HIDWORD(v48) &= 0xFF00FFFF;
        v12 = (unsigned __int16)((v5 ^ v6 ^ *(_QWORD *)v6) >> 32);
        v13 = ((unsigned int)v5 ^ (unsigned int)v6 ^ *(_DWORD *)v6) >> 16;
        v14 = v13;
        v48 ^= v5 ^ v6;
        *(_BYTE *)(v6 + 6) = BYTE6(v48);
        if ( v12 )
        {
          v15 = v6 - 16LL * v12;
          v16 = v5 ^ v15 ^ *(_QWORD *)v15;
          if ( (v16 & 0xFF000000000000LL) == 0 )
          {
            RtlpHpVsFreeChunkRemove(SRWLock, v8, v6 - 16LL * v12, a4);
            v5 = RtlpHeapKey;
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
            RtlRbRemoveNode((PRTL_RB_TREE)&SRWLock[1], (PRTL_BALANCED_NODE)(v17 + 8));
            v5 = RtlpHeapKey;
            a4 = (unsigned int)RtlpHeapKey ^ *(_DWORD *)v17 ^ (unsigned int)v17;
            v19 = (v17 - v8 + 4127) & 0xFFFFF000;
            a3 = 16 * (((unsigned int)RtlpHeapKey ^ *(_DWORD *)v17 ^ (unsigned int)v17) >> 16);
            v20 = ((v17 + a3 - v8) & 0xFFFFF000) - v19;
            if ( v19 >= (((_DWORD)v17 + (_DWORD)a3 - (_DWORD)v8) & 0xFFFFF000) )
              v20 = 0;
            SRWLock[6].Value -= (unsigned int)(((v17 & 0xFFF) + a3 + 4095) >> 12)
                              + (v20 >> 12)
                              - (unsigned int)((a3 + 4095) >> 12)
                              - (unsigned __int16)(RtlpHeapKey ^ *(_WORD *)v17 ^ v17);
            v14 += WORD1(v18);
          }
        }
        if ( v13 != v14 )
        {
          v21 = v6 + 16LL * v14;
          v47 = v5 ^ v6 ^ ((v14 << 16) | v11);
          v11 ^= v5 ^ (unsigned __int16)v6;
          *(_WORD *)(v6 + 2) = HIWORD(v47);
          if ( v21 < v8 + 48 + 16LL * *(unsigned __int16 *)(v8 + 32) )
          {
            HIDWORD(v49) ^= (unsigned __int16)(v14 ^ WORD2(v49));
            v49 ^= v5 ^ v21;
            *(_WORD *)(v21 + 4) = WORD2(v49);
          }
        }
        if ( v14 == *(unsigned __int16 *)(v8 + 32) )
        {
          RtlpHpVsSubsegmentCleanup(SRWLock, v8, a3, a4);
          goto LABEL_33;
        }
        if ( v14 <= i )
          break;
        v22 = (v6 - v8 + 4127) & 0xFFFFF000;
        v23 = (v6 + 16 * (WORD1(RtlpHeapKey) ^ WORD1(v6) ^ *(unsigned __int16 *)(v6 + 2)) - v8) & 0xFFFFF000;
        if ( v22 >= v23 )
          break;
        v36 = *(_QWORD *)(v8 + 16) & (-1LL << (v22 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                      - (unsigned __int8)((unsigned __int64)(v23 - 1) >> 12)));
        if ( v23 - v22 < 0x1000 || !v36 )
          break;
        v37 = SRWLock[5].Value >> 7;
        v38 = (0x101010101010101LL
             * ((((v36 - ((v36 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v36 - ((v36 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
               + ((((v36 - ((v36 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v36 - ((v36 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
        if ( v37 <= 8 )
          v37 = 8LL;
        if ( SRWLock[6].Value + (unsigned int)v38 <= v37 )
          break;
        HIDWORD(v50) = HIDWORD(v50) & 0xFF00FFFF | 0x10000;
        v50 ^= v5 ^ v6;
        *(_BYTE *)(v6 + 6) = BYTE6(v50);
        *(_DWORD *)(v6 + 8) = (unsigned __int8)(v5 ^ v6 ^ ((unsigned int)(v6 - v8) >> 12)) | 0x200;
        if ( !v52 )
          RtlReleaseSRWLockExclusive(SRWLock);
        RtlpHpVsSubsegmentCommitPages((_DWORD)SRWLock, v8, v36, v38, 0);
        if ( !v52 )
          RtlAcquireSRWLockExclusive(SRWLock);
        *(_DWORD *)(v6 + 8) &= ~0x200u;
        v5 = RtlpHeapKey;
      }
      v24 = 16 * (WORD1(RtlpHeapKey) ^ WORD1(v6) ^ *(unsigned __int16 *)(v6 + 2));
      v25 = v24 + (v6 & 0xFFF) + 4095;
      v26 = (v6 - v8 + 4127) & 0xFFFFF000;
      v27 = (v6 + v24 - v8) & 0xFFFFF000;
      v28 = (v25 >> 12)
          - (((unsigned __int64)(16 * (WORD1(RtlpHeapKey) ^ WORD1(v6) ^ *(unsigned __int16 *)(v6 + 2))) + 4095) >> 12);
      if ( v26 < v27 )
      {
        v29 = v27 - v26;
        v30 = *(_QWORD *)(v8 + 16) & (-1LL << (v26 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                      - (unsigned __int8)((unsigned __int64)(v27 - 1) >> 12)));
      }
      else
      {
        v29 = 0;
        v30 = 0LL;
      }
      SRWLock[6].Value += (unsigned int)((0x101010101010101LL
                                        * ((((v30 - ((v30 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                          + (((v30 - ((v30 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                          + ((((v30 - ((v30 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                            + (((v30 - ((v30 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      v31 = 0;
      *(_WORD *)v6 = v5 ^ v6 ^ (v28
                              + (v29 >> 12)
                              - ((0x101010101010101LL
                                * ((((v30 - ((v30 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                  + (((v30 - ((v30 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                  + ((((v30 - ((v30 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                    + (((v30 - ((v30 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
      Value = SRWLock[1].Value;
      if ( Value )
      {
        while ( 1 )
        {
          if ( ((unsigned int)v5 ^ (unsigned int)v6 ^ *(_DWORD *)v6) < ((unsigned int)v5 ^ *(_DWORD *)(Value - 8) ^ ((_DWORD)Value - 8)) )
          {
            v33 = *(_QWORD *)Value;
            if ( (*(_BYTE *)&SRWLock[2].0 & 1) != 0 )
            {
              if ( !v33 )
              {
LABEL_30:
                v31 = 0;
                break;
              }
              v33 ^= Value;
            }
            if ( !v33 )
              goto LABEL_30;
          }
          else
          {
            v33 = *(_QWORD *)(Value + 8);
            if ( (*(_BYTE *)&SRWLock[2].0 & 1) != 0 )
            {
              if ( !v33 )
              {
LABEL_31:
                v31 = 1;
                break;
              }
              v33 ^= Value;
            }
            if ( !v33 )
              goto LABEL_31;
          }
          Value = v33;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)&SRWLock[1], (PRTL_BALANCED_NODE)Value, v31, (PRTL_BALANCED_NODE)(v6 + 8));
      v8 = 0LL;
LABEL_33:
      if ( !v52 )
      {
        v34 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 0LL, 1LL);
        if ( v34 != 1 )
        {
          do
          {
            v39 = 3LL;
            v40 = v34 & 6;
            if ( v40 != 2 )
              v39 = -1LL;
            v41 = v34 + v39;
            v42 = v34;
            v34 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v41, v34);
          }
          while ( v42 != v34 );
          if ( v40 == 2 )
            RtlpWakeSRWLock(SRWLock, v41, 0LL);
        }
      }
      if ( v8 )
        RtlpHpVsSubsegmentFree(SRWLock, v8, v53);
      return 1LL;
    }
    else
    {
      RtlpLogHeapFailure(8, SRWLock[7].Value, v7, v6, 0LL, 0LL);
      if ( !v10 )
        RtlReleaseSRWLockExclusive(SRWLock);
      return 0LL;
    }
  }
  else
  {
    RtlpLogHeapFailure(17, SRWLock[7].Value, v8, 0, 0LL, 0LL);
    return 0LL;
  }
}
