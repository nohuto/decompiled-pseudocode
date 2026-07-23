/*
 * XREFs of RtlpHpVsSubsegmentCommitPages @ 0x1400AC488
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x1400AB668 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkDecommit @ 0x1400ABBE8 (RtlpHpVsChunkDecommit.c)
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
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCommitPages(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rcx
  ULONG_PTR v9; // rsi
  __int64 v11; // r15
  __int64 v12; // rdi
  unsigned __int8 v13; // r13
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r15d
  unsigned __int64 v20; // rax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v23; // bp
  unsigned int v24; // edx
  bool v25; // zf
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  _KLOCK_ENTRY *v29; // rdi
  __int64 v30; // rdx
  int v32; // [rsp+30h] [rbp-48h]

  _BitScanForward64(&v7, a3);
  _BitScanReverse64(&v8, a3);
  v9 = a2 + 24;
  v32 = v8 - v7 + 1;
  v11 = a2 + (unsigned int)((_DWORD)v7 << 12);
  v12 = ((1LL << v32) - 1) << v7;
  v13 = RtlpHpAcquireLockExclusive(a2 + 24, *(unsigned int *)(a1 + 8));
  v14 = a1 ^ *(_QWORD *)(a1 + 64);
  v15 = (unsigned int)(v32 << 12);
  if ( a5 )
  {
    v19 = ((__int64 (__fastcall *)(__int64, __int64, __int64))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 88)))(
            v14,
            v11,
            v15);
    if ( v19 < 0 )
      goto LABEL_5;
    *(_QWORD *)(a2 + 16) |= v12;
    v20 = a4;
  }
  else
  {
    ((void (__fastcall *)(__int64, __int64, __int64))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 96)))(v14, v11, v15);
    *(_QWORD *)(a2 + 16) &= ~v12;
    v20 = -a4;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), v20);
  v19 = 0;
LABEL_5:
  if ( *(_DWORD *)(a1 + 8) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v9);
    __writecr8(v13);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9, v16, v17, v18);
    a5 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v9) == 1 )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v23 = ++CurrentThread->AbAllocationRegionCount;
    v24 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v25 = !_BitScanReverse((unsigned int *)&v26, v24);
      if ( v25 )
        break;
      v27 = 1 << v26;
      v28 = v26;
      v29 = &CurrentThread->LockEntries[v28];
      v24 &= ~v27;
      if ( (v29->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v29->LockState.0 & 1) == 0
        && (*(_QWORD *)&v29->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v9 & 0x7FFFFFFFFFFFFFFCLL)
        && v29->LockState.SessionId == SessionId )
      {
        v29->AcquiredByte &= ~1u;
        if ( v29->LockState.0 )
        {
          if ( v29 )
          {
            v29->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v29->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v28].TreeNode);
            a5 = 0;
            a5 = v29->BoostBitmap.AllFields & 0x1FFFF;
            v29->BoostBitmap.AllFields &= 0xFFFE0000;
            v29->ThreadLocalFlags &= ~1u;
            v29->LockState.0 = 0LL;
            v30 = ((char *)v29 - (char *)CurrentThread - 800) / 96;
            if ( v23 == 1 )
              CurrentThread->AbEntrySummary |= 1 << v30;
            else
              _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v30);
            goto LABEL_22;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v9, SessionId, 0LL);
LABEL_22:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(CurrentThread, v9, &a5);
    v25 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v25 && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v19;
}
