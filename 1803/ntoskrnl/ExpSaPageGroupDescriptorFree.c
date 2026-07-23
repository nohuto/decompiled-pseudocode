/*
 * XREFs of ExpSaPageGroupDescriptorFree @ 0x1402BDE9C
 * Callers:
 *     ExpSaAllocatorOptimizeList @ 0x1402BD858 (ExpSaAllocatorOptimizeList.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1400D38F0 (KeQueryMaximumProcessorCountEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExpSaBinaryArrayRemove @ 0x1402BDA04 (ExpSaBinaryArrayRemove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall ExpSaPageGroupDescriptorFree(_DWORD *P)
{
  __int64 MaximumProcessorCount; // rdi
  __int64 v3; // rax
  signed __int8 v4; // cf
  __int64 v5; // rbx
  __int64 v6; // rsi
  unsigned int v7; // edx
  unsigned int v8; // ecx
  __int64 v9; // r9
  int v10; // r8d
  __int64 v11; // rcx
  void *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v18; // si
  unsigned int v19; // r8d
  int v20; // eax
  __int64 v21; // rcx
  _KLOCK_ENTRY *v22; // rdi
  bool v23; // zf
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // [rsp+68h] [rbp+10h] BYREF
  int v27; // [rsp+70h] [rbp+18h]
  int v28; // [rsp+78h] [rbp+20h]

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v3 = KeAbPreAcquire((ULONG_PTR)&ExSaPageGroupDescriptorArrayLock, 0LL, 0);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&ExSaPageGroupDescriptorArrayLock, v3, (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  if ( (_DWORD)MaximumProcessorCount )
  {
    v6 = 0LL;
    do
    {
      v7 = P[8];
      _BitScanReverse(&v8, v7);
      v9 = *(_QWORD *)(v6 + ExSaPageArrays);
      v10 = 1 << v8;
      v11 = v8 - 2;
      v28 = v11;
      v12 = *(void **)(*(_QWORD *)(v9 + 8 * v11) + 8LL * (v7 ^ v10) + 8);
      ExpSaBinaryArrayRemove(v9, v7);
      ExFreePoolWithTag(v12, 0);
      v6 += 8LL;
      --MaximumProcessorCount;
    }
    while ( MaximumProcessorCount );
  }
  ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArray, P[8]);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, v13, v14, v15);
  v26 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExSaPageGroupDescriptorArrayLock) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --CurrentThread->SpecialApcDisable;
  v18 = ++CurrentThread->AbAllocationRegionCount;
  v19 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v23 = !_BitScanReverse((unsigned int *)&v24, v19);
    v27 = v24;
    if ( v23 )
      goto LABEL_20;
    v20 = 1 << v24;
    v21 = v24;
    v22 = &CurrentThread->LockEntries[v21];
    v19 &= ~v20;
    if ( (v22->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v22->LockState.0 & 1) == 0
      && (*(_QWORD *)&v22->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL)
      && v22->LockState.SessionId == (_DWORD)SessionId )
    {
      v22->AcquiredByte &= ~1u;
      if ( v22->LockState.0 )
        break;
    }
  }
  if ( !v22 )
  {
LABEL_20:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(
        0x162u,
        (ULONG_PTR)CurrentThread,
        (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock,
        (unsigned int)SessionId,
        0LL);
    goto LABEL_27;
  }
  v22->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v22->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v21].TreeNode, SessionId);
  v26 = 0;
  v26 = v22->BoostBitmap.AllFields & 0x1FFFF;
  v22->BoostBitmap.AllFields &= 0xFFFE0000;
  v22->ThreadLocalFlags &= ~1u;
  v22->LockState.0 = 0LL;
  v25 = ((char *)v22 - (char *)CurrentThread - 800) / 96;
  if ( v18 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v25;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v25);
LABEL_27:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&ExSaPageGroupDescriptorArrayLock, (__int64)&v26);
  v23 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v23 && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  ExFreePoolWithTag(P, 0);
}
