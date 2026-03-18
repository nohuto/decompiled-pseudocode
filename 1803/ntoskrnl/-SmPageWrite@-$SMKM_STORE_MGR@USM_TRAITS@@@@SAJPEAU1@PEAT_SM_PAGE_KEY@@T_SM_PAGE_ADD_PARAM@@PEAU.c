/*
 * XREFs of ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14008C6C4
 * Callers:
 *     SmpPageWrite @ 0x14008C594 (SmpPageWrite.c)
 * Callees:
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14008C980 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14008EF6C (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     SmKmStoreReferenceEx @ 0x1400902E8 (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140090324 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmHighMemPriorityTimerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400D2B50 (-SmHighMemPriorityTimerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x140110450 (MmUnmapLockedPages.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPageWrite(
        __int64 a1,
        _DWORD *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        int a7)
{
  _DWORD *PoolWithTag; // rdi
  void *v9; // r12
  _DWORD *v13; // rax
  _DWORD *v14; // rsi
  _DWORD *v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rbp
  unsigned __int64 v18; // rcx
  int v19; // ecx
  unsigned int v20; // eax
  int v21; // eax
  int v22; // ebx
  PVOID v23; // rax
  int v24; // ebx
  SIZE_T v26; // rdx
  ULONG v27; // r8d
  int v28; // ecx
  unsigned int v29; // eax
  struct _EX_RUNDOWN_REF *v30; // rax
  _QWORD *v32; // [rsp+90h] [rbp+18h]
  int v33; // [rsp+A8h] [rbp+30h]

  v32 = a6;
  PoolWithTag = 0LL;
  v9 = 0LL;
  a6[1] = 0LL;
  *a6 = a5;
  v33 = *(_DWORD *)(a4 + 40) >> 12;
  if ( (a3 & 0x7FF) == 0x400 || (v13 = (_DWORD *)SmKmStoreReferenceEx(), (v14 = v13) == 0LL) )
  {
    v24 = -1073741811;
    goto LABEL_31;
  }
  v15 = v13 + 476;
  LODWORD(v16) = 0;
  v17 = (unsigned __int16)a3 >> 13;
  v18 = (-(__int64)((unsigned __int8)v13[214] != 0) & 0xFFFFFFFFFFFFFFF9uLL) + 8;
  do
  {
    v16 = (unsigned int)(*v15 + v16);
    v15 += 2;
    --v18;
  }
  while ( v18 );
  if ( v13[234] <= (unsigned int)v16 )
  {
    v16 = (unsigned int)v13[2 * v17 + 477];
    v28 = v13[2 * v17 + 476];
    v29 = v28 * (v13[216] >> 4);
    if ( v29 >= (unsigned int)v16 && v29 - (unsigned int)v16 < v28 << 8 )
    {
      v24 = -1073741110;
      goto LABEL_25;
    }
  }
  if ( (a3 & 0x40000) != 0 && (unsigned int)(v17 - 5) <= 1 )
    LODWORD(v17) = 6;
  if ( (_DWORD)v17 == 6 )
    SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityTimerStart(a1, v16, v15);
  if ( (*(_DWORD *)(a1 + 1840) & 0x20) == 0 || (*v14 & 0x400) != 0 )
  {
    v26 = 40LL;
    v27 = 1767337331;
  }
  else
  {
    PoolWithTag = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 1408));
    if ( PoolWithTag )
      goto LABEL_12;
    v26 = 4096LL;
    v27 = 2002218355;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v26, v27);
  if ( !PoolWithTag )
  {
    v24 = -1073741670;
    goto LABEL_25;
  }
LABEL_12:
  memset(PoolWithTag, 0, 0x28uLL);
  *PoolWithTag = 0;
  v19 = (int)a2;
  PoolWithTag[6] = *a2;
  v20 = PoolWithTag[2] & 0xFFFFFFF8;
  *((_QWORD *)PoolWithTag + 2) = a4;
  v21 = v17 | v20;
  PoolWithTag[2] = v21;
  if ( (a3 & 0x10000) != 0 )
  {
    v21 |= 0x40000000u;
    PoolWithTag[2] = v21;
  }
  if ( (a3 & 0x20000) != 0 )
    PoolWithTag[2] = v21 | 0x40000000;
  *((_QWORD *)PoolWithTag + 4) = a6;
  v22 = v14[1504] & 0x3FF;
  if ( (*(_DWORD *)(a1 + 1840) & 2) != 0 )
  {
    if ( (*(_BYTE *)(a4 + 10) & 5) != 0 )
    {
      v9 = *(void **)(a4 + 24);
    }
    else
    {
      v23 = MmMapLockedPagesSpecifyCache((PMDL)a4, 0, MmCached, 0LL, 0, 0x40000020u);
      v19 = (int)a2;
      v9 = v23;
    }
    if ( !v9 )
    {
      v24 = -1073741688;
      goto LABEL_25;
    }
  }
  if ( (*(_DWORD *)(a1 + 1840) & 0x20) == 0 || (*v14 & 0x400) != 0 )
  {
    v24 = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(a1, v19, v33, v22, (__int64)PoolWithTag, (__int64)a6, 0);
    if ( v24 < 0 )
      goto LABEL_25;
    goto LABEL_24;
  }
  v24 = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(a1, v19, v33, v22, 0LL, 0LL, (unsigned int)(a7 != 0) + 2);
  if ( v24 >= 0 )
  {
    memset(PoolWithTag + 10, 0, 0x58uLL);
    *((_QWORD *)PoolWithTag + 15) = PoolWithTag;
    *((_QWORD *)PoolWithTag + 13) = v14;
    SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextQueueEntry((PEX_SPIN_LOCK)(a1 + 1264));
LABEL_24:
    v14 = 0LL;
    PoolWithTag = 0LL;
    v9 = 0LL;
    v24 = 259;
    v32 = 0LL;
  }
LABEL_25:
  if ( v14 )
  {
    v30 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, v14[1504] & 0x3FF);
    ExReleaseRundownProtection(v30 + 1);
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v9 )
    MmUnmapLockedPages(v9, (PMDL)a4);
LABEL_31:
  if ( v32 )
  {
    *a6 = 0LL;
    a6[1] = 0LL;
    *(_DWORD *)a6 = v24;
  }
  return (unsigned int)v24;
}
