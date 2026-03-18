/*
 * XREFs of MiActOnPartitionNodePages @ 0x14021CCD8
 * Callers:
 *     MiClearPartitionPageBitMap @ 0x14021D530 (MiClearPartitionPageBitMap.c)
 *     MiFreePartitionNodePages @ 0x14021DE78 (MiFreePartitionNodePages.c)
 *     MiInsertPartitionPages @ 0x14021E090 (MiInsertPartitionPages.c)
 *     MiReturnPartitionPagesToParent @ 0x14021E92C (MiReturnPartitionPagesToParent.c)
 *     MiHotAddPartitionMemory @ 0x1406BCDD0 (MiHotAddPartitionMemory.c)
 *     MiMakePartitionMemoryBlock @ 0x1406BCFEC (MiMakePartitionMemoryBlock.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1406BD19C (MiUpdatePartitionLargePfnBitMap.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140098EF0 (RtlAvlInsertNodeEx.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     RtlFindNextForwardRunClearCappedEx @ 0x1400ACB30 (RtlFindNextForwardRunClearCappedEx.c)
 *     RtlClearBitsEx @ 0x1400CDB30 (RtlClearBitsEx.c)
 *     RtlAvlRemoveNode @ 0x1400DB450 (RtlAvlRemoveNode.c)
 *     MiUpdateLargePageBitMap @ 0x14012761C (MiUpdateLargePageBitMap.c)
 *     MiFreePartitionPageRun @ 0x14021DED4 (MiFreePartitionPageRun.c)
 *     MiTransferPartitionPageRun @ 0x14021EA0C (MiTransferPartitionPageRun.c)
 *     MiSplitLargePfnBitMap @ 0x1405BA8F4 (MiSplitLargePfnBitMap.c)
 *     MiAddPhysicalMemoryChunks @ 0x1406B3AC4 (MiAddPhysicalMemoryChunks.c)
 */

