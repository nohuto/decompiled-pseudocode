/*
 * XREFs of ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x140267348
 * Callers:
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140265D68 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1402675D8 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14026A088 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x140061EF0 (PsGetIoPriorityThread.c)
 *     KeQueryPriorityThread @ 0x140100BB0 (KeQueryPriorityThread.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14011B054 (SmKmStoreRefFromStoreIndex.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x140264BC0 (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASY.c)
 *     ?SmIoCtxPrepareToQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x1402671BC (-SmIoCtxPrepareToQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WOR.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140269B90 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14026A018 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     SmFpFree @ 0x140272EDC (SmFpFree.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(
        __int64 *a1,
        __int64 a2,
        __int16 a3,
        unsigned __int64 a4)
{
  int v8; // r15d
  int v9; // r15d
  __int64 v10; // r8
  int v11; // r14d
  void (__fastcall *v12)(__int64, __int64 *, __int64); // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rcx
  KPRIORITY PriorityThread; // eax
  __int64 v18; // r9
  _QWORD *v19; // rax
  __int64 v20; // r9
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v24; // [rsp+30h] [rbp-30h] BYREF
  int v25; // [rsp+38h] [rbp-28h]
  __int16 v26; // [rsp+3Ch] [rbp-24h]
  _QWORD v27[4]; // [rsp+40h] [rbp-20h] BYREF

  memset(v27, 0, sizeof(v27));
  v8 = *(_DWORD *)a4;
  v27[0] = 0LL;
  v27[1] = v27;
  v9 = v8 & 7;
  v11 = SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxPrepareToQueue((__int64)a1, a2, v10, a4, (__int64)v27);
  if ( v11 < 0 )
  {
    v21 = v27[2];
  }
  else
  {
    if ( v9 != 2 )
      goto LABEL_13;
    v12 = *(void (__fastcall **)(__int64, __int64 *, __int64))(a2 + 1832);
    if ( v12 )
    {
      v24 = *a1;
      v25 = *(_DWORD *)(a4 + 24);
      v26 = a3;
      v12(a2, &v24, 5LL);
    }
    CurrentThread = KeGetCurrentThread();
    v14 = SmKmStoreRefFromStoreIndex(a2, a3 & 0x3FF);
    v15 = *(_QWORD *)v14;
    if ( (*(_BYTE *)(*(_QWORD *)v14 + 6021LL) & 4) != 0
      && (*(_DWORD *)(a4 + 8) & 0x4000000) != 0
      && (int)PsGetIoPriorityThread((__int64)CurrentThread) >= 2 )
    {
      if ( (_QWORD *)v27[1] != v27 )
      {
        v16 = v27[0];
        v27[0] = *(_QWORD *)v27[0] & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v16 == v27[1] )
        {
          v27[0] = 0LL;
          v27[1] = v27;
        }
        else
        {
          *(_QWORD *)v27[1] = *(_QWORD *)v27[1] & 7LL | (8LL * (*(_QWORD *)v27[1] >> 3) - 8);
        }
      }
      memset((void *)(a4 + 40), 0, 0x30uLL);
      *(_QWORD *)(a4 + 72) = v15;
      *(_QWORD *)(a4 + 80) = a2 + 464;
      PriorityThread = KeQueryPriorityThread(CurrentThread);
      SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueInsert(a2 + 464, a4 + 40, PriorityThread);
    }
    else
    {
LABEL_13:
      if ( (_QWORD *)v27[1] != v27 )
      {
        v18 = v27[0];
        v27[0] = *(_QWORD *)v27[0] & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v18 == v27[1] )
        {
          v27[0] = 0LL;
          v27[1] = v27;
        }
        else
        {
          *(_QWORD *)v27[1] = *(_QWORD *)v27[1] & 7LL | (8LL * (*(_QWORD *)v27[1] >> 3) - 8);
        }
      }
      v19 = (_QWORD *)SmKmStoreRefFromStoreIndex(a2, a3 & 0x3FF);
      SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(*v19, v20, 0LL);
    }
    v21 = 0LL;
    v27[2] = 0LL;
    v11 = 0;
  }
  if ( v21 )
    SmFpFree(a2 + 1536, 5LL, -1LL, v21);
  while ( (_QWORD *)v27[1] != v27 )
  {
    v22 = v27[0];
    v27[0] = *(_QWORD *)v27[0] & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v22 == v27[1] )
    {
      v27[0] = 0LL;
      v27[1] = v27;
    }
    else
    {
      *(_QWORD *)v27[1] = *(_QWORD *)v27[1] & 7LL | (8LL * (*(_QWORD *)v27[1] >> 3) - 8);
    }
    SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(a2, v22, -1LL);
  }
  return (unsigned int)v11;
}
