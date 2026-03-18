/*
 * XREFs of ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140090488
 * Callers:
 *     ?SmStoreRequestEx@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1400836E8 (-SmStoreRequestEx@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_SM.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14008FFAC (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14009A440 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140150E94 (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1401531E0 (-SmAsyncReadQueueWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1402A8C70 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x1402A8D50 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryPriorityThread @ 0x140091160 (KeQueryPriorityThread.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x1401538A0 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(__int64 a1, unsigned __int64 a2, char a3)
{
  int v4; // ebp
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 *v9; // rdi
  KIRQL v10; // al
  _QWORD *v11; // rcx
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v13; // rax
  KPRIORITY v14; // ebx
  KPRIORITY PriorityThread; // eax
  __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  __int64 v18; // r8
  unsigned __int64 *v19; // rdx
  __int64 i; // rax
  KIRQL v21; // [rsp+50h] [rbp+8h]

  v4 = *(_DWORD *)a2 & 7;
  if ( v4 == 2 && (*(_BYTE *)(a1 + 6021) & 4) != 0 )
  {
    if ( !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStDirectRead() )
    {
      v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 6544));
      *(_QWORD *)a2 = *(_DWORD *)a2 & 7 | ((**(_QWORD **)(a1 + 6536) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
      **(_QWORD **)(a1 + 6536) = a2 | **(_DWORD **)(a1 + 6536) & 7;
      *(_QWORD *)(a1 + 6536) = a2;
      KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 6544));
      __writecr8(v17);
      KeSetEvent((PRKEVENT)(a1 + 6504), 0, 0);
    }
    return;
  }
  if ( (*(_BYTE *)(a1 + 6021) & 1) != 0 )
    return;
  if ( (a3 & 4) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 6716));
  if ( (a3 & 1) != 0 )
  {
    v7 = 6080LL;
  }
  else
  {
    if ( v4 == 2 && (*(_DWORD *)(a2 + 8) & 0x1000000) == 0 )
    {
      v7 = 6048LL;
      v8 = 6096LL;
      goto LABEL_9;
    }
    v7 = 6064LL;
  }
  v8 = 6100LL;
LABEL_9:
  v9 = (unsigned __int64 *)(v7 + a1);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 6040));
  v11 = (_QWORD *)v9[1];
  v21 = v10;
  if ( (a3 & 2) != 0 )
  {
    v18 = *v11 >> 3;
    *(_QWORD *)a2 = *v9 | *(_DWORD *)a2 & 7;
    v19 = (unsigned __int64 *)v9[1];
    *v9 = a2;
    if ( v19 == v9 )
    {
      v9[1] = a2;
      v19 = (unsigned __int64 *)a2;
    }
    *v19 = *(_DWORD *)v19 & 7 | (unsigned __int64)(8 * (v18 + 1));
  }
  else
  {
    *(_QWORD *)a2 = *(_DWORD *)a2 & 7 | ((*v11 & 0xFFFFFFFFFFFFFFF8uLL) + 8);
    *(_QWORD *)v9[1] = a2 | *(_DWORD *)v9[1] & 7;
    v9[1] = a2;
  }
  if ( !*(_DWORD *)(a1 + 6100) && !*(_DWORD *)(a1 + 6096) )
    *(_QWORD *)(a1 + 6112) = MEMORY[0xFFFFF78000000320];
  ++*(_DWORD *)(a1 + v8);
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
  __writecr8(v21);
  CurrentThread = KeGetCurrentThread();
  if ( (a3 & 4) == 0 )
  {
    v13 = *(unsigned __int8 *)(a1 + 6022);
    if ( (_DWORD)v13 == 4 )
      v14 = *(_DWORD *)(a1 + 6712);
    else
      v14 = `SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition[v13];
    if ( (a3 & 1) != 0 )
    {
      PriorityThread = 12;
    }
    else if ( v4 != 2 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    {
      PriorityThread = v14;
    }
    else
    {
      PriorityThread = KeQueryPriorityThread(CurrentThread);
    }
    v16 = *(_QWORD *)(a1 + 6200);
    if ( PriorityThread > v14 )
      v14 = PriorityThread;
    if ( v14 > KeQueryPriorityThread(*(PKTHREAD *)(a1 + 6200)) )
      KeSetActualBasePriorityThread(v16, (unsigned int)v14);
    KeSetEvent((PRKEVENT)(a1 + 6128), 0, 0);
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 6716));
  }
}
