/*
 * XREFs of MiQueueLargeFreeZeroRebuild @ 0x140123010
 * Callers:
 *     MiInsertLargePageInNodeListHelper @ 0x140122680 (MiInsertLargePageInNodeListHelper.c)
 *     MiLargePageFreeToZero @ 0x1401235B0 (MiLargePageFreeToZero.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     PsDereferencePartition @ 0x14006FEF8 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x14006FF20 (PsReferencePartitionSafe.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExQueueWorkItemToPartition @ 0x14008F67C (ExQueueWorkItemToPartition.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400A22F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExfTryAcquirePushLockShared @ 0x1400A27C0 (ExfTryAcquirePushLockShared.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1402AE854 (EtwTraceAutoBoostEntryExhaustion.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402BA760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402BA870 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

void __fastcall MiQueueLargeFreeZeroRebuild(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // r11
  __int64 v4; // r14
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rbx
  int SessionId; // ebp
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  int v13; // ett
  unsigned int v14; // ecx
  unsigned int i; // r8d
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  unsigned __int64 v18; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v20; // rax
  char v21; // cl
  _KLOCK_ENTRY *v22; // rsi
  signed __int64 *v23; // rbp
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // r11
  int v27; // r14d
  unsigned int v28; // edi
  unsigned __int64 v29; // rsi
  __int64 v30; // r10
  _QWORD *v31; // r9
  unsigned __int64 v32; // r8
  __int64 v33; // rdi
  unsigned __int16 *v34; // rbx
  KIRQL v35; // al
  __int64 v36; // rcx
  KIRQL v37; // bp
  int v38; // eax
  int v39; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v41; // [rsp+28h] [rbp-40h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v44; // [rsp+80h] [rbp+18h]
  int v45; // [rsp+88h] [rbp+20h] BYREF

  v3 = a2;
  v4 = a3 + 1;
  v6 = MiLargePageSizes[v4];
  v41 = a3;
  v7 = MiLargePageSizes[a3];
  v8 = a2 & ~(v7 - 1);
  if ( !a2 )
    return;
  SessionId = -1;
  if ( !qword_1403CB6B0 )
  {
    v44 = 0;
    goto LABEL_15;
  }
  if ( qword_1403CBF88 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_1403CB420, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v38 = SchedulerAssist[5];
          SchedulerAssist[5] = v38 + 1;
          if ( v38 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(CurrentPrcb);
        }
      }
      _m_prefetchw(&dword_1403CB420);
      v13 = dword_1403CB420 & 0x7FFFFFFF;
      if ( v13 == _InterlockedCompareExchange(
                    &dword_1403CB420,
                    (dword_1403CB420 & 0x7FFFFFFF) + 1,
                    dword_1403CB420 & 0x7FFFFFFF) )
        goto LABEL_7;
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
      ExpWaitForSpinLockSharedAndAcquire(&dword_1403CB420, CurrentIrql);
    }
    v3 = a2;
  }
  else
  {
    CurrentIrql = 18;
  }
LABEL_7:
  v14 = dword_1403CB694;
  if ( v3 < *(_QWORD *)(qword_1403CB6B0 + 16LL * (unsigned int)dword_1403CB694) )
  {
    do
      --v14;
    while ( v3 < *(_QWORD *)(qword_1403CB6B0 + 16LL * v14) );
  }
  else
  {
    for ( i = dword_1403CB694 + 1; v3 >= *(_QWORD *)(qword_1403CB6B0 + 16LL * i); ++v14 )
      ++i;
  }
  v44 = *(_DWORD *)(qword_1403CB6B0 + 16LL * v14 + 8);
  dword_1403CB694 = v14;
  if ( CurrentIrql != 18 )
  {
    if ( CurrentIrql == 17 )
    {
      ExReleaseSpinLockSharedFromDpcLevel(&dword_1403CB420);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_1403CB420, retaddr);
      }
      else
      {
        _InterlockedAnd(&dword_1403CB420, 0xBFFFFFFF);
        _InterlockedDecrement(&dword_1403CB420);
      }
      v16 = KeGetCurrentPrcb();
      v17 = v16->SchedulerAssist;
      if ( v17 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v39 = v17[5] - 1;
          v17[5] = v39;
          if ( !v39 && !*((_BYTE *)v17 + 25) && !*((_BYTE *)v17 + 27) )
            KiPerformUnboostKick(v16);
        }
      }
      __writecr8(CurrentIrql);
    }
  }
LABEL_15:
  v45 = 0;
  v18 = a1 + 184;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount == 1 )
  {
    LOBYTE(v20) = CurrentThread->AbEntrySummary;
    if ( !(_BYTE)v20 )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        v22 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
        {
LABEL_19:
          if ( v22 )
          {
            if ( v18 >= 0xFFFF800000000000uLL && byte_1403CCF90[((v18 >> 39) & 0x1FF) - 256] == 1 )
              SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
            v22->LockState.SessionId = SessionId;
            v23 = (signed __int64 *)(a1 + 184);
            v22->LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)((a1 + 184) & 0x7FFFFFFFFFFFFFFCLL);
          }
          else
          {
            _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
            v23 = (signed __int64 *)(a1 + 184);
          }
          goto LABEL_24;
        }
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, a1 + 184);
LABEL_18:
        v18 = a1 + 184;
        goto LABEL_19;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
      LOBYTE(v20) = CurrentThread->AbEntrySummary;
    }
    v21 = v20;
    _BitScanForward((unsigned int *)&v20, (unsigned __int8)v20);
    CurrentThread->AbEntrySummary = v21 & ~(1 << v20);
    v22 = &CurrentThread->LockEntries[v20];
    goto LABEL_18;
  }
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
  v22 = 0LL;
  v23 = (signed __int64 *)(a1 + 184);
LABEL_24:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)v23, (__int64)&v45);
  v24 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v24 && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( !_InterlockedCompareExchange64(v23, 17LL, 0LL) || ExfTryAcquirePushLockShared((unsigned __int64 *)v23) )
  {
    if ( v22 )
      v22->AcquiredByte |= 1u;
    v25 = 48 * v8 - 0x58000000000LL;
    v26 = MiLargePageContainingFrames[v4];
    v27 = 0;
    v28 = 0;
    v29 = v7 / v6;
    if ( v7 / v6 )
    {
      v30 = 48 * v6;
      v31 = (_QWORD *)(48 * v8 - 0x57FFFFFFFD8LL);
      do
      {
        if ( v8 > qword_1403CB780 || MmPhysicalMemoryBlock && (*v31 & 0x20000000000000LL) == 0 )
          break;
        v32 = *(_QWORD *)(v25 + 40);
        if ( *(_QWORD *)(qword_1403CBD88 + 8 * ((v32 >> 40) & 0x3FF)) != a1 )
          break;
        if ( (*(_BYTE *)(v25 + 34) & 7u) > 1 )
          break;
        if ( (v32 & 0xFFFFFFFFFLL) != v26 )
          break;
        if ( *(__int64 *)(v25 + 8) >= 0 )
          break;
        ++v28;
        v8 += v6;
        v31 = (_QWORD *)((char *)v31 + v30);
        v25 += v30;
      }
      while ( v28 < v29 );
    }
    if ( _InterlockedCompareExchange64(v23, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v23);
    KeAbPostRelease((ULONG_PTR)v23);
    if ( v28 == v29 )
    {
      v33 = *(_QWORD *)(a1 + 168);
      if ( *(_QWORD *)(v33 + 16) )
      {
        if ( PsReferencePartitionSafe(*(_QWORD *)(a1 + 168)) )
        {
          v34 = (unsigned __int16 *)(a1 + 520 * v41 + 5040);
          v35 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 6116));
          v36 = *v34;
          v37 = v35;
          if ( *(_QWORD *)&v34[4 * v36 + 4] )
            *((_BYTE *)v34 + 4) = 1;
          else
            ++v34[1];
          *(_QWORD *)&v34[4 * v36 + 4] = a2;
          if ( ++*v34 == 64 )
            *v34 = 0;
          if ( *(_BYTE *)(a1 + 6112) == 1 )
          {
            v27 = 1;
          }
          else
          {
            *(_BYTE *)(a1 + 6112) = 1;
            *(_QWORD *)(a1 + 6096) = MiRebuildLargeZeroPage;
            *(_QWORD *)(a1 + 6104) = a1;
            *(_QWORD *)(a1 + 6080) = 0LL;
            ExQueueWorkItemToPartition(a1 + 6080, 1, v44, v33);
          }
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 6116));
          __writecr8(v37);
          if ( v27 == 1 )
            PsDereferencePartition(v33);
        }
      }
    }
  }
  else if ( v22 )
  {
    KeAbPostReleaseEx((ULONG_PTR)v23, v22);
  }
}
