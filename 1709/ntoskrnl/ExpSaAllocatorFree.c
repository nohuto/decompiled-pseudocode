/*
 * XREFs of ExpSaAllocatorFree @ 0x1401562B8
 * Callers:
 *     ExCleanupAutoExpandPushLock @ 0x1401144D0 (ExCleanupAutoExpandPushLock.c)
 *     ExpCleanupAutoExpandPushLock @ 0x14014BFE4 (ExpCleanupAutoExpandPushLock.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x14005D4E0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     ExpSaPageGroupFreeMemory @ 0x140156564 (ExpSaPageGroupFreeMemory.c)
 *     ExpSaAllocatorOptimizeList @ 0x1401567A8 (ExpSaAllocatorOptimizeList.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

char __fastcall ExpSaAllocatorFree(ULONG_PTR BugCheckParameter2, __int64 *a2, __int64 a3, unsigned int a4)
{
  char v8; // r15
  PRTL_BALANCED_NODE v9; // rbp
  int v10; // eax
  $B476B70DB57F76B110DA5B9238C3E934 *v11; // rax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v14; // r14
  unsigned int v15; // r8d
  bool v16; // zf
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  _KLOCK_ENTRY *v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rcx
  PRTL_BALANCED_NODE v23; // rax
  PRTL_BALANCED_NODE v24; // rbp
  __int64 *v25; // rax
  __int64 **v26; // rcx
  __int64 **v27; // rcx
  int v29; // [rsp+78h] [rbp+10h] BYREF

  if ( *((_DWORD *)a2 + 10) == 1 )
  {
    v8 = 1;
    v23 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
    v24 = v23;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, (__int64)v23, (__int16 *)BugCheckParameter2);
    if ( v24 )
      BYTE2(v24[1].Left) |= 1u;
    *((_DWORD *)a2 + 10) = 0;
    v25 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) != a2 || (v26 = (__int64 **)a2[1], *v26 != a2) )
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
      ExfAcquirePushLockSharedEx((signed __int64 *)BugCheckParameter2, (__int64)v9, BugCheckParameter2);
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
    LOBYTE(v11) = KeAbPostRelease(BugCheckParameter2);
    return (char)v11;
  }
LABEL_16:
  ExpSaAllocatorOptimizeList(BugCheckParameter2);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  v29 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v14 = ++CurrentThread->AbAllocationRegionCount;
  v15 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v16 = !_BitScanReverse((unsigned int *)&v17, v15);
    if ( v16 )
      break;
    v18 = 1 << v17;
    v19 = v17;
    v20 = &CurrentThread->LockEntries[v19];
    v15 &= ~v18;
    if ( (v20->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v20->LockState.0 & 1) == 0
      && (*(_QWORD *)&v20->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && v20->LockState.SessionId == SessionId )
    {
      v20->AcquiredByte &= ~1u;
      if ( v20->LockState.0 )
      {
        if ( v20 )
        {
          v20->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v20->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v19].TreeNode);
          v29 = 0;
          v29 = v20->BoostBitmap.AllFields & 0x1FFFF;
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
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
LABEL_32:
  --CurrentThread->AbAllocationRegionCount;
  LOBYTE(v11) = KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, (unsigned int *)&v29);
  v16 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v16 )
  {
    v11 = &CurrentThread->152;
    if ( ($B476B70DB57F76B110DA5B9238C3E934 *)v11->ApcState.ApcListHead[0].Flink != v11 )
      LOBYTE(v11) = KiCheckForKernelApcDelivery(v22);
  }
  return (char)v11;
}
