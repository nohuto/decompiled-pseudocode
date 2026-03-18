/*
 * XREFs of ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140269B90
 * Callers:
 *     ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140264D20 (-SmAsyncReadQueueWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x140267348 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmStoreRequestEx@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x140269FAC (-SmStoreRequestEx@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_SM.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14026D914 (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1402710C4 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140275A00 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140275AE0 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 *     KeQueryPriorityThread @ 0x140100BB0 (KeQueryPriorityThread.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x1402682C4 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(__int64 a1, __int64 a2, char a3)
{
  int v4; // ebp
  unsigned __int64 v7; // rbx
  int v8; // r13d
  int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 i; // rax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v16; // rax
  KPRIORITY v17; // ebx
  KPRIORITY PriorityThread; // eax
  __int64 v19; // rdi
  _SINGLE_LIST_ENTRY *v20; // r8
  __int64 v21; // r9
  KIRQL v22; // [rsp+50h] [rbp+8h]

  v4 = *(_DWORD *)a2 & 7;
  if ( v4 == 2 && (*(_BYTE *)(a1 + 6021) & 4) != 0 )
  {
    if ( !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStDirectRead(a1, (__int128 *)a2) )
    {
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 6544));
      *(_QWORD *)a2 = *(_DWORD *)a2 & 7 | ((**(_QWORD **)(a1 + 6536) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
      **(_QWORD **)(a1 + 6536) = a2 | **(_DWORD **)(a1 + 6536) & 7;
      *(_QWORD *)(a1 + 6536) = a2;
      KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 6544));
      __writecr8(v7);
      KeSetEvent((PRKEVENT)(a1 + 6504), 0, 0);
    }
    return;
  }
  if ( (*(_BYTE *)(a1 + 6021) & 1) != 0 )
    return;
  v8 = a3 & 4;
  if ( (a3 & 4) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 6716));
  v9 = a3 & 1;
  if ( (a3 & 1) != 0 )
  {
    v10 = 6080LL;
LABEL_14:
    v11 = 6100LL;
    goto LABEL_15;
  }
  if ( v4 != 2 || (*(_DWORD *)(a2 + 8) & 0x1000000) != 0 )
  {
    v10 = 6064LL;
    goto LABEL_14;
  }
  v10 = 6048LL;
  v11 = 6096LL;
LABEL_15:
  v12 = v10 + a1;
  v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 6040));
  if ( (a3 & 2) != 0 )
  {
    v13 = **(_QWORD **)(v12 + 8) >> 3;
    *(_QWORD *)a2 = *(_QWORD *)v12 | *(_DWORD *)a2 & 7;
    *(_QWORD *)v12 = a2;
    if ( *(_QWORD *)(v12 + 8) == v12 )
      *(_QWORD *)(v12 + 8) = a2;
    **(_QWORD **)(v12 + 8) = **(_DWORD **)(v12 + 8) & 7 | (unsigned __int64)(8 * (v13 + 1));
  }
  else
  {
    *(_QWORD *)a2 = *(_DWORD *)a2 & 7 | ((**(_QWORD **)(v12 + 8) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
    **(_QWORD **)(v12 + 8) = a2 | **(_DWORD **)(v12 + 8) & 7;
    *(_QWORD *)(v12 + 8) = a2;
  }
  if ( !*(_DWORD *)(a1 + 6100) && !*(_DWORD *)(a1 + 6096) )
    *(_QWORD *)(a1 + 6112) = MEMORY[0xFFFFF78000000320];
  ++*(_DWORD *)(v11 + a1);
  if ( v4 == 2 && *(_BYTE *)(a1 + 6020) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 3952) + 16LL);
          *(_DWORD *)i < (unsigned __int8)*(_DWORD *)(a2 + 8) << 12;
          i += 32LL )
    {
      ;
    }
    *(_WORD *)(i + 4) = 0;
    *(_QWORD *)(a1 + 6120) += *(_QWORD *)(i + 8);
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 6040));
  __writecr8(v22);
  CurrentThread = KeGetCurrentThread();
  if ( !v8 )
  {
    v16 = *(unsigned __int8 *)(a1 + 6022);
    if ( (_DWORD)v16 == 4 )
      v17 = *(_DWORD *)(a1 + 6712);
    else
      v17 = `SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition[v16];
    if ( v9 )
    {
      PriorityThread = 12;
    }
    else if ( v4 != 2 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    {
      PriorityThread = v17;
    }
    else
    {
      PriorityThread = KeQueryPriorityThread(CurrentThread);
    }
    v19 = *(_QWORD *)(a1 + 6200);
    if ( PriorityThread > v17 )
      v17 = PriorityThread;
    if ( v17 > KeQueryPriorityThread(*(PKTHREAD *)(a1 + 6200)) )
      KeSetActualBasePriorityThread(v19, v17, v20, v21);
    KeSetEvent((PRKEVENT)(a1 + 6128), 0, 0);
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 6716));
  }
}
