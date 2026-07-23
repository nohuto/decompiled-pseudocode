/*
 * XREFs of MiAddViewsForSection @ 0x1400E5550
 * Callers:
 *     MmMapViewInSystemCache @ 0x1400DD850 (MmMapViewInSystemCache.c)
 *     MiPfPrepareSequentialReadList @ 0x1404ADAD0 (MiPfPrepareSequentialReadList.c)
 *     MiAddMappedPtes @ 0x1404BC450 (MiAddMappedPtes.c)
 *     MiCommitPagefileBackedSection @ 0x1404D7638 (MiCommitPagefileBackedSection.c)
 *     MiMapViewOfDataSection @ 0x140594470 (MiMapViewOfDataSection.c)
 *     MiPfPrepareReadList @ 0x1405B7520 (MiPfPrepareReadList.c)
 * Callees:
 *     MiCreatePrototypePtes @ 0x14004AB9C (MiCreatePrototypePtes.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x1400E5110 (MiCheckControlArea.c)
 *     MiDecrementSubsections @ 0x1400E5350 (MiDecrementSubsections.c)
 *     MiReferenceActiveSubsection @ 0x1400E5D50 (MiReferenceActiveSubsection.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiAllocateFileExtents @ 0x14074DC04 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiAddViewsForSection(__int64 *BugCheckParameter2, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r12
  unsigned int v4; // ebp
  unsigned __int64 v5; // rsi
  unsigned int v6; // r14d
  ULONG_PTR v8; // rdi
  __int64 CurrentIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v12; // edx
  int active; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  struct _KPRCB *v17; // rcx
  __int64 v18; // rdx
  __int64 result; // rax
  ULONG_PTR v20; // rsi
  struct _KTHREAD *v21; // rdi
  unsigned int v22; // r10d
  BOOL v23; // r14d
  unsigned int v24; // edx
  bool v25; // zf
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  _KLOCK_ENTRY *v29; // rbx
  __int64 v30; // rdx
  struct _KTHREAD *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  volatile signed __int64 *v36; // rcx
  ULONG_PTR v37; // r10
  ULONG_PTR v38; // r11
  ULONG_PTR v39; // r9
  unsigned int v40; // r8d
  __int64 v41; // rcx
  ULONG_PTR v42; // rcx
  unsigned __int8 v43; // al
  ULONG_PTR v44; // rcx
  signed __int32 v45; // eax
  unsigned int v46; // edi
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  ULONG_PTR v51; // rsi
  struct _KTHREAD *v52; // rbx
  ULONG_PTR SessionId; // r9
  unsigned int v54; // edx
  __int64 v55; // r10
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // rcx
  _KLOCK_ENTRY *v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rsi
  unsigned __int64 v63; // rbx
  __int64 v64; // rsi
  KIRQL v65; // al
  int v66; // eax
  int v67; // [rsp+30h] [rbp-C8h] BYREF
  int v68; // [rsp+34h] [rbp-C4h] BYREF
  int v69; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v70; // [rsp+40h] [rbp-B8h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-B0h]
  int v72; // [rsp+50h] [rbp-A8h] BYREF
  int v73; // [rsp+54h] [rbp-A4h]
  __int64 v74; // [rsp+58h] [rbp-A0h]
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-98h]
  ULONG_PTR v76; // [rsp+68h] [rbp-90h]
  int v77; // [rsp+70h] [rbp-88h]
  BOOL v78; // [rsp+74h] [rbp-84h]
  unsigned int v79; // [rsp+78h] [rbp-80h]
  int v80; // [rsp+7Ch] [rbp-7Ch]
  int v81; // [rsp+80h] [rbp-78h]
  int v82; // [rsp+84h] [rbp-74h]
  ULONG_PTR BugCheckParameter2a; // [rsp+88h] [rbp-70h]
  __int64 v84; // [rsp+90h] [rbp-68h]
  ULONG_PTR v85; // [rsp+98h] [rbp-60h]
  ULONG_PTR v86; // [rsp+A0h] [rbp-58h]
  void *retaddr; // [rsp+F8h] [rbp+0h]
  unsigned int BugCheckParameter3; // [rsp+100h] [rbp+8h]
  unsigned int BugCheckParameter3a; // [rsp+100h] [rbp+8h]
  unsigned __int64 v90; // [rsp+108h] [rbp+10h]
  int v91; // [rsp+110h] [rbp+18h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+110h] [rbp+18h]
  unsigned int v93; // [rsp+118h] [rbp+20h]
  ULONG_PTR v94; // [rsp+118h] [rbp+20h]

  v90 = a2;
  v3 = *BugCheckParameter2;
  v4 = 0;
  v5 = a2;
  v76 = 0LL;
  v6 = a3;
  v93 = a3;
  v8 = (ULONG_PTR)BugCheckParameter2;
  if ( *(_QWORD *)(v3 + 64) )
  {
    v91 = 1;
    CurrentThread = 0LL;
    v70 = 0LL;
  }
  else
  {
    v32 = *(_QWORD *)v3;
    v91 = 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v70 = v32;
    ExAcquirePushLockExclusiveEx(v32 + 40, 0LL);
  }
  v73 = v6 & 0x180;
  CurrentIrql = KeGetCurrentIrql();
  v74 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3 + 72, (unsigned __int8)CurrentIrql);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v72 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v47 = SchedulerAssist[5];
        SchedulerAssist[5] = v47 + 1;
        if ( v47 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset((volatile signed __int32 *)(v3 + 72), 0x1Fu) )
    {
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      v72 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v3 + 72), CurrentIrql);
    }
    v12 = *(_DWORD *)(v3 + 72);
    while ( (v12 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v12 & 0x40000000) == 0 )
      {
        v45 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 72), v12 | 0x40000000, v12);
        v25 = v12 == v45;
        v12 = v45;
        if ( !v25 )
          continue;
      }
      KeYieldProcessorEx(&v72);
      v12 = *(_DWORD *)(v3 + 72);
    }
  }
  if ( (v6 & 1) != 0 )
  {
    ++*(_QWORD *)(v3 + 40);
    ++*(_DWORD *)(v3 + 88);
    v6 |= 4u;
    v93 = v6;
  }
  v84 = 0x7FFFFFFFFFFFFFFCLL;
  do
  {
    v79 = *(_DWORD *)(v8 + 44);
    v86 = v8;
    if ( *(_QWORD *)(v8 + 8) )
    {
      active = MiReferenceActiveSubsection(v8);
      BugCheckParameter3 = active;
      if ( active >= 0 )
      {
        v76 = v8;
        if ( v91 == 1 && (*(_DWORD *)(v8 + 52) & 0x40000000) != 0 )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
          __writecr8((unsigned __int8)v74);
          result = MiAllocateFileExtents(v8, 0);
          BugCheckParameter3 = result;
          if ( (int)result < 0 )
          {
LABEL_95:
            v46 = v91;
LABEL_128:
            v62 = v76;
            if ( v76 )
            {
              v63 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
              if ( (v6 & 5) == 0 )
                v4 = v73 | 8;
              v64 = MiDecrementSubsections((ULONG_PTR)BugCheckParameter2, v62, v4);
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
              __writecr8(v63);
              if ( v64 )
                MiReturnCrossPartitionSectionCharges(
                  *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)),
                  v46,
                  v64);
              result = BugCheckParameter3;
            }
            if ( (v6 & 1) != 0 )
            {
              v65 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
              --*(_QWORD *)(v3 + 40);
              --*(_DWORD *)(v3 + 88);
              MiCheckControlArea(v3, v65);
              return BugCheckParameter3;
            }
            return result;
          }
          ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
          v5 = v90;
        }
        goto LABEL_15;
      }
      if ( active != -1073741302 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
        __writecr8((unsigned __int8)v74);
        v46 = v91;
        if ( !v91 )
        {
          v51 = v70 + 40;
          v94 = v70 + 40;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v70 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v51, v48, v49, v50);
          v68 = 0;
          v52 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v51) == 1 )
            SessionId = (unsigned int)MmGetSessionIdEx(v52->ApcState.Process);
          else
            SessionId = 0xFFFFFFFFLL;
          --v52->SpecialApcDisable;
          ++v52->AbAllocationRegionCount;
          v54 = ((char)v52->AbEntrySummary | (char)v52->AbOrphanedEntrySummary) ^ 0x3F;
          AbAllocationRegionCount = v52->AbAllocationRegionCount;
          v55 = v51 & 0x7FFFFFFFFFFFFFFCLL;
          v25 = !_BitScanReverse((unsigned int *)&v56, v54);
          v81 = v56;
          if ( v25 )
          {
LABEL_138:
            if ( (*((_DWORD *)&v52->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v52, v51, SessionId, 0LL);
          }
          else
          {
            while ( 1 )
            {
              v57 = 1 << v56;
              v58 = v56;
              v59 = &v52->LockEntries[v58];
              v54 &= ~v57;
              if ( (v59->AcquiredByte & 1) != 0
                && (*(_DWORD *)&v59->LockState.0 & 1) == 0
                && (*(_QWORD *)&v59->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v55
                && v59->LockState.SessionId == (_DWORD)SessionId )
              {
                v59->AcquiredByte &= ~1u;
                if ( v59->LockState.0 )
                  break;
              }
              v25 = !_BitScanReverse((unsigned int *)&v56, v54);
              v81 = v56;
              if ( v25 )
                goto LABEL_137;
            }
            if ( !v59 )
            {
LABEL_137:
              v51 = v94;
              goto LABEL_138;
            }
            v59->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v59->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v52->LockEntries[v58].TreeNode);
            v68 = 0;
            v68 = v59->BoostBitmap.AllFields & 0x1FFFF;
            v59->BoostBitmap.AllFields &= 0xFFFE0000;
            v59->ThreadLocalFlags &= ~1u;
            v59->LockState.0 = 0LL;
            v60 = (unsigned __int128)(((char *)v59 - (char *)v52 - 800) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
            v51 = v94;
            v61 = ((unsigned __int64)v60 >> 63) + (v60 >> 4);
            if ( AbAllocationRegionCount == 1 )
              v52->AbEntrySummary |= 1 << v61;
            else
              _InterlockedOr8((volatile signed __int8 *)&v52->AbOrphanedEntrySummary, 1 << v61);
          }
          --v52->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts(v52, v51, &v68);
          v25 = v52->SpecialApcDisable++ == -1;
          if ( v25 && ($005F0E83B22994B61E86C72E0CE43C71 *)v52->ApcState.ApcListHead[0].Flink != &v52->152 )
            KiCheckForKernelApcDelivery();
          KiLeaveGuardedRegionUnsafe(CurrentThread);
        }
        result = BugCheckParameter3;
        goto LABEL_128;
      }
    }
    else
    {
      v80 = *(_DWORD *)(v8 + 52) & 0x3FFFFFFF;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      __writecr8((unsigned __int8)v74);
      if ( !v91 )
      {
        v36 = (volatile signed __int64 *)(v70 + 40);
        BugCheckParameter2a = v70 + 40;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v70 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        {
          ExfTryToWakePushLock(v36, v33, v34, v35);
          v36 = (volatile signed __int64 *)BugCheckParameter2a;
        }
        v67 = 0;
        BugCheckParameter1 = (ULONG_PTR)KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v36) == 1 )
          BugCheckParameter3a = MmGetSessionIdEx(*(_QWORD *)(BugCheckParameter1 + 184));
        else
          BugCheckParameter3a = -1;
        v37 = BugCheckParameter1;
        --*(_WORD *)(BugCheckParameter1 + 486);
        ++*(_BYTE *)(v37 + 794);
        v38 = BugCheckParameter2a;
        v78 = *(_BYTE *)(v37 + 794) == 1;
        v39 = BugCheckParameter2a & 0x7FFFFFFFFFFFFFFCLL;
        v40 = (*(char *)(v37 + 792) | *(char *)(v37 + 1422)) ^ 0x3F;
        v25 = !_BitScanReverse((unsigned int *)&v41, v40);
        v77 = v41;
        if ( v25 )
          goto LABEL_87;
        while ( 1 )
        {
          v40 &= ~(1 << v41);
          v42 = v37 + 96 * v41 + 800;
          v85 = v42;
          if ( (*(_BYTE *)(v42 + 26) & 1) != 0
            && (*(_DWORD *)(v42 + 32) & 1) == 0
            && (v84 & *(_QWORD *)(v42 + 32)) == v39
            && *(_DWORD *)(v42 + 40) == BugCheckParameter3a )
          {
            *(_BYTE *)(v42 + 26) &= ~1u;
            if ( *(_QWORD *)(v42 + 32) )
              break;
          }
          v25 = !_BitScanReverse((unsigned int *)&v41, v40);
          v77 = v41;
          if ( v25 )
            goto LABEL_87;
        }
        if ( !v42 )
        {
LABEL_87:
          if ( (*(_DWORD *)(v37 + 120) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, v37, v38, BugCheckParameter3a, 0LL);
        }
        else
        {
          *(_BYTE *)(v42 + 32) |= 2u;
          if ( *(__int64 *)(v42 + 32) < 0 )
          {
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v42);
            v42 = v85;
            v37 = BugCheckParameter1;
            v38 = BugCheckParameter2a;
          }
          v67 = 0;
          v67 = *(_DWORD *)(v42 + 88) & 0x1FFFF;
          *(_DWORD *)(v42 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v42 + 25) &= ~1u;
          *(_QWORD *)(v42 + 32) = 0LL;
          v43 = 1 << ((__int64)(v42 - v37 - 800) / 96);
          if ( v78 )
            *(_BYTE *)(v37 + 792) |= v43;
          else
            _InterlockedOr8((volatile signed __int8 *)(v37 + 1422), v43);
        }
        --*(_BYTE *)(v37 + 794);
        KiAbThreadRemoveBoosts(v37, v38, &v67);
        v44 = BugCheckParameter1;
        v25 = (*(_WORD *)(BugCheckParameter1 + 486))++ == 0xFFFF;
        if ( v25 && *(_QWORD *)(v44 + 152) != v44 + 152 )
          KiCheckForKernelApcDelivery();
        KiLeaveGuardedRegionUnsafe(CurrentThread);
      }
      if ( (v6 & 2) != 0 )
        return 3221225865LL;
      result = MiCreatePrototypePtes((__int64 *)v8, v93, v79 - v80, v79);
      BugCheckParameter3 = result;
      if ( (int)result >= 0 )
      {
        if ( !v91 )
        {
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx(v70 + 40, 0LL);
        }
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
LABEL_15:
        if ( v5 )
        {
          v16 = *(unsigned int *)(v8 + 44);
          if ( v5 <= v16 )
            break;
          v5 -= v16;
          v90 = v5;
        }
        v8 = *(_QWORD *)(v8 + 16);
        v76 = v86;
        if ( !v91 )
        {
          v76 = v86;
          v93 = v73 | 4;
        }
        continue;
      }
      if ( (_DWORD)result != -1073741302 )
        goto LABEL_95;
      if ( !v91 )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(v70 + 40, 0LL);
      }
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    }
  }
  while ( v8 );
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3 + 72, retaddr);
  else
    *(_DWORD *)(v3 + 72) = 0;
  v17 = KeGetCurrentPrcb();
  v18 = (__int64)v17->SchedulerAssist;
  if ( v18 )
  {
    if ( v17->NestingLevel <= 1u )
    {
      v66 = *(_DWORD *)(v18 + 20) - 1;
      *(_DWORD *)(v18 + 20) = v66;
      if ( !v66 )
      {
        v14 = *(unsigned __int8 *)(v18 + 27);
        if ( !*(_BYTE *)(v18 + 25) && !(_BYTE)v14 )
          KiPerformUnboostKick(v17);
      }
    }
  }
  __writecr8((unsigned __int8)v74);
  if ( !v91 )
  {
    v20 = v70 + 40;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v70 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v20, v18, v14, v15);
    v69 = 0;
    v21 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v20) == 1 )
      v22 = MmGetSessionIdEx(v21->ApcState.Process);
    else
      v22 = -1;
    --v21->SpecialApcDisable;
    v23 = ++v21->AbAllocationRegionCount == 1;
    v24 = ((char)v21->AbEntrySummary | (char)v21->AbOrphanedEntrySummary) ^ 0x3F;
    v25 = !_BitScanReverse((unsigned int *)&v26, v24);
    v82 = v26;
    if ( v25 )
      goto LABEL_53;
    while ( 1 )
    {
      v27 = 1 << v26;
      v28 = v26;
      v29 = &v21->LockEntries[v28];
      v24 &= ~v27;
      if ( (v29->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v29->LockState.0 & 1) == 0
        && (*(_QWORD *)&v29->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v20 & 0x7FFFFFFFFFFFFFFCLL)
        && v29->LockState.SessionId == v22 )
      {
        v29->AcquiredByte &= ~1u;
        if ( v29->LockState.0 )
          break;
      }
      v25 = !_BitScanReverse((unsigned int *)&v26, v24);
      v82 = v26;
      if ( v25 )
        goto LABEL_53;
    }
    if ( !v29 )
    {
LABEL_53:
      if ( (*((_DWORD *)&v21->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v21, v20, v22, 0LL);
    }
    else
    {
      v29->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v29->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v21->LockEntries[v28].TreeNode);
      v69 = 0;
      v69 = v29->BoostBitmap.AllFields & 0x1FFFF;
      v29->BoostBitmap.AllFields &= 0xFFFE0000;
      v29->ThreadLocalFlags &= ~1u;
      v29->LockState.0 = 0LL;
      v30 = ((char *)v29 - (char *)v21 - 800) / 96;
      if ( v23 )
        v21->AbEntrySummary |= 1 << v30;
      else
        _InterlockedOr8((volatile signed __int8 *)&v21->AbOrphanedEntrySummary, 1 << v30);
    }
    --v21->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v21, v20, &v69);
    v25 = v21->SpecialApcDisable++ == -1;
    if ( v25 && ($005F0E83B22994B61E86C72E0CE43C71 *)v21->ApcState.ApcListHead[0].Flink != &v21->152 )
      KiCheckForKernelApcDelivery();
    v31 = CurrentThread;
    v25 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v25 && ($005F0E83B22994B61E86C72E0CE43C71 *)v31->ApcState.ApcListHead[0].Flink != &v31->152 )
      KiCheckForKernelApcDelivery();
  }
  return 0LL;
}
