/*
 * XREFs of PopEtProcessSnapshotCreate @ 0x1406D2CD8
 * Callers:
 *     PopEtProcessSnapshotUpdate @ 0x1406D30EC (PopEtProcessSnapshotUpdate.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PopEtAggregateKeyCleanup @ 0x1406D0BBC (PopEtAggregateKeyCleanup.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x1406D0C80 (PopEtAggregateKeyCopyFromProcess.c)
 *     PopEtAllocate @ 0x1406D0D14 (PopEtAllocate.c)
 *     PopEtBucketsFree @ 0x1406D0E8C (PopEtBucketsFree.c)
 *     PopEtStringSet @ 0x1406D3460 (PopEtStringSet.c)
 */

__int64 __fastcall PopEtProcessSnapshotCreate(__int64 a1, _QWORD *a2)
{
  _DWORD *v2; // r15
  struct _KPROCESS *v4; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // r14
  unsigned __int64 v7; // rsi
  char v8; // di
  unsigned __int64 v9; // rbx
  char *v10; // r8
  unsigned __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // r9
  __int64 v14; // r15
  _QWORD *v15; // r10
  __int64 v16; // rdx
  void *v17; // rcx
  int v18; // ebx
  unsigned int v19; // edi
  int v20; // edx
  unsigned int v21; // edi
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v25; // [rsp+50h] [rbp+30h]
  __int64 v26; // [rsp+50h] [rbp+30h]

  v2 = *(_DWORD **)(a1 + 8);
  v4 = *(struct _KPROCESS **)a1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x198uLL, 0x54456F50u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x198uLL);
    memset(v6 + 2, 0, 0x20uLL);
    v6[1] = v4;
    PopEtAggregateKeyCopyFromProcess(v6 + 2, v4, (__int64)(v2 + 8));
    PopEtStringSet(v6 + 3, 0LL);
    v7 = (unsigned __int64)(v2 + 16);
    if ( v2[16] < (unsigned int)(2 * (v2[17] >> 5)) )
      goto LABEL_23;
    v8 = -1;
    v9 = 2 * ((unsigned __int64)(unsigned int)v2[17] >> 5);
    if ( v9 > 0xFFFFFFFF )
      goto LABEL_23;
    if ( (unsigned int)v9 < 4 )
      v9 = 4LL;
    v10 = (char *)PopEtAllocate(8LL * (unsigned int)v9);
    if ( v10 )
    {
      if ( (((_DWORD)v9 - 1) & (unsigned int)v9) != 0 )
      {
        do
        {
          ++v8;
          LODWORD(v9) = (unsigned int)v9 >> 1;
        }
        while ( (_DWORD)v9 );
        v9 = (unsigned int)(1 << v8);
      }
      if ( (unsigned int)v9 > 0x4000000 )
        v9 = 0x4000000LL;
      v11 = (8 * v9 + 7) >> 3;
      if ( v10 > &v10[8 * v9] )
        v11 = 0LL;
      if ( v11 )
        memset64(v10, v7 | 1, v11);
      v12 = 0;
      v13 = -1LL << (v2[17] & 0x1F);
      if ( (v2[17] & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v14 = *(_QWORD *)(v7 + 8);
          while ( 1 )
          {
            v15 = *(_QWORD **)(v14 + 8LL * v12);
            if ( ((unsigned __int8)v15 & 1) != 0 )
              break;
            *(_QWORD *)(v14 + 8LL * v12) = *v15;
            v25 = v13 & v15[1];
            v16 = (37
                 * (BYTE6(v25)
                  + 37
                  * (BYTE5(v25)
                   + 37
                   * (BYTE4(v25)
                    + 37 * (BYTE3(v25) + 37 * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v25 + 11623883)))))))
                 + HIBYTE(v25)) & (unsigned int)(v9 - 1);
            *v15 = *(_QWORD *)&v10[8 * v16];
            *(_QWORD *)&v10[8 * v16] = v15;
          }
          ++v12;
        }
        while ( v12 < *(_DWORD *)(v7 + 4) >> 5 );
      }
      v17 = *(void **)(v7 + 8);
      v18 = *(_DWORD *)(v7 + 4) & 0x1F | (32 * v9);
      *(_QWORD *)(v7 + 8) = v10;
      *(_DWORD *)(v7 + 4) = v18;
      if ( v17 )
        PopEtBucketsFree(v17);
      goto LABEL_23;
    }
    if ( v2[17] >= 0x20u )
    {
LABEL_23:
      v19 = *(_DWORD *)(v7 + 4);
      *a2 = v6;
      v26 = v6[1] & (-1LL << (v19 & 0x1F));
      v20 = (v19 >> 5) - 1;
      v21 = 0;
      v22 = *(_QWORD *)(v7 + 8);
      v23 = (37
           * (BYTE6(v26)
            + 37
            * (BYTE5(v26)
             + 37
             * (BYTE4(v26)
              + 37 * (BYTE3(v26) + 37 * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v26 + 11623883)))))))
           + HIBYTE(v26)) & (unsigned int)v20;
      *v6 = *(_QWORD *)(v22 + 8 * v23);
      *(_QWORD *)(v22 + 8 * v23) = v6;
      ++*(_DWORD *)v7;
      return v21;
    }
  }
  ++v2[131];
  v21 = -1073741670;
  if ( v6 )
  {
    PopEtAggregateKeyCleanup(v6 + 2);
    ExFreePoolWithTag(v6, 0x54456F50u);
  }
  return v21;
}
