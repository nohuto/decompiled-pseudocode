/*
 * XREFs of MiDereferenceControlAreaPfnList @ 0x1400847B0
 * Callers:
 *     MiDeleteSubsectionPages @ 0x140016E90 (MiDeleteSubsectionPages.c)
 *     MiCopyDataPageToImagePage @ 0x14004F194 (MiCopyDataPageToImagePage.c)
 *     MiDeleteTransitionPte @ 0x140052AA8 (MiDeleteTransitionPte.c)
 *     MiRestoreTransitionPte @ 0x140053D40 (MiRestoreTransitionPte.c)
 *     MmPurgeSection @ 0x1400542A0 (MmPurgeSection.c)
 *     MiReleaseInPageRefs @ 0x1400ACD80 (MiReleaseInPageRefs.c)
 *     MiGatherMappedPages @ 0x140133168 (MiGatherMappedPages.c)
 *     MiPurgeSubsection @ 0x14024FA3C (MiPurgeSubsection.c)
 *     MiPurgeImageSection @ 0x14025ACE0 (MiPurgeImageSection.c)
 *     MiSplitDirectMapPage @ 0x14025E808 (MiSplitDirectMapPage.c)
 * Callees:
 *     MiCheckForControlAreaDeletion @ 0x140084944 (MiCheckForControlAreaDeletion.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiRemoveUnusedSubsection @ 0x1400E3FD8 (MiRemoveUnusedSubsection.c)
 *     MiInsertUnusedSubsection @ 0x1400E41E4 (MiInsertUnusedSubsection.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall MiDereferenceControlAreaPfnList(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rdx
  __int64 v7; // rax
  __int64 v9; // rbp
  __int64 v10; // rsi
  volatile signed __int32 *v11; // rdi
  BOOL v12; // r12d
  unsigned __int8 v13; // r15
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v16; // edx
  __int64 inserted; // rax
  bool v18; // zf
  __int64 v19; // rbx
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  int v25; // eax
  signed __int32 v26; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]
  int v29; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0LL;
  v7 = *(_QWORD *)(a1 + 64);
  v9 = 0LL;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 || !v7 )
    v10 = 0LL;
  else
    v10 = a2;
  v11 = (volatile signed __int32 *)(a1 + 72);
  v12 = v7 != 0;
  if ( (a4 & 2) != 0 )
  {
    v13 = 17;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      LOBYTE(v5) = -1;
      LOBYTE(inserted) = ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 72, v5);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v29 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v25 = SchedulerAssist[5];
          SchedulerAssist[5] = v25 + 1;
          if ( v25 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(v11, 0x1Fu) )
      {
        KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
        LOBYTE(v24) = -1;
        v29 = ExpWaitForSpinLockExclusiveAndAcquire(a1 + 72, v24);
      }
      v16 = *v11;
      LODWORD(inserted) = *v11 & 0xBFFFFFFF;
      if ( (_DWORD)inserted != 0x80000000 )
      {
        do
        {
          if ( (v16 & 0x40000000) != 0
            || (v26 = _InterlockedCompareExchange(v11, v16 | 0x40000000, v16), v18 = v16 == v26, v16 = v26, v18) )
          {
            KeYieldProcessorEx(&v29);
            v16 = *v11;
          }
          LOBYTE(inserted) = v16;
        }
        while ( (v16 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
  }
  else
  {
    LOBYTE(inserted) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    v13 = inserted;
  }
  if ( v10 )
  {
    v18 = (*(_DWORD *)(v10 + 104))-- == 1;
    if ( v18 && !*(_QWORD *)(v10 + 96) && (*(_BYTE *)(a2 + 34) & 1) == 0 && (*(_BYTE *)(v10 + 34) & 8) != 0 )
    {
      MiRemoveUnusedSubsection(v10);
      inserted = MiInsertUnusedSubsection(v10, v22, v23);
      v9 = inserted;
    }
  }
  --*(_QWORD *)(a1 + 32);
  if ( (a4 & 1) != 0 )
    LOBYTE(inserted) = MiCheckForControlAreaDeletion(a1);
  if ( v9 )
  {
    LOBYTE(inserted) = qword_1403CBD88;
    v19 = *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  }
  else
  {
    v19 = 0LL;
  }
  if ( v13 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      LOBYTE(inserted) = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v11, retaddr);
    else
      *v11 = 0;
    v20 = KeGetCurrentPrcb();
    v21 = v20->SchedulerAssist;
    if ( v21 )
    {
      if ( v20->NestingLevel <= 1u )
      {
        LODWORD(inserted) = v21[5] - 1;
        v21[5] = inserted;
        if ( !(_DWORD)inserted )
        {
          LOBYTE(inserted) = *((_BYTE *)v21 + 25);
          if ( !(_BYTE)inserted && !*((_BYTE *)v21 + 27) )
            LOBYTE(inserted) = KiPerformUnboostKick(v20);
        }
      }
    }
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v11);
    LOBYTE(inserted) = v13;
    __writecr8(v13);
  }
  if ( v9 )
    LOBYTE(inserted) = MiReturnCrossPartitionSectionCharges(v19, v12, v9);
  return inserted;
}
