/*
 * XREFs of PopEtAggregateGet @ 0x140537744
 * Callers:
 *     PopEtEnergyTrackerUpdateAggregate @ 0x14053807C (PopEtEnergyTrackerUpdateAggregate.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PopEtAggregateKeyCleanup @ 0x140535008 (PopEtAggregateKeyCleanup.c)
 *     PopEtAggregateKeyCopy @ 0x140535050 (PopEtAggregateKeyCopy.c)
 *     PopEtAggregateFind @ 0x140537A74 (PopEtAggregateFind.c)
 *     PopEtBucketsAllocate @ 0x1405E9EE8 (PopEtBucketsAllocate.c)
 *     PopEtBucketsFree @ 0x1405E9F88 (PopEtBucketsFree.c)
 */

void __fastcall PopEtAggregateGet(__int64 a1, _OWORD *a2, __int64 *a3)
{
  __int64 *v3; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // r14
  unsigned __int64 v10; // rcx
  unsigned int v11; // r8d
  unsigned __int64 v12; // rdi
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  int v16; // edi
  int v17; // edi
  unsigned __int64 v18; // rax
  __int64 v19; // rbx
  char *v20; // r8
  unsigned __int64 v21; // rcx
  unsigned int v22; // r9d
  __int64 v23; // r10
  __int64 v24; // r13
  _QWORD *v25; // r11
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // r8
  int v29; // eax
  unsigned int v30; // edi
  unsigned __int64 v31; // r15
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v35; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  v6 = PopEtAggregateFind(a1, a2, &v35);
  if ( v6 )
  {
    *v3 = v6;
    return;
  }
  v7 = a1 + 48;
  if ( *(_DWORD *)(a1 + 48) >= *(_DWORD *)(a1 + 32) )
  {
    ++*(_DWORD *)(a1 + 616);
LABEL_35:
    ++*(_DWORD *)(a1 + 604);
    v28 = (_QWORD *)(a1 + 80);
    v29 = *(_DWORD *)(a1 + 636);
    *v3 = a1 + 80;
    if ( (v29 & 4) == 0 )
    {
      *(_DWORD *)(a1 + 636) = v29 | 4;
      v30 = *(_DWORD *)(a1 + 52);
      v31 = *(_QWORD *)(a1 + 88) & (-1LL << (v30 & 0x1F));
      v32 = *(_QWORD *)(a1 + 56);
      v33 = (HIBYTE(v31)
           + 37
           * (BYTE6(v31)
            + 37
            * (BYTE5(v31)
             + 37
             * (BYTE4(v31)
              + 37 * (BYTE3(v31) + 37 * (BYTE2(v31) + 37 * (BYTE1(v31) + 37 * ((unsigned __int8)v31 + 11623883)))))))) & ((v30 >> 5) - 1);
      *v28 = *(_QWORD *)(v32 + 8 * v33);
      *(_QWORD *)(v32 + 8 * v33) = v28;
      ++*(_DWORD *)v7;
    }
    return;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x54456F50u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_35;
  memset(PoolWithTag, 0, 0x200uLL);
  memset(v9 + 2, 0, 0x20uLL);
  PopEtAggregateKeyCopy(v9 + 2, a2);
  v9[1] = v35;
  v10 = *(unsigned int *)(a1 + 52);
  if ( *(_DWORD *)v7 < (unsigned int)(2 * (*(_DWORD *)(a1 + 52) >> 5)) )
    goto LABEL_5;
  v17 = -1;
  v18 = 2 * (v10 >> 5);
  if ( v18 > 0xFFFFFFFF )
    goto LABEL_5;
  v19 = (unsigned int)v18;
  if ( (unsigned int)v18 < 4 )
    v19 = 4LL;
  v20 = (char *)PopEtBucketsAllocate(8LL * (unsigned int)v19);
  if ( v20 )
  {
    if ( (((_DWORD)v19 - 1) & (unsigned int)v19) != 0 )
    {
      do
      {
        ++v17;
        LODWORD(v19) = (unsigned int)v19 >> 1;
      }
      while ( (_DWORD)v19 );
      v19 = (unsigned int)(1 << v17);
    }
    if ( (unsigned int)v19 > 0x4000000 )
      v19 = 0x4000000LL;
    v21 = (unsigned int)v19;
    if ( v20 > &v20[8 * v19] )
      v21 = 0LL;
    if ( v21 )
      memset64(v20, v7 | 1, v21);
    v22 = 0;
    v23 = -1LL << (*(_BYTE *)(a1 + 52) & 0x1F);
    if ( (*(_DWORD *)(a1 + 52) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v24 = *(_QWORD *)(a1 + 56);
        while ( 1 )
        {
          v25 = *(_QWORD **)(v24 + 8LL * v22);
          if ( ((unsigned __int8)v25 & 1) != 0 )
            break;
          *(_QWORD *)(v24 + 8LL * v22) = *v25;
          v26 = ((((unsigned __int64)v23 & v25[1]) >> 56)
               + 37
               * ((unsigned __int8)(((unsigned __int64)v23 & v25[1]) >> 48)
                + 37
                * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v23 & v25[1]) >> 32) >> 8)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v23 & v25[1]) >> 32)
                  + 37
                  * ((((unsigned int)v23 & (_DWORD)v25[1]) >> 24)
                   + 37
                   * ((unsigned __int8)(((unsigned int)v23 & (_DWORD)v25[1]) >> 16)
                    + 37
                    * ((unsigned __int8)((unsigned __int16)(v23 & v25[1]) >> 8)
                     + 37 * ((unsigned __int8)(v23 & v25[1]) + 11623883)))))))) & (unsigned int)(v19 - 1);
          *v25 = *(_QWORD *)&v20[8 * v26];
          *(_QWORD *)&v20[8 * v26] = v25;
        }
        ++v22;
      }
      while ( v22 < *(_DWORD *)(a1 + 52) >> 5 );
      v3 = a3;
    }
    v27 = *(_QWORD *)(a1 + 56);
    LODWORD(v10) = (32 * v19) | *(_DWORD *)(a1 + 52) & 0x1F;
    *(_QWORD *)(a1 + 56) = v20;
    *(_DWORD *)(a1 + 52) = v10;
    if ( v27 )
    {
      PopEtBucketsFree(v27, 0LL, v20);
      LODWORD(v10) = *(_DWORD *)(a1 + 52);
    }
    goto LABEL_5;
  }
  LODWORD(v10) = *(_DWORD *)(a1 + 52);
  if ( (unsigned int)v10 >= 0x20 )
  {
LABEL_5:
    *v3 = (__int64)v9;
    v11 = (unsigned int)v10 >> 5;
    v12 = v9[1] & (-1LL << (v10 & 0x1F));
    v13 = 37
        * (BYTE5(v12)
         + 37
         * (BYTE4(v12)
          + 37
          * ((((_DWORD)v9[1] & (unsigned int)(-1 << (v10 & 0x1F))) >> 24)
           + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v12 + 11623883))))));
    v14 = *(_QWORD *)(a1 + 56);
    v15 = (HIBYTE(v12) + 37 * (BYTE6(v12) + v13)) & (v11 - 1);
    *v9 = *(_QWORD *)(v14 + 8 * v15);
    *(_QWORD *)(v14 + 8 * v15) = v9;
    v9 = 0LL;
    ++*(_DWORD *)v7;
    v16 = 0;
    goto LABEL_6;
  }
  v16 = -1073741670;
LABEL_6:
  if ( v9 )
  {
    PopEtAggregateKeyCleanup(v9 + 2);
    ExFreePoolWithTag(v9, 0x54456F50u);
  }
  if ( v16 < 0 )
    goto LABEL_35;
}
