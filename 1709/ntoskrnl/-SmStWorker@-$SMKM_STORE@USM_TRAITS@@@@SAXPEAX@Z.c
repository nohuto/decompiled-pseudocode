/*
 * XREFs of ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14000B530
 * Callers:
 *     ?SmStWorkerThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14000B510 (-SmStWorkerThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140006EBC (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140006F34 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmSetThreadPagePriority @ 0x14000B6CC (SmSetThreadPagePriority.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KeWaitForMultipleObjects @ 0x14006B570 (KeWaitForMultipleObjects.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     IoSetThreadHardErrorMode @ 0x1400AE650 (IoSetThreadHardErrorMode.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x14026992C (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x140270400 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140271290 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402713C4 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x140275864 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStWorker(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // r13d
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // edi
  struct _KTHREAD *v7; // rdi
  unsigned __int64 v8; // rdx
  NTSTATUS v9; // eax
  NTSTATUS v10; // ecx
  __int64 v11; // r10
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 UnbiasedInterruptTime; // rax
  struct _KTHREAD *v15; // rdi
  unsigned int v16; // edx
  unsigned __int8 v17; // r15
  unsigned int v18; // r8d
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rax
  _DWORD *v24; // r15
  __int64 v25; // rcx
  struct _KTHREAD *v26; // rdi
  unsigned int v27; // edx
  struct _KTHREAD *v28; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v30; // r12
  unsigned int v31; // r8d
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // rdx
  unsigned __int8 v35; // r15
  unsigned int v36; // r8d
  __int64 v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // rdx
  _DWORD v40[4]; // [rsp+40h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-28h] BYREF
  LARGE_INTEGER Interval; // [rsp+58h] [rbp-20h] BYREF
  PVOID Object[3]; // [rsp+60h] [rbp-18h] BYREF
  int v44; // [rsp+C0h] [rbp+48h] BYREF
  int v45; // [rsp+C8h] [rbp+50h] BYREF
  int v46; // [rsp+D0h] [rbp+58h] BYREF
  int v47; // [rsp+D8h] [rbp+60h] BYREF

  v1 = *(_QWORD *)a1;
  v3 = 0;
  IoSetThreadHardErrorMode(0);
  CurrentThread = KeGetCurrentThread();
  v4 = *(unsigned __int8 *)(v1 + 6022);
  if ( (_DWORD)v4 == 4 )
    v5 = *(unsigned int *)(v1 + 6712);
  else
    v5 = (unsigned int)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition[v4];
  KeSetActualBasePriorityThread(CurrentThread, v5);
  v6 = 0;
  if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
  {
    SmSetThreadPagePriority(&CurrentThread, 0LL);
    v7 = KeGetCurrentThread();
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, 26LL, 1024LL) )
    {
      --v7->SpecialApcDisable;
      LOBYTE(v7[1].Queue) |= 4u;
      v3 = 1;
      v6 = 0;
    }
    else
    {
      v6 = -1073741670;
    }
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  }
  *(_DWORD *)(a1 + 32) = v6;
  KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  if ( v6 >= 0 )
  {
    Object[0] = (PVOID)(v1 + 6128);
    v8 = v1 + 6584;
    Object[1] = (PVOID)(v1 + 6152);
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = KeWaitForMultipleObjects(
               2u,
               Object,
               WaitAny,
               Executive,
               0,
               0,
               (PLARGE_INTEGER)(v8 & -(__int64)(*(_QWORD *)v8 != 0LL)),
               0LL);
        v44 = v9;
        v10 = v9;
        if ( v9 >= 2 )
          break;
LABEL_10:
        if ( v10 )
        {
          if ( v10 == 1 )
            goto LABEL_12;
LABEL_19:
          v8 = v1 + 6584;
        }
        else
        {
          KeResetEvent((PRKEVENT)Object[0]);
          v23 = SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, v40);
          v8 = v1 + 6584;
          v24 = (_DWORD *)v23;
          if ( v23 )
          {
            while ( 1 )
            {
              SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1);
              LOBYTE(v25) = *(_BYTE *)(v1 + 6021);
              if ( (v25 & 1) == 0 || v40[0] )
              {
                if ( (v25 & 2) != 0 && (*v24 & 7) == 0 )
                {
                  v44 = -1073741058;
LABEL_62:
                  if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
                  {
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock(v1 + 6024);
                    v46 = 0;
                    v28 = KeGetCurrentThread();
                    if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
                      SessionId = MmGetSessionIdEx(v28->ApcState.Process);
                    else
                      SessionId = -1;
                    --v28->SpecialApcDisable;
                    v30 = ++v28->AbAllocationRegionCount;
                    v31 = ((char)v28->AbEntrySummary | (char)v28->AbOrphanedEntrySummary) ^ 0x3F;
                    while ( 1 )
                    {
                      v19 = !_BitScanReverse((unsigned int *)&v32, v31);
                      v40[2] = v32;
                      if ( v19 )
                        break;
                      v33 = (__int64)&v28->LockEntries[v32];
                      v31 &= ~(1 << v32);
                      if ( (*(_BYTE *)(v33 + 26) & 1) != 0
                        && (*(_DWORD *)(v33 + 32) & 1) == 0
                        && (*(_QWORD *)(v33 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
                        && *(_DWORD *)(v33 + 40) == SessionId )
                      {
                        *(_BYTE *)(v33 + 26) &= ~1u;
                        if ( *(_QWORD *)(v33 + 32) )
                        {
                          if ( v33 )
                          {
                            *(_BYTE *)(v33 + 32) |= 2u;
                            if ( *(__int64 *)(v33 + 32) < 0 )
                              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v33);
                            v46 = 0;
                            v46 = *(_DWORD *)(v33 + 88) & 0x1FFFF;
                            *(_DWORD *)(v33 + 88) &= 0xFFFE0000;
                            *(_BYTE *)(v33 + 25) &= ~1u;
                            *(_QWORD *)(v33 + 32) = 0LL;
                            v34 = (v33 - (__int64)v28 - 800) / 96;
                            if ( v30 == 1 )
                              v28->AbEntrySummary |= 1 << v34;
                            else
                              _InterlockedOr8((volatile signed __int8 *)&v28->AbOrphanedEntrySummary, 1 << v34);
                            goto LABEL_80;
                          }
                          break;
                        }
                      }
                    }
                    if ( (*((_DWORD *)&v28->0 + 1) & 0x10000) == 0 )
                      KeBugCheckEx(0x162u, (ULONG_PTR)v28, v1 + 6024, SessionId, 0LL);
LABEL_80:
                    --v28->AbAllocationRegionCount;
                    KiAbThreadRemoveBoosts(v28, v1 + 6024, &v46);
                    v19 = v28->SpecialApcDisable++ == -1;
                    if ( v19 && ($B476B70DB57F76B110DA5B9238C3E934 *)v28->ApcState.ApcListHead[0].Flink != &v28->152 )
                      KiCheckForKernelApcDelivery();
                    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
                  }
                  SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(v25, v1, v24, &v44);
                  goto LABEL_106;
                }
                v44 = ST_STORE<SM_TRAITS>::StWorkItemProcess(v1, v24);
                if ( v44 != 259 )
                  goto LABEL_62;
              }
              else
              {
                v44 = -1073741058;
                ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(v1, v24);
              }
              if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v1 + 6024);
                v47 = 0;
                v26 = KeGetCurrentThread();
                if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
                  v27 = MmGetSessionIdEx(v26->ApcState.Process);
                else
                  v27 = -1;
                --v26->SpecialApcDisable;
                v35 = ++v26->AbAllocationRegionCount;
                v36 = ((char)v26->AbEntrySummary | (char)v26->AbOrphanedEntrySummary) ^ 0x3F;
                while ( 1 )
                {
                  v19 = !_BitScanReverse((unsigned int *)&v37, v36);
                  v40[3] = v37;
                  if ( v19 )
                    break;
                  v38 = (__int64)&v26->LockEntries[v37];
                  v36 &= ~(1 << v37);
                  if ( (*(_BYTE *)(v38 + 26) & 1) != 0
                    && (*(_DWORD *)(v38 + 32) & 1) == 0
                    && (*(_QWORD *)(v38 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
                    && *(_DWORD *)(v38 + 40) == v27 )
                  {
                    *(_BYTE *)(v38 + 26) &= ~1u;
                    if ( *(_QWORD *)(v38 + 32) )
                    {
                      if ( v38 )
                      {
                        *(_BYTE *)(v38 + 32) |= 2u;
                        if ( *(__int64 *)(v38 + 32) < 0 )
                          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v38);
                        v47 = 0;
                        v47 = *(_DWORD *)(v38 + 88) & 0x1FFFF;
                        *(_DWORD *)(v38 + 88) &= 0xFFFE0000;
                        *(_BYTE *)(v38 + 25) &= ~1u;
                        *(_QWORD *)(v38 + 32) = 0LL;
                        v39 = (v38 - (__int64)v26 - 800) / 96;
                        if ( v35 == 1 )
                          v26->AbEntrySummary |= 1 << v39;
                        else
                          _InterlockedOr8((volatile signed __int8 *)&v26->AbOrphanedEntrySummary, 1 << v39);
                        goto LABEL_102;
                      }
                      break;
                    }
                  }
                }
                if ( (*((_DWORD *)&v26->0 + 1) & 0x10000) == 0 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)v26, v1 + 6024, v27, 0LL);
LABEL_102:
                --v26->AbAllocationRegionCount;
                KiAbThreadRemoveBoosts(v26, v1 + 6024, &v47);
                v19 = v26->SpecialApcDisable++ == -1;
                if ( v19 && ($B476B70DB57F76B110DA5B9238C3E934 *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
                  KiCheckForKernelApcDelivery();
                KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
              }
LABEL_106:
              v24 = (_DWORD *)SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, v40);
              if ( !v24 )
                goto LABEL_19;
            }
          }
        }
      }
      v8 = v1 + 6584;
      if ( v9 == 258 )
      {
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1);
        ST_STORE<SM_TRAITS>::StDrainReadContextList((_SLIST_HEADER *)v1);
        LOBYTE(v13) = 1;
        *(_QWORD *)(v1 + 5928) += *(_QWORD *)(v1 + 5920);
        UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(v13);
        ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(v1 + 5744, UnbiasedInterruptTime);
        if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v1 + 6024);
          v45 = 0;
          v15 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
            v16 = MmGetSessionIdEx(v15->ApcState.Process);
          else
            v16 = -1;
          --v15->SpecialApcDisable;
          v17 = ++v15->AbAllocationRegionCount;
          v18 = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
          while ( 1 )
          {
            v19 = !_BitScanReverse((unsigned int *)&v20, v18);
            v40[1] = v20;
            if ( v19 )
              break;
            v21 = (__int64)&v15->LockEntries[v20];
            v18 &= ~(1 << v20);
            if ( (*(_BYTE *)(v21 + 26) & 1) != 0
              && (*(_DWORD *)(v21 + 32) & 1) == 0
              && (*(_QWORD *)(v21 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
              && *(_DWORD *)(v21 + 40) == v16 )
            {
              *(_BYTE *)(v21 + 26) &= ~1u;
              if ( *(_QWORD *)(v21 + 32) )
              {
                if ( v21 )
                {
                  *(_BYTE *)(v21 + 32) |= 2u;
                  if ( *(__int64 *)(v21 + 32) < 0 )
                    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v21);
                  v45 = 0;
                  v45 = *(_DWORD *)(v21 + 88) & 0x1FFFF;
                  *(_DWORD *)(v21 + 88) &= 0xFFFE0000;
                  *(_BYTE *)(v21 + 25) &= ~1u;
                  *(_QWORD *)(v21 + 32) = 0LL;
                  v22 = (v21 - (__int64)v15 - 800) / 96;
                  if ( v17 == 1 )
                    v15->AbEntrySummary |= 1 << v22;
                  else
                    _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, 1 << v22);
                  goto LABEL_40;
                }
                break;
              }
            }
          }
          if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v15, v1 + 6024, v16, 0LL);
LABEL_40:
          --v15->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts(v15, v1 + 6024, &v45);
          v19 = v15->SpecialApcDisable++ == -1;
          if ( v19 && ($B476B70DB57F76B110DA5B9238C3E934 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
            KiCheckForKernelApcDelivery();
          KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        }
        v10 = 0;
        goto LABEL_10;
      }
    }
  }
LABEL_12:
  if ( v3 )
  {
    MiReturnResidentAvailable(26LL);
    *(_BYTE *)(v11 + 1752) &= ~4u;
    KiLeaveGuardedRegionUnsafe(v11);
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
