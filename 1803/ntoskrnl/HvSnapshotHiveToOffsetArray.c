/*
 * XREFs of HvSnapshotHiveToOffsetArray @ 0x1407067E4
 * Callers:
 *     CmpFlushBackupHive @ 0x1406F9154 (CmpFlushBackupHive.c)
 *     CmDumpKey @ 0x1407015A4 (CmDumpKey.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     HvpHeaderCheckSum @ 0x140496AEC (HvpHeaderCheckSum.c)
 *     HvpGetCellMap @ 0x1404E4320 (HvpGetCellMap.c)
 */

__int64 __fastcall HvSnapshotHiveToOffsetArray(__int64 a1, int *a2, __int64 *a3, unsigned int *a4)
{
  unsigned int v4; // r15d
  unsigned int v5; // r10d
  _OWORD *v7; // rbp
  __int64 v9; // r12
  __int64 CellMap; // rax
  int v11; // r10d
  int v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  __int64 v15; // rax
  size_t v16; // rsi
  PVOID PoolWithTag; // rax
  unsigned int v18; // ebx
  unsigned int v19; // esi
  _OWORD *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int128 v23; // xmm1
  _DWORD *v24; // rcx
  int v25; // eax
  unsigned int v26; // r13d
  __int64 v27; // r9
  unsigned int v28; // eax
  unsigned int *v29; // rdx
  unsigned int v30; // ebp
  unsigned int v31; // r15d
  int i; // r10d
  unsigned int v33; // eax
  PVOID v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned int v37; // eax
  unsigned int v38; // r12d
  __int64 v39; // rax
  int v40; // r10d
  __int16 v41; // r11
  unsigned int v42; // edx
  void *v43; // rcx
  unsigned int *Src; // [rsp+20h] [rbp-68h]
  __int16 v46; // [rsp+28h] [rbp-60h]
  __int64 v47; // [rsp+30h] [rbp-58h]
  int v49; // [rsp+98h] [rbp+10h]
  int v50; // [rsp+A0h] [rbp+18h]

  v4 = *(_DWORD *)(a1 + 272);
  *a3 = 0LL;
  v5 = 0;
  *a2 = 0;
  v7 = *(_OWORD **)(a1 + 64);
  v46 = 0;
  v9 = a1;
  if ( v4 )
  {
    while ( 1 )
    {
      CellMap = HvpGetCellMap(v9, v5);
      if ( *(_DWORD *)(*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL) != 1852400232 )
        break;
      if ( *(_DWORD *)((*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 4) != v11 )
        break;
      v12 = *(_DWORD *)((*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 8);
      v5 = v12 + v11;
      if ( v5 > v4 || (v12 & 0xFFF) != 0 )
        break;
      v46 = 0;
      if ( v5 >= v4 )
        goto LABEL_7;
    }
    v18 = -1073741492;
    goto LABEL_40;
  }
LABEL_7:
  v13 = v4 + 4096;
  v14 = (v4 + 4096) >> 20;
  v15 = v14 + 1;
  if ( ((v4 + 4096) & 0xFFFFF) == 0 )
    v15 = v14;
  v16 = 24 * v15;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 24 * v15, 0x20204D43u);
  *a3 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v16);
    *a4 = v13;
    v19 = 0x100000;
    if ( v13 < 0x100000 )
      v19 = v4 + 4096;
    v20 = ExAllocatePoolWithTag(PagedPool, v19, 0x20204D43u);
    v21 = *a3;
    *(_QWORD *)(*a3 + 8) = v20;
    if ( v20 )
    {
      *(_DWORD *)v21 = 0;
      v22 = 32LL;
      *(_DWORD *)(v21 + 16) = v19;
      do
      {
        *v20 = *v7;
        v20[1] = v7[1];
        v20[2] = v7[2];
        v20[3] = v7[3];
        v20[4] = v7[4];
        v20[5] = v7[5];
        v20[6] = v7[6];
        v20 += 8;
        v23 = v7[7];
        v7 += 8;
        *(v20 - 1) = v23;
        --v22;
      }
      while ( v22 );
      v24 = *(_DWORD **)(v21 + 8);
      v24[2] = v24[1];
      v24[10] = v4;
      v25 = HvpHeaderCheckSum(v24);
      v26 = 0;
      *(_DWORD *)(v27 + 508) = v25;
      v28 = *(_DWORD *)(v9 + 272);
      v29 = 0LL;
      v30 = 0;
      Src = 0LL;
      v31 = 4096;
      v49 = 4096;
      *a2 = 1;
      if ( !v28 )
        return 0;
      for ( i = 1; ; i = v50 )
      {
        v50 = i;
        if ( v31 == v19 )
        {
          v33 = v28 - v26;
          v19 = 0x100000;
          if ( v33 < 0x100000 )
            v19 = v33;
          v34 = ExAllocatePoolWithTag(PagedPool, v19, 0x20204D43u);
          v35 = (unsigned int)*a2;
          v21 = *a3;
          v36 = 3 * v35;
          *(_QWORD *)(*a3 + 24 * v35 + 8) = v34;
          if ( !v34 )
            break;
          i = v35 + 1;
          v29 = Src;
          v31 = 0;
          *(_DWORD *)(v21 + 8 * v36) = v49;
          *(_DWORD *)(v21 + 8 * v36 + 16) = v19;
          v50 = i;
          *a2 = i;
        }
        if ( v30 )
        {
          v37 = v30;
          if ( v30 > v19 )
            v37 = v19;
          v38 = v37;
          memmove(*(void **)(v21 + 24LL * (unsigned int)(i - 1) + 8), v29, v37);
          v30 -= v38;
          if ( !v30 )
            v46 = 0;
          v31 += v38;
          v26 += v38;
          v49 += v38;
          v9 = a1;
        }
        else
        {
          v39 = HvpGetCellMap(v9, v26);
          if ( !v39 )
          {
            v18 = -1073741275;
            goto LABEL_40;
          }
          v46 |= v41;
          Src = (unsigned int *)(*(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF0uLL);
          v42 = Src[2];
          v30 = v19 - v31 < v42 ? v42 - (v19 - v31) : 0;
          if ( v42 > v19 - v31 )
            v42 = v19 - v31;
          v47 = v42;
          memmove(
            (void *)(*(_QWORD *)(v21 + 24LL * (unsigned int)(v40 - 1) + 8) + v31),
            (const void *)(*(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF0uLL),
            v42);
          v49 += v47;
          v31 += v47;
          v26 += v47;
          if ( v30 )
          {
            v29 = (unsigned int *)((char *)Src + v47);
            Src = (unsigned int *)((char *)Src + v47);
            goto LABEL_37;
          }
          v46 = 0;
        }
        v29 = Src;
LABEL_37:
        v28 = *(_DWORD *)(v9 + 272);
        if ( v26 >= v28 )
          return 0;
      }
    }
  }
  v18 = -1073741801;
LABEL_40:
  v43 = (void *)*a3;
  if ( *a3 )
  {
    if ( *a2 )
    {
      do
        ExFreePoolWithTag(*(PVOID *)(*a3 + 24LL * (unsigned int)--*a2 + 8), 0);
      while ( *a2 );
      v43 = (void *)*a3;
    }
    ExFreePoolWithTag(v43, 0);
    *a2 = 0;
  }
  return v18;
}
