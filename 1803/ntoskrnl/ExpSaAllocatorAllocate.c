/*
 * XREFs of ExpSaAllocatorAllocate @ 0x14015A954
 * Callers:
 *     ExSaAllocate @ 0x14015A8E0 (ExSaAllocate.c)
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
 *     ExpSaPageGroupAllocateMemory @ 0x14015AA34 (ExpSaPageGroupAllocateMemory.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExpSaAllocatorOptimizeList @ 0x1402BD858 (ExpSaAllocatorOptimizeList.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1402BDA4C (ExpSaPageGroupDescriptorAllocate.c)
 */

__int64 __fastcall ExpSaAllocatorAllocate(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3)
{
  char v4; // bp
  __int64 Memory; // rbx
  __int64 v7; // rsi
  __int64 *v8; // r14
  __int64 *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v14; // r15
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 *v21; // rax
  __int64 *v22; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 SessionId; // rdx
  unsigned __int8 v25; // r14
  unsigned int v26; // r8d
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  _KLOCK_ENTRY *v30; // rbp
  __int64 v31; // rdx
  int v32; // [rsp+90h] [rbp+18h] BYREF
  int v33; // [rsp+98h] [rbp+20h]

  v32 = a3;
  v4 = 0;
  Memory = -1LL;
  v7 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)BugCheckParameter2, v7, BugCheckParameter2);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v8 = (__int64 *)(BugCheckParameter2 + 8);
  v9 = *(__int64 **)(BugCheckParameter2 + 8);
  do
  {
    while ( v9 != v8 )
    {
      Memory = ExpSaPageGroupAllocateMemory(v9, a2);
      if ( Memory != -1 )
      {
        if ( !*((_DWORD *)v9 + 9) )
          _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 64), 2u);
        goto LABEL_10;
      }
      v9 = (__int64 *)*v9;
    }
    v14 = (__int64 *)*v8;
    v15 = v4 == 0;
    v4 = 1;
    if ( v15 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      v16 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
      v17 = v16;
      if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v16, BugCheckParameter2);
      if ( v17 )
        *(_BYTE *)(v17 + 26) |= 1u;
    }
    v9 = (__int64 *)*v8;
  }
  while ( v14 != (__int64 *)*v8 );
  v18 = *(unsigned int *)(BugCheckParameter2 + 64);
  LOBYTE(v18) = v18 & 1;
  v19 = ExpSaPageGroupDescriptorAllocate(BugCheckParameter2, v18);
  v20 = v19;
  if ( v19 )
  {
    Memory = ExpSaPageGroupAllocateMemory(v19, a2);
    if ( *(_DWORD *)(v20 + 36) )
    {
      *(_DWORD *)(v20 + 40) = 0;
      v21 = (__int64 *)*v8;
      if ( *(__int64 **)(*v8 + 8) != v8 )
        __fastfail(3u);
      *(_QWORD *)v20 = v21;
      *(_QWORD *)(v20 + 8) = v8;
      v21[1] = v20;
      *v8 = v20;
    }
    else
    {
      *(_DWORD *)(v20 + 40) = 1;
      v22 = *(__int64 **)(BugCheckParameter2 + 32);
      if ( *v22 != BugCheckParameter2 + 24 )
        __fastfail(3u);
      *(_QWORD *)v20 = BugCheckParameter2 + 24;
      *(_QWORD *)(v20 + 8) = v22;
      *v22 = v20;
      *(_QWORD *)(BugCheckParameter2 + 32) = v20;
    }
LABEL_10:
    if ( (*(_DWORD *)(BugCheckParameter2 + 64) & 2) != 0 )
    {
      if ( !v4 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
        goto LABEL_12;
      v4 = 1;
      ExpSaAllocatorOptimizeList(BugCheckParameter2);
    }
    if ( !v4 )
    {
LABEL_12:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      return Memory;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2, v10, v11, v12);
  v32 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --CurrentThread->SpecialApcDisable;
  v25 = ++CurrentThread->AbAllocationRegionCount;
  v26 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v15 = !_BitScanReverse((unsigned int *)&v27, v26);
    v33 = v27;
    if ( v15 )
      goto LABEL_44;
    v28 = 1 << v27;
    v29 = v27;
    v30 = &CurrentThread->LockEntries[v29];
    v26 &= ~v28;
    if ( (v30->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v30->LockState.0 & 1) == 0
      && (*(_QWORD *)&v30->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && v30->LockState.SessionId == (_DWORD)SessionId )
    {
      v30->AcquiredByte &= ~1u;
      if ( v30->LockState.0 )
        break;
    }
  }
  if ( !v30 )
  {
LABEL_44:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, (unsigned int)SessionId, 0LL);
    goto LABEL_56;
  }
  v30->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v30->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v29].TreeNode, SessionId);
  v32 = 0;
  v32 = v30->BoostBitmap.AllFields & 0x1FFFF;
  v30->BoostBitmap.AllFields &= 0xFFFE0000;
  v30->ThreadLocalFlags &= ~1u;
  v30->LockState.0 = 0LL;
  v31 = ((char *)v30 - (char *)CurrentThread - 800) / 96;
  if ( v25 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v31;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v31);
LABEL_56:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, (__int64)&v32);
  v15 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v15 && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return Memory;
}
