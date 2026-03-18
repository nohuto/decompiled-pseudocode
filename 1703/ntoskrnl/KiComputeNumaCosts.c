/*
 * XREFs of KiComputeNumaCosts @ 0x140817D54
 * Callers:
 *     KeInitSystem @ 0x140817034 (KeInitSystem.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140026160 (KeRevertToUserGroupAffinityThread.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140077330 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MiFreePagesFromMdl @ 0x1400B3890 (MiFreePagesFromMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     KeSetSystemGroupAffinityThread @ 0x140112860 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     qsort @ 0x14016AA40 (qsort.c)
 *     HvlQueryNumaDistance @ 0x1401E5160 (HvlQueryNumaDistance.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void KiComputeNumaCosts()
{
  PVOID PoolWithTag; // rax
  int v1; // r8d
  int v2; // r13d
  unsigned int v3; // edx
  unsigned int v4; // esi
  __int64 v5; // rcx
  __int16 v6; // di
  unsigned int v7; // r15d
  unsigned __int16 v8; // ax
  __int64 v9; // rcx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  unsigned int i; // r14d
  struct _MDL *PartitionNodePagesForMdl; // rax
  struct _MDL *v13; // r12
  char *v14; // rdi
  unsigned __int8 CurrentIrql; // r8
  char *v16; // rdx
  unsigned __int64 v17; // r9
  int v18; // ecx
  unsigned int j; // r9d
  __int64 v20; // rax
  unsigned __int16 v21; // dx
  unsigned int v22; // r10d
  int v23; // r11d
  __int64 v24; // rcx
  unsigned __int16 v25; // dx
  unsigned int v26; // edi
  unsigned int k; // esi
  unsigned int v28; // r10d
  int v29; // r15d
  _QWORD *v30; // r9
  __int64 *v31; // r11
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned int v34; // edi
  int m; // ecx
  __int64 v36; // rdx
  __int16 v37; // cx
  unsigned int v38; // edi
  int v39; // ecx
  __int64 *v40; // rax
  struct _GROUP_AFFINITY Affinity; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+60h] [rbp-A8h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+68h] [rbp-A0h] BYREF
  __int64 Base; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v45[127]; // [rsp+80h] [rbp-88h] BYREF

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
      v1 = (unsigned __int16)KeNumberNodes;
      v2 = 0;
      v3 = (unsigned __int16)KeNumberNodes;
      KiActualNodeCost = (void *)(((unsigned __int64)PoolWithTag + 2 * v1 * v1 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      if ( v1 * v1 )
        memset(
          (void *)(((unsigned __int64)PoolWithTag
                  + 2 * (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes
                  + 7) & 0xFFFFFFFFFFFFFFF8uLL),
          0xFFu,
          8LL * (unsigned __int16)KeNumberNodes * (unsigned int)(unsigned __int16)KeNumberNodes);
      Affinity.Mask = 0LL;
      v4 = 0;
      *(_QWORD *)&Affinity.Group = 0LL;
      if ( v3 )
      {
        while ( 1 )
        {
          v5 = KeNodeBlock[v4];
          if ( (HvlEnlightenments & 0x800) != 0 )
          {
            v38 = 0;
            if ( v3 )
            {
              do
              {
                HvlQueryNumaDistance(v4, v38, &v42);
                v39 = v4 * (unsigned __int16)KeNumberNodes;
                if ( v42 == -1 )
                  *((_QWORD *)KiActualNodeCost + v38 + v39) = -1LL;
                else
                  *((_QWORD *)KiActualNodeCost + v38 + v39) = (unsigned __int64)(v42 << 9) >> 10;
                LOWORD(v1) = KeNumberNodes;
                ++v38;
              }
              while ( v38 < (unsigned __int16)KeNumberNodes );
            }
            goto LABEL_21;
          }
          v6 = *(_WORD *)(v5 + 146);
          if ( v6 == *(_WORD *)(v5 + 148) )
          {
            if ( *(_QWORD *)(v5 + 136) )
            {
              v7 = v4;
            }
            else
            {
              v7 = 0;
              if ( v3 )
              {
                v40 = KeNodeBlock;
                do
                {
                  v5 = *v40;
                  if ( *(_WORD *)(*v40 + 148) == v6 && *(_QWORD *)(v5 + 136) )
                    break;
                  ++v7;
                  ++v40;
                }
                while ( v7 < v3 );
              }
              if ( v7 == v3 )
                goto LABEL_21;
            }
            v8 = *(_WORD *)(v5 + 144);
            v9 = *(_QWORD *)(v5 + 136);
            Affinity.Group = v8;
            Affinity.Mask = (v9 ^ (v9 - 1)) & v9;
            if ( v2 )
            {
              p_PreviousAffinity = 0LL;
            }
            else
            {
              v2 = 1;
              p_PreviousAffinity = &PreviousAffinity;
            }
            KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
            LOWORD(v1) = KeNumberNodes;
            for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
            {
              PartitionNodePagesForMdl = (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(
                                                          0,
                                                          -1,
                                                          0LL,
                                                          0x1000uLL,
                                                          0,
                                                          i,
                                                          7,
                                                          0LL);
              v13 = PartitionNodePagesForMdl;
              if ( PartitionNodePagesForMdl )
              {
                v14 = (char *)MmMapLockedPagesSpecifyCache(
                                PartitionNodePagesForMdl,
                                0,
                                MmNonCached,
                                0LL,
                                0,
                                0x40000020u);
                if ( v14 )
                {
                  CurrentIrql = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v16 = v14 + 4096;
                  v17 = __rdtsc();
                  while ( v14 < v16 )
                    v14 += 8;
                  __writecr8(CurrentIrql);
                  *((_QWORD *)KiActualNodeCost + i + v7 * (unsigned __int16)KeNumberNodes) = __rdtsc() - v17;
                }
                MiFreePagesFromMdl((ULONG_PTR)v13, 0);
                ExFreePoolWithTag(v13, 0);
              }
              LOWORD(v1) = KeNumberNodes;
            }
          }
LABEL_21:
          ++v4;
          v3 = (unsigned __int16)v1;
          if ( v4 >= (unsigned __int16)v1 )
          {
            if ( v2 == 1 )
            {
              KeRevertToUserGroupAffinityThread(&PreviousAffinity);
              LOWORD(v1) = KeNumberNodes;
            }
            break;
          }
        }
      }
      v18 = (unsigned __int16)v1;
      for ( j = 0; j < (unsigned __int16)v1; v18 = (unsigned __int16)v1 )
      {
        v20 = KeNodeBlock[j];
        v21 = *(_WORD *)(v20 + 146);
        if ( v21 == *(_WORD *)(v20 + 148) )
        {
          v22 = 0;
          v23 = v18 * v21;
          if ( v18 )
          {
            do
            {
              v24 = KeNodeBlock[v22];
              v25 = *(_WORD *)(v24 + 146);
              if ( v25 == *(_WORD *)(v24 + 148) && *((_QWORD *)KiActualNodeCost + v23 + (unsigned int)v25) == -1LL )
              {
                *((_QWORD *)KiActualNodeCost + v23 + (unsigned int)v25) = *((_QWORD *)KiActualNodeCost
                                                                          + *(unsigned __int16 *)(KeNodeBlock[j] + 146)
                                                                          + (unsigned __int16)v1 * (unsigned int)v25);
                LOWORD(v1) = KeNumberNodes;
              }
              ++v22;
            }
            while ( v22 < (unsigned __int16)v1 );
          }
        }
        ++j;
      }
      v26 = (unsigned __int16)v1;
      for ( k = 0; k < (unsigned __int16)v1; v26 = (unsigned __int16)v1 )
      {
        v28 = 0;
        v29 = v26 * *(unsigned __int16 *)(KeNodeBlock[k] + 148);
        if ( v26 )
        {
          v30 = v45;
          v31 = KeNodeBlock;
          do
          {
            v32 = *v31;
            *((_DWORD *)v30 - 2) = v28;
            if ( v32 )
            {
              v33 = *((_QWORD *)KiActualNodeCost + v29 + (unsigned int)*(unsigned __int16 *)(v32 + 146));
              *v30 = v33;
              if ( !v33 )
                *v30 = 1LL;
            }
            else
            {
              *v30 = -1LL;
            }
            ++v28;
            ++v31;
            v30 += 2;
          }
          while ( v28 < v26 );
        }
        v45[2 * k] = 0LL;
        qsort(&Base, (unsigned __int16)v1, 0x10uLL, (int (__cdecl *)(const void *, const void *))MiNodeCostSort);
        LOWORD(v1) = KeNumberNodes;
        v34 = 0;
        for ( m = (unsigned __int16)KeNumberNodes;
              v34 < (unsigned __int16)KeNumberNodes;
              m = (unsigned __int16)KeNumberNodes )
        {
          v36 = v34 + k * m;
          v37 = v45[2 * v34++ - 1];
          *((_WORD *)KiNodeGraph + v36) = v37;
          LOWORD(v1) = KeNumberNodes;
        }
        ++k;
      }
    }
  }
}
