/*
 * XREFs of ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140121190
 * Callers:
 *     SmPageRead @ 0x14003897C (SmPageRead.c)
 * Callees:
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x140053590 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140053AB4 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x140053C18 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     SmAcquireReleaseResAvailForRead @ 0x1401213C0 (SmAcquireReleaseResAvailForRead.c)
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x140121454 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 *     SmFpAllocate @ 0x140121890 (SmFpAllocate.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPageRead(
        __int64 a1,
        _DWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 *a5)
{
  unsigned int v5; // ebx
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
  struct _EX_RUNDOWN_REF *v19; // rax
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
    if ( v5 >= 2 && !*(_BYTE *)(v12 + 5988) )
    {
      v13 = -1073741791;
      goto LABEL_18;
    }
    if ( (xmmword_1403FA108 & 0x10) == 0 )
    {
LABEL_7:
      if ( (v5 & 1) != 0 )
      {
        PoolWithTag = RtlpInterlockedPopEntrySList(&stru_1403F9EE0);
        if ( PoolWithTag )
          goto LABEL_9;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x61576D73u);
        if ( PoolWithTag )
          goto LABEL_9;
        LOBYTE(v5) = v5 & 0xFE;
      }
      PoolWithTag = (_DWORD *)SmFpAllocate(&dword_1403F9FE8, xmmword_1403FA108 & 1);
      if ( !PoolWithTag )
      {
        v13 = -1073741670;
LABEL_17:
        v10 = v20;
        goto LABEL_18;
      }
LABEL_9:
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
                  *(_WORD *)(v12 + 5984) & 0x3FF,
                  PoolWithTag) < 0 )
      {
        v13 = -1073741670;
      }
      else
      {
        PoolWithTag = 0LL;
        v9 = 0LL;
        v12 = 0LL;
        v13 = 259;
        LOBYTE(v5) = v5 & 0xFB;
      }
      if ( PoolWithTag )
        SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource((__int64)&SmGlobals, PoolWithTag, (__int64)v9);
      goto LABEL_17;
    }
    v5 |= 8 * (SmAcquireReleaseResAvailForRead(v8, v10, 0LL) & 1);
    if ( v5 >= 8 )
    {
      LOBYTE(v5) = v5 | 4;
      goto LABEL_7;
    }
    v13 = -1073741670;
  }
LABEL_18:
  if ( v12 )
  {
    v19 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *(_DWORD *)(v12 + 5984) & 0x3FF);
    ExReleaseRundownProtection(v19 + 1);
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
