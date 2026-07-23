/*
 * XREFs of ExpSaAllocatorFree @ 0x14015E594
 * Callers:
 *     ExSaFree @ 0x14015E51C (ExSaFree.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140008790 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExpSaPageGroupFreeMemory @ 0x14015E660 (ExpSaPageGroupFreeMemory.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExpSaAllocatorOptimizeList @ 0x1402BD858 (ExpSaAllocatorOptimizeList.c)
 */

char __fastcall ExpSaAllocatorFree(ULONG_PTR BugCheckParameter2, __int64 *a2, __int64 a3, unsigned int a4)
{
  int v4; // edi
  __int64 v9; // rax
  __int64 v10; // rbp
  char v11; // r15
  int v12; // eax
  $005F0E83B22994B61E86C72E0CE43C71 *v13; // rax
  __int64 *v14; // rax
  __int64 **v15; // rcx
  __int64 **v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v22; // r14
  unsigned int v23; // r8d
  bool v24; // zf
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  _KLOCK_ENTRY *v28; // rbp
  __int64 v29; // rdx
  int v31; // [rsp+78h] [rbp+10h] BYREF

  v4 = *((_DWORD *)a2 + 10);
  v9 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
  v10 = v9;
  if ( v4 == 1 )
  {
    v11 = 1;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v9, BugCheckParameter2);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    *((_DWORD *)a2 + 10) = 0;
    v14 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) != a2 || (v15 = (__int64 **)a2[1], *v15 != a2) )
      __fastfail(3u);
    *v15 = v14;
    v14[1] = (__int64)v15;
    v16 = *(__int64 ***)(BugCheckParameter2 + 16);
    if ( *v16 != (__int64 *)(BugCheckParameter2 + 8) )
      __fastfail(3u);
    *a2 = BugCheckParameter2 + 8;
    a2[1] = (__int64)v16;
    *v16 = a2;
    *(_QWORD *)(BugCheckParameter2 + 16) = a2;
  }
  else
  {
    v11 = 0;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)BugCheckParameter2, v9, BugCheckParameter2);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
  }
  if ( (unsigned __int8)ExpSaPageGroupFreeMemory(a2, a3, a4) )
  {
    _m_prefetchw((const void *)(BugCheckParameter2 + 64));
    LOBYTE(v12) = _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 64), 2u) | 2;
  }
  else
  {
    v12 = *(_DWORD *)(BugCheckParameter2 + 64);
  }
  if ( (v12 & 2) != 0 )
  {
    if ( v11 || _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) == 17 )
      goto LABEL_28;
    v11 = 0;
  }
  if ( !v11 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
    LOBYTE(v13) = KeAbPostRelease(BugCheckParameter2);
    return (char)v13;
  }
LABEL_28:
  ExpSaAllocatorOptimizeList(BugCheckParameter2);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2, v17, v18, v19);
  v31 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --CurrentThread->SpecialApcDisable;
  v22 = ++CurrentThread->AbAllocationRegionCount;
  v23 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v24 = !_BitScanReverse((unsigned int *)&v25, v23);
    if ( v24 )
      goto LABEL_35;
    v26 = 1 << v25;
    v27 = v25;
    v28 = &CurrentThread->LockEntries[v27];
    v23 &= ~v26;
    if ( (v28->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v28->LockState.0 & 1) == 0
      && (*(_QWORD *)&v28->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && v28->LockState.SessionId == (_DWORD)SessionId )
    {
      v28->AcquiredByte &= ~1u;
      if ( v28->LockState.0 )
        break;
    }
  }
  if ( !v28 )
  {
LABEL_35:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, (unsigned int)SessionId, 0LL);
    goto LABEL_47;
  }
  v28->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v28->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v27].TreeNode, SessionId);
  v31 = 0;
  v31 = v28->BoostBitmap.AllFields & 0x1FFFF;
  v28->BoostBitmap.AllFields &= 0xFFFE0000;
  v28->ThreadLocalFlags &= ~1u;
  v28->LockState.0 = 0LL;
  v29 = ((char *)v28 - (char *)CurrentThread - 800) / 96;
  if ( v22 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v29;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v29);
LABEL_47:
  --CurrentThread->AbAllocationRegionCount;
  LOBYTE(v13) = KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, (__int64)&v31);
  v24 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v24 )
  {
    v13 = &CurrentThread->152;
    if ( ($005F0E83B22994B61E86C72E0CE43C71 *)v13->ApcState.ApcListHead[0].Flink != v13 )
      LOBYTE(v13) = KiCheckForKernelApcDelivery();
  }
  return (char)v13;
}
