/*
 * XREFs of MiRemovePlaceholderVad @ 0x140268600
 * Callers:
 *     MiCoalescePlaceholderAllocations @ 0x14074D2C8 (MiCoalescePlaceholderAllocations.c)
 *     MiPreparePlaceholderVadReplacement @ 0x14075517C (MiPreparePlaceholderVadReplacement.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiRemoveVad @ 0x140268864 (MiRemoveVad.c)
 */

__int64 __fastcall MiRemovePlaceholderVad(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *Process; // rsi
  ULONG_PTR v4; // r15
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  unsigned __int8 v7; // di
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KTHREAD *v11; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v13; // si
  unsigned int v14; // r8d
  int v15; // eax
  __int64 v16; // rcx
  _KLOCK_ENTRY *v17; // rdi
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v22; // [rsp+68h] [rbp+10h] BYREF
  int v23; // [rsp+70h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v4 = (ULONG_PTR)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v7 = v6;
  MiRemoveVad(a1, Process);
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v7);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[8], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Process[1].Affinity.Bitmap[8], v8, v9, v10);
  v22 = 0;
  v11 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&Process[1].Affinity.Bitmap[8]) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v11->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v11->SpecialApcDisable;
  v13 = ++v11->AbAllocationRegionCount;
  v14 = ((char)v11->AbEntrySummary | (char)v11->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v18 = !_BitScanReverse((unsigned int *)&v19, v14);
    v23 = v19;
    if ( v18 )
      goto LABEL_13;
    v15 = 1 << v19;
    v16 = v19;
    v17 = &v11->LockEntries[v16];
    v14 &= ~v15;
    if ( (v17->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v17->LockState.0 & 1) == 0
      && (*(_QWORD *)&v17->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
      && v17->LockState.SessionId == (_DWORD)SessionId )
    {
      v17->AcquiredByte &= ~1u;
      if ( v17->LockState.0 )
        break;
    }
  }
  if ( !v17 )
  {
LABEL_13:
    if ( (*((_DWORD *)&v11->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v11, v4, (unsigned int)SessionId, 0LL);
    goto LABEL_20;
  }
  v17->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v17->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v11->LockEntries[v16].TreeNode, SessionId);
  v22 = 0;
  v22 = v17->BoostBitmap.AllFields & 0x1FFFF;
  v17->BoostBitmap.AllFields &= 0xFFFE0000;
  v17->ThreadLocalFlags &= ~1u;
  v17->LockState.0 = 0LL;
  v20 = ((char *)v17 - (char *)v11 - 800) / 96;
  if ( v13 == 1 )
    v11->AbEntrySummary |= 1 << v20;
  else
    _InterlockedOr8((volatile signed __int8 *)&v11->AbOrphanedEntrySummary, 1 << v20);
LABEL_20:
  --v11->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v11, v4, (__int64)&v22);
  v18 = v11->SpecialApcDisable++ == -1;
  if ( v18 && ($005F0E83B22994B61E86C72E0CE43C71 *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
    KiCheckForKernelApcDelivery();
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
