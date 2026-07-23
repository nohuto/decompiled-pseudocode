/*
 * XREFs of RtlpHpVaMgrCtxFree @ 0x1402969E4
 * Callers:
 *     RtlpHpFreeVA @ 0x140294BD4 (RtlpHpFreeVA.c)
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
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlpHpVaMgrFree @ 0x140296EB4 (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRangeFree @ 0x140297398 (RtlpHpVaMgrRangeFree.c)
 *     RtlpHpVaMgrRangeSplit @ 0x140297400 (RtlpHpVaMgrRangeSplit.c)
 *     RtlpHpEnvFreeVA @ 0x140297764 (RtlpHpEnvFreeVA.c)
 *     RtlSparseArrayElementAllocated @ 0x14029DD14 (RtlSparseArrayElementAllocated.c)
 *     RtlSparseArrayElementFindCapped @ 0x14029DD6C (RtlSparseArrayElementFindCapped.c)
 */

void __fastcall RtlpHpVaMgrCtxFree(__int64 a1, void **a2, size_t *a3)
{
  __int64 v3; // rbp
  size_t v5; // rsi
  _BYTE *v8; // rax
  _BYTE *v9; // rbx
  __int64 Capped; // rbx
  __int64 v11; // rdi
  _BYTE *v12; // rdx
  _BYTE *v13; // r14
  _BYTE *v14; // rsi
  unsigned __int8 v15; // r8
  __int64 v16; // rax
  size_t v17; // rax
  KIRQL v18; // bp
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r14
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v25; // bp
  unsigned int v26; // r8d
  int v27; // eax
  __int64 v28; // rcx
  _KLOCK_ENTRY *v29; // rsi
  bool v30; // zf
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // [rsp+60h] [rbp+8h] BYREF
  int v34; // [rsp+68h] [rbp+10h]

  v3 = a1 + 16;
  v5 = *a3 >> 20;
  v8 = (_BYTE *)RtlSparseArrayElementAllocated(a1 + 16, ((unsigned __int64)*a2 - *(_QWORD *)(a1 + 8)) >> 20);
  v9 = v8;
  if ( !v8 )
  {
    Capped = RtlSparseArrayElementFindCapped(
               v3,
               ((__int64)*a2 - *(_QWORD *)(a1 + 8)) / 0x100000,
               ~(((__int64)*a2 - *(_QWORD *)(a1 + 8)) / 0x100000));
    RtlpHpEnvFreeVA(a2, a3);
    *(_QWORD *)(Capped + 24) -= *a3 >> 20;
    return;
  }
  v11 = 48LL * (unsigned __int8)v8[1] + a1 + 112;
  if ( (*v8 & 4) != 0 )
  {
    v12 = v8;
    *v8 &= ~1u;
LABEL_54:
    RtlpHpVaMgrRangeFree(v11, v12);
    return;
  }
  if ( (*(_BYTE *)(v11 + 46) & 6u) >= 4 )
    memset(*a2, 0, *a3);
  else
    RtlpHpEnvFreeVA(a2, a3);
  v13 = v9;
  if ( (*v9 & 2) != 0 )
  {
    v14 = v9;
    do
      v9 -= 32;
    while ( (*v9 & 2) != 0 );
    v15 = *(_BYTE *)(v11 + 46);
  }
  else
  {
    v15 = *(_BYTE *)(v11 + 46);
    if ( ((v15 >> 4) & (unsigned __int8)~(*v9 >> 2) & 1) == 0 )
    {
      v16 = (*v9 & 4) != 0 ? *((_QWORD *)v9 + 3) : *((unsigned __int16 *)v9 + 12);
      if ( v5 != v16 )
        NT_ASSERT("(Range->Standalone == 0 && Allocator->AllowFreeHead == 1) || ChunksToFree == RtlpHpVaMgrRangeSize(Range)");
    }
    if ( (*v9 & 4) != 0 )
      v17 = *((_QWORD *)v9 + 3);
    else
      v17 = *((unsigned __int16 *)v9 + 12);
    if ( v5 >= v17 )
      v14 = 0LL;
    else
      v14 = &v9[32 * v5];
  }
  v18 = RtlpHpAcquireLockExclusive((volatile LONG *)v11, v15 & 1);
  if ( v14 )
    RtlpHpVaMgrRangeSplit(v11, v9, (v14 - v9) >> 5);
  v22 = RtlpHpVaMgrFree(v11, v13);
  if ( (*(_BYTE *)(v11 + 46) & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v11);
    __writecr8(v18);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v11, v19, v20, v21);
    v33 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v11) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --CurrentThread->SpecialApcDisable;
    v25 = ++CurrentThread->AbAllocationRegionCount;
    v26 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v30 = !_BitScanReverse((unsigned int *)&v31, v26);
      v34 = v31;
      if ( v30 )
        goto LABEL_39;
      v27 = 1 << v31;
      v28 = v31;
      v29 = &CurrentThread->LockEntries[v28];
      v26 &= ~v27;
      if ( (v29->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v29->LockState.0 & 1) == 0
        && (*(_QWORD *)&v29->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v11 & 0x7FFFFFFFFFFFFFFCLL)
        && v29->LockState.SessionId == (_DWORD)SessionId )
      {
        v29->AcquiredByte &= ~1u;
        if ( v29->LockState.0 )
          break;
      }
    }
    if ( !v29 )
    {
LABEL_39:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v11, (unsigned int)SessionId, 0LL);
      goto LABEL_46;
    }
    v29->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v29->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v28].TreeNode, SessionId);
    v33 = 0;
    v33 = v29->BoostBitmap.AllFields & 0x1FFFF;
    v29->BoostBitmap.AllFields &= 0xFFFE0000;
    v29->ThreadLocalFlags &= ~1u;
    v29->LockState.0 = 0LL;
    v32 = ((char *)v29 - (char *)CurrentThread - 800) / 96;
    if ( v25 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v32;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v32);
LABEL_46:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v11, (__int64)&v33);
    v30 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v30 && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    KeLeaveCriticalRegion();
  }
  if ( v22 )
  {
    v12 = (_BYTE *)v22;
    goto LABEL_54;
  }
}
