/*
 * XREFs of KiComputeNumaCosts @ 0x140838CD8
 * Callers:
 *     KeInitSystem @ 0x140837EC8 (KeInitSystem.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400A73D0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400AAD30 (KeRevertToUserGroupAffinityThread.c)
 *     MiFreePagesFromMdl @ 0x1400E10B0 (MiFreePagesFromMdl.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x14011CC70 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     qsort @ 0x14015F450 (qsort.c)
 *     HvlQueryNumaDistance @ 0x1401E9FF0 (HvlQueryNumaDistance.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

void KiComputeNumaCosts()
{
  PVOID PoolWithTag; // rax
  int v1; // r13d
  unsigned int v2; // edx
  unsigned int v3; // esi
  __int64 v4; // rcx
  __int16 v5; // di
  unsigned int v6; // r15d
  unsigned __int16 v7; // ax
  __int64 v8; // rcx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  unsigned int i; // r14d
  char *PartitionNodePagesForMdl; // rax
  char *v12; // r12
  char *v13; // rdi
  unsigned __int8 CurrentIrql; // r8
  char *v15; // rdx
  unsigned __int64 v16; // r9
  unsigned __int16 v17; // cx
  unsigned int v18; // edi
  int j; // edx
  __int64 v20; // rax
  unsigned __int16 v21; // r8
  int v22; // r10d
  unsigned int v23; // r8d
  int v24; // r10d
  __int64 v25; // rcx
  unsigned __int16 v26; // ax
  int v27; // r9d
  __int64 v28; // rax
  unsigned int v29; // edi
  unsigned int v30; // esi
  unsigned int v31; // r9d
  int v32; // r14d
  _QWORD *v33; // r8
  __int64 *v34; // r10
  __int64 v35; // rax
  __int64 v36; // rdx
  size_t v37; // rdx
  unsigned __int16 v38; // cx
  unsigned int v39; // edi
  int k; // edx
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned int v43; // edi
  int v44; // ecx
  __int64 *v45; // rax
  struct _GROUP_AFFINITY Affinity; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v47; // [rsp+60h] [rbp-A8h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+68h] [rbp-A0h] BYREF
  __int64 Base; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v50[127]; // [rsp+80h] [rbp-88h] BYREF

  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    PoolWithTag = ExAllocatePoolWithTag(
                    NonPagedPoolNx,
                    ((2LL * (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes + 7) & 0xFFFFFFFFFFFFFFF8uLL)
                  + 8LL * (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes,
                    0x634E654Bu);
    KiNodeGraph = PoolWithTag;
    if ( PoolWithTag )
    {
      v1 = 0;
      v2 = (unsigned __int16)KeNumberNodes;
      KiActualNodeCost = (void *)(((unsigned __int64)PoolWithTag + 2 * (int)(v2 * v2) + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      if ( v2 * v2 )
        memset(
          (void *)(((unsigned __int64)PoolWithTag
                  + 2 * (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes
                  + 7) & 0xFFFFFFFFFFFFFFF8uLL),
          0xFFu,
          8LL * (unsigned __int16)KeNumberNodes * (unsigned int)(unsigned __int16)KeNumberNodes);
      Affinity.Mask = 0LL;
      v3 = 0;
      *(_QWORD *)&Affinity.Group = 0LL;
      if ( v2 )
      {
        while ( 1 )
        {
          v4 = KeNodeBlock[v3];
          if ( (HvlEnlightenments & 0x800) != 0 )
          {
            v43 = 0;
            if ( v2 )
            {
              do
              {
                HvlQueryNumaDistance(v3, v43, &v47);
                v44 = v3 * (unsigned __int16)KeNumberNodes;
                if ( v47 == -1 )
                  *((_QWORD *)KiActualNodeCost + v43 + v44) = -1LL;
                else
                  *((_QWORD *)KiActualNodeCost + v43 + v44) = (unsigned __int64)(v47 << 9) >> 10;
                ++v43;
              }
              while ( v43 < (unsigned __int16)KeNumberNodes );
            }
            goto LABEL_21;
          }
          v5 = *(_WORD *)(v4 + 146);
          if ( v5 == *(_WORD *)(v4 + 148) )
          {
            if ( *(_QWORD *)(v4 + 136) )
            {
              v6 = v3;
            }
            else
            {
              v6 = 0;
              if ( v2 )
              {
                v45 = KeNodeBlock;
                do
                {
                  v4 = *v45;
                  if ( *(_WORD *)(*v45 + 148) == v5 && *(_QWORD *)(v4 + 136) )
                    break;
                  ++v6;
                  ++v45;
                }
                while ( v6 < v2 );
              }
              if ( v6 == v2 )
                goto LABEL_21;
            }
            v7 = *(_WORD *)(v4 + 144);
            v8 = *(_QWORD *)(v4 + 136);
            Affinity.Group = v7;
            Affinity.Mask = (v8 ^ (v8 - 1)) & v8;
            if ( v1 )
            {
              p_PreviousAffinity = 0LL;
            }
            else
            {
              v1 = 1;
              p_PreviousAffinity = &PreviousAffinity;
            }
            KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
            for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
            {
              PartitionNodePagesForMdl = MmAllocatePartitionNodePagesForMdlEx(
                                           0LL,
                                           0xFFFFFFFFFFFFFFFFuLL,
                                           0LL,
                                           0x1000uLL,
                                           0,
                                           i,
                                           7,
                                           0LL);
              v12 = PartitionNodePagesForMdl;
              if ( PartitionNodePagesForMdl )
              {
                v13 = (char *)MmMapLockedPagesSpecifyCache(
                                (PMDL)PartitionNodePagesForMdl,
                                0,
                                MmNonCached,
                                0LL,
                                0,
                                0x40000020u);
                if ( v13 )
                {
                  CurrentIrql = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v15 = v13 + 4096;
                  v16 = __rdtsc();
                  while ( v13 < v15 )
                    v13 += 8;
                  __writecr8(CurrentIrql);
                  *((_QWORD *)KiActualNodeCost + i + v6 * (unsigned __int16)KeNumberNodes) = __rdtsc() - v16;
                }
                MiFreePagesFromMdl((ULONG_PTR)v12, 0);
                ExFreePoolWithTag(v12, 0);
              }
            }
          }
LABEL_21:
          ++v3;
          v2 = (unsigned __int16)KeNumberNodes;
          if ( v3 >= (unsigned __int16)KeNumberNodes )
          {
            if ( v1 == 1 )
              KeRevertToUserGroupAffinityThread(&PreviousAffinity);
            break;
          }
        }
      }
      v17 = KeNumberNodes;
      v18 = 0;
      for ( j = (unsigned __int16)KeNumberNodes; v18 < v17; j = v17 )
      {
        v20 = KeNodeBlock[v18];
        v21 = *(_WORD *)(v20 + 146);
        if ( v21 == *(_WORD *)(v20 + 148) )
        {
          v22 = v21;
          v23 = 0;
          v24 = j * v22;
          if ( j )
          {
            do
            {
              v25 = KeNodeBlock[v23];
              v26 = *(_WORD *)(v25 + 146);
              if ( v26 == *(_WORD *)(v25 + 148) )
              {
                v27 = v26;
                v28 = (unsigned int)v26 + v24;
                if ( *((_QWORD *)KiActualNodeCost + v28) == -1LL )
                  *((_QWORD *)KiActualNodeCost + (unsigned int)v28) = *((_QWORD *)KiActualNodeCost
                                                                      + (unsigned int)*(unsigned __int16 *)(KeNodeBlock[v18] + 146)
                                                                      + j * v27);
              }
              v17 = KeNumberNodes;
              ++v23;
              j = (unsigned __int16)KeNumberNodes;
            }
            while ( v23 < (unsigned __int16)KeNumberNodes );
          }
        }
        ++v18;
      }
      v29 = v17;
      v30 = 0;
      if ( v17 )
      {
        do
        {
          v31 = 0;
          v32 = v29 * *(unsigned __int16 *)(KeNodeBlock[v30] + 148);
          if ( v29 )
          {
            v33 = v50;
            v34 = KeNodeBlock;
            do
            {
              v35 = *v34;
              *((_DWORD *)v33 - 2) = v31;
              if ( v35 )
              {
                v36 = *((_QWORD *)KiActualNodeCost + v32 + (unsigned int)*(unsigned __int16 *)(v35 + 146));
                *v33 = v36;
                if ( !v36 )
                  *v33 = 1LL;
              }
              else
              {
                *v33 = -1LL;
              }
              ++v31;
              ++v34;
              v33 += 2;
            }
            while ( v31 < v29 );
          }
          v37 = (unsigned __int16)KeNumberNodes;
          v50[2 * v30] = 0LL;
          qsort(&Base, v37, 0x10uLL, MiNodeCostSort);
          v38 = KeNumberNodes;
          v39 = 0;
          for ( k = (unsigned __int16)KeNumberNodes;
                v39 < (unsigned __int16)KeNumberNodes;
                k = (unsigned __int16)KeNumberNodes )
          {
            v41 = 2LL * v39;
            v42 = v39 + v30 * k;
            ++v39;
            *((_WORD *)KiNodeGraph + v42) = v50[v41 - 1];
            v38 = KeNumberNodes;
          }
          ++v30;
          v29 = v38;
        }
        while ( v30 < v38 );
      }
    }
  }
}
