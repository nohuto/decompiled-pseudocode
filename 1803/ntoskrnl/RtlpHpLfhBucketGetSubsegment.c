/*
 * XREFs of RtlpHpLfhBucketGetSubsegment @ 0x140299878
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x14029A9A8 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpAcquireLockExclusive @ 0x1400AC764 (RtlpHpAcquireLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x14029A894 (RtlpHpLfhOwnerMoveSubsegment.c)
 */

__int64 __fastcall RtlpHpLfhBucketGetSubsegment(__int64 a1, ULONG_PTR a2)
{
  __int64 *v2; // rbx
  int v3; // ebp
  __int64 v5; // r14
  unsigned __int64 v6; // rsi
  KIRQL v7; // al
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  KIRQL v11; // r15
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v14; // bp
  unsigned int v15; // r8d
  int v16; // eax
  __int64 v17; // rcx
  _KLOCK_ENTRY *v18; // rdi
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v23; // [rsp+60h] [rbp+8h] BYREF
  int v24; // [rsp+70h] [rbp+18h]

  v2 = (__int64 *)(a1 + 24);
  v3 = a2;
  if ( (__int64 *)*v2 == v2 )
    return 0LL;
  v6 = a1 + 16;
  v7 = RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 16), a2);
  v10 = *v2;
  v11 = v7;
  if ( (__int64 *)*v2 == v2 )
    v5 = 0LL;
  else
    v5 = RtlpHpLfhOwnerMoveSubsegment(a1, v10, 2LL);
  if ( v3 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v6);
    __writecr8(v11);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6, v10, v8, v9);
    v23 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v6) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --CurrentThread->SpecialApcDisable;
    v14 = ++CurrentThread->AbAllocationRegionCount;
    v15 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v19 = !_BitScanReverse((unsigned int *)&v20, v15);
      v24 = v20;
      if ( v19 )
        goto LABEL_19;
      v16 = 1 << v20;
      v17 = v20;
      v18 = &CurrentThread->LockEntries[v17];
      v15 &= ~v16;
      if ( (v18->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v18->LockState.0 & 1) == 0
        && (*(_QWORD *)&v18->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v6 & 0x7FFFFFFFFFFFFFFCLL)
        && v18->LockState.SessionId == (_DWORD)SessionId )
      {
        v18->AcquiredByte &= ~1u;
        if ( v18->LockState.0 )
          break;
      }
    }
    if ( !v18 )
    {
LABEL_19:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v6, (unsigned int)SessionId, 0LL);
      goto LABEL_26;
    }
    v18->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v18->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v17].TreeNode, SessionId);
    v23 = 0;
    v23 = v18->BoostBitmap.AllFields & 0x1FFFF;
    v18->BoostBitmap.AllFields &= 0xFFFE0000;
    v18->ThreadLocalFlags &= ~1u;
    v18->LockState.0 = 0LL;
    v21 = ((char *)v18 - (char *)CurrentThread - 800) / 96;
    if ( v14 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v21;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v21);
LABEL_26:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v6, (__int64)&v23);
    v19 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v19 && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    KeLeaveCriticalRegion();
  }
  return v5;
}
