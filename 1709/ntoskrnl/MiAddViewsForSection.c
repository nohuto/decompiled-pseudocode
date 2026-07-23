/*
 * XREFs of MiAddViewsForSection @ 0x1400A0BF0
 * Callers:
 *     MmMapViewInSystemCache @ 0x1400A2D00 (MmMapViewInSystemCache.c)
 *     MiCommitPagefileBackedSection @ 0x140460420 (MiCommitPagefileBackedSection.c)
 *     MiPfPrepareReadList @ 0x140494BE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140495440 (MiPfPrepareSequentialReadList.c)
 *     MiMapViewOfDataSection @ 0x1404CEDF0 (MiMapViewOfDataSection.c)
 *     MiAddMappedPtes @ 0x1404F7940 (MiAddMappedPtes.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiCreatePrototypePtes @ 0x14001F8DC (MiCreatePrototypePtes.c)
 *     MiCheckControlArea @ 0x14005B160 (MiCheckControlArea.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     MiReferenceActiveSubsection @ 0x1400A1320 (MiReferenceActiveSubsection.c)
 *     MiDecrementSubsections @ 0x1400A1F40 (MiDecrementSubsections.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiAllocateFileExtents @ 0x1406E3904 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiAddViewsForSection(__int64 *BugCheckParameter2, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r12
  unsigned int v4; // esi
  unsigned int v5; // r15d
  ULONG_PTR v6; // rdi
  __int64 v7; // r13
  __int64 CurrentIrql; // rcx
  signed __int32 v9; // edx
  int v10; // eax
  int active; // eax
  unsigned __int64 v12; // rcx
  __int64 result; // rax
  unsigned __int64 v14; // r14
  struct _KTHREAD *v15; // rdi
  unsigned int v16; // r10d
  BOOL v17; // r15d
  unsigned int v18; // edx
  bool v19; // zf
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  _KLOCK_ENTRY *v23; // rbx
  __int64 v24; // rdx
  ULONG_PTR v25; // rcx
  ULONG_PTR v26; // r9
  ULONG_PTR v27; // r10
  ULONG_PTR v28; // r11
  int v29; // edx
  unsigned int v30; // edx
  __int64 v31; // rcx
  _KLOCK_ENTRY *v32; // rcx
  __int64 v33; // rdx
  signed __int32 v34; // eax
  unsigned __int64 v35; // rdi
  struct _KTHREAD *v36; // rbx
  ULONG_PTR SessionId; // r9
  unsigned int v38; // edx
  __int64 v39; // r10
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  _KLOCK_ENTRY *v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rdx
  unsigned __int64 v46; // rbx
  __int64 v47; // rdi
  KIRQL v48; // al
  struct _KTHREAD *BugCheckParameter1; // [rsp+30h] [rbp-79h]
  unsigned int v50; // [rsp+38h] [rbp-71h]
  __int64 v51; // [rsp+40h] [rbp-69h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-61h]
  int v53; // [rsp+50h] [rbp-59h] BYREF
  int v54; // [rsp+58h] [rbp-51h] BYREF
  int v55; // [rsp+5Ch] [rbp-4Dh] BYREF
  ULONG_PTR BugCheckParameter2a; // [rsp+60h] [rbp-49h]
  int v57; // [rsp+68h] [rbp-41h] BYREF
  int v58; // [rsp+6Ch] [rbp-3Dh]
  __int64 v59; // [rsp+70h] [rbp-39h]
  ULONG_PTR v60; // [rsp+78h] [rbp-31h]
  int v61; // [rsp+80h] [rbp-29h]
  unsigned int v62; // [rsp+84h] [rbp-25h]
  int v63; // [rsp+8Ch] [rbp-1Dh]
  int v64; // [rsp+90h] [rbp-19h]
  _KLOCK_ENTRY *v65; // [rsp+98h] [rbp-11h]
  __int64 v66; // [rsp+A0h] [rbp-9h]
  ULONG_PTR v67; // [rsp+A8h] [rbp-1h]
  ULONG_PTR v68; // [rsp+B0h] [rbp+7h]
  void *retaddr; // [rsp+108h] [rbp+5Fh]
  BOOL v72; // [rsp+120h] [rbp+77h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+120h] [rbp+77h]
  int v74; // [rsp+128h] [rbp+7Fh]
  unsigned int v75; // [rsp+128h] [rbp+7Fh]

  v3 = *BugCheckParameter2;
  v4 = 0;
  v5 = a3;
  v50 = a3;
  v6 = (ULONG_PTR)BugCheckParameter2;
  v60 = 0LL;
  v7 = *(_QWORD *)(v3 + 64);
  if ( v7 )
  {
    CurrentThread = 0LL;
    v51 = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v51 = *(_QWORD *)v3;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v51 + 40, 0LL);
  }
  v58 = v5 & 0x180;
  CurrentIrql = KeGetCurrentIrql();
  v59 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3 + 72, (unsigned __int8)CurrentIrql);
  }
  else
  {
    v57 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)(v3 + 72), 0x1Fu) )
      v57 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v3 + 72), CurrentIrql);
    v9 = *(_DWORD *)(v3 + 72);
    while ( (v9 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v9 & 0x40000000) == 0 )
      {
        v34 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 72), v9 | 0x40000000, v9);
        v19 = v9 == v34;
        v9 = v34;
        if ( !v19 )
          continue;
      }
      KeYieldProcessorEx(&v57);
      v9 = *(_DWORD *)(v3 + 72);
    }
  }
  if ( (v5 & 1) != 0 )
  {
    ++*(_QWORD *)(v3 + 40);
    ++*(_DWORD *)(v3 + 88);
    v5 |= 4u;
    v50 = v5;
  }
  v66 = 0x7FFFFFFFFFFFFFFCLL;
  do
  {
    v10 = *(_DWORD *)(v6 + 52) & 0x3FFFFFFF;
    v68 = v6;
    v74 = v10;
    v62 = *(_DWORD *)(v6 + 44);
    if ( *(_QWORD *)(v6 + 8) )
    {
      active = MiReferenceActiveSubsection(v6);
      v75 = active;
      if ( active >= 0 )
      {
        v60 = v6;
        if ( v7 && (*(_DWORD *)(v6 + 52) & 0x40000000) != 0 )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
          __writecr8((unsigned __int8)v59);
          result = MiAllocateFileExtents(v6, 0);
          v75 = result;
          if ( (int)result < 0 )
            goto LABEL_120;
LABEL_49:
          ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
        }
        if ( a2 )
        {
          v12 = *(unsigned int *)(v6 + 44);
          if ( a2 <= v12 )
            break;
          a2 -= v12;
        }
        v6 = *(_QWORD *)(v6 + 16);
        v60 = v68;
        if ( !v7 )
        {
          v60 = v68;
          v50 = v58 | 4;
        }
        continue;
      }
      if ( active != -1073741302 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
        __writecr8((unsigned __int8)v59);
        if ( !v7 )
        {
          v35 = v51 + 40;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v51 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v35);
          v54 = 0;
          v36 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v35) == 1 )
            SessionId = (unsigned int)MmGetSessionIdEx((__int64)v36->ApcState.Process);
          else
            SessionId = 0xFFFFFFFFLL;
          --v36->SpecialApcDisable;
          ++v36->AbAllocationRegionCount;
          v38 = ((char)v36->AbEntrySummary | (char)v36->AbOrphanedEntrySummary) ^ 0x3F;
          AbAllocationRegionCount = v36->AbAllocationRegionCount;
          v39 = v35 & 0x7FFFFFFFFFFFFFFCLL;
          v19 = !_BitScanReverse((unsigned int *)&v40, v38);
          v63 = v40;
          if ( v19 )
          {
LABEL_128:
            if ( (*((_DWORD *)&v36->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v36, v35, SessionId, 0LL);
          }
          else
          {
            while ( 1 )
            {
              v41 = 1 << v40;
              v42 = v40;
              v43 = &v36->LockEntries[v42];
              v38 &= ~v41;
              if ( (v43->AcquiredByte & 1) != 0
                && (*(_DWORD *)&v43->LockState.0 & 1) == 0
                && (*(_QWORD *)&v43->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v39
                && v43->LockState.SessionId == (_DWORD)SessionId )
              {
                v43->AcquiredByte &= ~1u;
                if ( v43->LockState.0 )
                  break;
              }
              v19 = !_BitScanReverse((unsigned int *)&v40, v38);
              v63 = v40;
              if ( v19 )
                goto LABEL_127;
            }
            if ( !v43 )
            {
LABEL_127:
              v35 = v51 + 40;
              goto LABEL_128;
            }
            v43->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v43->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v36->LockEntries[v42].TreeNode);
            v54 = 0;
            v54 = v43->BoostBitmap.AllFields & 0x1FFFF;
            v43->BoostBitmap.AllFields &= 0xFFFE0000;
            v43->ThreadLocalFlags &= ~1u;
            v43->LockState.0 = 0LL;
            v44 = (unsigned __int128)(((char *)v43 - (char *)v36 - 800) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
            v35 = v51 + 40;
            v45 = ((unsigned __int64)v44 >> 63) + (v44 >> 4);
            if ( AbAllocationRegionCount == 1 )
              v36->AbEntrySummary |= 1 << v45;
            else
              _InterlockedOr8((volatile signed __int8 *)&v36->AbOrphanedEntrySummary, 1 << v45);
          }
          --v36->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v36, v35, (unsigned int *)&v54);
          v19 = v36->SpecialApcDisable++ == -1;
          if ( v19 && ($B476B70DB57F76B110DA5B9238C3E934 *)v36->ApcState.ApcListHead[0].Flink != &v36->152 )
            KiCheckForKernelApcDelivery();
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
        result = v75;
LABEL_120:
        if ( v60 )
        {
          v46 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
          v47 = MiDecrementSubsections((ULONG_PTR)BugCheckParameter2);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
          __writecr8(v46);
          if ( v47 )
          {
            LOBYTE(v4) = v7 != 0;
            MiReturnCrossPartitionSectionCharges(
              *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)),
              v4,
              v47);
          }
          result = v75;
        }
        if ( (v5 & 1) != 0 )
        {
          v48 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
          --*(_QWORD *)(v3 + 40);
          --*(_DWORD *)(v3 + 88);
          MiCheckControlArea(v3, v48);
          return v75;
        }
        return result;
      }
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      __writecr8((unsigned __int8)v59);
      if ( !v7 )
      {
        v25 = v51 + 40;
        BugCheckParameter2a = v51 + 40;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v51 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        {
          ExfTryToWakePushLock(v25);
          v25 = BugCheckParameter2a;
        }
        v53 = 0;
        BugCheckParameter1 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v25) == 1 )
          v26 = (unsigned int)MmGetSessionIdEx((__int64)BugCheckParameter1->ApcState.Process);
        else
          v26 = 0xFFFFFFFFLL;
        v27 = (ULONG_PTR)BugCheckParameter1;
        --BugCheckParameter1->SpecialApcDisable;
        ++BugCheckParameter1->AbAllocationRegionCount;
        v28 = BugCheckParameter2a;
        v72 = BugCheckParameter1->AbAllocationRegionCount == 1;
        v29 = (char)BugCheckParameter1->AbEntrySummary | (char)BugCheckParameter1->AbOrphanedEntrySummary;
        v67 = BugCheckParameter2a & 0x7FFFFFFFFFFFFFFCLL;
        v30 = v29 ^ 0x3F;
        v19 = !_BitScanReverse((unsigned int *)&v31, v30);
        v61 = v31;
        if ( v19 )
          goto LABEL_85;
        while ( 1 )
        {
          v30 &= ~(1 << v31);
          v32 = &BugCheckParameter1->LockEntries[v31];
          v65 = v32;
          if ( (v32->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v32->LockState.0 & 1) == 0
            && (v66 & *(_QWORD *)&v32->LockState.0) == v67
            && v32->LockState.SessionId == (_DWORD)v26 )
          {
            v32->AcquiredByte &= ~1u;
            if ( v32->LockState.0 )
              break;
          }
          v19 = !_BitScanReverse((unsigned int *)&v31, v30);
          v61 = v31;
          if ( v19 )
            goto LABEL_85;
        }
        if ( !v32 )
        {
LABEL_85:
          if ( (*((_DWORD *)&BugCheckParameter1->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)BugCheckParameter1, v28, v26, 0LL);
        }
        else
        {
          v32->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v32->LockState.LockState < 0 )
          {
            KiAbEntryRemoveFromTree(&v32->TreeNode);
            v32 = v65;
            v27 = (ULONG_PTR)BugCheckParameter1;
            v28 = BugCheckParameter2a;
          }
          v53 = 0;
          v53 = v32->BoostBitmap.AllFields & 0x1FFFF;
          v32->BoostBitmap.AllFields &= 0xFFFE0000;
          v32->ThreadLocalFlags &= ~1u;
          v32->LockState.0 = 0LL;
          v33 = (__int64)((__int64)&v32[-8] - v27 - 32) / 96;
          if ( v72 )
            *(_BYTE *)(v27 + 792) |= 1 << v33;
          else
            _InterlockedOr8((volatile signed __int8 *)(v27 + 1422), 1 << v33);
        }
        --*(_BYTE *)(v27 + 794);
        KiAbThreadRemoveBoosts(v27, v28, (unsigned int *)&v53);
        v19 = BugCheckParameter1->SpecialApcDisable++ == -1;
        if ( v19
          && ($B476B70DB57F76B110DA5B9238C3E934 *)BugCheckParameter1->ApcState.ApcListHead[0].Flink != &BugCheckParameter1->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      }
      if ( (v5 & 2) != 0 )
        return 3221225865LL;
      result = MiCreatePrototypePtes((volatile LONG **)v6, v50, v62, v62 + v74);
      v75 = result;
      if ( (int)result >= 0 )
      {
        if ( !v7 )
        {
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx(v51 + 40, 0LL);
        }
        goto LABEL_49;
      }
      if ( (_DWORD)result != -1073741302 )
        goto LABEL_120;
      if ( !v7 )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(v51 + 40, 0LL);
      }
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    }
  }
  while ( v6 );
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3 + 72, retaddr);
  else
    *(_DWORD *)(v3 + 72) = 0;
  __writecr8((unsigned __int8)v59);
  if ( !v7 )
  {
    v14 = v51 + 40;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v51 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v14);
    v55 = 0;
    v15 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v14) == 1 )
      v16 = MmGetSessionIdEx((__int64)v15->ApcState.Process);
    else
      v16 = -1;
    --v15->SpecialApcDisable;
    v17 = ++v15->AbAllocationRegionCount == 1;
    v18 = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
    v19 = !_BitScanReverse((unsigned int *)&v20, v18);
    v64 = v20;
    if ( v19 )
      goto LABEL_51;
    while ( 1 )
    {
      v21 = 1 << v20;
      v22 = v20;
      v23 = &v15->LockEntries[v22];
      v18 &= ~v21;
      if ( (v23->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v23->LockState.0 & 1) == 0
        && (*(_QWORD *)&v23->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v14 & 0x7FFFFFFFFFFFFFFCLL)
        && v23->LockState.SessionId == v16 )
      {
        v23->AcquiredByte &= ~1u;
        if ( v23->LockState.0 )
          break;
      }
      v19 = !_BitScanReverse((unsigned int *)&v20, v18);
      v64 = v20;
      if ( v19 )
        goto LABEL_51;
    }
    if ( !v23 )
    {
LABEL_51:
      if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v15, v14, v16, 0LL);
    }
    else
    {
      v23->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v23->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v15->LockEntries[v22].TreeNode);
      v55 = 0;
      v55 = v23->BoostBitmap.AllFields & 0x1FFFF;
      v23->BoostBitmap.AllFields &= 0xFFFE0000;
      v23->ThreadLocalFlags &= ~1u;
      v23->LockState.0 = 0LL;
      v24 = ((char *)v23 - (char *)v15 - 800) / 96;
      if ( v17 )
        v15->AbEntrySummary |= 1 << v24;
      else
        _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, 1 << v24);
    }
    --v15->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v15, v14, (unsigned int *)&v55);
    v19 = v15->SpecialApcDisable++ == -1;
    if ( v19 && ($B476B70DB57F76B110DA5B9238C3E934 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
      KiCheckForKernelApcDelivery();
    v19 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v19 && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  return 0LL;
}
