/*
 * XREFs of ExpSaPageGroupDescriptorFree @ 0x1401522A0
 * Callers:
 *     ExpSaAllocatorOptimizeList @ 0x140152214 (ExpSaAllocatorOptimizeList.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     KeQueryMaximumProcessorCountEx @ 0x140088870 (KeQueryMaximumProcessorCountEx.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     ExpSaBinaryArrayRemove @ 0x14015252C (ExpSaBinaryArrayRemove.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall ExpSaPageGroupDescriptorFree(unsigned int *a1)
{
  __int64 MaximumProcessorCount; // rdi
  PRTL_BALANCED_NODE v3; // rax
  signed __int8 v4; // cf
  PRTL_BALANCED_NODE v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 v9; // r9
  int v10; // r8d
  __int64 v11; // rcx
  void *v12; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v15; // r14
  unsigned int v16; // r8d
  bool v17; // zf
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  _KLOCK_ENTRY *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int16 v24; // ax
  int v25; // [rsp+78h] [rbp+10h] BYREF
  int v26; // [rsp+80h] [rbp+18h]
  int v27; // [rsp+88h] [rbp+20h]

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v3 = KeAbPreAcquire((ULONG_PTR)&ExSaPageGroupDescriptorArrayLock, 0LL, 0);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&ExSaPageGroupDescriptorArrayLock, v3, (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
  if ( v5 )
    BYTE2(v5[1].Left) |= 1u;
  if ( (_DWORD)MaximumProcessorCount )
  {
    v6 = 0LL;
    do
    {
      v7 = a1[8];
      _BitScanReverse(&v8, v7);
      v9 = *(_QWORD *)(v6 + ExSaPageArrays);
      v10 = 1 << v8;
      v11 = v8 - 2;
      v27 = v11;
      v12 = *(void **)(*(_QWORD *)(v9 + 8 * v11) + 8LL * ((unsigned int)v7 ^ v10) + 8);
      ExpSaBinaryArrayRemove(v9, v7);
      ExFreePoolWithTag(v12, 0);
      v6 += 8LL;
      --MaximumProcessorCount;
    }
    while ( MaximumProcessorCount );
  }
  ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArray, a1[8]);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock);
  v25 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExSaPageGroupDescriptorArrayLock) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --CurrentThread->SpecialApcDisable;
  v15 = ++CurrentThread->AbAllocationRegionCount;
  v16 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v17 = !_BitScanReverse((unsigned int *)&v18, v16);
    v26 = v18;
    if ( v17 )
      break;
    v19 = 1 << v18;
    v20 = v18;
    v21 = &CurrentThread->LockEntries[v20];
    v16 &= ~v19;
    if ( (v21->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v21->LockState.0 & 1) == 0
      && (*(_QWORD *)&v21->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL)
      && v21->LockState.SessionId == (_DWORD)SessionId )
    {
      v21->AcquiredByte &= ~1u;
      if ( v21->LockState.0 )
      {
        if ( v21 )
        {
          v21->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v21->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v20].TreeNode, SessionId);
          v25 = 0;
          v25 = v21->BoostBitmap.AllFields & 0x1FFFF;
          v21->BoostBitmap.AllFields &= 0xFFFE0000;
          v21->ThreadLocalFlags &= ~1u;
          v21->LockState.0 = 0LL;
          v22 = ((char *)v21 - (char *)CurrentThread - 800) / 96;
          if ( v15 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v22;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v22);
          goto LABEL_24;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x8000) == 0 )
    KeBugCheckEx(
      0x162u,
      (ULONG_PTR)CurrentThread,
      (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock,
      (unsigned int)SessionId,
      0LL);
LABEL_24:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(&CurrentThread->Header.Lock, (__int64)&ExSaPageGroupDescriptorArrayLock, (unsigned int *)&v25);
  v24 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v24;
  if ( !v24 && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v23);
  ExFreePoolWithTag(a1, 0);
}
