/*
 * XREFs of ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140055E00
 * Callers:
 *     SmpPageWrite @ 0x1400560CC (SmpPageWrite.c)
 * Callees:
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x140027AA0 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 *     SmKmStoreReferenceEx @ 0x140053A78 (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140053AB4 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140055720 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140056054 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     MmUnmapLockedPages @ 0x1400A3B30 (MmUnmapLockedPages.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPageWrite(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        int a7)
{
  __int64 *v7; // r14
  _DWORD *v8; // rdi
  void *v9; // r15
  __int64 v10; // rdx
  int v14; // r12d
  unsigned __int64 v15; // rax
  _DWORD *v16; // rsi
  SIZE_T v17; // rdx
  ULONG v18; // r8d
  _DWORD *PoolWithTag; // rax
  unsigned int *v20; // rcx
  int v21; // eax
  int v22; // ebx
  PVOID v23; // rax
  bool v24; // cf
  int v25; // ebx
  __int64 v27; // rax
  unsigned int v28; // edx
  int v29; // ecx
  unsigned int v30; // eax
  struct _EX_RUNDOWN_REF *v31; // rax
  __int64 *v33; // [rsp+90h] [rbp+18h]

  v7 = a6;
  v33 = a6;
  v8 = 0LL;
  v9 = 0LL;
  v10 = a3 & 0x7FF;
  a6[1] = 0LL;
  *v7 = a5;
  v14 = *(_DWORD *)(a4 + 40) >> 12;
  if ( (_DWORD)v10 == 1024 || (v15 = SmKmStoreReferenceEx(a1, v10), (v16 = (_DWORD *)v15) == 0LL) )
  {
    v25 = -1073741811;
    goto LABEL_27;
  }
  ST_STORE<SM_TRAITS>::StDmGetSpaceStats(v15 + 80, &a6, 0LL);
  if ( v16[234] <= (unsigned int)a6 )
  {
    v27 = (unsigned __int16)a3 >> 13;
    v28 = v16[2 * v27 + 473];
    v29 = v16[2 * v27 + 472];
    v30 = v29 * (v16[216] >> 4);
    if ( v30 >= v28 && v30 - v28 < v29 << 8 )
    {
      v25 = -1073741110;
      goto LABEL_21;
    }
  }
  if ( (*(_DWORD *)(a1 + 1800) & 0x20) == 0 || (*v16 & 0x400) != 0 )
  {
    v17 = 40LL;
    v18 = 1767337331;
  }
  else
  {
    v17 = 4096LL;
    v18 = 2002218355;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v17, v18);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v25 = -1073741670;
    goto LABEL_21;
  }
  memset(PoolWithTag, 0, 0x28uLL);
  *v8 &= 0xFFFFFFF8;
  v20 = a2;
  v8[6] = *a2;
  v21 = (v8[2] ^ (a3 >> 13)) & 7;
  *((_QWORD *)v8 + 2) = a4;
  v8[2] ^= v21;
  if ( (a3 & 0x10000) != 0 )
    v8[2] |= 0x40000000u;
  if ( (a3 & 0x20000) != 0 )
    v8[2] |= 0x40000000u;
  *((_QWORD *)v8 + 4) = v7;
  v22 = v16[1496] & 0x3FF;
  if ( (*(_DWORD *)(a1 + 1800) & 2) != 0 )
  {
    if ( (*(_BYTE *)(a4 + 10) & 5) != 0 )
    {
      v9 = *(void **)(a4 + 24);
    }
    else
    {
      v23 = MmMapLockedPagesSpecifyCache((PMDL)a4, 0, MmCached, 0LL, 0, 0x40000020u);
      v20 = a2;
      v9 = v23;
    }
    if ( !v9 )
    {
      v25 = -1073741688;
      goto LABEL_21;
    }
  }
  if ( (*(_DWORD *)(a1 + 1800) & 0x20) == 0 || (*v16 & 0x400) != 0 )
  {
    v25 = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(a1, v20, v14, v22, v8, v7, 0);
    if ( v25 < 0 )
      goto LABEL_21;
    goto LABEL_20;
  }
  v24 = a7 != 0;
  a7 = -a7;
  v25 = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(a1, v20, v14, v22, 0LL, 0LL, v24 + 2);
  if ( v25 >= 0 )
  {
    memset(v8 + 10, 0, 0x58uLL);
    *((_QWORD *)v8 + 15) = v8;
    *((_QWORD *)v8 + 13) = v16;
    SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextQueueEntry((PEX_SPIN_LOCK)(a1 + 1264));
LABEL_20:
    v16 = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    v25 = 259;
    v33 = 0LL;
  }
LABEL_21:
  if ( v16 )
  {
    v31 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, v16[1496] & 0x3FF);
    ExReleaseRundownProtection(v31 + 1);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v9 )
    MmUnmapLockedPages(v9, (PMDL)a4);
LABEL_27:
  if ( v33 )
  {
    *v7 = 0LL;
    v7[1] = 0LL;
    *(_DWORD *)v7 = v25;
  }
  return (unsigned int)v25;
}
