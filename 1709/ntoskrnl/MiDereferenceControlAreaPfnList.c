/*
 * XREFs of MiDereferenceControlAreaPfnList @ 0x14010A900
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140027210 (MiCopyDataPageToImagePage.c)
 *     MiDeleteTransitionPte @ 0x1400317D0 (MiDeleteTransitionPte.c)
 *     MiRestoreTransitionPte @ 0x1400352D0 (MiRestoreTransitionPte.c)
 *     MiDeleteSubsectionPages @ 0x14004C770 (MiDeleteSubsectionPages.c)
 *     MiGatherMappedPages @ 0x1400EEBD4 (MiGatherMappedPages.c)
 *     MiReleaseInPageRefs @ 0x14012DED4 (MiReleaseInPageRefs.c)
 *     MiPurgeSubsection @ 0x1402115B4 (MiPurgeSubsection.c)
 *     MiPurgeImageSection @ 0x14021F0FC (MiPurgeImageSection.c)
 *     MiSplitDirectMapPage @ 0x140223AD4 (MiSplitDirectMapPage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiRemoveUnusedSubsection @ 0x14001F358 (MiRemoveUnusedSubsection.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertUnusedSubsection @ 0x1400B779C (MiInsertUnusedSubsection.c)
 *     MiCheckForControlAreaDeletion @ 0x14010AA68 (MiCheckForControlAreaDeletion.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall MiDereferenceControlAreaPfnList(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // r13
  __int64 v7; // rsi
  __int64 v8; // r14
  BOOL v9; // r12d
  volatile signed __int32 *v10; // rdi
  unsigned __int8 v11; // r15
  signed __int32 v12; // edx
  __int64 inserted; // rax
  bool v14; // zf
  __int64 v15; // rbx
  signed __int32 v16; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]
  int v19; // [rsp+78h] [rbp+20h] BYREF

  v6 = a2;
  v7 = 0LL;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 || !*(_QWORD *)(a1 + 64) )
    v8 = 0LL;
  else
    v8 = a2;
  v9 = *(_QWORD *)(a1 + 64) != 0LL;
  v10 = (volatile signed __int32 *)(a1 + 72);
  if ( (a4 & 2) != 0 )
  {
    v11 = 17;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      LOBYTE(a2) = -1;
      LOBYTE(inserted) = ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 72, a2);
    }
    else
    {
      v19 = 0;
      if ( _interlockedbittestandset(v10, 0x1Fu) )
        v19 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 72), 0xFFu);
      v12 = *v10;
      LODWORD(inserted) = *v10 & 0xBFFFFFFF;
      if ( (_DWORD)inserted != 0x80000000 )
      {
        do
        {
          if ( (v12 & 0x40000000) != 0
            || (v16 = _InterlockedCompareExchange(v10, v12 | 0x40000000, v12), v14 = v12 == v16, v12 = v16, v14) )
          {
            KeYieldProcessorEx(&v19);
            v12 = *v10;
          }
          LOBYTE(inserted) = v12;
        }
        while ( (v12 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
  }
  else
  {
    LOBYTE(inserted) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    v11 = inserted;
  }
  if ( v8 )
  {
    v14 = (*(_DWORD *)(v8 + 104))-- == 1;
    if ( v14 && !*(_QWORD *)(v8 + 96) && (*(_BYTE *)(v6 + 34) & 1) == 0 && (*(_BYTE *)(v8 + 34) & 8) != 0 )
    {
      MiRemoveUnusedSubsection(v8);
      inserted = MiInsertUnusedSubsection((_DWORD *)v8);
      v7 = inserted;
    }
  }
  --*(_QWORD *)(a1 + 32);
  if ( (a4 & 1) != 0 )
    LOBYTE(inserted) = MiCheckForControlAreaDeletion(a1);
  if ( v7 )
  {
    LOBYTE(inserted) = qword_140388AF0;
    v15 = *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  }
  else
  {
    v15 = 0LL;
  }
  if ( v11 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      LOBYTE(inserted) = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v10, retaddr);
    else
      *v10 = 0;
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    LOBYTE(inserted) = v11;
    __writecr8(v11);
  }
  if ( v7 )
    LOBYTE(inserted) = MiReturnCrossPartitionSectionCharges(v15, v9, v7);
  return inserted;
}
