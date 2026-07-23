/*
 * XREFs of ExpSaAllocatorFree @ 0x140151CD4
 * Callers:
 *     ExpCleanupAutoExpandPushLock @ 0x1400249DC (ExpCleanupAutoExpandPushLock.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400FE070 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     ExpSaPageGroupFreeMemory @ 0x140151FB8 (ExpSaPageGroupFreeMemory.c)
 *     ExpSaAllocatorOptimizeList @ 0x140152214 (ExpSaAllocatorOptimizeList.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpSaAllocatorFree(ULONG_PTR BugCheckParameter2, __int64 *a2, __int64 a3, unsigned int a4)
{
  char v8; // r12
  PRTL_BALANCED_NODE v9; // rbp
  int v10; // eax
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v14; // r14
  unsigned int v15; // r8d
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  _KLOCK_ENTRY *v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rcx
  PRTL_BALANCED_NODE v23; // rax
  PRTL_BALANCED_NODE v24; // rbp
  __int64 *v25; // rcx
  __int64 **v26; // rax
  __int64 **v27; // rcx
  int v28; // [rsp+78h] [rbp+10h] BYREF

  if ( *((_DWORD *)a2 + 10) == 1 )
  {
    v8 = 1;
    v23 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
    v24 = v23;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v23, BugCheckParameter2);
    if ( v24 )
      BYTE2(v24[1].Left) |= 1u;
    *((_DWORD *)a2 + 10) = 0;
    v25 = (__int64 *)*a2;
    v26 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) != a2 || *v26 != a2 )
      __fastfail(3u);
    *v26 = v25;
    v25[1] = (__int64)v26;
    v27 = *(__int64 ***)(BugCheckParameter2 + 16);
    if ( *v27 != (__int64 *)(BugCheckParameter2 + 8) )
      __fastfail(3u);
    *a2 = BugCheckParameter2 + 8;
    a2[1] = (__int64)v27;
    *v27 = a2;
    *(_QWORD *)(BugCheckParameter2 + 16) = a2;
  }
  else
  {
    v8 = 0;
    v9 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)BugCheckParameter2, v9, BugCheckParameter2);
    if ( v9 )
      BYTE2(v9[1].Left) |= 1u;
  }
  if ( (unsigned __int8)ExpSaPageGroupFreeMemory(a2, a3, a4) )
  {
    _m_prefetchw((const void *)(BugCheckParameter2 + 64));
    LOBYTE(v10) = _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 64), 2u) | 2;
  }
  else
  {
    v10 = *(_DWORD *)(BugCheckParameter2 + 64);
  }
  if ( (v10 & 2) != 0 )
  {
    if ( v8 || _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) == 17 )
      goto LABEL_16;
    v8 = 0;
  }
  if ( !v8 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
    return KeAbPostRelease(BugCheckParameter2);
  }
LABEL_16:
  ExpSaAllocatorOptimizeList(BugCheckParameter2);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  v28 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --CurrentThread->SpecialApcDisable;
  v14 = ++CurrentThread->AbAllocationRegionCount;
  v15 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( _BitScanReverse((unsigned int *)&v17, v15) )
  {
    v18 = 1 << v17;
    v19 = v17;
    v20 = &CurrentThread->LockEntries[v19];
    v15 &= ~v18;
    if ( (v20->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v20->LockState.0 & 1) == 0
      && (*(_QWORD *)&v20->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && v20->LockState.SessionId == (_DWORD)SessionId )
    {
      v20->AcquiredByte &= ~1u;
      if ( v20->LockState.0 )
      {
        if ( v20 )
        {
          v20->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v20->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v19].TreeNode, SessionId);
          v28 = 0;
          v28 = v20->BoostBitmap.AllFields & 0x1FFFF;
          v20->BoostBitmap.AllFields &= 0xFFFE0000;
          v20->ThreadLocalFlags &= ~1u;
          v20->LockState.0 = 0LL;
          v21 = ((char *)v20 - (char *)CurrentThread - 800) / 96;
          if ( v14 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v21;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v21);
          goto LABEL_32;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x8000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, (unsigned int)SessionId, 0LL);
LABEL_32:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(&CurrentThread->Header.Lock, BugCheckParameter2, (unsigned int *)&v28);
  result = (unsigned int)++CurrentThread->SpecialApcDisable;
  if ( !(_WORD)result )
  {
    result = (__int64)&CurrentThread->152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery(v22);
  }
  return result;
}
