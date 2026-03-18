/*
 * XREFs of MiActOnPartitionNodePages @ 0x14026DA80
 * Callers:
 *     MiClearPartitionPageBitMap @ 0x14026E3BC (MiClearPartitionPageBitMap.c)
 *     MiFreePartitionNodePages @ 0x14026F120 (MiFreePartitionNodePages.c)
 *     MiInsertPartitionPages @ 0x14026F364 (MiInsertPartitionPages.c)
 *     MiReturnPartitionPagesToParent @ 0x14026FD38 (MiReturnPartitionPagesToParent.c)
 *     MiHotAddPartitionMemory @ 0x14075757C (MiHotAddPartitionMemory.c)
 *     MiMakePartitionMemoryBlock @ 0x140757804 (MiMakePartitionMemoryBlock.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1407579D0 (MiUpdatePartitionLargePfnBitMap.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140009400 (RtlClearBitsEx.c)
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     RtlFindNextForwardRunClearCappedEx @ 0x1400D7BF0 (RtlFindNextForwardRunClearCappedEx.c)
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiUpdateLargePageBitMap @ 0x140137090 (MiUpdateLargePageBitMap.c)
 *     MiReleaseNonPagedResources @ 0x14013A6A0 (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResourcesForce @ 0x140252618 (MiAcquireNonPagedResourcesForce.c)
 *     MiTransferPartitionPageRun @ 0x14026FE30 (MiTransferPartitionPageRun.c)
 *     MiSplitLargePfnBitMap @ 0x14064A6CC (MiSplitLargePfnBitMap.c)
 *     MiAddPhysicalMemoryChunks @ 0x14074A970 (MiAddPhysicalMemoryChunks.c)
 *     MiFreePartitionPageRun @ 0x1407574EC (MiFreePartitionPageRun.c)
 *     MiHotRemovePartitionPageRun @ 0x1407577B8 (MiHotRemovePartitionPageRun.c)
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
  __int64 i; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 NextForwardRunClearCapped; // rax
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r14
  unsigned __int64 *v21; // rax
  int v22; // eax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  __int64 v25; // rcx
  ULONG_PTR *v26; // rcx
  __int16 v27; // cx
  __int64 v28; // rdi
  unsigned __int64 v29; // rbp
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v31; // r14
  __int64 v32; // rcx
  __int64 v33; // rbp
  unsigned __int64 v34; // rdx
  __int64 v35; // r14
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // r10
  __int64 *v40; // r8
  __int64 v41; // r9
  __int64 *v42; // rdx
  bool v43; // zf
  bool j; // zf
  __int16 *v45; // rdx
  bool v46; // r8
  __int16 *v47; // rax
  int v48; // [rsp+20h] [rbp-78h]
  unsigned __int64 v49; // [rsp+30h] [rbp-68h]
  unsigned __int64 v50; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 *v51; // [rsp+40h] [rbp-58h]
  unsigned __int64 v52[10]; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v54; // [rsp+A8h] [rbp+10h]
  signed __int64 v55; // [rsp+B8h] [rbp+20h] BYREF

  *((_DWORD *)a3 + 5) = 0;
  v54 = 0;
  v5 = a1;
  if ( a2 <= 1 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    if ( v6 < 0 )
    {
      v54 = 1;
      *(_QWORD *)(a1 + 24) = v6 & 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  v7 = (unsigned __int64 *)(a1 + 32);
  v8 = 0LL;
  v51 = (unsigned __int64 *)(a1 + 32);
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
      for ( i = ~*v13 | ((1LL << (v10 & 0x3F)) - 1); i == -1; i = ~*v13 )
      {
        if ( (unsigned __int64)++v13 > v9 + 8 * (v11 >> 6) )
          goto LABEL_7;
      }
      _BitScanForward64(&v15, ~i);
      v12 = v15 + ((__int64)((__int64)v13 - v9) >> 3 << 6);
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
      v16 = v8 + 1;
      if ( v8 + 1 > *v7 )
        v16 = *v7;
      v11 = v16 - 1;
      v10 = 0LL;
    }
    if ( v12 < v8 || v12 == -1LL )
      break;
    NextForwardRunClearCapped = RtlFindNextForwardRunClearCappedEx((__int64)v7, v12, v11, &v50);
    v18 = v50;
    if ( !NextForwardRunClearCapped )
      v18 = *v7;
    v19 = v18 - v12;
    v20 = v12 + (*(_QWORD *)(v5 + 24) & 0x7FFFFFFFFFFFFFFFLL);
    v8 = NextForwardRunClearCapped + v12 + v19;
    v49 = v8;
    if ( a2 != 5 )
    {
      if ( a2 == 6 )
      {
        v21 = (unsigned __int64 *)&a3[6][8 * ((_QWORD)a3[4] + 1)];
        *v21 = v20;
        v21[1] = v19;
      }
      else if ( a2 )
      {
        switch ( a2 )
        {
          case 1u:
            v22 = MiHotRemovePartitionPageRun(v20, v19);
            *((_DWORD *)a3 + 5) = v22;
            if ( v22 < 0 )
              return;
            RtlClearBitsEx((__int64)v7, v12, v19);
            break;
          case 2u:
            v23 = (v20 + 511) & 0xFFFFFFFFFFFFFE00uLL;
            v24 = (v23 + v19) & 0xFFFFFFFFFFFFFE00uLL;
            if ( v23 < v24 )
              MiUpdateLargePageBitMap((__int64)*a3, v23, v24 - v23, 1, 0);
            break;
          case 3u:
            if ( !(unsigned int)MiSplitLargePfnBitMap(*a3, v20, v19) )
              *((_DWORD *)a3 + 5) = -1073741670;
            break;
          case 4u:
            v25 = (__int64)*a3;
            if ( *a3 == (__int16 *)&MiSystemPartition )
            {
              MiUpdateLargePageBitMap(v25, v20, v19, 0, 0);
              v25 = (__int64)*a3;
            }
            LOBYTE(v48) = *((_BYTE *)a3 + 16);
            MiTransferPartitionPageRun(a3[1], v25, v20, v19, v48);
            break;
          case 8u:
            v26 = (ULONG_PTR *)a3[1];
            if ( v26 != &MiSystemPartition )
              MiUpdateLargePageBitMap((__int64)v26, v20, v19, 0, 0);
            v27 = **a3;
            v28 = 48 * v20 - 0x58000000000LL;
            v29 = v28 + 48 * v19;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            v31 = (unsigned __int64)(v27 & 0x3FF) << 40;
            do
            {
              MiLockPageAtDpcInline(v28);
              if ( (*(_BYTE *)(v28 + 35) & 0x40) != 0 )
              {
                MiAcquireNonPagedResourcesForce((ULONG_PTR *)*a3);
                MiReleaseNonPagedResources((__int64)a3[1], 1uLL);
              }
              *(_QWORD *)(v28 + 40) = v31 | *(_QWORD *)(v28 + 40) & 0xFFFC00FFFFFFFFFFuLL;
              _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v28 += 48LL;
            }
            while ( v28 != v29 );
            v7 = v51;
            __writecr8(CurrentIrql);
            v8 = v49;
            goto LABEL_81;
          default:
            v32 = (__int64)*a3;
            if ( a2 == 9 )
            {
              v52[0] = v20 << 12;
              v55 = v19 << 12;
              MiAddPhysicalMemoryChunks(v32, v52, &v55, 0LL);
              v33 = v55 / 4096;
              if ( *a3 != (__int16 *)&MiSystemPartition )
              {
                v34 = (v20 + 511) & 0xFFFFFFFFFFFFFE00uLL;
                if ( v34 < ((v34 + v33) & 0xFFFFFFFFFFFFFE00uLL) )
                  MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v34, v55 / 4096, 1, 0);
              }
              if ( v33 != v19 )
              {
                *((_DWORD *)a3 + 5) = -1073741823;
                RtlClearBitsEx((__int64)v7, v12 + v33, *v7 - v12 - v33);
                if ( v33 )
                  a3[4] = (__int16 *)((char *)a3[4] + 1);
                a3[5] = (__int16 *)((char *)a3[5] + v33);
                return;
              }
              v8 = v49;
            }
            else
            {
              *(_QWORD *)(v32 + 6864) -= v19;
              *((_BYTE *)*a3 + 12) = 1;
              v35 = *((_QWORD *)*a3 + 3);
              if ( v35 )
              {
                v36 = *(_QWORD *)(v5 + 24) & 0x7FFFFFFFFFFFFFFFLL;
                do
                {
                  v37 = *(_QWORD *)(v35 + 24) & 0x7FFFFFFFFFFFFFFFLL;
                  if ( v36 < v37 )
                  {
                    v35 = *(_QWORD *)v35;
                  }
                  else
                  {
                    if ( v36 <= v37 )
                      break;
                    v35 = *(_QWORD *)(v35 + 8);
                  }
                }
                while ( v35 );
              }
              RtlClearBitsEx(v35 + 32, v12, v19);
              v38 = *(_QWORD *)(v35 + 32);
              v39 = v38 - 1;
              if ( !v38 )
                goto LABEL_81;
              if ( v38 <= 1 )
              {
                if ( _bittest64(*(const signed __int64 **)(v35 + 40), 0) )
                  goto LABEL_81;
LABEL_73:
                RtlAvlRemoveNode((unsigned __int64 *)*a3 + 3, v35);
                v45 = a3[3];
                v46 = 0;
                if ( !v45 )
                  goto LABEL_80;
                while ( 1 )
                {
                  if ( (*(_QWORD *)(v35 + 24) & 0x7FFFFFFFFFFFFFFFuLL) < (*((_QWORD *)v45 + 3) & 0x7FFFFFFFFFFFFFFFuLL) )
                  {
                    v47 = *(__int16 **)v45;
                    if ( !*(_QWORD *)v45 )
                    {
                      v46 = 0;
LABEL_80:
                      RtlAvlInsertNodeEx((unsigned __int64 *)a3 + 3, (unsigned __int64)v45, v46, (_QWORD *)v35);
                      goto LABEL_81;
                    }
                  }
                  else
                  {
                    v47 = (__int16 *)*((_QWORD *)v45 + 1);
                    if ( !v47 )
                    {
                      v46 = 1;
                      goto LABEL_80;
                    }
                  }
                  v45 = v47;
                }
              }
              v40 = *(__int64 **)(v35 + 40);
              v41 = *v40;
              v42 = &v40[v39 >> 6];
              if ( v40 == v42 )
              {
                v43 = (v41 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v38))) == 0;
              }
              else
              {
                for ( j = v41 == 0; ; j = *v40 == 0 )
                {
                  if ( !j )
                    goto LABEL_81;
                  if ( ++v40 == v42 )
                    break;
                }
                v43 = (*v40 & (0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v39)) == 0;
              }
              if ( v43 )
                goto LABEL_73;
LABEL_81:
              v5 = a1;
            }
            break;
        }
      }
      else
      {
        MiFreePartitionPageRun(*a3, v20, v19, v54);
      }
    }
    a3[4] = (__int16 *)((char *)a3[4] + 1);
    a3[5] = (__int16 *)((char *)a3[5] + v19);
  }
  while ( v8 < *v7 );
}
