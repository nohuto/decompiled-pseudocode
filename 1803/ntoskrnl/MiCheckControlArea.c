/*
 * XREFs of MiCheckControlArea @ 0x1400E5110
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140018AE0 (MmUnmapViewInSystemCache.c)
 *     MmPurgeSection @ 0x1400542A0 (MmPurgeSection.c)
 *     MiReleaseFaultCharges @ 0x1400C7D70 (MiReleaseFaultCharges.c)
 *     MiFlushRelease @ 0x1400E4B40 (MiFlushRelease.c)
 *     MiDereferenceControlAreaBySection @ 0x1400E50D0 (MiDereferenceControlAreaBySection.c)
 *     MiAddViewsForSection @ 0x1400E5550 (MiAddViewsForSection.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     MiRemoveMappedPtes @ 0x14012ADA0 (MiRemoveMappedPtes.c)
 *     MiDereferenceControlArea @ 0x1401404A0 (MiDereferenceControlArea.c)
 *     MiRemoveSystemCacheReferences @ 0x1402569F0 (MiRemoveSystemCacheReferences.c)
 * Callees:
 *     PsGetNextPartition @ 0x1400043F8 (PsGetNextPartition.c)
 *     MiClearFilePointer @ 0x1400851C4 (MiClearFilePointer.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiImageUnused @ 0x1400C0580 (MiImageUnused.c)
 *     KeSignalGate @ 0x1400C1720 (KeSignalGate.c)
 *     MiBuildWakeList @ 0x1400E3EDC (MiBuildWakeList.c)
 *     MiInsertUnusedSegment @ 0x1400E44A8 (MiInsertUnusedSegment.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiCleanSection @ 0x14015E0C0 (MiCleanSection.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MiShouldTrimUnusedSegments @ 0x140250098 (MiShouldTrimUnusedSegments.c)
 *     MiPurgeImageSection @ 0x14025ACE0 (MiPurgeImageSection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiSegmentDelete @ 0x1404BC75C (MiSegmentDelete.c)
 *     MiReturnImageBase @ 0x1405937FC (MiReturnImageBase.c)
 */

__int64 __fastcall MiCheckControlArea(__int64 a1, KIRQL a2)
{
  __int64 v2; // r8
  __int64 v3; // rbp
  unsigned int v4; // ebx
  __int64 *v7; // r15
  _BOOL8 v8; // r12
  __int64 v9; // r13
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v13; // ecx
  __int64 inserted; // rax
  __int64 *v15; // rbx
  KIRQL v16; // al
  bool v17; // zf
  int v18; // eax
  void *i; // rbx
  _QWORD v20[2]; // [rsp+20h] [rbp-38h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0LL;
  v4 = 0;
  v7 = 0LL;
  v8 = v2 != 0;
  v9 = *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v20[0] = 0xFFFFFFFFLL;
  v20[1] = 0LL;
  if ( *(_QWORD *)(a1 + 40) || *(_QWORD *)(a1 + 24) )
  {
    if ( !*(_QWORD *)(a1 + 80) )
      goto LABEL_3;
    goto LABEL_28;
  }
  if ( (v2 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
  {
    *(_DWORD *)(a1 + 56) |= 1u;
    v4 = 2;
    goto LABEL_3;
  }
  v13 = *(_DWORD *)(a1 + 56);
  if ( !*(_QWORD *)(a1 + 32) )
  {
    v4 = 2;
    *(_DWORD *)(a1 + 56) = v13 | 1;
    MiClearFilePointer(a1);
    goto LABEL_3;
  }
  if ( (v13 & 0x40000) != 0 )
  {
    v4 = 1;
  }
  else
  {
    if ( (v13 & 0x20020) != 0x20020 )
    {
      inserted = MiInsertUnusedSegment(a1);
      v13 = *(_DWORD *)(a1 + 56);
      v3 = inserted;
    }
    if ( (v13 & 0x20) != 0 )
    {
      MiImageUnused(a1, 1, (__int64)v20);
      v13 = *(_DWORD *)(a1 + 56);
    }
  }
  if ( (v13 & 0x20020) == 0x20020 )
  {
    *(_DWORD *)(a1 + 56) = v13 | 4;
    *(_QWORD *)(a1 + 40) = 1LL;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    __writecr8(a2);
    MiPurgeImageSection(a1);
    v16 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    *(_DWORD *)(a1 + 56) &= ~4u;
    a2 = v16;
    v17 = (*(_QWORD *)(a1 + 40))-- == 1LL;
    if ( v17 && !*(_QWORD *)(a1 + 24) )
    {
      if ( *(_QWORD *)(a1 + 32) )
      {
        if ( !v4 )
        {
          v3 = MiInsertUnusedSegment(a1);
          v4 = 4;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 56) |= 1u;
        v4 = 2;
        MiClearFilePointer(a1);
      }
      goto LABEL_3;
    }
LABEL_28:
    v4 = 4;
  }
LABEL_3:
  if ( v4 >= 4 )
  {
    v7 = MiBuildWakeList(a1, 3);
    v4 &= ~4u;
  }
  if ( v4 )
  {
    if ( (v4 & 1) != 0 )
    {
      *(_QWORD *)(a1 + 40) = 1LL;
      MiCleanSection(a1, a2, 0LL);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      __writecr8(a2);
      MiSegmentDelete(a1);
    }
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
    else
      *(_DWORD *)(a1 + 72) = 0;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v18 = SchedulerAssist[5] - 1;
        SchedulerAssist[5] = v18;
        if ( !v18 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    __writecr8(a2);
    if ( v7 )
    {
      do
      {
        v15 = (__int64 *)*v7;
        KeSignalGate((__int64)(v7 + 2), 1);
        v7 = v15;
      }
      while ( v15 );
    }
    if ( qword_1403CFC28 >= 9 * (qword_1403CFCA8 / 0xAuLL) )
    {
      if ( (unsigned int)MiShouldTrimUnusedSegments(qword_1403CFCA8, qword_1403CFCA8 / 0xAuLL) )
      {
        for ( i = PsGetNextPartition(0LL); i; i = PsGetNextPartition(i) )
        {
          if ( *(_QWORD *)(*(_QWORD *)i + 1624LL) )
            KeSetEvent((PRKEVENT)(*(_QWORD *)i + 1336LL), 0, 0);
        }
      }
    }
  }
  if ( v3 )
    MiReturnCrossPartitionSectionCharges(v9, v8, v3);
  return MiReturnImageBase(v20);
}
