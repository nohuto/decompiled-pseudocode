/*
 * XREFs of PopEtAggregateGet @ 0x1404582E4
 * Callers:
 *     PopEtEnergyTrackerUpdateAggregate @ 0x140457C68 (PopEtEnergyTrackerUpdateAggregate.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PopEtAggregateFind @ 0x1404585D8 (PopEtAggregateFind.c)
 *     PopEtAggregateKeyCleanup @ 0x14045876C (PopEtAggregateKeyCleanup.c)
 *     PopEtAggregateKeyCopy @ 0x1404587B4 (PopEtAggregateKeyCopy.c)
 *     PopEtBucketsFree @ 0x1404599CC (PopEtBucketsFree.c)
 *     PopEtBucketsAllocate @ 0x1404599E8 (PopEtBucketsAllocate.c)
 */

void __fastcall PopEtAggregateGet(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // r15
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rdi
  int v13; // edi
  char v14; // di
  unsigned __int64 v15; // rax
  __int64 v16; // rbx
  char *v17; // rax
  char *v18; // r8
  unsigned __int64 v19; // rcx
  unsigned int v20; // edi
  __int64 v21; // r10
  __int64 v22; // r12
  _QWORD *v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  _QWORD *v27; // r8
  int v28; // eax
  unsigned int v29; // edi
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // [rsp+68h] [rbp+48h] BYREF

  v6 = PopEtAggregateFind(a1, a2, &v32);
  if ( v6 )
  {
    *a3 = v6;
    return;
  }
  v7 = a1 + 48;
  if ( *(_DWORD *)(a1 + 48) >= *(_DWORD *)(a1 + 32) )
  {
    ++*(_DWORD *)(a1 + 616);
LABEL_34:
    ++*(_DWORD *)(a1 + 604);
    v27 = (_QWORD *)(a1 + 80);
    v28 = *(_DWORD *)(a1 + 636);
    *a3 = a1 + 80;
    if ( (v28 & 4) == 0 )
    {
      *(_DWORD *)(a1 + 636) = v28 | 4;
      v29 = *(_DWORD *)(a1 + 52);
      v32 = *(_QWORD *)(a1 + 88) & (-1LL << (v29 & 0x1F));
      v30 = *(_QWORD *)(a1 + 56);
      v31 = (37
           * (BYTE6(v32)
            + 37
            * (BYTE5(v32)
             + 37
             * (BYTE4(v32)
              + 37 * (BYTE3(v32) + 37 * (BYTE2(v32) + 37 * (BYTE1(v32) + 37 * ((unsigned __int8)v32 + 11623883)))))))
           + HIBYTE(v32)) & ((v29 >> 5) - 1);
      *v27 = *(_QWORD *)(v30 + 8 * v31);
      *(_QWORD *)(v30 + 8 * v31) = v27;
      ++*(_DWORD *)v7;
    }
    return;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x54456F50u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_34;
  memset(PoolWithTag, 0, 0x200uLL);
  memset(v9 + 2, 0, 0x20uLL);
  PopEtAggregateKeyCopy(v9 + 2, a2);
  v9[1] = v32;
  if ( *(_DWORD *)v7 < (unsigned int)(2 * (*(_DWORD *)(a1 + 52) >> 5)) )
    goto LABEL_5;
  v14 = -1;
  v15 = 2 * ((unsigned __int64)*(unsigned int *)(a1 + 52) >> 5);
  if ( v15 > 0xFFFFFFFF )
    goto LABEL_5;
  v16 = (unsigned int)v15;
  if ( (unsigned int)v15 < 4 )
    v16 = 4LL;
  v17 = (char *)PopEtBucketsAllocate(8LL * (unsigned int)v16);
  v18 = v17;
  if ( v17 )
  {
    if ( (((_DWORD)v16 - 1) & (unsigned int)v16) != 0 )
    {
      do
      {
        ++v14;
        LODWORD(v16) = (unsigned int)v16 >> 1;
      }
      while ( (_DWORD)v16 );
      v16 = (unsigned int)(1 << v14);
    }
    if ( (unsigned int)v16 > 0x4000000 )
      v16 = 0x4000000LL;
    v19 = (unsigned int)v16;
    if ( v17 > &v17[8 * v16] )
      v19 = 0LL;
    if ( v19 )
      memset64(v17, v7 | 1, v19);
    v20 = 0;
    v21 = -1LL << (*(_BYTE *)(a1 + 52) & 0x1F);
    if ( (*(_DWORD *)(a1 + 52) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v22 = *(_QWORD *)(a1 + 56);
        while ( 1 )
        {
          v23 = *(_QWORD **)(v22 + 8LL * v20);
          if ( ((unsigned __int8)v23 & 1) != 0 )
            break;
          *(_QWORD *)(v22 + 8LL * v20) = *v23;
          v32 = v21 & v23[1];
          v24 = (37
               * (BYTE6(v32)
                + 37
                * (BYTE5(v32)
                 + 37
                 * (BYTE4(v32)
                  + 37 * (BYTE3(v32) + 37 * (BYTE2(v32) + 37 * (BYTE1(v32) + 37 * ((unsigned __int8)v32 + 11623883)))))))
               + HIBYTE(v32)) & (unsigned int)(v16 - 1);
          *v23 = *(_QWORD *)&v17[8 * v24];
          *(_QWORD *)&v17[8 * v24] = v23;
        }
        ++v20;
      }
      while ( v20 < *(_DWORD *)(a1 + 52) >> 5 );
    }
    v25 = *(_QWORD *)(a1 + 56);
    v26 = (32 * v16) | *(_DWORD *)(a1 + 52) & 0x1F;
    *(_QWORD *)(a1 + 56) = v18;
    *(_DWORD *)(a1 + 52) = v26;
    if ( v25 )
      PopEtBucketsFree(v25, 0LL, v18, 0LL);
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a1 + 52) >= 0x20u )
  {
LABEL_5:
    v10 = *(_DWORD *)(a1 + 52);
    *a3 = (__int64)v9;
    v32 = v9[1] & (-1LL << (v10 & 0x1F));
    v11 = *(_QWORD *)(a1 + 56);
    v12 = (37
         * (BYTE6(v32)
          + 37
          * (BYTE5(v32)
           + 37
           * (BYTE4(v32)
            + 37 * (BYTE3(v32) + 37 * (BYTE2(v32) + 37 * (BYTE1(v32) + 37 * ((unsigned __int8)v32 + 11623883)))))))
         + HIBYTE(v32)) & ((v10 >> 5) - 1);
    *v9 = *(_QWORD *)(v11 + 8 * v12);
    *(_QWORD *)(v11 + 8 * v12) = v9;
    v9 = 0LL;
    ++*(_DWORD *)v7;
    v13 = 0;
    goto LABEL_6;
  }
  v13 = -1073741670;
LABEL_6:
  if ( v9 )
  {
    PopEtAggregateKeyCleanup(v9 + 2);
    ExFreePoolWithTag(v9, 0x54456F50u);
  }
  if ( v13 < 0 )
    goto LABEL_34;
}
