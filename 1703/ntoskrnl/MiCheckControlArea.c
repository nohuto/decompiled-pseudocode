/*
 * XREFs of MiCheckControlArea @ 0x14009B950
 * Callers:
 *     MiReleaseFaultCharges @ 0x1400322C4 (MiReleaseFaultCharges.c)
 *     MiDereferenceControlAreaBySection @ 0x140099790 (MiDereferenceControlAreaBySection.c)
 *     MiAddViewsForSection @ 0x140099930 (MiAddViewsForSection.c)
 *     MmUnmapViewInSystemCache @ 0x1400A83B0 (MmUnmapViewInSystemCache.c)
 *     MiFlushRelease @ 0x1400A8C60 (MiFlushRelease.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     MiRemoveMappedPtes @ 0x1400FD140 (MiRemoveMappedPtes.c)
 *     MmPurgeSection @ 0x14010B4A0 (MmPurgeSection.c)
 *     MiDereferenceControlArea @ 0x14013645C (MiDereferenceControlArea.c)
 *     MiRemoveSystemCacheReferences @ 0x1402125C0 (MiRemoveSystemCacheReferences.c)
 * Callees:
 *     MiClearFilePointer @ 0x1400164D8 (MiClearFilePointer.c)
 *     MiImageUnused @ 0x140027AFC (MiImageUnused.c)
 *     KeSignalGate @ 0x14002E0B0 (KeSignalGate.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiBuildWakeList @ 0x140096DC4 (MiBuildWakeList.c)
 *     MiInsertUnusedSegment @ 0x140098DC0 (MiInsertUnusedSegment.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     MiCleanSection @ 0x140149074 (MiCleanSection.c)
 *     MiPurgeImageSection @ 0x140215D80 (MiPurgeImageSection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiReturnImageBase @ 0x140513EE8 (MiReturnImageBase.c)
 *     MiSegmentDelete @ 0x14054A42C (MiSegmentDelete.c)
 */

__int64 __fastcall MiCheckControlArea(__int64 a1, unsigned __int64 a2)
{
  __int64 inserted; // r15
  int v3; // ebx
  unsigned __int8 v4; // bp
  __int64 v6; // rcx
  __int64 *v7; // r14
  _BOOL8 v8; // r12
  __int64 v9; // r13
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  int v13; // eax
  __int64 *v14; // rbx
  KIRQL v15; // al
  bool v16; // zf
  _QWORD v17[2]; // [rsp+20h] [rbp-38h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  inserted = 0LL;
  v3 = 0;
  v4 = a2;
  v6 = *(_QWORD *)(a1 + 64);
  v7 = 0LL;
  v8 = v6 != 0;
  v9 = *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v17[0] = 0xFFFFFFFFLL;
  v17[1] = 0LL;
  if ( *(_QWORD *)(a1 + 40) || *(_QWORD *)(a1 + 24) )
  {
    if ( !*(_QWORD *)(a1 + 80) )
      goto LABEL_3;
    goto LABEL_32;
  }
  if ( (v6 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
  {
    *(_DWORD *)(a1 + 56) |= 1u;
    LOBYTE(v3) = 2;
    goto LABEL_29;
  }
  if ( !*(_QWORD *)(a1 + 32) )
    goto LABEL_31;
  v13 = *(_DWORD *)(a1 + 56);
  if ( (v13 & 0x40000) != 0 )
  {
    v3 = 1;
  }
  else
  {
    if ( (v13 & 0x20020) != 0x20020 )
      inserted = MiInsertUnusedSegment(a1, a2);
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      MiImageUnused(a1, 1, (__int64)v17);
  }
  if ( (*(_DWORD *)(a1 + 56) & 0x20020) == 0x20020 )
  {
    *(_DWORD *)(a1 + 56) |= 4u;
    *(_QWORD *)(a1 + 40) = 1LL;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    __writecr8(v4);
    MiPurgeImageSection(a1);
    v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    *(_DWORD *)(a1 + 56) &= ~4u;
    v4 = v15;
    v16 = (*(_QWORD *)(a1 + 40))-- == 1LL;
    if ( !v16 || *(_QWORD *)(a1 + 24) )
      goto LABEL_32;
    if ( *(_QWORD *)(a1 + 32) )
    {
      if ( v3 )
        goto LABEL_26;
      inserted = MiInsertUnusedSegment(a1, a2);
LABEL_32:
      v7 = MiBuildWakeList(a1, 3);
      v3 = 0;
      goto LABEL_26;
    }
LABEL_31:
    *(_DWORD *)(a1 + 56) |= 1u;
    LOBYTE(v3) = 2;
    MiClearFilePointer(a1);
    goto LABEL_29;
  }
LABEL_26:
  if ( v3 )
  {
LABEL_29:
    if ( (v3 & 1) != 0 )
    {
      *(_QWORD *)(a1 + 40) = 1LL;
      MiCleanSection(a1, v4, 0LL);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      __writecr8(v4);
      MiSegmentDelete(a1);
    }
    goto LABEL_14;
  }
LABEL_3:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
  else
    *(_DWORD *)(a1 + 72) = 0;
  __writecr8(v4);
  if ( v7 )
  {
    do
    {
      v14 = (__int64 *)*v7;
      KeSignalGate((__int64)(v7 + 2), 1);
      v7 = v14;
    }
    while ( v14 );
  }
  v10 = qword_14036D098;
  if ( qword_14036D098 && qword_14036D088 )
  {
    if ( qword_14036D098 > (unsigned __int64)qword_140381A68 )
      v10 = qword_140381A68;
    if ( (unsigned int)(100 * qword_14036D088 / v10) > dword_1403E3120 )
      goto LABEL_43;
    v11 = MiState;
    if ( MiState > (unsigned __int64)qword_140381A68 )
      v11 = qword_140381A68;
    a2 = 100 * qword_14036BD18 % v11;
    if ( (unsigned int)(100 * qword_14036BD18 / v11) > dword_1403E3120 )
LABEL_43:
      KeSetEvent(&stru_140380770, 0, 0);
  }
LABEL_14:
  if ( inserted )
    MiReturnCrossPartitionSectionCharges(v9, v8, inserted);
  return MiReturnImageBase(v17, a2);
}
