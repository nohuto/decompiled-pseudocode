/*
 * XREFs of MiUnlockDriverMappings @ 0x140125548
 * Callers:
 *     MiReserveDriverPtes @ 0x14055D0C4 (MiReserveDriverPtes.c)
 *     MiReleaseDriverPtes @ 0x140583170 (MiReleaseDriverPtes.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockDriverMappings(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v4; // r14
  unsigned int v5; // r8d
  bool v6; // zf
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  _KLOCK_ENTRY *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int16 v13; // ax
  int v15; // [rsp+68h] [rbp+10h] BYREF
  int v16; // [rsp+70h] [rbp+18h]

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036C0C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036C0C0);
  v15 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_14036C0C0) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --CurrentThread->SpecialApcDisable;
  v4 = ++CurrentThread->AbAllocationRegionCount;
  v5 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v6 = !_BitScanReverse((unsigned int *)&v7, v5);
    v16 = v7;
    if ( v6 )
      break;
    v8 = 1 << v7;
    v9 = v7;
    v10 = &CurrentThread->LockEntries[v9];
    v5 &= ~v8;
    if ( (v10->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v10->LockState.0 & 1) == 0
      && (*(_QWORD *)&v10->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_14036C0C0 & 0x7FFFFFFFFFFFFFFCLL)
      && v10->LockState.SessionId == (_DWORD)SessionId )
    {
      v10->AcquiredByte &= ~1u;
      if ( v10->LockState.0 )
      {
        if ( v10 )
        {
          v10->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v10->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v9].TreeNode, SessionId);
          v15 = 0;
          v15 = v10->BoostBitmap.AllFields & 0x1FFFF;
          v10->BoostBitmap.AllFields &= 0xFFFE0000;
          v10->ThreadLocalFlags &= ~1u;
          v10->LockState.0 = 0LL;
          v11 = ((char *)v10 - (char *)CurrentThread - 800) / 96;
          if ( v4 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v11;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v11);
          goto LABEL_17;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x8000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&qword_14036C0C0, (unsigned int)SessionId, 0LL);
LABEL_17:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(&CurrentThread->Header.Lock, (__int64)&qword_14036C0C0, (unsigned int *)&v15);
  v13 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v13;
  if ( !v13 && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v12);
  return KiLeaveGuardedRegionUnsafe(a1);
}
