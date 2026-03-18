/*
 * XREFs of ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14026784C
 * Callers:
 *     SmpPageWrite @ 0x1402718E0 (SmpPageWrite.c)
 * Callees:
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x14000BD0C (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 *     MmUnmapLockedPages @ 0x140074D40 (MmUnmapLockedPages.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     SmKmStoreReferenceEx @ 0x14011B018 (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14011B054 (SmKmStoreRefFromStoreIndex.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140264FB0 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140265D68 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPageWrite(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        int a7)
{
  _QWORD *v7; // r14
  _DWORD *PoolWithTag; // rdi
  void *v9; // r15
  __int64 v10; // rdx
  int v14; // r12d
  unsigned __int64 v15; // rax
  _DWORD *v16; // rsi
  __int64 v17; // rax
  unsigned int v18; // edx
  int v19; // ecx
  unsigned int v20; // eax
  int v21; // ebx
  SIZE_T v22; // rdx
  ULONG v23; // r8d
  unsigned int *v24; // rcx
  int v25; // eax
  unsigned int v26; // ebx
  PVOID v27; // rax
  bool v28; // cf
  struct _EX_RUNDOWN_REF *v29; // rax
  _QWORD *v32; // [rsp+90h] [rbp+18h]

  v7 = a6;
  v32 = a6;
  PoolWithTag = 0LL;
  v9 = 0LL;
  v10 = a3 & 0x7FF;
  a6[1] = 0LL;
  *v7 = a5;
  v14 = *(_DWORD *)(a4 + 40) >> 12;
  if ( (_DWORD)v10 == 1024 || (v15 = SmKmStoreReferenceEx(a1, v10), (v16 = (_DWORD *)v15) == 0LL) )
  {
    v21 = -1073741811;
    goto LABEL_37;
  }
  ST_STORE<SM_TRAITS>::StDmGetSpaceStats(v15 + 80, &a6, 0LL);
  if ( v16[234] <= (unsigned int)a6 )
  {
    v17 = (unsigned __int16)a3 >> 13;
    v18 = v16[2 * v17 + 477];
    v19 = v16[2 * v17 + 476];
    v20 = v19 * (v16[216] >> 4);
    if ( v20 >= v18 && v20 - v18 < v19 << 8 )
    {
      v21 = -1073741110;
      goto LABEL_30;
    }
  }
  if ( (*(_DWORD *)(a1 + 1824) & 0x20) == 0 || (*v16 & 0x400) != 0 )
  {
    v22 = 40LL;
    v23 = 1767337331;
LABEL_12:
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v22, v23);
    if ( !PoolWithTag )
    {
      v21 = -1073741670;
      goto LABEL_30;
    }
    goto LABEL_14;
  }
  PoolWithTag = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 1408));
  if ( !PoolWithTag )
  {
    v22 = 4096LL;
    v23 = 2002218355;
    goto LABEL_12;
  }
LABEL_14:
  memset(PoolWithTag, 0, 0x28uLL);
  *PoolWithTag &= 0xFFFFFFF8;
  v24 = a2;
  PoolWithTag[6] = *a2;
  v25 = (PoolWithTag[2] ^ (a3 >> 13)) & 7;
  *((_QWORD *)PoolWithTag + 2) = a4;
  PoolWithTag[2] ^= v25;
  if ( (a3 & 0x10000) != 0 )
    PoolWithTag[2] |= 0x40000000u;
  if ( (a3 & 0x20000) != 0 )
    PoolWithTag[2] |= 0x40000000u;
  *((_QWORD *)PoolWithTag + 4) = v7;
  v26 = v16[1504] & 0x3FF;
  if ( (*(_DWORD *)(a1 + 1824) & 2) == 0
    || ((*(_BYTE *)(a4 + 10) & 5) == 0
      ? (v27 = MmMapLockedPagesSpecifyCache((PMDL)a4, 0, MmCached, 0LL, 0, 0x40000020u), v24 = a2, v9 = v27)
      : (v9 = *(void **)(a4 + 24)),
        v9) )
  {
    if ( (*(_DWORD *)(a1 + 1824) & 0x20) == 0 || (*v16 & 0x400) != 0 )
    {
      v21 = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(a1, v24, v14, v26, (__int64)PoolWithTag, (__int64)v7, 0);
      if ( v21 < 0 )
        goto LABEL_30;
    }
    else
    {
      v28 = a7 != 0;
      a7 = -a7;
      v21 = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(a1, v24, v14, v26, 0LL, 0LL, v28 + 2);
      if ( v21 < 0 )
        goto LABEL_30;
      memset(PoolWithTag + 10, 0, 0x58uLL);
      *((_QWORD *)PoolWithTag + 15) = PoolWithTag;
      *((_QWORD *)PoolWithTag + 13) = v16;
      SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextQueueEntry((struct _KEVENT *)(a1 + 1264), (__int64)(PoolWithTag + 10));
    }
    v16 = 0LL;
    PoolWithTag = 0LL;
    v9 = 0LL;
    v21 = 259;
    v32 = 0LL;
    goto LABEL_30;
  }
  v21 = -1073741688;
LABEL_30:
  if ( v16 )
  {
    v29 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, v16[1504] & 0x3FF);
    ExReleaseRundownProtection_0(v29 + 1);
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v9 )
    MmUnmapLockedPages(v9, (PMDL)a4);
LABEL_37:
  if ( v32 )
  {
    *v7 = 0LL;
    v7[1] = 0LL;
    *(_DWORD *)v7 = v21;
  }
  return (unsigned int)v21;
}
