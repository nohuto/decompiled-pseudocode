/*
 * XREFs of MiActOnPartitionNodePages @ 0x1402360CC
 * Callers:
 *     MiClearPartitionPageBitMap @ 0x1402369EC (MiClearPartitionPageBitMap.c)
 *     MiFreePartitionNodePages @ 0x140237550 (MiFreePartitionNodePages.c)
 *     MiInsertPartitionPages @ 0x140237794 (MiInsertPartitionPages.c)
 *     MiReturnPartitionPagesToParent @ 0x14023811C (MiReturnPartitionPagesToParent.c)
 *     MiHotAddPartitionMemory @ 0x1406EE0EC (MiHotAddPartitionMemory.c)
 *     MiMakePartitionMemoryBlock @ 0x1406EE348 (MiMakePartitionMemoryBlock.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1406EE4F8 (MiUpdatePartitionLargePfnBitMap.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     RtlClearBitsEx @ 0x140036470 (RtlClearBitsEx.c)
 *     RtlAvlRemoveNode @ 0x140058B30 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1400A2A10 (RtlAvlInsertNodeEx.c)
 *     RtlFindNextForwardRunClearCappedEx @ 0x1400C1DB0 (RtlFindNextForwardRunClearCappedEx.c)
 *     MiUpdateLargePageBitMap @ 0x1400C4FE4 (MiUpdateLargePageBitMap.c)
 *     MiReleaseNonPagedResources @ 0x1400CF13C (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResourcesForce @ 0x140214450 (MiAcquireNonPagedResourcesForce.c)
 *     MiTransferPartitionPageRun @ 0x140238208 (MiTransferPartitionPageRun.c)
 *     MiSplitLargePfnBitMap @ 0x1405B4EFC (MiSplitLargePfnBitMap.c)
 *     MiAddPhysicalMemoryChunks @ 0x1406DFAA0 (MiAddPhysicalMemoryChunks.c)
 *     MiFreePartitionPageRun @ 0x1406EE05C (MiFreePartitionPageRun.c)
 *     MiHotRemovePartitionPageRun @ 0x1406EE2FC (MiHotRemovePartitionPageRun.c)
 */

