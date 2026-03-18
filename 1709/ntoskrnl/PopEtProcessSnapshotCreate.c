/*
 * XREFs of PopEtProcessSnapshotCreate @ 0x140457570
 * Callers:
 *     PopEtProcessSnapshotUpdate @ 0x140457AC0 (PopEtProcessSnapshotUpdate.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x140457830 (PopEtAggregateKeyCopyFromProcess.c)
 *     PopEtStringSet @ 0x140458280 (PopEtStringSet.c)
 *     PopEtAggregateKeyCleanup @ 0x14045876C (PopEtAggregateKeyCleanup.c)
 *     PopEtBucketsFree @ 0x1404599CC (PopEtBucketsFree.c)
 *     PopEtBucketsAllocate @ 0x1404599E8 (PopEtBucketsAllocate.c)
 */

__int64 __fastcall PopEtProcessSnapshotCreate(__int64 a1, _QWORD *a2)
{
  _DWORD *v2; // r15
  __int64 v4; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // r14
  unsigned __int64 v7; // rsi
  unsigned int v8; // edi
  int v9; // edx
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rdx
  char v14; // di
  unsigned __int64 v15; // rax
  __int64 v16; // rbx
  char *v17; // rax
  char *v18; // r8
  unsigned __int64 v19; // rcx
  unsigned int v20; // edi
  __int64 v21; // r9
  __int64 v22; // r15
  _QWORD *v23; // r10
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // [rsp+50h] [rbp+30h]
  __int64 v28; // [rsp+50h] [rbp+30h]

  v2 = *(_DWORD **)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 8);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1F0uLL, 0x54456F50u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x1F0uLL);
    memset(v6 + 2, 0, 0x20uLL);
    v6[1] = v4;
    PopEtAggregateKeyCopyFromProcess(v6 + 2, v4, v2 + 8);
    PopEtStringSet(v6 + 3, 0LL);
    v7 = (unsigned __int64)(v2 + 16);
    if ( v2[16] < (unsigned int)(2 * (v2[17] >> 5)) )
      goto LABEL_3;
    v14 = -1;
    v15 = 2 * ((unsigned __int64)(unsigned int)v2[17] >> 5);
    if ( v15 > 0xFFFFFFFF )
      goto LABEL_3;
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
      v21 = -1LL << (v2[17] & 0x1F);
      if ( (v2[17] & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v22 = *(_QWORD *)(v7 + 8);
          while ( 1 )
          {
            v23 = *(_QWORD **)(v22 + 8LL * v20);
            if ( ((unsigned __int8)v23 & 1) != 0 )
              break;
            *(_QWORD *)(v22 + 8LL * v20) = *v23;
            v28 = v21 & v23[1];
            v24 = (37
                 * (BYTE6(v28)
                  + 37
                  * (BYTE5(v28)
                   + 37
                   * (BYTE4(v28)
                    + 37 * (BYTE3(v28) + 37 * (BYTE2(v28) + 37 * (BYTE1(v28) + 37 * ((unsigned __int8)v28 + 11623883)))))))
                 + HIBYTE(v28)) & (unsigned int)(v16 - 1);
            *v23 = *(_QWORD *)&v17[8 * v24];
            *(_QWORD *)&v17[8 * v24] = v23;
          }
          ++v20;
        }
        while ( v20 < *(_DWORD *)(v7 + 4) >> 5 );
      }
      v25 = *(_QWORD *)(v7 + 8);
      v26 = (32 * v16) | *(_DWORD *)(v7 + 4) & 0x1F;
      *(_QWORD *)(v7 + 8) = v18;
      *(_DWORD *)(v7 + 4) = v26;
      if ( v25 )
        PopEtBucketsFree(v25, 0LL, v18, v21);
      goto LABEL_3;
    }
    if ( v2[17] >= 0x20u )
    {
LABEL_3:
      v8 = *(_DWORD *)(v7 + 4);
      *a2 = v6;
      v27 = v6[1] & (-1LL << (v8 & 0x1F));
      v9 = (v8 >> 5) - 1;
      v10 = 0;
      v11 = *(_QWORD *)(v7 + 8);
      v12 = (37
           * (BYTE6(v27)
            + 37
            * (BYTE5(v27)
             + 37
             * (BYTE4(v27)
              + 37 * (BYTE3(v27) + 37 * (BYTE2(v27) + 37 * (BYTE1(v27) + 37 * ((unsigned __int8)v27 + 11623883)))))))
           + HIBYTE(v27)) & (unsigned int)v9;
      *v6 = *(_QWORD *)(v11 + 8 * v12);
      *(_QWORD *)(v11 + 8 * v12) = v6;
      ++*(_DWORD *)v7;
      return v10;
    }
  }
  ++v2[153];
  v10 = -1073741670;
  if ( v6 )
  {
    PopEtAggregateKeyCleanup(v6 + 2);
    ExFreePoolWithTag(v6, 0x54456F50u);
  }
  return v10;
}
