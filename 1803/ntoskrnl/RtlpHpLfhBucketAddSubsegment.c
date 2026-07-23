/*
 * XREFs of RtlpHpLfhBucketAddSubsegment @ 0x140299490
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x14029A9A8 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x14029C288 (RtlpHpLfhSubsegmentFreeBlock.c)
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
 *     RtlpHpLfhSubsegmentFree @ 0x14029C1A0 (RtlpHpLfhSubsegmentFree.c)
 *     RtlpHpLfhSubsegmentSetOwner @ 0x14029D110 (RtlpHpLfhSubsegmentSetOwner.c)
 */

void __fastcall RtlpHpLfhBucketAddSubsegment(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rsi
  volatile signed __int64 *v8; // rbp
  KIRQL v9; // bl
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v15; // r13
  unsigned int v16; // r8d
  bool v17; // zf
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  _KLOCK_ENTRY *v21; // rdi
  __int64 v22; // rdx
  int v23; // [rsp+78h] [rbp+10h] BYREF
  int v24; // [rsp+80h] [rbp+18h]

  v5 = a3;
  if ( *(_WORD *)(a3 + 32) != *(_WORD *)(a3 + 34) )
  {
    v8 = (volatile signed __int64 *)(a2 + 16);
    v9 = RtlpHpAcquireLockExclusive((volatile LONG *)(a2 + 16), *(unsigned __int8 *)(a1 + 64));
    RtlpHpLfhSubsegmentSetOwner(v5, a2);
    if ( *(_WORD *)(v5 + 32) == *(_WORD *)(v5 + 34) )
      *(_QWORD *)(v5 + 16) = 0LL;
    else
      v5 = RtlpHpLfhOwnerMoveSubsegment(a2, v5, 0LL);
    if ( *(_BYTE *)(a1 + 64) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
      __writecr8(v9);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 16), v10, v11, v12);
      v23 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(a2 + 16) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = 0xFFFFFFFFLL;
      --CurrentThread->SpecialApcDisable;
      v15 = ++CurrentThread->AbAllocationRegionCount;
      v16 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v17 = !_BitScanReverse((unsigned int *)&v18, v16);
        v24 = v18;
        if ( v17 )
          break;
        v19 = 1 << v18;
        v20 = v18;
        v21 = &CurrentThread->LockEntries[v20];
        v16 &= ~v19;
        if ( (v21->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v21->LockState.0 & 1) == 0
          && (*(_QWORD *)&v21->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v8 & 0x7FFFFFFFFFFFFFFCLL)
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
              v23 = 0;
              v23 = v21->BoostBitmap.AllFields & 0x1FFFF;
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
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a2 + 16, (unsigned int)SessionId, 0LL);
LABEL_24:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, a2 + 16, (__int64)&v23);
      v17 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v17
        && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      KeLeaveCriticalRegion();
    }
  }
  if ( v5 )
    RtlpHpLfhSubsegmentFree(a1, v5, a2, 2 * (a4 & 1u));
}
