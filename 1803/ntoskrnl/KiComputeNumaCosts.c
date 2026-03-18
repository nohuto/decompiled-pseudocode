/*
 * XREFs of KiComputeNumaCosts @ 0x1408B32B4
 * Callers:
 *     KeInitSystem @ 0x1408B21CC (KeInitSystem.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140005230 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140005480 (KeSetSystemGroupAffinityThread.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1400B3440 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     MiFreePagesFromMdl @ 0x140136794 (MiFreePagesFromMdl.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     qsort @ 0x140189210 (qsort.c)
 *     HvlQueryNumaDistance @ 0x1402270A0 (HvlQueryNumaDistance.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     KiGetHalNumaConversionFactor @ 0x1408E0018 (KiGetHalNumaConversionFactor.c)
 */

void KiComputeNumaCosts()
{
  __int64 v0; // rsi
  unsigned int v1; // r14d
  PVOID PoolWithTag; // rax
  int v3; // r13d
  unsigned int v4; // esi
  unsigned int v5; // edx
  __int64 v6; // rcx
  unsigned int v7; // edi
  int v8; // ecx
  __int16 v9; // di
  unsigned int v10; // r15d
  __int64 *v11; // rax
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  unsigned int v13; // r14d
  struct _MDL *PartitionNodePagesForMdl; // rax
  struct _MDL *v15; // r12
  char *v16; // rdi
  unsigned __int8 CurrentIrql; // r8
  char *v18; // rdx
  unsigned __int64 v19; // r9
  unsigned __int16 v20; // cx
  unsigned __int64 v21; // r11
  int v22; // edi
  unsigned int v23; // esi
  int i; // edx
  unsigned __int16 v25; // ax
  unsigned int v26; // r15d
  int v27; // r8d
  __int64 v28; // rsi
  __int64 v29; // rcx
  unsigned __int16 v30; // ax
  _QWORD *v31; // r12
  int v32; // ecx
  __int64 v33; // rax
  __int64 v34; // r13
  int v35; // r10d
  __int64 v36; // r9
  __int64 v37; // r8
  unsigned int v38; // r14d
  __int64 HalNumaConversionFactor; // rax
  unsigned __int64 v40; // rcx
  unsigned int v41; // edi
  unsigned int v42; // esi
  unsigned int v43; // r9d
  int v44; // r14d
  _QWORD *v45; // r8
  __int64 *v46; // r10
  __int64 v47; // rax
  __int64 v48; // rdx
  size_t v49; // rdx
  unsigned __int16 v50; // cx
  unsigned int v51; // edi
  int j; // edx
  __int64 v53; // rax
  __int64 v54; // rdx
  int v55; // [rsp+48h] [rbp-C0h]
  int v56; // [rsp+4Ch] [rbp-BCh] BYREF
  int v57[2]; // [rsp+50h] [rbp-B8h]
  __int64 v58; // [rsp+58h] [rbp-B0h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+60h] [rbp-A8h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+70h] [rbp-98h] BYREF
  _WORD Base[4]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v62[127]; // [rsp+90h] [rbp-78h] BYREF

  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    v0 = (unsigned __int16)KeNumberNodes * (unsigned int)(unsigned __int16)KeNumberNodes;
    v1 = (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, ((2 * v0 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v0, 0x634E654Bu);
    KiNodeGraph = PoolWithTag;
    if ( PoolWithTag )
    {
      v3 = 0;
      KiActualNodeCost = (void *)(((unsigned __int64)PoolWithTag + 2 * v0 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      if ( (_DWORD)v0 )
        memset((void *)(((unsigned __int64)PoolWithTag + 2 * v0 + 7) & 0xFFFFFFFFFFFFFFF8uLL), 0xFFu, 8LL * v1);
      v57[0] = -1;
      v57[1] = -1;
      Affinity.Mask = 0LL;
      v4 = 0;
      *(_QWORD *)&Affinity.Group = 0LL;
      v55 = 0;
      v5 = (unsigned __int16)KeNumberNodes;
      if ( KeNumberNodes )
      {
        while ( 1 )
        {
          v6 = KeNodeBlock[v4];
          if ( (HvlEnlightenments & 0x800) != 0 )
          {
            v7 = 0;
            if ( v5 )
            {
              do
              {
                HvlQueryNumaDistance(v4, v7, &v58);
                v8 = v4 * (unsigned __int16)KeNumberNodes;
                if ( v58 == -1 )
                  *((_QWORD *)KiActualNodeCost + v7 + v8) = -1LL;
                else
                  *((_QWORD *)KiActualNodeCost + v7 + v8) = (unsigned __int64)(v58 << 9) >> 10;
                ++v7;
              }
              while ( v7 < (unsigned __int16)KeNumberNodes );
            }
          }
          else
          {
            v9 = *(_WORD *)(v6 + 146);
            if ( v9 == *(_WORD *)(v6 + 148) )
            {
              if ( *(_QWORD *)(v6 + 136) )
              {
                v10 = v4;
              }
              else
              {
                v10 = 0;
                if ( v5 )
                {
                  v11 = KeNodeBlock;
                  do
                  {
                    v6 = *v11;
                    if ( *(_WORD *)(*v11 + 148) == v9 && *(_QWORD *)(v6 + 136) )
                      break;
                    ++v10;
                    ++v11;
                  }
                  while ( v10 < v5 );
                }
                if ( v10 == v5 )
                  goto LABEL_37;
              }
              Affinity.Group = *(_WORD *)(v6 + 144);
              Affinity.Mask = *(_QWORD *)(v6 + 136) & (*(_QWORD *)(v6 + 136) ^ (*(_QWORD *)(v6 + 136) - 1LL));
              if ( v3 )
              {
                p_PreviousAffinity = 0LL;
              }
              else
              {
                v3 = 1;
                p_PreviousAffinity = &PreviousAffinity;
              }
              KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
              v13 = 0;
              if ( KeNumberNodes )
              {
                do
                {
                  PartitionNodePagesForMdl = (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(
                                                              0,
                                                              v57[0],
                                                              0LL,
                                                              0x1000uLL,
                                                              0,
                                                              v13,
                                                              7,
                                                              0LL);
                  v15 = PartitionNodePagesForMdl;
                  if ( PartitionNodePagesForMdl )
                  {
                    v16 = (char *)MmMapLockedPagesSpecifyCache(
                                    PartitionNodePagesForMdl,
                                    0,
                                    MmNonCached,
                                    0LL,
                                    0,
                                    0x40000020u);
                    if ( v16 )
                    {
                      CurrentIrql = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      v18 = v16 + 4096;
                      v19 = __rdtsc();
                      while ( v16 < v18 )
                        v16 += 8;
                      __writecr8(CurrentIrql);
                      *((_QWORD *)KiActualNodeCost + v13 + v10 * (unsigned __int16)KeNumberNodes) = __rdtsc() - v19;
                    }
                    MiFreePagesFromMdl((ULONG_PTR)v15, 0);
                    ExFreePoolWithTag(v15, 0);
                  }
                  ++v13;
                }
                while ( v13 < (unsigned __int16)KeNumberNodes );
                v4 = v55;
              }
            }
          }
LABEL_37:
          v55 = ++v4;
          v5 = (unsigned __int16)KeNumberNodes;
          if ( v4 >= (unsigned __int16)KeNumberNodes )
          {
            if ( v3 == 1 )
              KeRevertToUserGroupAffinityThread(&PreviousAffinity);
            break;
          }
        }
      }
      v20 = KeNumberNodes;
      v21 = 0LL;
      v56 = 0;
      v22 = 0;
      v57[0] = 0;
      v23 = 0;
      for ( i = (unsigned __int16)KeNumberNodes; v23 < v20; v57[0] = v23 )
      {
        v58 = KeNodeBlock[v23];
        v25 = *(_WORD *)(v58 + 146);
        if ( v25 == *(_WORD *)(v58 + 148) )
        {
          v26 = 0;
          v27 = i * v25;
          v55 = v27;
          if ( i )
          {
            v28 = v58;
            do
            {
              v29 = KeNodeBlock[v26];
              v30 = *(_WORD *)(v29 + 146);
              if ( v30 == *(_WORD *)(v29 + 148) )
              {
                v31 = KiActualNodeCost;
                v32 = v30;
                v33 = v27 + (unsigned int)v30;
                v34 = (unsigned int)v33;
                if ( *((_QWORD *)KiActualNodeCost + v33) == -1LL )
                {
                  v35 = *(unsigned __int16 *)(v28 + 146);
                  v36 = (unsigned int)(v35 + v32 * i);
                  v37 = *((_QWORD *)KiActualNodeCost + v36);
                  if ( v37 == -1 )
                  {
                    v38 = *((_DWORD *)KeNodeDistance + v32 + v35 * i);
                    if ( v38 != 1 || (v38 = *((_DWORD *)KeNodeDistance + (int)v36), v38 != 1) )
                    {
                      if ( !v22 )
                      {
                        HalNumaConversionFactor = KiGetHalNumaConversionFactor(&v56);
                        v22 = v56;
                        v21 = HalNumaConversionFactor;
                      }
                      if ( v22 == 2 )
                      {
                        v40 = v21 * v38 / 0x64;
                      }
                      else if ( v22 == 3 )
                      {
                        v40 = 100 * (unsigned __int64)v38 / v21;
                      }
                      else
                      {
                        v40 = -1LL;
                      }
                      v31[v34] = v40;
                    }
                  }
                  else
                  {
                    *((_QWORD *)KiActualNodeCost + v33) = v37;
                  }
                  v27 = v55;
                }
              }
              v20 = KeNumberNodes;
              ++v26;
              i = (unsigned __int16)KeNumberNodes;
            }
            while ( v26 < (unsigned __int16)KeNumberNodes );
            v23 = v57[0];
          }
        }
        ++v23;
        i = v20;
      }
      v41 = v20;
      v42 = 0;
      if ( v20 )
      {
        do
        {
          v43 = 0;
          v44 = v41 * *(unsigned __int16 *)(KeNodeBlock[v42] + 148);
          if ( v41 )
          {
            v45 = v62;
            v46 = KeNodeBlock;
            do
            {
              v47 = *v46;
              *((_DWORD *)v45 - 2) = v43;
              if ( v47 )
              {
                v48 = *((_QWORD *)KiActualNodeCost + v44 + (unsigned int)*(unsigned __int16 *)(v47 + 146));
                *v45 = v48;
                if ( !v48 )
                  *v45 = 1LL;
              }
              else
              {
                *v45 = -1LL;
              }
              ++v43;
              ++v46;
              v45 += 2;
            }
            while ( v43 < v41 );
          }
          v49 = (unsigned __int16)KeNumberNodes;
          v62[2 * v42] = 0LL;
          qsort(Base, v49, 0x10uLL, MiNodeCostSort);
          v50 = KeNumberNodes;
          v51 = 0;
          for ( j = (unsigned __int16)KeNumberNodes;
                v51 < (unsigned __int16)KeNumberNodes;
                j = (unsigned __int16)KeNumberNodes )
          {
            v53 = 2LL * v51;
            v54 = v51 + v42 * j;
            ++v51;
            *((_WORD *)KiNodeGraph + v54) = Base[4 * v53];
            v50 = KeNumberNodes;
          }
          ++v42;
          v41 = v50;
        }
        while ( v42 < v50 );
      }
    }
  }
}
