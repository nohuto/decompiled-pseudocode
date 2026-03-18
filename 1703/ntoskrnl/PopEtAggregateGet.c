/*
 * XREFs of PopEtAggregateGet @ 0x1406D07DC
 * Callers:
 *     PopEtEnergyTrackerUpdateAggregate @ 0x1406D2344 (PopEtEnergyTrackerUpdateAggregate.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PopEtAggregateFind @ 0x1406D0644 (PopEtAggregateFind.c)
 *     PopEtAggregateKeyCleanup @ 0x1406D0BBC (PopEtAggregateKeyCleanup.c)
 *     PopEtAggregateKeyCopy @ 0x1406D0C00 (PopEtAggregateKeyCopy.c)
 *     PopEtAllocate @ 0x1406D0D14 (PopEtAllocate.c)
 *     PopEtBucketsFree @ 0x1406D0E8C (PopEtBucketsFree.c)
 */

void __fastcall PopEtAggregateGet(__int64 a1, unsigned __int8 *a2, __int64 *a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // r15
  char *v10; // r8
  char v11; // di
  unsigned __int64 v12; // rbx
  char *v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // r10
  __int64 v18; // r12
  _QWORD *v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // edi
  __int64 v24; // rcx
  __int64 v25; // rdi
  int v26; // edi
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
    ++*(_DWORD *)(a1 + 528);
    goto LABEL_31;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1A8uLL, 0x54456F50u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_31:
    ++*(_DWORD *)(a1 + 516);
    v27 = (_QWORD *)(a1 + 80);
    v28 = *(_DWORD *)(a1 + 548);
    *a3 = a1 + 80;
    if ( (v28 & 4) == 0 )
    {
      *(_DWORD *)(a1 + 548) = v28 | 4;
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
  memset(PoolWithTag, 0, 0x1A8uLL);
  memset(v9 + 2, 0, 0x20uLL);
  PopEtAggregateKeyCopy(v9 + 2, a2);
  v9[1] = v32;
  if ( *(_DWORD *)v7 < (unsigned int)(2 * (*(_DWORD *)(a1 + 52) >> 5)) )
    goto LABEL_27;
  v11 = -1;
  v12 = 2 * ((unsigned __int64)*(unsigned int *)(a1 + 52) >> 5);
  if ( v12 > 0xFFFFFFFF )
    goto LABEL_27;
  if ( (unsigned int)v12 < 4 )
    v12 = 4LL;
  v13 = (char *)PopEtAllocate(8LL * (unsigned int)v12, 0LL);
  v10 = v13;
  if ( v13 )
  {
    if ( (((_DWORD)v12 - 1) & (unsigned int)v12) != 0 )
    {
      do
      {
        ++v11;
        LODWORD(v12) = (unsigned int)v12 >> 1;
      }
      while ( (_DWORD)v12 );
      v12 = (unsigned int)(1 << v11);
    }
    if ( (unsigned int)v12 > 0x4000000 )
      v12 = 0x4000000LL;
    v15 = (8 * v12 + 7) >> 3;
    if ( v13 > &v13[8 * v12] )
      v15 = 0LL;
    if ( v15 )
      memset64(v13, v7 | 1, v15);
    v16 = 0;
    v17 = -1LL << (*(_BYTE *)(a1 + 52) & 0x1F);
    if ( (*(_DWORD *)(a1 + 52) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v18 = *(_QWORD *)(a1 + 56);
        while ( 1 )
        {
          v19 = *(_QWORD **)(v18 + 8LL * v16);
          if ( ((unsigned __int8)v19 & 1) != 0 )
            break;
          *(_QWORD *)(v18 + 8LL * v16) = *v19;
          v32 = v17 & v19[1];
          v20 = (37
               * (BYTE6(v32)
                + 37
                * (BYTE5(v32)
                 + 37
                 * (BYTE4(v32)
                  + 37 * (BYTE3(v32) + 37 * (BYTE2(v32) + 37 * (BYTE1(v32) + 37 * ((unsigned __int8)v32 + 11623883)))))))
               + HIBYTE(v32)) & (unsigned int)(v12 - 1);
          *v19 = *(_QWORD *)&v13[8 * v20];
          *(_QWORD *)&v13[8 * v20] = v19;
        }
        ++v16;
      }
      while ( v16 < *(_DWORD *)(a1 + 52) >> 5 );
    }
    v21 = *(_QWORD *)(a1 + 56);
    v22 = (32 * v12) | *(_DWORD *)(a1 + 52) & 0x1F;
    *(_QWORD *)(a1 + 56) = v10;
    *(_DWORD *)(a1 + 52) = v22;
    if ( v21 )
      PopEtBucketsFree(v21, 0LL, v10, 0LL);
    goto LABEL_27;
  }
  if ( *(_DWORD *)(a1 + 52) >= 0x20u )
  {
LABEL_27:
    v23 = *(_DWORD *)(a1 + 52);
    *a3 = (__int64)v9;
    v32 = v9[1] & (-1LL << (v23 & 0x1F));
    v14 = BYTE6(v32)
        + 37
        * (BYTE5(v32)
         + 37
         * (BYTE4(v32)
          + 37 * (BYTE3(v32) + 37 * (BYTE2(v32) + 37 * (BYTE1(v32) + 37 * ((unsigned __int8)v32 + 11623883LL))))));
    v24 = *(_QWORD *)(a1 + 56);
    v25 = (37 * (_DWORD)v14 + HIBYTE(v32)) & ((v23 >> 5) - 1);
    *v9 = *(_QWORD *)(v24 + 8 * v25);
    *(_QWORD *)(v24 + 8 * v25) = v9;
    v9 = 0LL;
    ++*(_DWORD *)v7;
    v26 = 0;
    goto LABEL_28;
  }
  v26 = -1073741670;
LABEL_28:
  if ( v9 )
  {
    PopEtAggregateKeyCleanup(v9 + 2, v14, v10, 0LL);
    ExFreePoolWithTag(v9, 0x54456F50u);
  }
  if ( v26 < 0 )
    goto LABEL_31;
}
