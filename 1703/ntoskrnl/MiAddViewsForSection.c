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
  __int64 v18; // rdx
  bool v19; // zf
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  _KLOCK_ENTRY *v23; // rbx
  __int64 v24; // rdx
  __int16 v25; // ax
  __int16 v26; // ax
  ULONG_PTR v27; // rcx
  ULONG_PTR SessionId; // r9
  struct _KTHREAD *v29; // r10
  ULONG_PTR v30; // r11
  int v31; // edx
  __int64 v32; // rdx
  __int64 v33; // rcx
  _KLOCK_ENTRY *v34; // rcx
  __int64 v35; // rdx
  __int16 v36; // ax
  signed __int32 v37; // eax
  ULONG_PTR v38; // rdi
  struct _KTHREAD *v39; // rbx
  ULONG_PTR v40; // r9
  __int64 v41; // rdx
  __int64 v42; // r10
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rcx
  _KLOCK_ENTRY *v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int16 v49; // ax
  ULONG_PTR v50; // rdi
  unsigned __int64 v51; // rbx
  __int64 v52; // r8
  __int64 v53; // rdi
  KIRQL v54; // al
  struct _KTHREAD *BugCheckParameter1; // [rsp+30h] [rbp-79h]
  int v56; // [rsp+38h] [rbp-71h]
  __int64 v57; // [rsp+40h] [rbp-69h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-61h]
  int v59; // [rsp+50h] [rbp-59h] BYREF
  int v60; // [rsp+58h] [rbp-51h] BYREF
  int v61; // [rsp+5Ch] [rbp-4Dh] BYREF
  ULONG_PTR BugCheckParameter2a; // [rsp+60h] [rbp-49h]
  int v63; // [rsp+68h] [rbp-41h] BYREF
  int v64; // [rsp+6Ch] [rbp-3Dh]
  __int64 v65; // [rsp+70h] [rbp-39h]
  ULONG_PTR v66; // [rsp+78h] [rbp-31h]
  int v67; // [rsp+80h] [rbp-29h]
  int v68; // [rsp+84h] [rbp-25h]
  int v69; // [rsp+8Ch] [rbp-1Dh]
  int v70; // [rsp+90h] [rbp-19h]
  _KLOCK_ENTRY *v71; // [rsp+98h] [rbp-11h]
  __int64 v72; // [rsp+A0h] [rbp-9h]
  ULONG_PTR v73; // [rsp+A8h] [rbp-1h]
  ULONG_PTR v74; // [rsp+B0h] [rbp+7h]
  void *retaddr; // [rsp+108h] [rbp+5Fh]
  BOOL v78; // [rsp+120h] [rbp+77h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+120h] [rbp+77h]
  unsigned int v80; // [rsp+128h] [rbp+7Fh]

  v3 = *BugCheckParameter2;
  v4 = 0;
  v5 = a3;
  v56 = a3;
  v6 = (ULONG_PTR)BugCheckParameter2;
  v66 = 0LL;
  v7 = *((_QWORD *)v3 + 8);
  if ( v7 )
  {
    CurrentThread = 0LL;
    v57 = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v57 = *(_QWORD *)v3;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v57 + 40, 0LL);
  }
  v64 = v5 & 0x180;
  CurrentIrql = KeGetCurrentIrql();
  v65 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3 + 18, (unsigned __int8)CurrentIrql);
  }
  else
  {
    v63 = 0;
    if ( _interlockedbittestandset(v3 + 18, 0x1Fu) )
      v63 = ExpWaitForSpinLockExclusiveAndAcquire(v3 + 18, (unsigned __int8)CurrentIrql);
    v9 = *((_DWORD *)v3 + 18);
    while ( (v9 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v9 & 0x40000000) == 0 )
      {
        v37 = _InterlockedCompareExchange(v3 + 18, v9 | 0x40000000, v9);
        v19 = v9 == v37;
        v9 = v37;
        if ( !v19 )
          continue;
      }
      KeYieldProcessorEx(&v63);
      v9 = *((_DWORD *)v3 + 18);
    }
  }
  if ( (v5 & 1) != 0 )
  {
    ++*((_QWORD *)v3 + 5);
    ++*((_DWORD *)v3 + 22);
    v5 |= 4u;
    v10 = v5;
    v56 = v5;
  }
  else
  {
    v10 = v5;
  }
  v72 = 0x7FFFFFFFFFFFFFFCLL;
  do
  {
    v74 = v6;
    v68 = *(_DWORD *)(v6 + 44);
    if ( !*(_QWORD *)(v6 + 8) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v3 + 18);
      __writecr8((unsigned __int8)v65);
      if ( !v7 )
      {
        v27 = v57 + 40;
        BugCheckParameter2a = v57 + 40;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v57 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        {
          ExfTryToWakePushLock(v27);
          v27 = BugCheckParameter2a;
        }
        v59 = 0;
        BugCheckParameter1 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v27) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx(BugCheckParameter1->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        v29 = BugCheckParameter1;
        --BugCheckParameter1->SpecialApcDisable;
        ++BugCheckParameter1->AbAllocationRegionCount;
        v30 = BugCheckParameter2a;
        v78 = BugCheckParameter1->AbAllocationRegionCount == 1;
        v31 = (char)BugCheckParameter1->AbEntrySummary | (char)BugCheckParameter1->AbOrphanedEntrySummary;
        v73 = BugCheckParameter2a & 0x7FFFFFFFFFFFFFFCLL;
        LODWORD(v32) = v31 ^ 0x3F;
        v19 = !_BitScanReverse((unsigned int *)&v33, v32);
        v67 = v33;
        if ( v19 )
          goto LABEL_86;
        while ( 1 )
        {
          v32 = ~(1 << v33) & (unsigned int)v32;
          v34 = &BugCheckParameter1->LockEntries[v33];
          v71 = v34;
          if ( (v34->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v34->LockState.0 & 1) == 0
            && (v72 & *(_QWORD *)&v34->LockState.0) == v73
            && v34->LockState.SessionId == (_DWORD)SessionId )
          {
            v34->AcquiredByte &= ~1u;
            if ( v34->LockState.0 )
              break;
          }
          v19 = !_BitScanReverse((unsigned int *)&v33, v32);
          v67 = v33;
          if ( v19 )
            goto LABEL_86;
        }
        if ( !v34 )
        {
LABEL_86:
          if ( (*((_DWORD *)&BugCheckParameter1->0 + 1) & 0x8000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)BugCheckParameter1, v30, SessionId, 0LL);
        }
        else
        {
          v34->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v34->LockState.LockState < 0 )
          {
            KiAbEntryRemoveFromTree(&v34->TreeNode, v32);
            v34 = v71;
            v29 = BugCheckParameter1;
            v30 = BugCheckParameter2a;
          }
          v59 = 0;
          v59 = v34->BoostBitmap.AllFields & 0x1FFFF;
          v34->BoostBitmap.AllFields &= 0xFFFE0000;
          v34->ThreadLocalFlags &= ~1u;
          v34->LockState.0 = 0LL;
          v35 = ((char *)v34 - (char *)v29 - 800) / 96;
          if ( v78 )
            v29->AbEntrySummary |= 1 << v35;
          else
            _InterlockedOr8((volatile signed __int8 *)&v29->AbOrphanedEntrySummary, 1 << v35);
        }
        --v29->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts(v29, v30, &v59);
        v36 = BugCheckParameter1->SpecialApcDisable + 1;
        BugCheckParameter1->SpecialApcDisable = v36;
        if ( !v36
          && ($69CD3F157F9F39B6F7113F2231989901 *)BugCheckParameter1->ApcState.ApcListHead[0].Flink != &BugCheckParameter1->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        KiLeaveGuardedRegionUnsafe(CurrentThread);
      }
      if ( (v5 & 2) != 0 )
        return 3221225865LL;
      result = MiCreatePrototypePtes(v6);
      v80 = result;
      if ( (int)result >= 0 )
      {
        if ( !v7 )
        {
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx(v57 + 40, 0LL);
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
        ExAcquirePushLockExclusiveEx(v57 + 40, 0LL);
      }
      ExAcquireSpinLockExclusive(v3 + 18);
LABEL_56:
      v10 = v56;
      continue;
    }
    active = MiReferenceActiveSubsection(v6, v10, (unsigned __int8)v65);
    v80 = active;
    if ( active < 0 )
    {
      if ( active != -1073741302 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v3 + 18);
        __writecr8((unsigned __int8)v65);
        if ( !v7 )
        {
          v38 = v57 + 40;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v57 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v38);
          v60 = 0;
          v39 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v38) == 1 )
            v40 = (unsigned int)MmGetSessionIdEx(v39->ApcState.Process);
          else
            v40 = 0xFFFFFFFFLL;
          --v39->SpecialApcDisable;
          ++v39->AbAllocationRegionCount;
          LODWORD(v41) = ((char)v39->AbEntrySummary | (char)v39->AbOrphanedEntrySummary) ^ 0x3F;
          AbAllocationRegionCount = v39->AbAllocationRegionCount;
          v42 = v38 & 0x7FFFFFFFFFFFFFFCLL;
          v19 = !_BitScanReverse((unsigned int *)&v43, v41);
          v69 = v43;
          if ( v19 )
          {
LABEL_132:
            if ( (*((_DWORD *)&v39->0 + 1) & 0x8000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v39, v38, v40, 0LL);
          }
          else
          {
            while ( 1 )
            {
              v44 = 1 << v43;
              v45 = v43;
              v46 = &v39->LockEntries[v45];
              v41 = ~v44 & (unsigned int)v41;
              if ( (v46->AcquiredByte & 1) != 0
                && (*(_DWORD *)&v46->LockState.0 & 1) == 0
                && (*(_QWORD *)&v46->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v42
                && v46->LockState.SessionId == (_DWORD)v40 )
              {
                v46->AcquiredByte &= ~1u;
                if ( v46->LockState.0 )
                  break;
              }
              v19 = !_BitScanReverse((unsigned int *)&v43, v41);
              v69 = v43;
              if ( v19 )
                goto LABEL_131;
            }
            if ( !v46 )
            {
LABEL_131:
              v38 = v57 + 40;
              goto LABEL_132;
            }
            v46->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v46->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v39->LockEntries[v45].TreeNode, v41);
            v60 = 0;
            v60 = v46->BoostBitmap.AllFields & 0x1FFFF;
            v46->BoostBitmap.AllFields &= 0xFFFE0000;
            v46->ThreadLocalFlags &= ~1u;
            v46->LockState.0 = 0LL;
            v47 = (unsigned __int128)(((char *)v46 - (char *)v39 - 800) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
            v38 = v57 + 40;
            v48 = ((unsigned __int64)v47 >> 63) + (v47 >> 4);
            if ( AbAllocationRegionCount == 1 )
              v39->AbEntrySummary |= 1 << v48;
            else
              _InterlockedOr8((volatile signed __int8 *)&v39->AbOrphanedEntrySummary, 1 << v48);
          }
          --v39->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts(v39, v38, &v60);
          v49 = v39->SpecialApcDisable + 1;
          v39->SpecialApcDisable = v49;
          if ( !v49 && ($69CD3F157F9F39B6F7113F2231989901 *)v39->ApcState.ApcListHead[0].Flink != &v39->152 )
            KiCheckForKernelApcDelivery();
          KiLeaveGuardedRegionUnsafe(CurrentThread);
        }
        result = v80;
LABEL_122:
        v50 = v66;
        if ( v66 )
        {
          v51 = ExAcquireSpinLockExclusive(v3 + 18);
          v52 = 0LL;
          if ( (v5 & 5) == 0 )
            v52 = v64 | 8u;
          v53 = MiDecrementSubsections(BugCheckParameter2, v50, v52);
          ExReleaseSpinLockExclusiveFromDpcLevel(v3 + 18);
          __writecr8(v51);
          if ( v53 )
          {
            LOBYTE(v4) = v7 != 0;
            MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_14036C8F8 + 8LL * (v3[15] & 0x3FF)), v4, v53);
          }
          result = v80;
        }
        if ( (v5 & 1) != 0 )
        {
          v54 = ExAcquireSpinLockExclusive(v3 + 18);
          --*((_QWORD *)v3 + 5);
          --*((_DWORD *)v3 + 22);
          MiCheckControlArea(v3, v54);
          return v80;
        }
        return result;
      }
      goto LABEL_56;
    }
    v66 = v6;
    if ( v7 && (*(_DWORD *)(v6 + 52) & 0x40000000) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v3 + 18);
      __writecr8((unsigned __int8)v65);
      result = MiAllocateFileExtents(v6, 0);
      v80 = result;
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
    v66 = v74;
    if ( v7 )
      goto LABEL_56;
    v10 = v64 | 4;
    v66 = v74;
    v56 = v64 | 4;
  }
  while ( v6 );
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3 + 18, retaddr);
  else
    *((_DWORD *)v3 + 18) = 0;
  __writecr8((unsigned __int8)v65);
  if ( !v7 )
  {
    v14 = v57 + 40;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v57 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v14);
    v61 = 0;
    v15 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v14) == 1 )
      v16 = MmGetSessionIdEx(v15->ApcState.Process);
    else
      v16 = -1;
    --v15->SpecialApcDisable;
    v17 = ++v15->AbAllocationRegionCount == 1;
    LODWORD(v18) = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
    v19 = !_BitScanReverse((unsigned int *)&v20, v18);
    v70 = v20;
    if ( v19 )
      goto LABEL_52;
    while ( 1 )
    {
      v21 = 1 << v20;
      v22 = v20;
      v23 = &v15->LockEntries[v22];
      v18 = ~v21 & (unsigned int)v18;
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
      v70 = v20;
      if ( v19 )
        goto LABEL_52;
    }
    if ( !v23 )
    {
LABEL_52:
      if ( (*((_DWORD *)&v15->0 + 1) & 0x8000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v15, v14, v16, 0LL);
    }
    else
    {
      v23->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v23->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v15->LockEntries[v22].TreeNode, v18);
      v61 = 0;
      v61 = v23->BoostBitmap.AllFields & 0x1FFFF;
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
    KiAbThreadRemoveBoosts(v15, v14, &v61);
    v25 = v15->SpecialApcDisable + 1;
    v15->SpecialApcDisable = v25;
    if ( !v25 && ($69CD3F157F9F39B6F7113F2231989901 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
      KiCheckForKernelApcDelivery();
    v26 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v26;
    if ( !v26
      && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return 0LL;
}
