/*
 * XREFs of ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1402675D8
 * Callers:
 *     SmPageRead @ 0x140271800 (SmPageRead.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14011B054 (SmKmStoreRefFromStoreIndex.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x140267348 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x140267C50 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14026A018 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     SmFpAllocate @ 0x140272DD0 (SmFpAllocate.c)
 *     SmAcquireReleaseResAvailForRead @ 0x140275B70 (SmAcquireReleaseResAvailForRead.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPageRead(
        __int64 a1,
        _DWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 *a5)
{
  char v5; // bl
  unsigned __int64 v6; // rbp
  __int64 *v8; // r14
  __int64 *v9; // r12
  unsigned int v10; // edi
  int PickStore; // eax
  __int64 v12; // r15
  unsigned int v13; // esi
  char v14; // si
  _DWORD *PoolWithTag; // rdi
  unsigned int v16; // eax
  bool v17; // zf
  struct _EX_RUNDOWN_REF *v18; // rax
  unsigned int v20; // [rsp+70h] [rbp+8h]
  char v21; // [rsp+80h] [rbp+18h] BYREF
  __int64 v22; // [rsp+88h] [rbp+20h] BYREF

  v22 = 0LL;
  v5 = 0;
  v6 = a3;
  if ( (a3 & 3) != 0 )
  {
    v6 = a3 & 0xFFFFFFFFFFFFFFFCuLL;
    v5 = a3 & 1 | 2;
    if ( (a3 & 2) == 0 )
      v5 = a3 & 1;
  }
  v8 = a5;
  v9 = a5;
  a5[1] = 0LL;
  *v9 = a4;
  v10 = *(_DWORD *)(v6 + 40) >> 12;
  v20 = v10;
  LODWORD(a5) = v10;
  PickStore = SMKM_STORE_MGR<SM_TRAITS>::SmReadPickStore(
                (unsigned int)&SmGlobals,
                (_DWORD)a2,
                (unsigned int)&a5,
                (unsigned int)&v22,
                (__int64)&v21);
  v12 = v22;
  v13 = PickStore;
  if ( PickStore >= 0 )
  {
    v14 = (char)a5;
    v8[1] = (unsigned int)a5;
    if ( (v5 & 2) != 0 && !*(_BYTE *)(v12 + 6020) )
    {
      v13 = -1073741791;
      goto LABEL_28;
    }
    if ( (xmmword_14041B0E0 & 0x10) != 0 )
    {
      v5 ^= (v5 ^ (8 * SmAcquireReleaseResAvailForRead(v8, v10, 0LL))) & 8;
      if ( (v5 & 8) == 0 )
      {
        v13 = -1073741670;
        goto LABEL_28;
      }
      v5 |= 4u;
    }
    if ( (v5 & 1) != 0 )
    {
      PoolWithTag = RtlpInterlockedPopEntrySList(&stru_14041AEA0);
      if ( PoolWithTag )
        goto LABEL_18;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x61576D73u);
      if ( PoolWithTag )
        goto LABEL_18;
      v5 &= ~1u;
    }
    PoolWithTag = (_DWORD *)SmFpAllocate(&dword_14041AFC0, xmmword_14041B0E0 & 1);
    if ( !PoolWithTag )
    {
      v13 = -1073741670;
LABEL_27:
      v10 = v20;
      goto LABEL_28;
    }
LABEL_18:
    memset(PoolWithTag, 0, 0x28uLL);
    v16 = *PoolWithTag & 0xFFFFFFFA;
    *((_QWORD *)PoolWithTag + 2) = v6;
    *((_BYTE *)PoolWithTag + 8) = v14;
    v17 = (v21 & 1) == 0;
    *PoolWithTag = v16 | 2;
    PoolWithTag[6] = *a2;
    *((_QWORD *)PoolWithTag + 4) = v8;
    if ( !v17 )
      PoolWithTag[2] |= 0x1000000u;
    if ( (v5 & 1) != 0 )
      PoolWithTag[2] |= 0x4000000u;
    if ( (int)SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(
                v8,
                (__int64)&SmGlobals,
                *(_WORD *)(v12 + 6016) & 0x3FF,
                (unsigned __int64)PoolWithTag) >= 0 )
    {
      PoolWithTag = 0LL;
      v9 = 0LL;
      v12 = 0LL;
      v5 = -5;
      v13 = 259;
    }
    else
    {
      v13 = -1073741670;
    }
    if ( PoolWithTag )
      SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(&SmGlobals, PoolWithTag, v9);
    goto LABEL_27;
  }
LABEL_28:
  if ( v12 )
  {
    v18 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *(_DWORD *)(v12 + 6016) & 0x3FF);
    ExReleaseRundownProtection_0(v18 + 1);
  }
  if ( (v5 & 4) != 0 )
    SmAcquireReleaseResAvailForRead(v9, v10, 1LL);
  if ( v9 )
  {
    *v8 = 0LL;
    v8[1] = 0LL;
    *(_DWORD *)v8 = v13;
  }
  return v13;
}