void __fastcall MiActOnPartitionNodePages(__int64 a1, int a2, __int16 **a3)
{
  int v3; // r12d
  unsigned int v4; // r15d
  __int64 v6; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 *v8; // r14
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdi
  _QWORD *v14; // rdi
  __int64 i; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 NextForwardRunClearCapped; // rax
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rsi
  unsigned __int64 *v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  ULONG_PTR *v24; // rcx
  __int16 v25; // bp
  __int64 v26; // rdi
  unsigned __int64 v27; // rsi
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v29; // rbp
  __int64 v30; // rcx
  __int64 v31; // rbp
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // r9
  _QWORD *v38; // r8
  _QWORD *v39; // rdx
  char v40; // cl
  __int16 *v41; // rdx
  bool v42; // r8
  __int16 *v43; // rax
  int v44; // [rsp+20h] [rbp-78h]
  signed __int64 v45; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v46; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v47[11]; // [rsp+40h] [rbp-58h] BYREF
  int v50; // [rsp+B0h] [rbp+18h]

  *((_DWORD *)a3 + 5) = 0;
  v3 = a2;
  v4 = 0;
  v50 = 0;
  v6 = a1;
  if ( !a2 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    if ( v7 >= 0x8000000000000000uLL )
    {
      v4 = 1;
      v50 = 1;
      *(_QWORD *)(a1 + 24) = v7 & 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  v8 = (unsigned __int64 *)(a1 + 32);
  v9 = 0LL;
  while ( 1 )
  {
    v10 = v8[1];
    v11 = v9 & -(__int64)(v9 < *v8);
    v12 = *v8 - 1;
    while ( 1 )
    {
      if ( v12 - v11 == -1LL )
        goto LABEL_7;
      v14 = (_QWORD *)(v10 + 8 * (v11 >> 6));
      for ( i = ((1LL << (v11 & 0x3F)) - 1) | ~*v14; i == -1; i = ~*v14 )
      {
        if ( (unsigned __int64)++v14 > v10 + 8 * (v12 >> 6) )
          goto LABEL_7;
      }
      _BitScanForward64((unsigned __int64 *)&i, ~i);
      v13 = i + ((__int64)((__int64)v14 - v10) >> 3 << 6);
      if ( v13 > v12 )
      {
LABEL_7:
        v13 = -1LL;
      }
      else if ( v13 != -1LL )
      {
        break;
      }
      if ( !v11 )
        break;
      v16 = v9 + 1;
      if ( v9 + 1 > *v8 )
        v16 = *v8;
      v12 = v16 - 1;
      v11 = 0LL;
    }
    if ( v13 < v9 || v13 == -1LL )
      return;
    NextForwardRunClearCapped = RtlFindNextForwardRunClearCappedEx((__int64)v8, v13, v12, &v46);
    if ( NextForwardRunClearCapped )
      v18 = v46;
    else
      v18 = *v8;
    v19 = v18 - v13;
    v20 = v13 + (*(_QWORD *)(v6 + 24) & 0x7FFFFFFFFFFFFFFFLL);
    v9 = NextForwardRunClearCapped + v13 + v19;
    switch ( v3 )
    {
      case 4:
        goto LABEL_75;
      case 5:
        v21 = (unsigned __int64 *)&a3[6][8 * ((_QWORD)a3[4] + 1)];
        *v21 = v20;
        v21[1] = v19;
        goto LABEL_75;
      case 0:
        MiFreePartitionPageRun(*a3, v13 + (*(_QWORD *)(v6 + 24) & 0x7FFFFFFFFFFFFFFFLL), v19, v4);
        goto LABEL_75;
      case 1:
        v22 = (v20 + 511) & 0xFFFFFFFFFFFFFE00uLL;
        v23 = (v22 + v19) & 0xFFFFFFFFFFFFFE00uLL;
        if ( v22 < v23 )
          MiUpdateLargePageBitMap((__int64)*a3, v22, v23 - v22, 1, 0);
        goto LABEL_75;
      case 2:
        if ( !(unsigned int)MiSplitLargePfnBitMap(*a3, v13 + (*(_QWORD *)(v6 + 24) & 0x7FFFFFFFFFFFFFFFLL), v19) )
          *((_DWORD *)a3 + 5) = -1073741670;
        goto LABEL_75;
      case 3:
        if ( *a3 == (__int16 *)&MiSystemPartition )
          MiUpdateLargePageBitMap((__int64)*a3, v20, v19, 0, 0);
        LOBYTE(v44) = *((_BYTE *)a3 + 16);
        MiTransferPartitionPageRun(a3[1], *a3, v20, v19, v44);
        goto LABEL_75;
      case 7:
        v24 = (ULONG_PTR *)a3[1];
        if ( v24 != &MiSystemPartition )
          MiUpdateLargePageBitMap((__int64)v24, v20, v19, 0, 0);
        v25 = **a3;
        v26 = 48 * v20 - 0x58000000000LL;
        v27 = v26 + 48 * v19;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v29 = (unsigned __int64)(v25 & 0x3FF) << 40;
        do
        {
          MiLockPageAtDpcInline(v26);
          *(_QWORD *)(v26 + 40) = v29 | *(_QWORD *)(v26 + 40) & 0xFFFC00FFFFFFFFFFuLL;
          _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v26 += 48LL;
        }
        while ( v26 != v27 );
        v3 = a2;
        __writecr8(CurrentIrql);
LABEL_49:
        v6 = a1;
        goto LABEL_75;
    }
    if ( v3 == 8 )
      break;
    *((_QWORD *)*a3 + 698) -= v19;
    *((_BYTE *)*a3 + 12) = 1;
    v33 = *((_QWORD *)*a3 + 7);
    if ( v33 )
    {
      v34 = *(_QWORD *)(v6 + 24) & 0x7FFFFFFFFFFFFFFFLL;
      do
      {
        v35 = *(_QWORD *)(v33 + 24) & 0x7FFFFFFFFFFFFFFFLL;
        if ( v34 < v35 )
        {
          v33 = *(_QWORD *)v33;
        }
        else
        {
          if ( v34 <= v35 )
            break;
          v33 = *(_QWORD *)(v33 + 8);
        }
      }
      while ( v33 );
    }
    RtlClearBitsEx(v33 + 32, v13, v19);
    v36 = *(_QWORD *)(v33 + 32);
    v37 = v36 - 1;
    if ( !v36 )
      goto LABEL_75;
    if ( v36 <= 1 )
    {
      if ( _bittest64(*(const signed __int64 **)(v33 + 40), 0) )
        goto LABEL_75;
LABEL_67:
      RtlAvlRemoveNode((unsigned __int64 *)*a3 + 7, v33);
      v41 = a3[3];
      v42 = 0;
      if ( !v41 )
        goto LABEL_74;
      while ( 1 )
      {
        if ( (*(_QWORD *)(v33 + 24) & 0x7FFFFFFFFFFFFFFFuLL) < (*((_QWORD *)v41 + 3) & 0x7FFFFFFFFFFFFFFFuLL) )
        {
          v43 = *(__int16 **)v41;
          if ( !*(_QWORD *)v41 )
          {
            v42 = 0;
LABEL_74:
            RtlAvlInsertNodeEx((unsigned __int64 *)a3 + 3, (unsigned __int64)v41, v42, v33);
            goto LABEL_75;
          }
        }
        else
        {
          v43 = (__int16 *)*((_QWORD *)v41 + 1);
          if ( !v43 )
          {
            v42 = 1;
            goto LABEL_74;
          }
        }
        v41 = v43;
      }
    }
    v38 = *(_QWORD **)(v33 + 40);
    v39 = &v38[v37 >> 6];
    if ( v38 == v39 )
    {
      v40 = 64 - v36;
    }
    else
    {
      do
      {
        if ( *v38 )
          goto LABEL_75;
        ++v38;
      }
      while ( v38 != v39 );
      v40 = ~(_BYTE)v37;
    }
    if ( (*v38 & (0xFFFFFFFFFFFFFFFFuLL >> v40)) == 0 )
      goto LABEL_67;
LABEL_75:
    a3[5] = (__int16 *)((char *)a3[5] + v19);
    v8 = (unsigned __int64 *)(v6 + 32);
    a3[4] = (__int16 *)((char *)a3[4] + 1);
    if ( v9 >= *(_QWORD *)(v6 + 32) )
      return;
    v4 = v50;
  }
  v30 = (__int64)*a3;
  v47[0] = v20 << 12;
  v45 = v19 << 12;
  MiAddPhysicalMemoryChunks(v30, v47, &v45, 0LL);
  v31 = v45 / 4096;
  if ( *a3 != (__int16 *)&MiSystemPartition )
  {
    v32 = (v20 + 511) & 0xFFFFFFFFFFFFFE00uLL;
    if ( v32 < ((v32 + v31) & 0xFFFFFFFFFFFFFE00uLL) )
      MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v32, v45 / 4096, 1, 0);
  }
  if ( v31 == v19 )
    goto LABEL_49;
  *((_DWORD *)a3 + 5) = -1073741823;
  RtlClearBitsEx(a1 + 32, v13 + v31, *(_QWORD *)(a1 + 32) - v13 - v31);
  if ( v31 )
    a3[4] = (__int16 *)((char *)a3[4] + 1);
  a3[5] = (__int16 *)((char *)a3[5] + v31);
}
