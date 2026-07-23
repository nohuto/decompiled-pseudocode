/*
 * XREFs of ExpSaAllocatorAllocate @ 0x14014A620
 * Callers:
 *     ExpAllocateFannedOutPushLock @ 0x14014A37C (ExpAllocateFannedOutPushLock.c)
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
 *     ExpSaPageGroupAllocateMemory @ 0x14014A950 (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14014ABCC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorOptimizeList @ 0x1401567A8 (ExpSaAllocatorOptimizeList.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpSaAllocatorAllocate(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3)
{
  char v4; // bp
  __int64 Memory; // rbx
  PRTL_BALANCED_NODE v7; // rsi
  __int64 *v8; // r14
  __int64 *i; // rsi
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // edx
  unsigned __int8 v13; // r14
  unsigned int v14; // r8d
  bool v15; // zf
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  _KLOCK_ENTRY *v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 *v26; // rax
  PRTL_BALANCED_NODE v27; // rax
  PRTL_BALANCED_NODE v28; // rsi
  __int64 *v29; // rcx
  int v30; // [rsp+90h] [rbp+18h] BYREF
  int v31; // [rsp+98h] [rbp+20h]

  v30 = a3;
  v4 = 0;
  Memory = -1LL;
  v7 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)BugCheckParameter2, (__int64)v7, BugCheckParameter2);
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
    v22 = (__int64 *)*v8;
    v15 = v4 == 0;
    v4 = 1;
    if ( v15 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      v27 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
      v28 = v27;
      if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)BugCheckParameter2,
          (__int64)v27,
          (__int16 *)BugCheckParameter2);
      if ( v28 )
        BYTE2(v28[1].Left) |= 1u;
    }
  }
  while ( v22 != (__int64 *)*v8 );
  v23 = *(unsigned int *)(BugCheckParameter2 + 64);
  LOBYTE(v23) = v23 & 1;
  v24 = ExpSaPageGroupDescriptorAllocate(BugCheckParameter2, v23);
  v25 = v24;
  if ( v24 )
  {
    Memory = ExpSaPageGroupAllocateMemory(v24, a2);
    if ( *(_DWORD *)(v25 + 36) )
    {
      *(_DWORD *)(v25 + 40) = 0;
      v26 = (__int64 *)*v8;
      if ( *(__int64 **)(*v8 + 8) != v8 )
        __fastfail(3u);
      *(_QWORD *)v25 = v26;
      *(_QWORD *)(v25 + 8) = v8;
      v26[1] = v25;
      *v8 = v25;
    }
    else
    {
      *(_DWORD *)(v25 + 40) = 1;
      v29 = *(__int64 **)(BugCheckParameter2 + 32);
      if ( *v29 != BugCheckParameter2 + 24 )
        __fastfail(3u);
      *(_QWORD *)v25 = BugCheckParameter2 + 24;
      *(_QWORD *)(v25 + 8) = v29;
      *v29 = v25;
      *(_QWORD *)(BugCheckParameter2 + 32) = v25;
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
  v30 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v13 = ++CurrentThread->AbAllocationRegionCount;
  v14 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v15 = !_BitScanReverse((unsigned int *)&v16, v14);
    v31 = v16;
    if ( v15 )
      break;
    v17 = 1 << v16;
    v18 = v16;
    v19 = &CurrentThread->LockEntries[v18];
    v14 &= ~v17;
    if ( (v19->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v19->LockState.0 & 1) == 0
      && (*(_QWORD *)&v19->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && v19->LockState.SessionId == SessionId )
    {
      v19->AcquiredByte &= ~1u;
      if ( v19->LockState.0 )
      {
        if ( v19 )
        {
          v19->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v19->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v18].TreeNode);
          v30 = 0;
          v30 = v19->BoostBitmap.AllFields & 0x1FFFF;
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
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
LABEL_33:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, (unsigned int *)&v30);
  v15 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v15 && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v21);
  return Memory;
}
