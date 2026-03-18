/*
 * XREFs of CmpSnapshotHiveToOffsetArray @ 0x14069557C
 * Callers:
 *     CmpFlushBackupHive @ 0x1406951B8 (CmpFlushBackupHive.c)
 *     CmDumpKey @ 0x14069C6E4 (CmDumpKey.c)
 * Callees:
 *     HvpMapEntryGetFreeBin @ 0x140016924 (HvpMapEntryGetFreeBin.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     HvpGetBinContextInitialize @ 0x140080EC0 (HvpGetBinContextInitialize.c)
 *     HvpMapEntryGetBinAddress @ 0x140080F90 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x1400812E0 (HvpMapEntryReleaseBinAddress.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     HvpGetCellMap @ 0x14047D620 (HvpGetCellMap.c)
 *     HvpHeaderCheckSum @ 0x1404E4CA4 (HvpHeaderCheckSum.c)
 */

__int64 __fastcall CmpSnapshotHiveToOffsetArray(__int64 a1, _DWORD *a2, PVOID **a3, unsigned int *a4)
{
  PVOID **v5; // r15
  _DWORD *v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *CellMap; // rsi
  __int64 v10; // rcx
  unsigned int v11; // edi
  unsigned int v12; // edi
  int v13; // r12d
  _OWORD *v14; // rbp
  __int64 FreeBin; // rax
  _DWORD *BinAddress; // rax
  int v17; // eax
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
  __int64 v39; // r8
  PVOID *v40; // rdx
  struct _EX_RUNDOWN_REF *v41; // rax
  __int64 v42; // rax
  struct _EX_RUNDOWN_REF *v43; // rcx
  SIZE_T v44; // rdi
  unsigned __int64 v45; // rax
  _DWORD *v46; // rax
  unsigned int v47; // ebp
  PVOID *v48; // rcx
  char v50; // [rsp+20h] [rbp-58h]
  BOOLEAN v51; // [rsp+21h] [rbp-57h]
  _WORD v52[2]; // [rsp+24h] [rbp-54h] BYREF
  int v53; // [rsp+28h] [rbp-50h]
  unsigned int v54; // [rsp+2Ch] [rbp-4Ch]
  void *Src; // [rsp+30h] [rbp-48h]
  char *v56; // [rsp+38h] [rbp-40h]

  v5 = a3;
  v7 = 0LL;
  HvpGetBinContextInitialize(v52);
  CurrentThread = KeGetCurrentThread();
  CellMap = 0LL;
  v50 = 0;
  --CurrentThread->KernelApcDisable;
  v51 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v51 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v11 = -1073741431;
    goto LABEL_65;
  }
  *v5 = 0LL;
  v12 = 0;
  *a2 = 0;
  v13 = *(_DWORD *)(a1 + 1400);
  v14 = *(_OWORD **)(a1 + 64);
  if ( v13 )
  {
    do
    {
      CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(a1, v12);
      FreeBin = HvpMapEntryGetFreeBin(CellMap);
      if ( FreeBin && (*(_DWORD *)(FreeBin + 24) & 1) != 0 )
      {
        v12 += *(_DWORD *)(FreeBin + 16);
      }
      else
      {
        BinAddress = (_DWORD *)HvpMapEntryGetBinAddress(FreeBin, CellMap, v52);
        v7 = BinAddress;
        if ( *BinAddress != 1852400232
          || BinAddress[1] != v12
          || (v17 = BinAddress[2], v12 += v17, v12 > *(_DWORD *)(a1 + 1400))
          || (v17 & 0xFFF) != 0 )
        {
          v11 = -1073741492;
          goto LABEL_65;
        }
        HvpMapEntryReleaseBinAddress(v10, CellMap, v52);
      }
    }
    while ( v12 < *(_DWORD *)(a1 + 1400) );
  }
  v18 = v13 + 4096;
  v19 = (unsigned int)(v13 + 4096) >> 20;
  v20 = v19 + 1;
  if ( ((v13 + 4096) & 0xFFFFF) == 0 )
    v20 = v19;
  v21 = 24 * v20;
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 24 * v20, 0x20204D43u);
  *v5 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_16;
  memset(PoolWithTag, 0, v21);
  *a4 = v18;
  v23 = 0x100000;
  if ( v18 < 0x100000 )
    v23 = v13 + 4096;
  v54 = v23;
  v24 = ExAllocatePoolWithTag(PagedPool, v23, 0x20204D43u);
  v25 = *v5;
  (*v5)[1] = v24;
  if ( !v24 )
  {
LABEL_16:
    v11 = -1073741801;
    v7 = 0LL;
    goto LABEL_65;
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
  v28[10] = v13;
  v29 = HvpHeaderCheckSum(v28);
  v30 = 0LL;
  *(_DWORD *)(v31 + 508) = v29;
  v32 = *(_DWORD *)(a1 + 1400);
  v33 = 0;
  v34 = 0;
  *a2 = 1;
  CellMap = 0LL;
  v50 = 0;
  v7 = 0LL;
  Src = 0LL;
  v35 = 4096;
  v53 = 4096;
  if ( !v32 )
  {
LABEL_57:
    v11 = 0;
    goto LABEL_58;
  }
  while ( 1 )
  {
    v36 = v54;
    if ( v35 == v54 )
    {
      v37 = v32 - v34;
      v36 = 0x100000;
      if ( v37 < 0x100000 )
        v36 = v37;
      v54 = v36;
      v38 = ExAllocatePoolWithTag(PagedPool, v36, 0x20204D43u);
      v5 = a3;
      v39 = (unsigned int)*a2;
      v40 = *a3;
      v10 = 3 * v39;
      (*a3)[3 * v39 + 1] = v38;
      if ( !v38 )
      {
        v11 = -1073741801;
        goto LABEL_65;
      }
      v35 = 0;
      LODWORD(v40[3 * v39]) = v53;
      LODWORD(v40[3 * v39 + 2]) = v36;
      v30 = (char *)Src;
      *a2 = v39 + 1;
    }
    if ( v33 )
    {
      if ( v33 <= v54 )
        v36 = v33;
      memmove((*a3)[3 * (unsigned int)(*a2 - 1) + 1], v30, v36);
      v33 -= v36;
      if ( !v33 )
      {
        if ( v50 )
        {
          ExFreePoolWithTag(v7, 0);
          v50 = 0;
        }
        else
        {
          HvpMapEntryReleaseBinAddress(v10, CellMap, v52);
        }
        v7 = 0LL;
      }
      v35 += v36;
      v34 += v36;
      v53 += v36;
      goto LABEL_53;
    }
    v41 = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(a1, v34);
    CellMap = v41;
    if ( !v41 )
      break;
    v42 = HvpMapEntryGetFreeBin(v41);
    if ( v42 )
    {
      v44 = *(unsigned int *)(v42 + 16);
      if ( (*(_DWORD *)(v42 + 24) & 1) == 0 )
      {
        v46 = ExAllocatePoolWithTag(PagedPool, v44, 0x62484D43u);
        v7 = v46;
        if ( !v46 )
        {
          v11 = -1073741801;
          goto LABEL_64;
        }
        v50 = 1;
        memset(v46, 0, v44);
        *v7 = 1852400232;
        v7[8] = v44 - 32;
        v7[1] = v34;
        v7[2] = v44;
        goto LABEL_46;
      }
      v45 = HvpMapEntryGetBinAddress((__int64)v43, v43, v52);
    }
    else
    {
      v45 = HvpMapEntryGetBinAddress((__int64)v43, CellMap, v52);
      LODWORD(v44) = *(_DWORD *)(v45 + 8);
    }
    v7 = (_DWORD *)v45;
LABEL_46:
    v47 = v36 - v35;
    v56 = (char *)v7;
    Src = v7;
    if ( (unsigned int)v44 > v47 )
    {
      v33 = v44 - v47;
    }
    else
    {
      v47 = v44;
      v33 = 0;
    }
    memmove((char *)(*a3)[3 * (unsigned int)(*a2 - 1) + 1] + v35, v7, v47);
    v53 += v47;
    v35 += v47;
    v34 += v47;
    if ( v33 )
    {
      v30 = (char *)v7 + v47;
LABEL_55:
      Src = v30;
      goto LABEL_56;
    }
    if ( !v50 )
    {
      HvpMapEntryReleaseBinAddress(v10, CellMap, v52);
      v30 = v56;
      v7 = 0LL;
      goto LABEL_55;
    }
    ExFreePoolWithTag(v7, 0);
    v7 = 0LL;
    v50 = 0;
LABEL_53:
    v30 = (char *)Src;
LABEL_56:
    v32 = *(_DWORD *)(a1 + 1400);
    if ( v34 >= v32 )
      goto LABEL_57;
  }
  v11 = -1073741275;
LABEL_64:
  v5 = a3;
LABEL_65:
  if ( *v5 )
  {
    while ( 1 )
    {
      v48 = *v5;
      if ( !*a2 )
        break;
      ExFreePoolWithTag(v48[3 * (unsigned int)--*a2 + 1], 0);
    }
    ExFreePoolWithTag(v48, 0);
    *a2 = 0;
  }
LABEL_58:
  if ( v7 )
  {
    if ( v50 )
      ExFreePoolWithTag(v7, 0);
    else
      HvpMapEntryReleaseBinAddress(v10, CellMap, v52);
  }
  if ( v51 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v11;
}
