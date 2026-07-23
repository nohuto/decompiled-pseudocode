/*
 * XREFs of ExpSaPageGroupAllocateMemory @ 0x14014F418
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x14014F0C4 (ExpSaAllocatorAllocate.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     RtlFindClearBitsAndSetEx @ 0x1400AE930 (RtlFindClearBitsAndSetEx.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpSaPageGroupAllocateMemory(__int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // rsi
  ULONG_PTR v4; // rbp
  PRTL_BALANCED_NODE v5; // rax
  PRTL_BALANCED_NODE v6; // rbx
  unsigned __int64 ClearBitsAndSet; // rax
  __int64 v8; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 SessionId; // rdx
  unsigned __int8 v11; // r15
  unsigned int v12; // r8d
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  _KLOCK_ENTRY *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int16 v20; // ax
  int v22; // [rsp+78h] [rbp+10h] BYREF
  __int64 v23; // [rsp+80h] [rbp+18h]

  v3 = a2;
  if ( *(_DWORD *)(a1 + 36) < a2 )
    return -1LL;
  v4 = a1 + 24;
  v5 = KeAbPreAcquire(a1 + 24, 0LL, 0);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v4, v5, v4);
  if ( v6 )
    BYTE2(v6[1].Left) |= 1u;
  if ( *(_DWORD *)(a1 + 36) < (unsigned int)v3
    || (ClearBitsAndSet = RtlFindClearBitsAndSetEx((unsigned __int64 *)(a1 + 48), v3, *(unsigned int *)(a1 + 44)),
        ClearBitsAndSet == -1LL) )
  {
    v8 = -1LL;
  }
  else
  {
    *(_DWORD *)(a1 + 36) -= v3;
    *(_DWORD *)(a1 + 44) = v3 + ClearBitsAndSet;
    v23 = 16 * (ClearBitsAndSet & 0x1FF | ((*(_DWORD *)(a1 + 32) & 0x3FFFFu) << 9));
    v8 = v23;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  v22 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --CurrentThread->SpecialApcDisable;
  v11 = ++CurrentThread->AbAllocationRegionCount;
  v12 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( _BitScanReverse((unsigned int *)&v14, v12) )
  {
    v15 = 1 << v14;
    v16 = v14;
    v17 = &CurrentThread->LockEntries[v16];
    v12 &= ~v15;
    if ( (v17->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v17->LockState.0 & 1) == 0
      && (*(_QWORD *)&v17->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
      && v17->LockState.SessionId == (_DWORD)SessionId )
    {
      v17->AcquiredByte &= ~1u;
      if ( v17->LockState.0 )
      {
        if ( v17 )
        {
          v17->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v17->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v16].TreeNode, SessionId);
          v22 = 0;
          v22 = v17->BoostBitmap.AllFields & 0x1FFFF;
          v17->BoostBitmap.AllFields &= 0xFFFE0000;
          v17->ThreadLocalFlags &= ~1u;
          v17->LockState.0 = 0LL;
          v18 = ((char *)v17 - (char *)CurrentThread - 800) / 96;
          if ( v11 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v18;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v18);
          goto LABEL_25;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x8000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v4, (unsigned int)SessionId, 0LL);
LABEL_25:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(&CurrentThread->Header.Lock, v4, (unsigned int *)&v22);
  v20 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v20;
  if ( !v20 && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v19);
  return v8;
}
