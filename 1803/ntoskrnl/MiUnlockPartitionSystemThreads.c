/*
 * XREFs of MiUnlockPartitionSystemThreads @ 0x140186E04
 * Callers:
 *     MiEnablePartitionMappedWrites @ 0x1404BEC88 (MiEnablePartitionMappedWrites.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockPartitionSystemThreads(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v8; // r14
  unsigned int v9; // r8d
  bool v10; // zf
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  _KLOCK_ENTRY *v14; // rdi
  __int64 v15; // rdx
  int v17; // [rsp+60h] [rbp+8h] BYREF
  int v18; // [rsp+70h] [rbp+18h]

  v4 = a1 + 176;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 176), a2, a3, a4);
  v17 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --CurrentThread->SpecialApcDisable;
  v8 = ++CurrentThread->AbAllocationRegionCount;
  v9 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v10 = !_BitScanReverse((unsigned int *)&v11, v9);
    v18 = v11;
    if ( v10 )
      break;
    v12 = 1 << v11;
    v13 = v11;
    v14 = &CurrentThread->LockEntries[v13];
    v9 &= ~v12;
    if ( (v14->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v14->LockState.0 & 1) == 0
      && (*(_QWORD *)&v14->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
      && v14->LockState.SessionId == (_DWORD)SessionId )
    {
      v14->AcquiredByte &= ~1u;
      if ( v14->LockState.0 )
      {
        if ( v14 )
        {
          v14->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v14->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v13].TreeNode, SessionId);
          v17 = 0;
          v17 = v14->BoostBitmap.AllFields & 0x1FFFF;
          v14->BoostBitmap.AllFields &= 0xFFFE0000;
          v14->ThreadLocalFlags &= ~1u;
          v14->LockState.0 = 0LL;
          v15 = ((char *)v14 - (char *)CurrentThread - 800) / 96;
          if ( v8 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v15;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v15);
          goto LABEL_17;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v4, (unsigned int)SessionId, 0LL);
LABEL_17:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v4, (__int64)&v17);
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return KiLeaveGuardedRegionUnsafe(a2);
}
