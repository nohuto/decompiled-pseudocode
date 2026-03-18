/*
 * XREFs of ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14026A088
 * Callers:
 *     MiStoreEvictThread @ 0x1401DF9C0 (MiStoreEvictThread.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14011B054 (SmKmStoreRefFromStoreIndex.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x14026699C (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140266EC0 (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x140267348 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14026A018 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     SmFpAllocate @ 0x140272DD0 (SmFpAllocate.c)
 *     SmFpFree @ 0x140272EDC (SmFpFree.c)
 */

__int64 SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(__int64 a1, unsigned int *a2, int a3, ...)
{
  unsigned __int64 v4; // rdi
  int v5; // eax
  __int16 v6; // bp
  __int64 *v7; // rax
  int v8; // r15d
  __int64 v9; // rsi
  __int64 *v10; // rax
  __int64 v11; // rcx
  int v12; // r12d
  __int64 *v13; // rbx
  void *v14; // rax
  unsigned int v15; // ecx
  struct _EX_RUNDOWN_REF *v16; // rax
  int v18; // [rsp+70h] [rbp+18h] BYREF
  __int64 v19; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v19 = va_arg(va1, _QWORD);
  v18 = a3;
  v4 = 0LL;
  v5 = SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictInitiate(a1, a2, (int)&v18, (int)va);
  v6 = v5;
  if ( v5 != 1024 )
  {
    v7 = (__int64 *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v5 & 0x3FF);
    v8 = xmmword_14041B0E0 & 1;
    v9 = *v7;
    v10 = (__int64 *)SmFpAllocate(&dword_14041AF50, v8);
    v12 = v18;
    v13 = v10;
    if ( v10 )
    {
      *v10 = 0LL;
      v10[1] = 0LL;
      *v10 = 0LL;
      v14 = (void *)SmFpAllocate(&dword_14041AF50, v8);
      v4 = (unsigned __int64)v14;
      if ( v14 )
      {
        memset(v14, 0, 0x28uLL);
        v15 = *(_DWORD *)v4 & 0xFFFFFFF9;
        *(_DWORD *)(v4 + 12) = v12;
        *(_QWORD *)(v4 + 32) = v13;
        *(_DWORD *)v4 = v15 | 1;
        *(_DWORD *)(v4 + 8) = *a2;
        if ( (int)SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(v13, (__int64)&SmGlobals, v6, v4) >= 0 )
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
      v16 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *(_DWORD *)(v9 + 6016) & 0x3FF);
      ExReleaseRundownProtection_0(v16 + 1);
    }
    if ( v4 )
      SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource((__int64)&SmGlobals, (_DWORD *)v4, (__int64)v13);
    if ( v13 )
      SmFpFree(&dword_14041AF50, 0LL, v13, v13);
  }
  return (unsigned int)v19;
}
