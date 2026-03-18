/*
 * XREFs of PopEtProcessSnapshotCreate @ 0x1405326C0
 * Callers:
 *     PopEtProcessSnapshotUpdate @ 0x140537D50 (PopEtProcessSnapshotUpdate.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x1405329C0 (PopEtAggregateKeyCopyFromProcess.c)
 *     PopEtAggregateKeyCleanup @ 0x140535008 (PopEtAggregateKeyCleanup.c)
 *     PopEtStringSet @ 0x140538578 (PopEtStringSet.c)
 *     PopEtBucketsAllocate @ 0x1405E9EE8 (PopEtBucketsAllocate.c)
 *     PopEtBucketsFree @ 0x1405E9F88 (PopEtBucketsFree.c)
 */

__int64 __fastcall PopEtProcessSnapshotCreate(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v4; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // r14
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned int v9; // edi
  unsigned __int64 v10; // r15
  __int64 v11; // rcx
  int v12; // edx
  unsigned int v13; // edi
  unsigned __int64 v14; // rdx
  char v16; // di
  unsigned __int64 v17; // rax
  __int64 v18; // rbx
  char *v19; // r9
  unsigned __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r10
  __int64 v23; // r12
  _QWORD *v24; // r11
  unsigned __int64 v25; // rcx
  __int64 v26; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 8);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1F0uLL, 0x54456F50u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x1F0uLL);
    memset(v6 + 2, 0, 0x20uLL);
    v6[1] = v4;
    PopEtAggregateKeyCopyFromProcess(v6 + 2, v4, v2 + 32);
    PopEtStringSet(v6 + 3, 0LL);
    v7 = v2 + 64;
    v8 = *(unsigned int *)(v2 + 68);
    if ( *(_DWORD *)(v2 + 64) < (unsigned int)(2 * (*(_DWORD *)(v2 + 68) >> 5)) )
      goto LABEL_3;
    v16 = -1;
    v17 = 2 * (v8 >> 5);
    if ( v17 > 0xFFFFFFFF )
      goto LABEL_3;
    v18 = (unsigned int)v17;
    if ( (unsigned int)v17 < 4 )
      v18 = 4LL;
    v19 = (char *)PopEtBucketsAllocate(8LL * (unsigned int)v18);
    if ( v19 )
    {
      if ( (((_DWORD)v18 - 1) & (unsigned int)v18) != 0 )
      {
        do
        {
          ++v16;
          LODWORD(v18) = (unsigned int)v18 >> 1;
        }
        while ( (_DWORD)v18 );
        v18 = (unsigned int)(1 << v16);
      }
      if ( (unsigned int)v18 > 0x4000000 )
        v18 = 0x4000000LL;
      v20 = (unsigned int)v18;
      if ( v19 > &v19[8 * v18] )
        v20 = 0LL;
      if ( v20 )
        memset64(v19, v7 | 1, v20);
      v21 = 0LL;
      v22 = -1LL << (*(_BYTE *)(v2 + 68) & 0x1F);
      if ( (*(_DWORD *)(v2 + 68) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v23 = *(_QWORD *)(v2 + 72);
          while ( 1 )
          {
            v24 = *(_QWORD **)(v23 + 8LL * (unsigned int)v21);
            if ( ((unsigned __int8)v24 & 1) != 0 )
              break;
            *(_QWORD *)(v23 + 8LL * (unsigned int)v21) = *v24;
            v25 = ((((unsigned __int64)v22 & v24[1]) >> 56)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v22 & v24[1]) >> 48)
                  + 37
                  * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v22 & v24[1]) >> 32) >> 8)
                   + 37
                   * ((unsigned __int8)(((unsigned __int64)v22 & v24[1]) >> 32)
                    + 37
                    * ((((unsigned int)v22 & (_DWORD)v24[1]) >> 24)
                     + 37
                     * ((unsigned __int8)(((unsigned int)v22 & (_DWORD)v24[1]) >> 16)
                      + 37
                      * (37 * ((unsigned __int8)(v22 & v24[1]) + 11623883)
                       + (unsigned __int8)((unsigned __int16)(v22 & v24[1]) >> 8)))))))) & (unsigned int)(v18 - 1);
            *v24 = *(_QWORD *)&v19[8 * v25];
            *(_QWORD *)&v19[8 * v25] = v24;
          }
          v21 = (unsigned int)(v21 + 1);
        }
        while ( (unsigned int)v21 < *(_DWORD *)(v2 + 68) >> 5 );
      }
      v26 = *(_QWORD *)(v2 + 72);
      LODWORD(v8) = (32 * v18) | *(_DWORD *)(v2 + 68) & 0x1F;
      *(_QWORD *)(v2 + 72) = v19;
      *(_DWORD *)(v2 + 68) = v8;
      if ( v26 )
      {
        PopEtBucketsFree(v26, 0LL, v21);
        LODWORD(v8) = *(_DWORD *)(v2 + 68);
      }
      goto LABEL_3;
    }
    LODWORD(v8) = *(_DWORD *)(v2 + 68);
    if ( (unsigned int)v8 >= 0x20 )
    {
LABEL_3:
      v9 = v8;
      *a2 = v6;
      v10 = v6[1] & (-1LL << (v8 & 0x1F));
      v11 = *(_QWORD *)(v2 + 72);
      v12 = (v9 >> 5) - 1;
      v13 = 0;
      v14 = (HIBYTE(v10)
           + 37
           * (BYTE6(v10)
            + 37
            * (BYTE5(v10)
             + 37
             * (BYTE4(v10)
              + 37 * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * (37 * ((unsigned __int8)v10 + 11623883) + BYTE1(v10)))))))) & (unsigned int)v12;
      *v6 = *(_QWORD *)(v11 + 8 * v14);
      *(_QWORD *)(v11 + 8 * v14) = v6;
      ++*(_DWORD *)v7;
      return v13;
    }
  }
  ++*(_DWORD *)(v2 + 612);
  v13 = -1073741670;
  if ( v6 )
  {
    PopEtAggregateKeyCleanup(v6 + 2);
    ExFreePoolWithTag(v6, 0x54456F50u);
  }
  return v13;
}
