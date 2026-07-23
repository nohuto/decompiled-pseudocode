/*
 * XREFs of ExpSaAllocatorAllocate @ 0x14014F0C4
 * Callers:
 *     ExpAllocateFannedOutPushLock @ 0x14014EE20 (ExpAllocateFannedOutPushLock.c)
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
 *     ExpSaPageGroupAllocateMemory @ 0x14014F418 (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14014F6A4 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorOptimizeList @ 0x140152214 (ExpSaAllocatorOptimizeList.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpSaAllocatorAllocate(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3)
{
  char v4; // r15
  __int64 Memory; // rbx
  PRTL_BALANCED_NODE v7; // rsi
  __int64 *v8; // r14
  __int64 *i; // rsi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 SessionId; // rdx
  unsigned __int8 v13; // r15
  unsigned int v14; // r8d
  bool v15; // zf
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  _KLOCK_ENTRY *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int16 v22; // ax
  __int64 *v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 *v27; // rax
  PRTL_BALANCED_NODE v28; // rax
  PRTL_BALANCED_NODE v29; // rsi
  __int64 *v30; // rcx
  int v31; // [rsp+90h] [rbp+18h] BYREF
  int v32; // [rsp+98h] [rbp+20h]

  v31 = a3;
  v4 = 0;
  Memory = -1LL;
  v7 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)BugCheckParameter2, v7, BugCheckParameter2);
  if ( v7 )
    BYTE2(v7[1].Left) |= 1u;
  v8 = (__int64 *)(BugCheckParameter2 + 8);
  do
  {
    for ( i = (__int64 *)*v8; i != v8; i = (__int64 *)*i )
    {
      Memory = ExpSaPageGroupAllocateMemory(i, a2);
      if ( Memory != -1 )
      {
        if ( !*((_DWORD *)i + 9) )
          _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 64), 2u);
        goto LABEL_11;
      }
    }
    v23 = (__int64 *)*v8;
    if ( !v4 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      v28 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
      v29 = v28;
      if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v28, BugCheckParameter2);
      if ( v29 )
        BYTE2(v29[1].Left) |= 1u;
    }
    v4 = 1;
  }
  while ( v23 != (__int64 *)*v8 );
  v24 = *(unsigned int *)(BugCheckParameter2 + 64);
  LOBYTE(v24) = v24 & 1;
  v25 = ExpSaPageGroupDescriptorAllocate(BugCheckParameter2, v24);
  v26 = v25;
  if ( v25 )
  {
    Memory = ExpSaPageGroupAllocateMemory(v25, a2);
    if ( *(_DWORD *)(v26 + 36) )
    {
      *(_DWORD *)(v26 + 40) = 0;
      v27 = (__int64 *)*v8;
      if ( *(__int64 **)(*v8 + 8) != v8 )
        __fastfail(3u);
      *(_QWORD *)v26 = v27;
      *(_QWORD *)(v26 + 8) = v8;
      v27[1] = v26;
      *v8 = v26;
    }
    else
    {
      *(_DWORD *)(v26 + 40) = 1;
      v30 = *(__int64 **)(BugCheckParameter2 + 32);
      if ( *v30 != BugCheckParameter2 + 24 )
        __fastfail(3u);
      *(_QWORD *)v26 = BugCheckParameter2 + 24;
      *(_QWORD *)(v26 + 8) = v30;
      *v30 = v26;
      *(_QWORD *)(BugCheckParameter2 + 32) = v26;
    }
LABEL_11:
    if ( (*(_DWORD *)(BugCheckParameter2 + 64) & 2) != 0 )
    {
      if ( !v4 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
        goto LABEL_13;
      v4 = 1;
      ExpSaAllocatorOptimizeList(BugCheckParameter2);
    }
    if ( !v4 )
    {
LABEL_13:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      return Memory;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  v31 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --CurrentThread->SpecialApcDisable;
  v13 = ++CurrentThread->AbAllocationRegionCount;
  v14 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v15 = !_BitScanReverse((unsigned int *)&v16, v14);
    v32 = v16;
    if ( v15 )
      break;
    v17 = 1 << v16;
    v18 = v16;
    v19 = &CurrentThread->LockEntries[v18];
    v14 &= ~v17;
    if ( (v19->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v19->LockState.0 & 1) == 0
      && (*(_QWORD *)&v19->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && v19->LockState.SessionId == (_DWORD)SessionId )
    {
      v19->AcquiredByte &= ~1u;
      if ( v19->LockState.0 )
      {
        if ( v19 )
        {
          v19->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v19->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v18].TreeNode, SessionId);
          v31 = 0;
          v31 = v19->BoostBitmap.AllFields & 0x1FFFF;
          v19->BoostBitmap.AllFields &= 0xFFFE0000;
          v19->ThreadLocalFlags &= ~1u;
          v19->LockState.0 = 0LL;
          v20 = ((char *)v19 - (char *)CurrentThread - 800) / 96;
          if ( v13 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v20;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v20);
          goto LABEL_33;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x8000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, (unsigned int)SessionId, 0LL);
LABEL_33:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(&CurrentThread->Header.Lock, BugCheckParameter2, (unsigned int *)&v31);
  v22 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v22;
  if ( !v22 && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v21);
  return Memory;
}
