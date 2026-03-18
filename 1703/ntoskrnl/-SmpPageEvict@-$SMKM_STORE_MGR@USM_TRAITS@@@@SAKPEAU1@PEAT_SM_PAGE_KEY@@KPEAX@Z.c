/*
 * XREFs of ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x140121758
 * Callers:
 *     MiStoreEvictPageFile @ 0x1400320B4 (MiStoreEvictPageFile.c)
 * Callees:
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x140053590 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140053AB4 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x140053C18 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     SmFpFree @ 0x140054CF0 (SmFpFree.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     SmFpAllocate @ 0x140121890 (SmFpAllocate.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x140121970 (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140249B6C (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 */

__int64 SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(__int64 a1, unsigned int *a2, unsigned int a3, ...)
{
  unsigned int *v4; // rdi
  int v5; // eax
  __int16 v6; // bp
  __int64 *v7; // rax
  int v8; // r15d
  __int64 v9; // rsi
  __int64 *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // r12d
  __int64 *v13; // rbx
  unsigned int *v14; // rax
  unsigned int v15; // ecx
  struct _EX_RUNDOWN_REF *v17; // rax
  unsigned int v18; // [rsp+70h] [rbp+18h] BYREF
  __int64 v19; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v19 = va_arg(va1, _QWORD);
  v18 = a3;
  v4 = 0LL;
  v5 = SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictInitiate(a1, a2, &v18, (__int64 *)va);
  v6 = v5;
  if ( v5 != 1024 )
  {
    v7 = (__int64 *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v5 & 0x3FF);
    v8 = xmmword_1403FA108 & 1;
    v9 = *v7;
    v10 = (__int64 *)SmFpAllocate(&dword_1403F9F78, v8);
    v12 = v18;
    v13 = v10;
    if ( v10 )
    {
      *v10 = 0LL;
      v10[1] = 0LL;
      *v10 = 0LL;
      v14 = (unsigned int *)SmFpAllocate(&dword_1403F9F78, v8);
      v4 = v14;
      if ( v14 )
      {
        memset(v14, 0, 0x28uLL);
        v15 = *v4 & 0xFFFFFFF9;
        v4[3] = v12;
        *((_QWORD *)v4 + 4) = v13;
        *v4 = v15 | 1;
        v4[2] = *a2;
        if ( (int)SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(v13, (__int64)&SmGlobals, v6, (int *)v4) >= 0 )
        {
          v9 = 0LL;
          v4 = 0LL;
          v13 = 0LL;
        }
      }
    }
    if ( v9 )
    {
      SMKM_STORE_MGR<SM_TRAITS>::SmFeSetEvictFailed(v11, a2, v12);
      v17 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *(_DWORD *)(v9 + 5984) & 0x3FF);
      ExReleaseRundownProtection(v17 + 1);
    }
    if ( v4 )
      SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource((__int64)&SmGlobals, v4, (__int64)v13);
    if ( v13 )
      SmFpFree((__int64)&dword_1403F9F78, 0, (__int64)v13, (struct _MDL *)v13);
  }
  return (unsigned int)v19;
}
