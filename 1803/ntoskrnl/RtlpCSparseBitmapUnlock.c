/*
 * XREFs of RtlpCSparseBitmapUnlock @ 0x14029EF7C
 * Callers:
 *     RtlCSparseBitmapBitmaskWrite @ 0x14029D404 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x14029DC74 (RtlSparseArrayElementAllocate.c)
 *     RtlpCSparseBitmapPageCommit @ 0x14029DDC4 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x14029DF34 (RtlpCSparseBitmapPageDecommit.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __fastcall RtlpCSparseBitmapUnlock(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v9; // r14
  unsigned int v10; // r8d
  int v11; // eax
  __int64 v12; // rcx
  _KLOCK_ENTRY *v13; // rsi
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  volatile LONG *v18; // rcx
  int v19; // [rsp+60h] [rbp+8h] BYREF
  int v20; // [rsp+68h] [rbp+10h]

  v4 = *((_QWORD *)a1 + 1);
  v5 = *a1;
  v6 = v4 + 32;
  if ( *(_BYTE *)(v4 + 56) )
  {
    v17 = *((unsigned __int8 *)a1 + 4);
    v18 = (volatile LONG *)(v4 + 32);
    if ( (_DWORD)v5 == 1 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v18);
    else
      ExReleaseSpinLockSharedFromDpcLevel(v18);
    __writecr8(v17);
  }
  else
  {
    if ( (_DWORD)v5 == 1 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v6, v5, a3, a4);
      v19 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v6) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = 0xFFFFFFFFLL;
      --CurrentThread->SpecialApcDisable;
      v9 = ++CurrentThread->AbAllocationRegionCount;
      v10 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v14 = !_BitScanReverse((unsigned int *)&v15, v10);
        v20 = v15;
        if ( v14 )
          goto LABEL_15;
        v11 = 1 << v15;
        v12 = v15;
        v13 = &CurrentThread->LockEntries[v12];
        v10 &= ~v11;
        if ( (v13->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v13->LockState.0 & 1) == 0
          && (*(_QWORD *)&v13->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v6 & 0x7FFFFFFFFFFFFFFCLL)
          && v13->LockState.SessionId == (_DWORD)SessionId )
        {
          v13->AcquiredByte &= ~1u;
          if ( v13->LockState.0 )
            break;
        }
      }
      if ( !v13 )
      {
LABEL_15:
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v6, (unsigned int)SessionId, 0LL);
        goto LABEL_22;
      }
      v13->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v13->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v12].TreeNode, SessionId);
      v19 = 0;
      v19 = v13->BoostBitmap.AllFields & 0x1FFFF;
      v13->BoostBitmap.AllFields &= 0xFFFE0000;
      v13->ThreadLocalFlags &= ~1u;
      v13->LockState.0 = 0LL;
      v16 = ((char *)v13 - (char *)CurrentThread - 800) / 96;
      if ( v9 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v16;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v16);
LABEL_22:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v6, (__int64)&v19);
      v14 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v14
        && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v6);
      KeAbPostRelease(v6);
    }
    KeLeaveCriticalRegion();
  }
}
