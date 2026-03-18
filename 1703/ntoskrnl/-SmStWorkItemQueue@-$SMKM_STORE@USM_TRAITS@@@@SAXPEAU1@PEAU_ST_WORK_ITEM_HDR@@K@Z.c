/*
 * XREFs of ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140053C54
 * Callers:
 *     ?SmStoreRequestEx@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x140004A78 (-SmStoreRequestEx@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_SM.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14001E63C (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x140053590 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14011FE94 (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14013A900 (-SmAsyncReadQueueWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14024F6C0 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14024F7A0 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryPriorityThread @ 0x140054910 (KeQueryPriorityThread.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x14011F8F0 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(__int64 a1, unsigned __int64 a2, char a3)
{
  _DWORD *v3; // r15
  int v4; // ebp
  __int64 v8; // rax
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v11; // rax
  KPRIORITY v12; // ebx
  KPRIORITY PriorityThread; // eax
  __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  __int64 v16; // r8
  __int64 i; // rax
  KIRQL v18; // [rsp+50h] [rbp+8h]

  v3 = (_DWORD *)(a1 + 6068);
  v4 = *(_DWORD *)a2 & 7;
  if ( v4 == 2 && (*(_BYTE *)(a1 + 5989) & 4) != 0 )
  {
    if ( !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStDirectRead() )
    {
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 6512));
      *(_QWORD *)a2 = *(_DWORD *)a2 & 7 | ((**(_QWORD **)(a1 + 6504) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
      **(_QWORD **)(a1 + 6504) = a2 | **(_DWORD **)(a1 + 6504) & 7;
      *(_QWORD *)(a1 + 6504) = a2;
      KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 6512));
      __writecr8(v15);
      KeSetEvent((PRKEVENT)(a1 + 6472), 0, 0);
    }
  }
  else if ( (*(_BYTE *)(a1 + 5989) & 1) == 0 )
  {
    if ( (a3 & 4) == 0 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 6684));
    if ( (a3 & 1) != 0 )
    {
      v8 = 6048LL;
    }
    else if ( v4 != 2 || (*(_DWORD *)(a2 + 8) & 0x1000000) != 0 )
    {
      v8 = 6032LL;
    }
    else
    {
      v3 = (_DWORD *)(a1 + 6064);
      v8 = 6016LL;
    }
    v9 = v8 + a1;
    v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 6008));
    if ( (a3 & 2) != 0 )
    {
      v16 = **(_QWORD **)(v9 + 8) >> 3;
      *(_QWORD *)a2 = *(_QWORD *)v9 | *(_DWORD *)a2 & 7;
      *(_QWORD *)v9 = a2;
      if ( *(_QWORD *)(v9 + 8) == v9 )
        *(_QWORD *)(v9 + 8) = a2;
      **(_QWORD **)(v9 + 8) = **(_DWORD **)(v9 + 8) & 7 | (unsigned __int64)(8 * (v16 + 1));
    }
    else
    {
      *(_QWORD *)a2 = *(_DWORD *)a2 & 7 | ((**(_QWORD **)(v9 + 8) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
      **(_QWORD **)(v9 + 8) = a2 | **(_DWORD **)(v9 + 8) & 7;
      *(_QWORD *)(v9 + 8) = a2;
    }
    if ( !*(_DWORD *)(a1 + 6068) && !*(_DWORD *)(a1 + 6064) )
      *(_QWORD *)(a1 + 6080) = MEMORY[0xFFFFF78000000320];
    ++*v3;
    if ( v4 == 2 && *(_BYTE *)(a1 + 5988) )
    {
      for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 3920) + 16LL);
            *(_DWORD *)i < (unsigned __int8)*(_DWORD *)(a2 + 8) << 12;
            i += 32LL )
      {
        ;
      }
      *(_WORD *)(i + 4) = 0;
      *(_QWORD *)(a1 + 6088) += *(_QWORD *)(i + 8);
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 6008));
    __writecr8(v18);
    CurrentThread = KeGetCurrentThread();
    if ( (a3 & 4) == 0 )
    {
      v11 = *(unsigned __int8 *)(a1 + 5990);
      if ( (_DWORD)v11 == 4 )
        v12 = *(_DWORD *)(a1 + 6680);
      else
        v12 = `SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition[v11];
      if ( (a3 & 1) != 0 )
      {
        PriorityThread = 12;
      }
      else if ( v4 != 2 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      {
        PriorityThread = v12;
      }
      else
      {
        PriorityThread = KeQueryPriorityThread(CurrentThread);
      }
      v14 = *(_QWORD *)(a1 + 6168);
      if ( PriorityThread > v12 )
        v12 = PriorityThread;
      if ( v12 > KeQueryPriorityThread(*(PKTHREAD *)(a1 + 6168)) )
        KeSetActualBasePriorityThread(v14, (unsigned int)v12);
      KeSetEvent((PRKEVENT)(a1 + 6096), 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 6684));
    }
  }
}