void __fastcall MiActOnPartitionNodePages(__int64 a1, unsigned int a2, __int16 **a3)
{
  __int64 v5; // r15
  __int64 v6; // rax
  unsigned __int64 *v7; // r13
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdi
  _QWORD *v13; // rdi
  __int64 i; // rax
  unsigned __int64 v15; // r8
  unsigned __int64 NextForwardRunClearCapped; // rax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r14
  unsigned __int64 *v20; // rax
  int v21; // eax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  ULONG_PTR *v24; // rcx
  __int16 v25; // cx
  __int64 v26; // rdi
  unsigned __int64 v27; // rbp
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v29; // r14
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rbp
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // r9
  _QWORD *v41; // r8
  _QWORD *v42; // rdx
  char v43; // cl
  __int16 *v44; // rdx
  bool v45; // r8
  __int16 *v46; // rax
  int v47; // [rsp+20h] [rbp-78h]
  unsigned __int64 v48; // [rsp+30h] [rbp-68h]
  unsigned __int64 v49; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 *v50; // [rsp+40h] [rbp-58h]
  unsigned __int64 v51[10]; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v53; // [rsp+A8h] [rbp+10h]
  signed __int64 v54; // [rsp+B8h] [rbp+20h] BYREF

  *((_DWORD *)a3 + 5) = 0;
  v53 = 0;
  v5 = a1;
  if ( a2 <= 1 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    if ( v6 < 0 )
    {
      v53 = 1;
      *(_QWORD *)(a1 + 24) = v6 & 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  v7 = (unsigned __int64 *)(a1 + 32);
  v8 = 0LL;
  v50 = (unsigned __int64 *)(a1 + 32);
  do
  {
    v9 = v7[1];
    v10 = v8 & -(__int64)(v8 < *v7);
    v11 = *v7 - 1;
    while ( 1 )
    {
      if ( v11 - v10 == -1LL )
        goto LABEL_7;
      v13 = (_QWORD *)(v9 + 8 * (v10 >> 6));
      for ( i = ((1LL << (v10 & 0x3F)) - 1) | ~*v13; i == -1; i = ~*v13 )
      {
        if ( (unsigned __int64)++v13 > v9 + 8 * (v11 >> 6) )
          goto LABEL_7;
      }
      _BitScanForward64((unsigned __int64 *)&i, ~i);
      v12 = i + ((__int64)((__int64)v13 - v9) >> 3 << 6);
      if ( v12 > v11 )
      {
LABEL_7:
        v12 = -1LL;
      }
      else if ( v12 != -1LL )
      {
        break;
      }
      if ( !v10 )
        break;
      v15 = v8 + 1;
      if ( v8 + 1 > *v7 )
        v15 = *v7;
      v11 = v15 - 1;
      v10 = 0LL;
    }
    if ( v12 < v8 || v12 == -1LL )
      break;
    NextForwardRunClearCapped = RtlFindNextForwardRunClearCappedEx((__int64)v7, v12, v11, &v49);
    v17 = v49;
    if ( !NextForwardRunClearCapped )
      v17 = *v7;
    v18 = v17 - v12;
    v19 = v12 + (*(_QWORD *)(v5 + 24) & 0x7FFFFFFFFFFFFFFFLL);
    v8 = NextForwardRunClearCapped + v12 + v18;
    v48 = v8;
    if ( a2 != 5 )
    {
      if ( a2 == 6 )
      {
        v20 = (unsigned __int64 *)&a3[6][8 * ((_QWORD)a3[4] + 1)];
        *v20 = v19;
        v20[1] = v18;
      }
      else if ( a2 )
      {
        switch ( a2 )
        {
          case 1u:
            v21 = MiHotRemovePartitionPageRun(v19, v18);
            *((_DWORD *)a3 + 5) = v21;
            if ( v21 < 0 )
              return;
            RtlClearBitsEx((__int64)v7, v12, v18);
            break;
          case 2u:
            v22 = (v19 + 511) & 0xFFFFFFFFFFFFFE00uLL;
            v23 = (v22 + v18) & 0xFFFFFFFFFFFFFE00uLL;
            if ( v22 < v23 )
              MiUpdateLargePageBitMap((__int64)*a3, v22, v23 - v22, 1, 0);
            break;
          case 3u:
            if ( !(unsigned int)MiSplitLargePfnBitMap(*a3, v19, v18) )
              *((_DWORD *)a3 + 5) = -1073741670;
            break;
          case 4u:
            if ( *a3 == (__int16 *)&MiSystemPartition )
              MiUpdateLargePageBitMap((__int64)*a3, v19, v18, 0, 0);
            LOBYTE(v47) = *((_BYTE *)a3 + 16);
            MiTransferPartitionPageRun(a3[1], *a3, v19, v18, v47);
            break;
          case 8u:
            v24 = (ULONG_PTR *)a3[1];
            if ( v24 != &MiSystemPartition )
              MiUpdateLargePageBitMap((__int64)v24, v19, v18, 0, 0);
            v25 = **a3;
            v26 = 48 * v19 - 0x58000000000LL;
            v27 = v26 + 48 * v18;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            v29 = (unsigned __int64)(v25 & 0x3FF) << 40;
            do
            {
              MiLockPageAtDpcInline(v26);
              if ( (*(_BYTE *)(v26 + 35) & 0x40) != 0 )
              {
                MiAcquireNonPagedResourcesForce((ULONG_PTR *)*a3, v30, v31, v32);
                MiReleaseNonPagedResources((__int64)a3[1], 1uLL);
              }
              *(_QWORD *)(v26 + 40) = v29 | *(_QWORD *)(v26 + 40) & 0xFFFC00FFFFFFFFFFuLL;
              _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v26 += 48LL;
            }
            while ( v26 != v27 );
            v7 = v50;
            __writecr8(CurrentIrql);
            v8 = v48;
            goto LABEL_79;
          case 9u:
            v33 = (__int64)*a3;
            v51[0] = v19 << 12;
            v54 = v18 << 12;
            MiAddPhysicalMemoryChunks(v33, v51, &v54, 0LL);
            v34 = v54 / 4096;
            if ( *a3 != (__int16 *)&MiSystemPartition )
            {
              v35 = (v19 + 511) & 0xFFFFFFFFFFFFFE00uLL;
              if ( v35 < ((v35 + v34) & 0xFFFFFFFFFFFFFE00uLL) )
                MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v35, v54 / 4096, 1, 0);
            }
            if ( v34 != v18 )
            {
              *((_DWORD *)a3 + 5) = -1073741823;
              RtlClearBitsEx((__int64)v7, v12 + v34, *v7 - v12 - v34);
              if ( v34 )
                a3[4] = (__int16 *)((char *)a3[4] + 1);
              a3[5] = (__int16 *)((char *)a3[5] + v34);
              return;
            }
            v8 = v48;
            break;
          default:
            *((_QWORD *)*a3 + 722) -= v18;
            *((_BYTE *)*a3 + 12) = 1;
            v36 = *((_QWORD *)*a3 + 3);
            if ( v36 )
            {
              v37 = *(_QWORD *)(v5 + 24) & 0x7FFFFFFFFFFFFFFFLL;
              do
              {
                v38 = *(_QWORD *)(v36 + 24) & 0x7FFFFFFFFFFFFFFFLL;
                if ( v37 < v38 )
                {
                  v36 = *(_QWORD *)v36;
                }
                else
                {
                  if ( v37 <= v38 )
                    break;
                  v36 = *(_QWORD *)(v36 + 8);
                }
              }
              while ( v36 );
            }
            RtlClearBitsEx(v36 + 32, v12, v18);
            v39 = *(_QWORD *)(v36 + 32);
            v40 = v39 - 1;
            if ( !v39 )
              goto LABEL_79;
            if ( v39 <= 1 )
            {
              if ( _bittest64(*(const signed __int64 **)(v36 + 40), 0) )
                goto LABEL_79;
LABEL_71:
              RtlAvlRemoveNode((unsigned __int64 *)*a3 + 3, v36);
              v44 = a3[3];
              v45 = 0;
              if ( !v44 )
                goto LABEL_78;
              while ( 1 )
              {
                if ( (*(_QWORD *)(v36 + 24) & 0x7FFFFFFFFFFFFFFFuLL) < (*((_QWORD *)v44 + 3) & 0x7FFFFFFFFFFFFFFFuLL) )
                {
                  v46 = *(__int16 **)v44;
                  if ( !*(_QWORD *)v44 )
                  {
                    v45 = 0;
LABEL_78:
                    RtlAvlInsertNodeEx((unsigned __int64 *)a3 + 3, (unsigned __int64)v44, v45, v36);
                    goto LABEL_79;
                  }
                }
                else
                {
                  v46 = (__int16 *)*((_QWORD *)v44 + 1);
                  if ( !v46 )
                  {
                    v45 = 1;
                    goto LABEL_78;
                  }
                }
                v44 = v46;
              }
            }
            v41 = *(_QWORD **)(v36 + 40);
            v42 = &v41[v40 >> 6];
            if ( v41 == v42 )
            {
              v43 = 64 - v39;
            }
            else
            {
              do
              {
                if ( *v41 )
                  goto LABEL_79;
                ++v41;
              }
              while ( v41 != v42 );
              v43 = ~(_BYTE)v40;
            }
            if ( (*v41 & (0xFFFFFFFFFFFFFFFFuLL >> v43)) == 0 )
              goto LABEL_71;
LABEL_79:
            v5 = a1;
            break;
        }
      }
      else
      {
        MiFreePartitionPageRun(*a3, v19, v18, v53);
      }
    }
    a3[4] = (__int16 *)((char *)a3[4] + 1);
    a3[5] = (__int16 *)((char *)a3[5] + v18);
  }
  while ( v8 < *v7 );
}
