/*
 * XREFs of MiCheckControlArea @ 0x14005B160
 * Callers:
 *     MmPurgeSection @ 0x140031240 (MmPurgeSection.c)
 *     MmUnmapViewInSystemCache @ 0x140053130 (MmUnmapViewInSystemCache.c)
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     MiRemoveMappedPtes @ 0x14005C210 (MiRemoveMappedPtes.c)
 *     MiAddViewsForSection @ 0x1400A0BF0 (MiAddViewsForSection.c)
 *     MiFlushRelease @ 0x1400A2708 (MiFlushRelease.c)
 *     MiDereferenceControlAreaBySection @ 0x1400A2854 (MiDereferenceControlAreaBySection.c)
 *     MiReleaseFaultCharges @ 0x1401286F4 (MiReleaseFaultCharges.c)
 *     MiDereferenceControlArea @ 0x140131C80 (MiDereferenceControlArea.c)
 *     MiRemoveSystemCacheReferences @ 0x14021A05C (MiRemoveSystemCacheReferences.c)
 * Callees:
 *     PsGetNextPartition @ 0x140001044 (PsGetNextPartition.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertUnusedSegment @ 0x1400676AC (MiInsertUnusedSegment.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     MiBuildWakeList @ 0x1400A4908 (MiBuildWakeList.c)
 *     MiCleanSection @ 0x14010A810 (MiCleanSection.c)
 *     MiClearFilePointer @ 0x14010AB40 (MiClearFilePointer.c)
 *     MiImageUnused @ 0x140121F88 (MiImageUnused.c)
 *     KeSignalGate @ 0x1401246E0 (KeSignalGate.c)
 *     MiShouldTrimUnusedSegments @ 0x140211C44 (MiShouldTrimUnusedSegments.c)
 *     MiPurgeImageSection @ 0x14021F0FC (MiPurgeImageSection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiSegmentDelete @ 0x14048D574 (MiSegmentDelete.c)
 *     MiReturnImageBase @ 0x140499C04 (MiReturnImageBase.c)
 */

__int64 __fastcall MiCheckControlArea(__int64 a1, KIRQL a2)
{
  __int64 v2; // r8
  __int64 inserted; // rbp
  __int64 v6; // rdx
  _QWORD *v7; // r15
  int v8; // ebx
  BOOL v9; // r12d
  __int64 v10; // r13
  int v12; // eax
  _QWORD *v13; // rbx
  KIRQL v14; // al
  bool v15; // zf
  volatile signed __int64 *i; // rbx
  _QWORD v17[2]; // [rsp+20h] [rbp-38h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  v2 = 0LL;
  inserted = 0LL;
  v6 = *(_QWORD *)(a1 + 64);
  v7 = 0LL;
  v8 = 0;
  v9 = v6 != 0;
  v10 = *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v17[0] = 0xFFFFFFFFLL;
  v17[1] = 0LL;
  if ( *(_QWORD *)(a1 + 40) || *(_QWORD *)(a1 + 24) )
  {
    if ( !*(_QWORD *)(a1 + 80) )
      goto LABEL_3;
    goto LABEL_27;
  }
  if ( (v6 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
  {
    *(_DWORD *)(a1 + 56) |= 1u;
    LOBYTE(v8) = 2;
    goto LABEL_22;
  }
  if ( !*(_QWORD *)(a1 + 32) )
    goto LABEL_24;
  v12 = *(_DWORD *)(a1 + 56);
  if ( (v12 & 0x40000) != 0 )
  {
    v8 = 1;
  }
  else
  {
    if ( (v12 & 0x20020) != 0x20020 )
      inserted = MiInsertUnusedSegment(a1, v6, 0LL);
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      MiImageUnused(a1, 1LL, v17);
  }
  if ( (*(_DWORD *)(a1 + 56) & 0x20020) == 0x20020 )
  {
    *(_DWORD *)(a1 + 56) |= 4u;
    *(_QWORD *)(a1 + 40) = 1LL;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    __writecr8(a2);
    MiPurgeImageSection(a1);
    v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    *(_DWORD *)(a1 + 56) &= ~4u;
    a2 = v14;
    v15 = (*(_QWORD *)(a1 + 40))-- == 1LL;
    if ( !v15 || *(_QWORD *)(a1 + 24) )
      goto LABEL_27;
    if ( *(_QWORD *)(a1 + 32) )
    {
      if ( v8 )
        goto LABEL_19;
      inserted = MiInsertUnusedSegment(a1, v6, v2);
LABEL_27:
      v8 = 0;
      v7 = (_QWORD *)MiBuildWakeList(a1, 3LL);
      goto LABEL_19;
    }
LABEL_24:
    *(_DWORD *)(a1 + 56) |= 1u;
    LOBYTE(v8) = 2;
    MiClearFilePointer(a1, v6, v2);
    goto LABEL_22;
  }
LABEL_19:
  if ( v8 )
  {
LABEL_22:
    if ( (v8 & 1) != 0 )
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
    goto LABEL_7;
  }
LABEL_3:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
  else
    *(_DWORD *)(a1 + 72) = 0;
  __writecr8(a2);
  if ( v7 )
  {
    do
    {
      v13 = (_QWORD *)*v7;
      KeSignalGate(v7 + 2, 1LL);
      v7 = v13;
    }
    while ( v13 );
  }
  if ( qword_14038B970 >= 9 * (qword_14038B9E8 / 0xAuLL) )
  {
    if ( (unsigned int)MiShouldTrimUnusedSegments(qword_14038B9E8, qword_14038B9E8 / 0xAuLL) )
    {
      for ( i = PsGetNextPartition(0LL); i; i = PsGetNextPartition(i) )
      {
        if ( *(_QWORD *)(*i + 1616) )
          KeSetEvent((PRKEVENT)(*i + 1328), 0, 0);
      }
    }
  }
LABEL_7:
  if ( inserted )
    MiReturnCrossPartitionSectionCharges(v10, v9, inserted);
  return MiReturnImageBase(v17);
}
