/*
 * XREFs of ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140053EC8
 * Callers:
 *     ?SmStWorkerThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011F8D0 (-SmStWorkerThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14001FDF0 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x14003A9C4 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14005327C (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x140054744 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140054934 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1400549C8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     IoSetThreadHardErrorMode @ 0x140085310 (IoSetThreadHardErrorMode.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1400E8C50 (KeWaitForMultipleObjects.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     SmSetThreadPagePriority @ 0x140121D78 (SmSetThreadPagePriority.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14024D04C (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStWorker(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // r13d
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // edi
  struct _KTHREAD *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  bool v10; // zf
  __int64 v11; // rcx
  __int64 v12; // rsi
  unsigned int v13; // r8d
  __int64 v14; // rdx
  __int16 v15; // ax
  __int64 v16; // rcx
  _SLIST_ENTRY *v17; // r15
  unsigned __int64 v18; // rdx
  NTSTATUS v19; // eax
  NTSTATUS v20; // ecx
  __int64 v21; // rax
  struct _KTHREAD *v22; // rdi
  __int64 SessionId; // rdx
  unsigned __int8 v24; // r12
  struct _KTHREAD *v25; // rdi
  __int64 v26; // rdx
  unsigned __int8 v27; // r15
  unsigned int v28; // r8d
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  _KLOCK_ENTRY *v32; // rsi
  __int64 v33; // rdx
  __int16 v34; // ax
  __int64 v35; // r10
  __int64 result; // rax
  __int64 v37; // rcx
  unsigned __int64 UnbiasedInterruptTime; // rax
  struct _KTHREAD *v39; // rdi
  __int64 v40; // rdx
  unsigned __int8 v41; // r15
  unsigned int v42; // r8d
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rcx
  _KLOCK_ENTRY *v46; // rsi
  __int64 v47; // rdx
  __int16 v48; // ax
  int v49; // [rsp+40h] [rbp-38h] BYREF
  int v50; // [rsp+44h] [rbp-34h]
  int v51; // [rsp+48h] [rbp-30h]
  int v52; // [rsp+4Ch] [rbp-2Ch]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-28h] BYREF
  LARGE_INTEGER Interval; // [rsp+58h] [rbp-20h] BYREF
  PVOID Object[3]; // [rsp+60h] [rbp-18h] BYREF
  NTSTATUS v56; // [rsp+C0h] [rbp+48h] BYREF
  int v57; // [rsp+C8h] [rbp+50h] BYREF
  int v58; // [rsp+D0h] [rbp+58h] BYREF
  int v59; // [rsp+D8h] [rbp+60h] BYREF

  v1 = *(_QWORD *)a1;
  v3 = 0;
  IoSetThreadHardErrorMode(0);
  CurrentThread = KeGetCurrentThread();
  v4 = *(unsigned __int8 *)(v1 + 5990);
  if ( (_DWORD)v4 == 4 )
    v5 = *(unsigned int *)(v1 + 6680);
  else
    v5 = (unsigned int)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition[v4];
  KeSetActualBasePriorityThread(CurrentThread, v5);
  v6 = 0;
  if ( (*(_BYTE *)(v1 + 5989) & 4) != 0 )
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
    Object[0] = (PVOID)(v1 + 6096);
    Object[1] = (PVOID)(v1 + 6120);
LABEL_26:
    v18 = v1 + 6552;
    while ( 1 )
    {
      while ( 1 )
      {
        v19 = KeWaitForMultipleObjects(
                2u,
                Object,
                WaitAny,
                Executive,
                0,
                0,
                (PLARGE_INTEGER)(v18 & -(__int64)(*(_QWORD *)v18 != 0LL)),
                0LL);
        v56 = v19;
        v20 = v19;
        if ( v19 >= 2 )
          break;
LABEL_28:
        if ( v20 )
        {
          if ( v20 == 1 )
            goto LABEL_64;
          v18 = v1 + 6552;
        }
        else
        {
          KeResetEvent((PRKEVENT)Object[0]);
          v21 = SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, &v49);
          v18 = v1 + 6552;
          v17 = (_SLIST_ENTRY *)v21;
          if ( v21 )
          {
            while ( 1 )
            {
              SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1);
              LOBYTE(v16) = *(_BYTE *)(v1 + 5989);
              if ( (v16 & 1) == 0 || v49 )
              {
                if ( (v16 & 2) != 0 && ((__int64)v17->Next & 7) == 0 )
                {
                  v56 = -1073741058;
LABEL_33:
                  if ( (*(_BYTE *)(v1 + 5989) & 4) != 0 )
                  {
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 5992), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock(v1 + 5992);
                    v58 = 0;
                    v22 = KeGetCurrentThread();
                    if ( (unsigned int)MiGetSystemRegionType(v1 + 5992) == 1 )
                      SessionId = (unsigned int)MmGetSessionIdEx(v22->ApcState.Process);
                    else
                      SessionId = 0xFFFFFFFFLL;
                    --v22->SpecialApcDisable;
                    v24 = ++v22->AbAllocationRegionCount;
                    v13 = ((char)v22->AbEntrySummary | (char)v22->AbOrphanedEntrySummary) ^ 0x3F;
                    while ( 1 )
                    {
                      v10 = !_BitScanReverse((unsigned int *)&v11, v13);
                      v51 = v11;
                      if ( v10 )
                        break;
                      v12 = (__int64)&v22->LockEntries[v11];
                      v13 &= ~(1 << v11);
                      if ( (*(_BYTE *)(v12 + 26) & 1) != 0
                        && (*(_DWORD *)(v12 + 32) & 1) == 0
                        && (*(_QWORD *)(v12 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 5992) & 0x7FFFFFFFFFFFFFFCLL)
                        && *(_DWORD *)(v12 + 40) == (_DWORD)SessionId )
                      {
                        *(_BYTE *)(v12 + 26) &= ~1u;
                        if ( *(_QWORD *)(v12 + 32) )
                        {
                          if ( v12 )
                          {
                            *(_BYTE *)(v12 + 32) |= 2u;
                            if ( *(__int64 *)(v12 + 32) < 0 )
                              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v12, SessionId);
                            v58 = 0;
                            v58 = *(_DWORD *)(v12 + 88) & 0x1FFFF;
                            *(_DWORD *)(v12 + 88) &= 0xFFFE0000;
                            *(_BYTE *)(v12 + 25) &= ~1u;
                            *(_QWORD *)(v12 + 32) = 0LL;
                            v14 = (v12 - (__int64)v22 - 800) / 96;
                            if ( v24 == 1 )
                              v22->AbEntrySummary |= 1 << v14;
                            else
                              _InterlockedOr8((volatile signed __int8 *)&v22->AbOrphanedEntrySummary, 1 << v14);
                            goto LABEL_20;
                          }
                          break;
                        }
                      }
                    }
                    if ( (*((_DWORD *)&v22->0 + 1) & 0x8000) == 0 )
                      KeBugCheckEx(0x162u, (ULONG_PTR)v22, v1 + 5992, (unsigned int)SessionId, 0LL);
LABEL_20:
                    --v22->AbAllocationRegionCount;
                    KiAbThreadRemoveBoosts(v22, v1 + 5992, &v58);
                    v15 = v22->SpecialApcDisable + 1;
                    v22->SpecialApcDisable = v15;
                    if ( !v15 && ($69CD3F157F9F39B6F7113F2231989901 *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
                      KiCheckForKernelApcDelivery();
                    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
                  }
                  SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(v16, v1, v17, (unsigned int *)&v56);
                  goto LABEL_25;
                }
                v56 = ST_STORE<SM_TRAITS>::StWorkItemProcess(v1, v17);
                if ( v56 != 259 )
                  goto LABEL_33;
              }
              else
              {
                v56 = -1073741058;
                ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(v1, v17);
              }
              if ( (*(_BYTE *)(v1 + 5989) & 4) != 0 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 5992), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v1 + 5992);
                v59 = 0;
                v25 = KeGetCurrentThread();
                if ( (unsigned int)MiGetSystemRegionType(v1 + 5992) == 1 )
                  v26 = (unsigned int)MmGetSessionIdEx(v25->ApcState.Process);
                else
                  v26 = 0xFFFFFFFFLL;
                --v25->SpecialApcDisable;
                v27 = ++v25->AbAllocationRegionCount;
                v28 = ((char)v25->AbEntrySummary | (char)v25->AbOrphanedEntrySummary) ^ 0x3F;
                while ( 1 )
                {
                  v10 = !_BitScanReverse((unsigned int *)&v29, v28);
                  v52 = v29;
                  if ( v10 )
                    break;
                  v30 = 1 << v29;
                  v31 = v29;
                  v32 = &v25->LockEntries[v31];
                  v28 &= ~v30;
                  if ( (v32->AcquiredByte & 1) != 0
                    && (*(_DWORD *)&v32->LockState.0 & 1) == 0
                    && (*(_QWORD *)&v32->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 5992) & 0x7FFFFFFFFFFFFFFCLL)
                    && v32->LockState.SessionId == (_DWORD)v26 )
                  {
                    v32->AcquiredByte &= ~1u;
                    if ( v32->LockState.0 )
                    {
                      if ( v32 )
                      {
                        v32->CrossThreadReleasableAndBusyByte |= 2u;
                        if ( (__int64)v32->LockState.LockState < 0 )
                          KiAbEntryRemoveFromTree(&v25->LockEntries[v31].TreeNode, v26);
                        v59 = 0;
                        v59 = v32->BoostBitmap.AllFields & 0x1FFFF;
                        v32->BoostBitmap.AllFields &= 0xFFFE0000;
                        v32->ThreadLocalFlags &= ~1u;
                        v32->LockState.0 = 0LL;
                        v33 = ((char *)v32 - (char *)v25 - 800) / 96;
                        if ( v27 == 1 )
                          v25->AbEntrySummary |= 1 << v33;
                        else
                          _InterlockedOr8((volatile signed __int8 *)&v25->AbOrphanedEntrySummary, 1 << v33);
                        goto LABEL_57;
                      }
                      break;
                    }
                  }
                }
                if ( (*((_DWORD *)&v25->0 + 1) & 0x8000) == 0 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)v25, v1 + 5992, (unsigned int)v26, 0LL);
LABEL_57:
                --v25->AbAllocationRegionCount;
                KiAbThreadRemoveBoosts(v25, v1 + 5992, &v59);
                v34 = v25->SpecialApcDisable + 1;
                v25->SpecialApcDisable = v34;
                if ( !v34 && ($69CD3F157F9F39B6F7113F2231989901 *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
                  KiCheckForKernelApcDelivery();
                KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
              }
LABEL_25:
              v17 = (_SLIST_ENTRY *)SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, &v49);
              if ( !v17 )
                goto LABEL_26;
            }
          }
        }
      }
      v18 = v1 + 6552;
      if ( v19 == 258 )
      {
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1);
        ST_STORE<SM_TRAITS>::StDrainReadContextList((_SLIST_HEADER *)v1);
        LOBYTE(v37) = 1;
        *(_QWORD *)(v1 + 5896) += *(_QWORD *)(v1 + 5888);
        UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(v37);
        ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(v1 + 5712, UnbiasedInterruptTime);
        if ( (*(_BYTE *)(v1 + 5989) & 4) != 0 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 5992), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v1 + 5992);
          v57 = 0;
          v39 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v1 + 5992) == 1 )
            v40 = (unsigned int)MmGetSessionIdEx(v39->ApcState.Process);
          else
            v40 = 0xFFFFFFFFLL;
          --v39->SpecialApcDisable;
          v41 = ++v39->AbAllocationRegionCount;
          v42 = ((char)v39->AbEntrySummary | (char)v39->AbOrphanedEntrySummary) ^ 0x3F;
          v10 = !_BitScanReverse((unsigned int *)&v43, v42);
          v50 = v43;
          if ( v10 )
            goto LABEL_97;
          while ( 1 )
          {
            v44 = 1 << v43;
            v45 = v43;
            v46 = &v39->LockEntries[v45];
            v42 &= ~v44;
            if ( (v46->AcquiredByte & 1) != 0
              && (*(_DWORD *)&v46->LockState.0 & 1) == 0
              && (*(_QWORD *)&v46->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 5992) & 0x7FFFFFFFFFFFFFFCLL)
              && v46->LockState.SessionId == (_DWORD)v40 )
            {
              v46->AcquiredByte &= ~1u;
              if ( v46->LockState.0 )
                break;
            }
            v10 = !_BitScanReverse((unsigned int *)&v43, v42);
            v50 = v43;
            if ( v10 )
              goto LABEL_97;
          }
          if ( !v46 )
          {
LABEL_97:
            if ( (*((_DWORD *)&v39->0 + 1) & 0x8000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v39, v1 + 5992, (unsigned int)v40, 0LL);
          }
          else
          {
            v46->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v46->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v39->LockEntries[v45].TreeNode, v40);
            v57 = 0;
            v57 = v46->BoostBitmap.AllFields & 0x1FFFF;
            v46->BoostBitmap.AllFields &= 0xFFFE0000;
            v46->ThreadLocalFlags &= ~1u;
            v46->LockState.0 = 0LL;
            v47 = ((char *)v46 - (char *)v39 - 800) / 96;
            if ( v41 == 1 )
              v39->AbEntrySummary |= 1 << v47;
            else
              _InterlockedOr8((volatile signed __int8 *)&v39->AbOrphanedEntrySummary, 1 << v47);
          }
          --v39->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts(v39, v1 + 5992, &v57);
          v48 = v39->SpecialApcDisable + 1;
          v39->SpecialApcDisable = v48;
          if ( !v48 && ($69CD3F157F9F39B6F7113F2231989901 *)v39->ApcState.ApcListHead[0].Flink != &v39->152 )
            KiCheckForKernelApcDelivery();
          KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        }
        v20 = 0;
        goto LABEL_28;
      }
    }
  }
LABEL_64:
  if ( v3 )
  {
    MiReturnResidentAvailable(26LL, v8, v9);
    *(_BYTE *)(v35 + 1744) &= ~4u;
    KiLeaveGuardedRegionUnsafe(v35);
  }
  Interval.QuadPart = -150000LL;
  while ( 1 )
  {
    result = *(unsigned int *)(v1 + 6684);
    if ( !(_DWORD)result )
      break;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}
