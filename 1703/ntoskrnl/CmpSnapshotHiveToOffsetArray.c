/*
 * XREFs of CmpSnapshotHiveToOffsetArray @ 0x14066AEF8
 * Callers:
 *     CmpFlushBackupHive @ 0x14066AB34 (CmpFlushBackupHive.c)
 *     CmDumpKey @ 0x140671674 (CmDumpKey.c)
 * Callees:
 *     HvpGetBinContextInitialize @ 0x14008CF2C (HvpGetBinContextInitialize.c)
 *     HvpMapEntryGetBinAddress @ 0x14008D010 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x14008D170 (HvpMapEntryReleaseBinAddress.c)
 *     HvpMapEntryGetFreeBin @ 0x1400A80DC (HvpMapEntryGetFreeBin.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     HvpHeaderCheckSum @ 0x14043B4E8 (HvpHeaderCheckSum.c)
 *     HvpGetCellMap @ 0x140515540 (HvpGetCellMap.c)
 */

__int64 __fastcall CmpSnapshotHiveToOffsetArray(__int64 a1, _DWORD *a2, PVOID **a3, unsigned int *a4)
{
  PVOID **v5; // r12
  _DWORD *v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *CellMap; // rsi
  __int64 v10; // rcx
  unsigned int v11; // edi
  unsigned int v12; // r15d
  unsigned int v13; // edi
  _OWORD *v14; // rbp
  __int64 FreeBin; // rax
  int v16; // r15d
  _DWORD *BinAddress; // rax
  unsigned int v18; // edi
  unsigned int v19; // ecx
  __int64 v20; // rax
  size_t v21; // rbx
  PVOID *PoolWithTag; // rax
  unsigned int v23; // ebx
  _OWORD *v24; // rax
  PVOID *v25; // r9
  __int64 v26; // rcx
  __int128 v27; // xmm1
  _DWORD *v28; // rcx
  int v29; // eax
  char *v30; // rdx
  __int64 v31; // r9
  unsigned int v32; // eax
  unsigned int v33; // edi
  unsigned int v34; // r12d
  unsigned int v35; // r15d
  unsigned int v36; // ebp
  unsigned int v37; // eax
  PVOID v38; // rax
  PVOID **v39; // r10
  __int64 v40; // r8
  PVOID *v41; // rdx
  struct _EX_RUNDOWN_REF *v42; // rax
  __int64 v43; // rax
  struct _EX_RUNDOWN_REF *v44; // rcx
  SIZE_T v45; // rdi
  unsigned __int64 v46; // rax
  _DWORD *v47; // rax
  unsigned int v48; // ebp
  PVOID *v49; // rcx
  char v51; // [rsp+20h] [rbp-58h]
  BOOLEAN v52; // [rsp+21h] [rbp-57h]
  _WORD v53[2]; // [rsp+24h] [rbp-54h] BYREF
  int v54; // [rsp+28h] [rbp-50h]
  unsigned int v55; // [rsp+2Ch] [rbp-4Ch]
  char *v56; // [rsp+30h] [rbp-48h]
  char *v57; // [rsp+38h] [rbp-40h]

  v5 = a3;
  v7 = 0LL;
  HvpGetBinContextInitialize(v53);
  CurrentThread = KeGetCurrentThread();
  CellMap = 0LL;
  v51 = 0;
  --CurrentThread->KernelApcDisable;
  v52 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v52 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v11 = -1073741431;
    goto LABEL_66;
  }
  v12 = *(_DWORD *)(a1 + 1400);
  v13 = 0;
  *v5 = 0LL;
  *a2 = 0;
  v14 = *(_OWORD **)(a1 + 64);
  v55 = v12;
  if ( v12 )
  {
    do
    {
      CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(a1, v13);
      FreeBin = HvpMapEntryGetFreeBin(CellMap);
      if ( FreeBin && (*(_DWORD *)(FreeBin + 24) & 1) != 0 )
      {
        v16 = *(_DWORD *)(FreeBin + 16);
      }
      else
      {
        BinAddress = (_DWORD *)HvpMapEntryGetBinAddress(FreeBin, CellMap, v53);
        v7 = BinAddress;
        v16 = BinAddress[2];
        if ( *BinAddress != 1852400232
          || BinAddress[1] != v13
          || (v10 = v16 + v13, (unsigned int)v10 > *(_DWORD *)(a1 + 1400))
          || (v16 & 0xFFF) != 0 )
        {
          v11 = -1073741492;
          goto LABEL_66;
        }
        HvpMapEntryReleaseBinAddress(v10, CellMap, v53);
      }
      v13 += v16;
    }
    while ( v13 < *(_DWORD *)(a1 + 1400) );
    v12 = v55;
  }
  v18 = v12 + 4096;
  v19 = (v12 + 4096) >> 20;
  v20 = v19 + 1;
  if ( ((v12 + 4096) & 0xFFFFF) == 0 )
    v20 = v19;
  v21 = 24 * v20;
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 24 * v20, 0x20204D43u);
  *v5 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_17;
  memset(PoolWithTag, 0, v21);
  *a4 = v18;
  v23 = 0x100000;
  if ( v18 < 0x100000 )
    v23 = v12 + 4096;
  v55 = v23;
  v24 = ExAllocatePoolWithTag(PagedPool, v23, 0x20204D43u);
  v25 = *v5;
  (*v5)[1] = v24;
  if ( !v24 )
  {
LABEL_17:
    v11 = -1073741801;
    v7 = 0LL;
    goto LABEL_66;
  }
  *(_DWORD *)v25 = 0;
  v26 = 32LL;
  *((_DWORD *)v25 + 4) = v23;
  do
  {
    *v24 = *v14;
    v24[1] = v14[1];
    v24[2] = v14[2];
    v24[3] = v14[3];
    v24[4] = v14[4];
    v24[5] = v14[5];
    v24[6] = v14[6];
    v24 += 8;
    v27 = v14[7];
    v14 += 8;
    *(v24 - 1) = v27;
    --v26;
  }
  while ( v26 );
  v28 = v25[1];
  v28[2] = v28[1];
  v28[10] = v12;
  v29 = HvpHeaderCheckSum(v28);
  v30 = 0LL;
  *(_DWORD *)(v31 + 508) = v29;
  v32 = *(_DWORD *)(a1 + 1400);
  v33 = 0;
  v34 = 0;
  *a2 = 1;
  CellMap = 0LL;
  v51 = 0;
  v7 = 0LL;
  v56 = 0LL;
  v35 = 4096;
  v54 = 4096;
  if ( !v32 )
  {
LABEL_59:
    v11 = 0;
    goto LABEL_60;
  }
  while ( 1 )
  {
    v36 = v55;
    if ( v35 == v55 )
    {
      v37 = v32 - v34;
      v36 = 0x100000;
      if ( v37 < 0x100000 )
        v36 = v37;
      v55 = v36;
      v38 = ExAllocatePoolWithTag(PagedPool, v36, 0x20204D43u);
      v39 = a3;
      v40 = (unsigned int)*a2;
      v41 = *a3;
      v10 = 3 * v40;
      (*a3)[3 * v40 + 1] = v38;
      if ( !v38 )
      {
LABEL_63:
        v11 = -1073741801;
        goto LABEL_65;
      }
      v35 = 0;
      LODWORD(v41[3 * v40]) = v54;
      LODWORD(v41[3 * v40 + 2]) = v36;
      v30 = v56;
      *a2 = v40 + 1;
    }
    else
    {
      v39 = a3;
    }
    if ( v33 )
    {
      if ( v33 <= v55 )
        v36 = v33;
      memmove((*v39)[3 * (unsigned int)(*a2 - 1) + 1], v30, v36);
      v33 -= v36;
      if ( !v33 )
      {
        if ( v51 )
        {
          ExFreePoolWithTag(v7, 0);
          v51 = 0;
        }
        else
        {
          HvpMapEntryReleaseBinAddress(v10, CellMap, v53);
        }
        v7 = 0LL;
      }
      v35 += v36;
      v34 += v36;
      v54 += v36;
      goto LABEL_55;
    }
    v42 = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(a1, v34);
    CellMap = v42;
    if ( !v42 )
      break;
    v43 = HvpMapEntryGetFreeBin(v42);
    if ( v43 )
    {
      v45 = *(unsigned int *)(v43 + 16);
      if ( (*(_DWORD *)(v43 + 24) & 1) == 0 )
      {
        v47 = ExAllocatePoolWithTag(PagedPool, v45, 0x62484D43u);
        v7 = v47;
        if ( !v47 )
          goto LABEL_63;
        v51 = 1;
        memset(v47, 0, v45);
        *v7 = 1852400232;
        v7[8] = v45 - 32;
        v7[1] = v34;
        v7[2] = v45;
        goto LABEL_48;
      }
      v46 = HvpMapEntryGetBinAddress((__int64)v44, v44, v53);
    }
    else
    {
      v46 = HvpMapEntryGetBinAddress((__int64)v44, CellMap, v53);
      LODWORD(v45) = *(_DWORD *)(v46 + 8);
    }
    v7 = (_DWORD *)v46;
LABEL_48:
    v48 = v36 - v35;
    v57 = (char *)v7;
    v56 = (char *)v7;
    if ( (unsigned int)v45 > v48 )
    {
      v33 = v45 - v48;
    }
    else
    {
      v48 = v45;
      v33 = 0;
    }
    memmove((char *)(*a3)[3 * (unsigned int)(*a2 - 1) + 1] + v35, v7, v48);
    v54 += v48;
    v35 += v48;
    v34 += v48;
    if ( v33 )
    {
      v30 = (char *)v7 + v48;
LABEL_57:
      v56 = v30;
      goto LABEL_58;
    }
    if ( !v51 )
    {
      HvpMapEntryReleaseBinAddress(v10, CellMap, v53);
      v30 = v57;
      v7 = 0LL;
      goto LABEL_57;
    }
    ExFreePoolWithTag(v7, 0);
    v7 = 0LL;
    v51 = 0;
LABEL_55:
    v30 = v56;
LABEL_58:
    v32 = *(_DWORD *)(a1 + 1400);
    if ( v34 >= v32 )
      goto LABEL_59;
  }
  v11 = -1073741275;
LABEL_65:
  v5 = a3;
LABEL_66:
  if ( *v5 )
  {
    while ( 1 )
    {
      v49 = *v5;
      if ( !*a2 )
        break;
      ExFreePoolWithTag(v49[3 * (unsigned int)--*a2 + 1], 0);
    }
    ExFreePoolWithTag(v49, 0);
    *a2 = 0;
  }
LABEL_60:
  if ( v7 )
  {
    if ( v51 )
      ExFreePoolWithTag(v7, 0);
    else
      HvpMapEntryReleaseBinAddress(v10, CellMap, v53);
  }
  if ( v52 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v11;
}
