/*
 * XREFs of MiDereferenceControlAreaPfnList @ 0x1400162F8
 * Callers:
 *     MiReleaseInPageRefs @ 0x1400387AC (MiReleaseInPageRefs.c)
 *     MiDeleteTransitionPte @ 0x14007A23C (MiDeleteTransitionPte.c)
 *     MiCopyDataPageToImagePage @ 0x140095B10 (MiCopyDataPageToImagePage.c)
 *     MiGatherMappedPages @ 0x1400AFB14 (MiGatherMappedPages.c)
 *     MiDeleteSubsectionPages @ 0x1400C4590 (MiDeleteSubsectionPages.c)
 *     MiRestoreTransitionPte @ 0x140104D70 (MiRestoreTransitionPte.c)
 *     MiPurgeSubsection @ 0x14020A93C (MiPurgeSubsection.c)
 *     MiPurgeImageSection @ 0x140215D80 (MiPurgeImageSection.c)
 *     MiSplitDirectMapPage @ 0x1402191C4 (MiSplitDirectMapPage.c)
 * Callees:
 *     MiCheckForControlAreaDeletion @ 0x140016404 (MiCheckForControlAreaDeletion.c)
 *     MiInsertUnusedSubsection @ 0x140016540 (MiInsertUnusedSubsection.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRemoveUnusedSubsection @ 0x140097D88 (MiRemoveUnusedSubsection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 */

void __fastcall MiDereferenceControlAreaPfnList(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 inserted; // rbp
  __int64 v8; // rdi
  volatile LONG *v9; // rsi
  volatile LONG *v10; // rcx
  BOOL v11; // r12d
  KIRQL v12; // r14
  __int64 v14; // rbx

  inserted = 0LL;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 || (v8 = a2, !*(_QWORD *)(a1 + 64)) )
    v8 = 0LL;
  v9 = (volatile LONG *)(a1 + 72);
  v10 = (volatile LONG *)(a1 + 72);
  v11 = *(_QWORD *)(a1 + 64) != 0LL;
  if ( (a4 & 2) != 0 )
  {
    v12 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v10);
  }
  else
  {
    v12 = ExAcquireSpinLockExclusive(v10);
  }
  if ( v8 )
  {
    if ( (*(_DWORD *)(v8 + 104))-- == 1
      && !*(_QWORD *)(v8 + 96)
      && (*(_BYTE *)(a2 + 34) & 1) == 0
      && (*(_BYTE *)(v8 + 34) & 8) != 0 )
    {
      MiRemoveUnusedSubsection(v8);
      inserted = MiInsertUnusedSubsection(v8);
    }
  }
  --*(_QWORD *)(a1 + 32);
  if ( (a4 & 1) != 0 )
    MiCheckForControlAreaDeletion(a1);
  if ( inserted )
    v14 = *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  else
    v14 = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(v9);
  if ( v12 != 17 )
    __writecr8(v12);
  if ( inserted )
    MiReturnCrossPartitionSectionCharges(v14, v11, inserted);
}
