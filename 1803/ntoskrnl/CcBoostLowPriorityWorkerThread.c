/*
 * XREFs of CcBoostLowPriorityWorkerThread @ 0x14009B00C
 * Callers:
 *     CcFlushCachePriv @ 0x1400DEE80 (CcFlushCachePriv.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1400E3DD0 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     IoBoostThreadIoPriority @ 0x140089520 (IoBoostThreadIoPriority.c)
 *     CcUpdateSharedCacheMapFlag @ 0x14009AF9C (CcUpdateSharedCacheMapFlag.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeSetPriorityThread @ 0x1400EA760 (KeSetPriorityThread.c)
 *     PsBoostThreadIo @ 0x1400FE2B0 (PsBoostThreadIo.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     PsGetIoPriorityThread @ 0x1401281D0 (PsGetIoPriorityThread.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

$005F0E83B22994B61E86C72E0CE43C71 *__fastcall CcBoostLowPriorityWorkerThread(__int64 a1, __int64 a2)
{
  ULONG_PTR v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v10; // bp
  unsigned int v11; // r8d
  bool v12; // zf
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  _KLOCK_ENTRY *v16; // rdi
  __int64 v17; // rdx
  $005F0E83B22994B61E86C72E0CE43C71 *result; // rax
  KSPIN_LOCK *v19; // r10
  __int64 v20; // rax
  int v21; // [rsp+58h] [rbp+10h] BYREF
  int v22; // [rsp+60h] [rbp+18h]

  if ( a2 && !*(_DWORD *)(a2 + 4) )
    KeBugCheckEx(0x34u, 0x50BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = a1 + 888;
  ExAcquirePushLockExclusiveEx(a1 + 888, 0LL);
  if ( *(_QWORD *)(a1 + 864)
    && (int)PsGetIoPriorityThread(KeGetCurrentThread()) > 0
    && (!a2 || a2 == *(_QWORD *)(a1 + 872)) )
  {
    IoBoostThreadIoPriority(v19, 2, 0);
    *(_DWORD *)(a1 + 880) = KeSetPriorityThread(*(PKTHREAD *)(a1 + 864), 13);
    v20 = *(_QWORD *)(a1 + 872);
    if ( !*(_DWORD *)(v20 + 4) )
      KeBugCheckEx(0x34u, 0x538uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (*(_DWORD *)(v20 + 152) & 0x20000000) == 0 )
    {
      PsBoostThreadIo(*(_QWORD *)(a1 + 864), 0LL);
      CcUpdateSharedCacheMapFlag(*(_QWORD *)(a1 + 872), 0x20000000, 1);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4, v5, v6, v7);
  v21 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v10 = ++CurrentThread->AbAllocationRegionCount;
  v11 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v12 = !_BitScanReverse((unsigned int *)&v13, v11);
    v22 = v13;
    if ( v12 )
      break;
    v14 = 1 << v13;
    v15 = v13;
    v16 = &CurrentThread->LockEntries[v15];
    v11 &= ~v14;
    if ( (v16->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v16->LockState.0 & 1) == 0
      && (*(_QWORD *)&v16->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
      && v16->LockState.SessionId == SessionId )
    {
      v16->AcquiredByte &= ~1u;
      if ( v16->LockState.0 )
      {
        if ( v16 )
        {
          v16->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v16->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v15].TreeNode);
          v21 = 0;
          v21 = v16->BoostBitmap.AllFields & 0x1FFFF;
          v16->BoostBitmap.AllFields &= 0xFFFE0000;
          v16->ThreadLocalFlags &= ~1u;
          v16->LockState.0 = 0LL;
          v17 = ((char *)v16 - (char *)CurrentThread - 800) / 96;
          if ( v10 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v17;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v17);
          goto LABEL_20;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v4, SessionId, 0LL);
LABEL_20:
  --CurrentThread->AbAllocationRegionCount;
  result = ($005F0E83B22994B61E86C72E0CE43C71 *)KiAbThreadRemoveBoosts(CurrentThread, v4, &v21);
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 )
  {
    result = &CurrentThread->152;
    if ( ($005F0E83B22994B61E86C72E0CE43C71 *)result->ApcState.ApcListHead[0].Flink != result )
      return ($005F0E83B22994B61E86C72E0CE43C71 *)KiCheckForKernelApcDelivery();
  }
  return result;
}
