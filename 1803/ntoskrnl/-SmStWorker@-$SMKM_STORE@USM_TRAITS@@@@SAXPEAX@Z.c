/*
 * XREFs of ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400906FC
 * Callers:
 *     ?SmStWorkerThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140099370 (-SmStWorkerThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     IoSetThreadHardErrorMode @ 0x14006CE40 (IoSetThreadHardErrorMode.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14008FC80 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x140090F90 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140091184 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140091218 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmSetThreadPagePriority @ 0x14009725C (SmSetThreadPagePriority.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14009AD0C (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x1400B7CA4 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1400FF3A0 (KeWaitForMultipleObjects.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402A6454 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStWorker(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // r12d
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // ebx
  struct _KTHREAD *v8; // rbx
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rcx
  _SLIST_ENTRY *v17; // r15
  NTSTATUS v18; // eax
  NTSTATUS v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // eax
  struct _KTHREAD *v25; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v27; // r13
  struct _KTHREAD *v28; // rbx
  unsigned int v29; // edx
  unsigned __int8 v30; // r15
  unsigned int v31; // r8d
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // rdx
  struct _KTHREAD *v35; // rbx
  __int64 result; // rax
  __int64 UnbiasedInterruptTime; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  struct _KTHREAD *v40; // rbx
  unsigned int v41; // edx
  unsigned __int8 v42; // r15
  unsigned int v43; // r8d
  __int64 v44; // rcx
  __int64 v45; // rsi
  __int64 v46; // rdx
  _DWORD v47[4]; // [rsp+40h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-28h] BYREF
  LARGE_INTEGER Interval; // [rsp+58h] [rbp-20h] BYREF
  PVOID Object[3]; // [rsp+60h] [rbp-18h] BYREF
  int v51; // [rsp+C0h] [rbp+48h] BYREF
  int v52; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v53; // [rsp+D0h] [rbp+58h] BYREF
  int v54; // [rsp+D8h] [rbp+60h] BYREF

  v1 = *(_QWORD *)a1;
  v3 = 0;
  IoSetThreadHardErrorMode(0);
  CurrentThread = KeGetCurrentThread();
  v4 = *(unsigned __int8 *)(v1 + 6022);
  if ( (_DWORD)v4 == 4 )
    v5 = *(unsigned int *)(v1 + 6712);
  else
    v5 = (unsigned int)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition[v4];
  KeSetActualBasePriorityThread((__int64)CurrentThread, v5);
  v6 = 0;
  v7 = 0;
  if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
  {
    SmSetThreadPagePriority(&CurrentThread, 0LL);
    v8 = KeGetCurrentThread();
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, 26LL, 1024LL) )
    {
      --v8->SpecialApcDisable;
      LOBYTE(v8[1].Queue) |= 4u;
    }
    else
    {
      v3 = -1073741670;
    }
    v6 = v3;
    v7 = v3;
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
    v3 = v3 >= 0;
  }
  *(_DWORD *)(a1 + 32) = v6;
  KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  if ( v7 >= 0 )
  {
    Object[0] = (PVOID)(v1 + 6128);
    v10 = v1 + 6584;
    Object[1] = (PVOID)(v1 + 6152);
    while ( 1 )
    {
      while ( 1 )
      {
        v18 = KeWaitForMultipleObjects(
                2u,
                Object,
                WaitAny,
                Executive,
                0,
                0,
                (PLARGE_INTEGER)(v10 & -(__int64)(*(_QWORD *)v10 != 0LL)),
                0LL);
        v53 = v18;
        v19 = v18;
        if ( v18 >= 2 )
          break;
LABEL_28:
        if ( v19 )
        {
          if ( v19 == 1 )
            goto LABEL_66;
LABEL_26:
          v10 = v1 + 6584;
        }
        else
        {
          KeResetEvent((PRKEVENT)Object[0]);
          v20 = SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, v47);
          v10 = v1 + 6584;
          v17 = (_SLIST_ENTRY *)v20;
          if ( v20 )
          {
            while ( 1 )
            {
              SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1, v10);
              LOBYTE(v16) = *(_BYTE *)(v1 + 6021);
              if ( (v16 & 1) == 0 || v47[0] )
              {
                if ( (v16 & 2) == 0 || ((__int64)v17->Next & 7) != 0 )
                  v24 = ST_STORE<SM_TRAITS>::StWorkItemProcess(v1, v17);
                else
                  v24 = -1073741058;
                v53 = v24;
                if ( v24 != 259 )
                {
                  if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
                  {
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 6024), v21, v22, v23);
                    v52 = 0;
                    v25 = KeGetCurrentThread();
                    if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
                      SessionId = MmGetSessionIdEx(v25->ApcState.Process);
                    else
                      SessionId = -1;
                    --v25->SpecialApcDisable;
                    v27 = ++v25->AbAllocationRegionCount;
                    v14 = ((char)v25->AbEntrySummary | (char)v25->AbOrphanedEntrySummary) ^ 0x3F;
                    while ( 1 )
                    {
                      v11 = !_BitScanReverse((unsigned int *)&v12, v14);
                      v47[2] = v12;
                      if ( v11 )
                        break;
                      v13 = (__int64)&v25->LockEntries[v12];
                      v14 &= ~(1 << v12);
                      if ( (*(_BYTE *)(v13 + 26) & 1) != 0
                        && (*(_DWORD *)(v13 + 32) & 1) == 0
                        && (*(_QWORD *)(v13 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
                        && *(_DWORD *)(v13 + 40) == SessionId )
                      {
                        *(_BYTE *)(v13 + 26) &= ~1u;
                        if ( *(_QWORD *)(v13 + 32) )
                        {
                          if ( v13 )
                          {
                            *(_BYTE *)(v13 + 32) |= 2u;
                            if ( *(__int64 *)(v13 + 32) < 0 )
                              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v13);
                            v52 = 0;
                            v52 = *(_DWORD *)(v13 + 88) & 0x1FFFF;
                            *(_DWORD *)(v13 + 88) &= 0xFFFE0000;
                            *(_BYTE *)(v13 + 25) &= ~1u;
                            *(_QWORD *)(v13 + 32) = 0LL;
                            v15 = (v13 - (__int64)v25 - 800) / 96;
                            if ( v27 == 1 )
                              v25->AbEntrySummary |= 1 << v15;
                            else
                              _InterlockedOr8((volatile signed __int8 *)&v25->AbOrphanedEntrySummary, 1 << v15);
                            goto LABEL_20;
                          }
                          break;
                        }
                      }
                    }
                    if ( (*((_DWORD *)&v25->0 + 1) & 0x10000) == 0 )
                      KeBugCheckEx(0x162u, (ULONG_PTR)v25, v1 + 6024, SessionId, 0LL);
LABEL_20:
                    --v25->AbAllocationRegionCount;
                    KiAbThreadRemoveBoosts(v25, v1 + 6024, &v52);
                    v11 = v25->SpecialApcDisable++ == -1;
                    if ( v11 && ($005F0E83B22994B61E86C72E0CE43C71 *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
                      KiCheckForKernelApcDelivery();
                    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
                  }
                  SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(v16, v1, v17, &v53);
                  goto LABEL_25;
                }
              }
              else
              {
                v53 = -1073741058;
                ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(v1, v17);
              }
              if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 6024), v21, v22, v23);
                v54 = 0;
                v28 = KeGetCurrentThread();
                if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
                  v29 = MmGetSessionIdEx(v28->ApcState.Process);
                else
                  v29 = -1;
                --v28->SpecialApcDisable;
                v30 = ++v28->AbAllocationRegionCount;
                v31 = ((char)v28->AbEntrySummary | (char)v28->AbOrphanedEntrySummary) ^ 0x3F;
                while ( 1 )
                {
                  v11 = !_BitScanReverse((unsigned int *)&v32, v31);
                  v47[3] = v32;
                  if ( v11 )
                    break;
                  v33 = (__int64)&v28->LockEntries[v32];
                  v31 &= ~(1 << v32);
                  if ( (*(_BYTE *)(v33 + 26) & 1) != 0
                    && (*(_DWORD *)(v33 + 32) & 1) == 0
                    && (*(_QWORD *)(v33 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
                    && *(_DWORD *)(v33 + 40) == v29 )
                  {
                    *(_BYTE *)(v33 + 26) &= ~1u;
                    if ( *(_QWORD *)(v33 + 32) )
                    {
                      if ( v33 )
                      {
                        *(_BYTE *)(v33 + 32) |= 2u;
                        if ( *(__int64 *)(v33 + 32) < 0 )
                          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v33);
                        v54 = 0;
                        v54 = *(_DWORD *)(v33 + 88) & 0x1FFFF;
                        *(_DWORD *)(v33 + 88) &= 0xFFFE0000;
                        *(_BYTE *)(v33 + 25) &= ~1u;
                        *(_QWORD *)(v33 + 32) = 0LL;
                        v34 = (v33 - (__int64)v28 - 800) / 96;
                        if ( v30 == 1 )
                          v28->AbEntrySummary |= 1 << v34;
                        else
                          _InterlockedOr8((volatile signed __int8 *)&v28->AbOrphanedEntrySummary, 1 << v34);
                        goto LABEL_61;
                      }
                      break;
                    }
                  }
                }
                if ( (*((_DWORD *)&v28->0 + 1) & 0x10000) == 0 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)v28, v1 + 6024, v29, 0LL);
LABEL_61:
                --v28->AbAllocationRegionCount;
                KiAbThreadRemoveBoosts(v28, v1 + 6024, &v54);
                v11 = v28->SpecialApcDisable++ == -1;
                if ( v11 && ($005F0E83B22994B61E86C72E0CE43C71 *)v28->ApcState.ApcListHead[0].Flink != &v28->152 )
                  KiCheckForKernelApcDelivery();
                KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
              }
LABEL_25:
              v17 = (_SLIST_ENTRY *)SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, v47);
              if ( !v17 )
                goto LABEL_26;
            }
          }
        }
      }
      v10 = v1 + 6584;
      if ( v18 == 258 )
      {
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1, v10);
        ST_STORE<SM_TRAITS>::StDrainReadContextList(v1);
        *(_QWORD *)(v1 + 5928) += *(_QWORD *)(v1 + 5920);
        UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
        ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(v1 + 5744, UnbiasedInterruptTime);
        if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 6024), v9, v38, v39);
          v51 = 0;
          v40 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
            v41 = MmGetSessionIdEx(v40->ApcState.Process);
          else
            v41 = -1;
          --v40->SpecialApcDisable;
          v42 = ++v40->AbAllocationRegionCount;
          v43 = ((char)v40->AbEntrySummary | (char)v40->AbOrphanedEntrySummary) ^ 0x3F;
          while ( 1 )
          {
            v11 = !_BitScanReverse((unsigned int *)&v44, v43);
            v47[1] = v44;
            if ( v11 )
              break;
            v45 = (__int64)&v40->LockEntries[v44];
            v43 &= ~(1 << v44);
            if ( (*(_BYTE *)(v45 + 26) & 1) != 0
              && (*(_DWORD *)(v45 + 32) & 1) == 0
              && (*(_QWORD *)(v45 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
              && *(_DWORD *)(v45 + 40) == v41 )
            {
              *(_BYTE *)(v45 + 26) &= ~1u;
              if ( *(_QWORD *)(v45 + 32) )
              {
                if ( v45 )
                {
                  *(_BYTE *)(v45 + 32) |= 2u;
                  if ( *(__int64 *)(v45 + 32) < 0 )
                    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v45);
                  v51 = 0;
                  v51 = *(_DWORD *)(v45 + 88) & 0x1FFFF;
                  *(_DWORD *)(v45 + 88) &= 0xFFFE0000;
                  *(_BYTE *)(v45 + 25) &= ~1u;
                  *(_QWORD *)(v45 + 32) = 0LL;
                  v46 = (v45 - (__int64)v40 - 800) / 96;
                  if ( v42 == 1 )
                    v40->AbEntrySummary |= 1 << v46;
                  else
                    _InterlockedOr8((volatile signed __int8 *)&v40->AbOrphanedEntrySummary, 1 << v46);
                  goto LABEL_89;
                }
                break;
              }
            }
          }
          if ( (*((_DWORD *)&v40->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v40, v1 + 6024, v41, 0LL);
LABEL_89:
          --v40->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts(v40, v1 + 6024, &v51);
          v11 = v40->SpecialApcDisable++ == -1;
          if ( v11 && ($005F0E83B22994B61E86C72E0CE43C71 *)v40->ApcState.ApcListHead[0].Flink != &v40->152 )
            KiCheckForKernelApcDelivery();
          KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        }
        v19 = 0;
        goto LABEL_28;
      }
    }
  }
LABEL_66:
  if ( v3 )
  {
    v35 = KeGetCurrentThread();
    MiReturnResidentAvailable(26LL, v9);
    LOBYTE(v35[1].Queue) &= ~4u;
    KiLeaveGuardedRegionUnsafe(v35);
  }
  Interval.QuadPart = -150000LL;
  while ( 1 )
  {
    result = *(unsigned int *)(v1 + 6716);
    if ( !(_DWORD)result )
      break;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}
