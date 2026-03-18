/*
 * XREFs of MiAddViewsForSection @ 0x140099930
 * Callers:
 *     MmMapViewInSystemCache @ 0x1400A9520 (MmMapViewInSystemCache.c)
 *     MiAddMappedPtes @ 0x1404976A0 (MiAddMappedPtes.c)
 *     MiMapViewOfDataSection @ 0x140512AC0 (MiMapViewOfDataSection.c)
 *     MiPfPrepareReadList @ 0x140518E60 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140519D10 (MiPfPrepareSequentialReadList.c)
 *     MiCommitPagefileBackedSection @ 0x140549FD0 (MiCommitPagefileBackedSection.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReferenceActiveSubsection @ 0x14009A070 (MiReferenceActiveSubsection.c)
 *     MiCheckControlArea @ 0x14009B950 (MiCheckControlArea.c)
 *     MiDecrementSubsections @ 0x1400A8D04 (MiDecrementSubsections.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B7600 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MiCreatePrototypePtes @ 0x14011933C (MiCreatePrototypePtes.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiAllocateFileExtents @ 0x1406B6DDC (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiAddViewsForSection(volatile signed __int32 **BugCheckParameter2, unsigned __int64 a2, int a3)
{
  volatile signed __int32 *v3; // r13
  unsigned int v4; // esi
  unsigned int v5; // r15d
  ULONG_PTR v6; // rdi
  __int64 v7; // r12
  __int64 CurrentIrql; // rcx
  signed __int32 v9; // edx
  unsigned int v10; // ecx
  int active; // eax
  unsigned __int64 v12; // rcx
  __int64 result; // rax
  ULONG_PTR v14; // r14
  struct _KTHREAD *v15; // rdi
  unsigned int v16; // r10d
  BOOL v17; // r15d
  __int64 v18; // r8
  __int64 v19; // rdx
  bool v20; // zf
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  _KLOCK_ENTRY *v24; // rbx
  __int64 v25; // rdx
  __int16 v26; // ax
  __int16 v27; // ax
  ULONG_PTR v28; // rcx
  ULONG_PTR SessionId; // r9
  struct _KTHREAD *v30; // r10
  ULONG_PTR v31; // r11
  int v32; // edx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int16 v37; // ax
  signed __int32 v38; // eax
  ULONG_PTR v39; // rdi
  struct _KTHREAD *v40; // rbx
  ULONG_PTR v41; // r9
  __int64 v42; // rdx
  __int64 v43; // r10
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  _KLOCK_ENTRY *v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int16 v50; // ax
  ULONG_PTR v51; // rdi
  unsigned __int64 v52; // rbx
  __int64 v53; // r8
  __int64 v54; // rdi
  KIRQL v55; // al
  struct _KTHREAD *BugCheckParameter1; // [rsp+30h] [rbp-79h]
  int v57; // [rsp+38h] [rbp-71h]
  __int64 v58; // [rsp+40h] [rbp-69h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-61h]
  int v60; // [rsp+50h] [rbp-59h] BYREF
  int v61; // [rsp+58h] [rbp-51h] BYREF
  int v62; // [rsp+5Ch] [rbp-4Dh] BYREF
  ULONG_PTR BugCheckParameter2a; // [rsp+60h] [rbp-49h]
  int v64; // [rsp+68h] [rbp-41h] BYREF
  int v65; // [rsp+6Ch] [rbp-3Dh]
  __int64 v66; // [rsp+70h] [rbp-39h]
  ULONG_PTR v67; // [rsp+78h] [rbp-31h]
  int v68; // [rsp+80h] [rbp-29h]
  int v69; // [rsp+84h] [rbp-25h]
  int v70; // [rsp+8Ch] [rbp-1Dh]
  int v71; // [rsp+90h] [rbp-19h]
  __int64 v72; // [rsp+98h] [rbp-11h]
  __int64 v73; // [rsp+A0h] [rbp-9h]
  ULONG_PTR v74; // [rsp+A8h] [rbp-1h]
  ULONG_PTR v75; // [rsp+B0h] [rbp+7h]
  void *retaddr; // [rsp+108h] [rbp+5Fh]
  BOOL v79; // [rsp+120h] [rbp+77h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+120h] [rbp+77h]
  unsigned int v81; // [rsp+128h] [rbp+7Fh]

  v3 = *BugCheckParameter2;
  v4 = 0;
  v5 = a3;
  v57 = a3;
  v6 = (ULONG_PTR)BugCheckParameter2;
  v67 = 0LL;
  v7 = *((_QWORD *)v3 + 8);
  if ( v7 )
  {
    CurrentThread = 0LL;
    v58 = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v58 = *(_QWORD *)v3;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v58 + 40, 0LL);
  }
  v65 = v5 & 0x180;
  CurrentIrql = KeGetCurrentIrql();
  v66 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3 + 18, (unsigned __int8)CurrentIrql);
  }
  else
  {
    v64 = 0;
    if ( _interlockedbittestandset(v3 + 18, 0x1Fu) )
      v64 = ExpWaitForSpinLockExclusiveAndAcquire(v3 + 18, (unsigned __int8)CurrentIrql);
    v9 = *((_DWORD *)v3 + 18);
    while ( (v9 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v9 & 0x40000000) == 0 )
      {
        v38 = _InterlockedCompareExchange(v3 + 18, v9 | 0x40000000, v9);
        v20 = v9 == v38;
        v9 = v38;
        if ( !v20 )
          continue;
      }
      KeYieldProcessorEx(&v64);
      v9 = *((_DWORD *)v3 + 18);
    }
  }
  if ( (v5 & 1) != 0 )
  {
    ++*((_QWORD *)v3 + 5);
    ++*((_DWORD *)v3 + 22);
    v5 |= 4u;
    v10 = v5;
    v57 = v5;
  }
  else
  {
    v10 = v5;
  }
  v73 = 0x7FFFFFFFFFFFFFFCLL;
  do
  {
    v75 = v6;
    v69 = *(_DWORD *)(v6 + 44);
    if ( !*(_QWORD *)(v6 + 8) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v3 + 18);
      __writecr8((unsigned __int8)v66);
      if ( !v7 )
      {
        v28 = v58 + 40;
        BugCheckParameter2a = v58 + 40;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v58 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        {
          ExfTryToWakePushLock(v28);
          v28 = BugCheckParameter2a;
        }
        v60 = 0;
        BugCheckParameter1 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v28) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx(BugCheckParameter1->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        v30 = BugCheckParameter1;
        --BugCheckParameter1->SpecialApcDisable;
        ++BugCheckParameter1->AbAllocationRegionCount;
        v31 = BugCheckParameter2a;
        v79 = BugCheckParameter1->AbAllocationRegionCount == 1;
        v32 = (char)BugCheckParameter1->AbEntrySummary | (char)BugCheckParameter1->AbOrphanedEntrySummary;
        v74 = BugCheckParameter2a & 0x7FFFFFFFFFFFFFFCLL;
        LODWORD(v33) = v32 ^ 0x3F;
        v20 = !_BitScanReverse((unsigned int *)&v34, v33);
        v68 = v34;
        if ( v20 )
          goto LABEL_86;
        while ( 1 )
        {
          v33 = ~(1 << v34) & (unsigned int)v33;
          v35 = (__int64)&BugCheckParameter1->LockEntries[v34];
          v72 = v35;
          if ( (*(_BYTE *)(v35 + 26) & 1) != 0
            && (*(_DWORD *)(v35 + 32) & 1) == 0
            && (v73 & *(_QWORD *)(v35 + 32)) == v74
            && *(_DWORD *)(v35 + 40) == (_DWORD)SessionId )
          {
            *(_BYTE *)(v35 + 26) &= ~1u;
            if ( *(_QWORD *)(v35 + 32) )
              break;
          }
          v20 = !_BitScanReverse((unsigned int *)&v34, v33);
          v68 = v34;
          if ( v20 )
            goto LABEL_86;
        }
        if ( !v35 )
        {
LABEL_86:
          if ( (*((_DWORD *)&BugCheckParameter1->0 + 1) & 0x8000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)BugCheckParameter1, v31, SessionId, 0LL);
        }
        else
        {
          *(_BYTE *)(v35 + 32) |= 2u;
          if ( *(__int64 *)(v35 + 32) < 0 )
          {
            KiAbEntryRemoveFromTree(v35, v33, 1LL);
            v35 = v72;
            v30 = BugCheckParameter1;
            v31 = BugCheckParameter2a;
          }
          v60 = 0;
          v60 = *(_DWORD *)(v35 + 88) & 0x1FFFF;
          *(_DWORD *)(v35 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v35 + 25) &= ~1u;
          *(_QWORD *)(v35 + 32) = 0LL;
          v36 = (v35 - (__int64)v30 - 800) / 96;
          if ( v79 )
            v30->AbEntrySummary |= 1 << v36;
          else
            _InterlockedOr8((volatile signed __int8 *)&v30->AbOrphanedEntrySummary, 1 << v36);
        }
        --v30->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts(v30, v31, &v60);
        v37 = BugCheckParameter1->SpecialApcDisable + 1;
        BugCheckParameter1->SpecialApcDisable = v37;
        if ( !v37
          && ($69CD3F157F9F39B6F7113F2231989901 *)BugCheckParameter1->ApcState.ApcListHead[0].Flink != &BugCheckParameter1->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        KiLeaveGuardedRegionUnsafe(CurrentThread);
      }
      if ( (v5 & 2) != 0 )
        return 3221225865LL;
      result = MiCreatePrototypePtes(v6);
      v81 = result;
      if ( (int)result >= 0 )
      {
        if ( !v7 )
        {
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx(v58 + 40, 0LL);
        }
LABEL_50:
        ExAcquireSpinLockExclusive(v3 + 18);
        goto LABEL_14;
      }
      if ( (_DWORD)result != -1073741302 )
        goto LABEL_122;
      if ( !v7 )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(v58 + 40, 0LL);
      }
      ExAcquireSpinLockExclusive(v3 + 18);
LABEL_56:
      v10 = v57;
      continue;
    }
    active = MiReferenceActiveSubsection(v6, v10, (unsigned __int8)v66);
    v81 = active;
    if ( active < 0 )
    {
      if ( active != -1073741302 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v3 + 18);
        __writecr8((unsigned __int8)v66);
        if ( !v7 )
        {
          v39 = v58 + 40;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v58 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v39);
          v61 = 0;
          v40 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v39) == 1 )
            v41 = (unsigned int)MmGetSessionIdEx(v40->ApcState.Process);
          else
            v41 = 0xFFFFFFFFLL;
          --v40->SpecialApcDisable;
          ++v40->AbAllocationRegionCount;
          LODWORD(v42) = ((char)v40->AbEntrySummary | (char)v40->AbOrphanedEntrySummary) ^ 0x3F;
          AbAllocationRegionCount = v40->AbAllocationRegionCount;
          v43 = v39 & 0x7FFFFFFFFFFFFFFCLL;
          v20 = !_BitScanReverse((unsigned int *)&v44, v42);
          v70 = v44;
          if ( v20 )
          {
LABEL_132:
            if ( (*((_DWORD *)&v40->0 + 1) & 0x8000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v40, v39, v41, 0LL);
          }
          else
          {
            while ( 1 )
            {
              v45 = 1 << v44;
              v46 = v44;
              v47 = &v40->LockEntries[v46];
              v42 = ~v45 & (unsigned int)v42;
              if ( (v47->AcquiredByte & 1) != 0
                && (*(_DWORD *)&v47->LockState.0 & 1) == 0
                && (*(_QWORD *)&v47->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v43
                && v47->LockState.SessionId == (_DWORD)v41 )
              {
                v47->AcquiredByte &= ~1u;
                if ( v47->LockState.0 )
                  break;
              }
              v20 = !_BitScanReverse((unsigned int *)&v44, v42);
              v70 = v44;
              if ( v20 )
                goto LABEL_131;
            }
            if ( !v47 )
            {
LABEL_131:
              v39 = v58 + 40;
              goto LABEL_132;
            }
            v47->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v47->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree((__int64)&v40->LockEntries[v46], v42, 1LL);
            v61 = 0;
            v61 = v47->BoostBitmap.AllFields & 0x1FFFF;
            v47->BoostBitmap.AllFields &= 0xFFFE0000;
            v47->ThreadLocalFlags &= ~1u;
            v47->LockState.0 = 0LL;
            v48 = (unsigned __int128)(((char *)v47 - (char *)v40 - 800) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
            v39 = v58 + 40;
            v49 = ((unsigned __int64)v48 >> 63) + (v48 >> 4);
            if ( AbAllocationRegionCount == 1 )
              v40->AbEntrySummary |= 1 << v49;
            else
              _InterlockedOr8((volatile signed __int8 *)&v40->AbOrphanedEntrySummary, 1 << v49);
          }
          --v40->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts(v40, v39, &v61);
          v50 = v40->SpecialApcDisable + 1;
          v40->SpecialApcDisable = v50;
          if ( !v50 && ($69CD3F157F9F39B6F7113F2231989901 *)v40->ApcState.ApcListHead[0].Flink != &v40->152 )
            KiCheckForKernelApcDelivery();
          KiLeaveGuardedRegionUnsafe(CurrentThread);
        }
        result = v81;
LABEL_122:
        v51 = v67;
        if ( v67 )
        {
          v52 = ExAcquireSpinLockExclusive(v3 + 18);
          v53 = 0LL;
          if ( (v5 & 5) == 0 )
            v53 = v65 | 8u;
          v54 = MiDecrementSubsections(BugCheckParameter2, v51, v53);
          ExReleaseSpinLockExclusiveFromDpcLevel(v3 + 18);
          __writecr8(v52);
          if ( v54 )
          {
            LOBYTE(v4) = v7 != 0;
            MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_14036C8F8 + 8LL * (v3[15] & 0x3FF)), v4, v54);
          }
          result = v81;
        }
        if ( (v5 & 1) != 0 )
        {
          v55 = ExAcquireSpinLockExclusive(v3 + 18);
          --*((_QWORD *)v3 + 5);
          --*((_DWORD *)v3 + 22);
          MiCheckControlArea(v3, v55);
          return v81;
        }
        return result;
      }
      goto LABEL_56;
    }
    v67 = v6;
    if ( v7 && (*(_DWORD *)(v6 + 52) & 0x40000000) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v3 + 18);
      __writecr8((unsigned __int8)v66);
      result = MiAllocateFileExtents(v6, 0);
      v81 = result;
      if ( (int)result < 0 )
        goto LABEL_122;
      goto LABEL_50;
    }
LABEL_14:
    if ( a2 )
    {
      v12 = *(unsigned int *)(v6 + 44);
      if ( a2 <= v12 )
        break;
      a2 -= v12;
    }
    v6 = *(_QWORD *)(v6 + 16);
    v67 = v75;
    if ( v7 )
      goto LABEL_56;
    v10 = v65 | 4;
    v67 = v75;
    v57 = v65 | 4;
  }
  while ( v6 );
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3 + 18, retaddr);
  else
    *((_DWORD *)v3 + 18) = 0;
  __writecr8((unsigned __int8)v66);
  if ( !v7 )
  {
    v14 = v58 + 40;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v58 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v14);
    v62 = 0;
    v15 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v14) == 1 )
      v16 = MmGetSessionIdEx(v15->ApcState.Process);
    else
      v16 = -1;
    --v15->SpecialApcDisable;
    v17 = ++v15->AbAllocationRegionCount == 1;
    v18 = v14 & 0x7FFFFFFFFFFFFFFCLL;
    LODWORD(v19) = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
    v20 = !_BitScanReverse((unsigned int *)&v21, v19);
    v71 = v21;
    if ( v20 )
      goto LABEL_52;
    while ( 1 )
    {
      v22 = 1 << v21;
      v23 = v21;
      v24 = &v15->LockEntries[v23];
      v19 = ~v22 & (unsigned int)v19;
      if ( (v24->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v24->LockState.0 & 1) == 0
        && (*(_QWORD *)&v24->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v18
        && v24->LockState.SessionId == v16 )
      {
        v24->AcquiredByte &= ~1u;
        if ( v24->LockState.0 )
          break;
      }
      v20 = !_BitScanReverse((unsigned int *)&v21, v19);
      v71 = v21;
      if ( v20 )
        goto LABEL_52;
    }
    if ( !v24 )
    {
LABEL_52:
      if ( (*((_DWORD *)&v15->0 + 1) & 0x8000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v15, v14, v16, 0LL);
    }
    else
    {
      v24->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v24->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree((__int64)&v15->LockEntries[v23], v19, v18);
      v62 = 0;
      v62 = v24->BoostBitmap.AllFields & 0x1FFFF;
      v24->BoostBitmap.AllFields &= 0xFFFE0000;
      v24->ThreadLocalFlags &= ~1u;
      v24->LockState.0 = 0LL;
      v25 = ((char *)v24 - (char *)v15 - 800) / 96;
      if ( v17 )
        v15->AbEntrySummary |= 1 << v25;
      else
        _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, 1 << v25);
    }
    --v15->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v15, v14, &v62);
    v26 = v15->SpecialApcDisable + 1;
    v15->SpecialApcDisable = v26;
    if ( !v26 && ($69CD3F157F9F39B6F7113F2231989901 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
      KiCheckForKernelApcDelivery();
    v27 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v27;
    if ( !v27
      && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return 0LL;
}
