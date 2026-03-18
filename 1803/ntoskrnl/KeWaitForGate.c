/*
 * XREFs of KeWaitForGate @ 0x140086DE8
 * Callers:
 *     MiDrainControlAreaWrites @ 0x14004B30C (MiDrainControlAreaWrites.c)
 *     MiLockControlAreaSectionExtend @ 0x14004CEC8 (MiLockControlAreaSectionExtend.c)
 *     MiUnlinkWorkingSet @ 0x140070894 (MiUnlinkWorkingSet.c)
 *     MiWaitForPageWriteCompletion @ 0x140084528 (MiWaitForPageWriteCompletion.c)
 *     MiAttemptSectionDelete @ 0x1400BCE70 (MiAttemptSectionDelete.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1400E5FE0 (MiCheckPurgeAndUpMapCount.c)
 *     MmOutSwapProcess @ 0x1400EB550 (MmOutSwapProcess.c)
 *     MiReferenceControlArea @ 0x1401253B0 (MiReferenceControlArea.c)
 *     MiZeroInParallel @ 0x14013A938 (MiZeroInParallel.c)
 *     MiUnlinkSessionWorkingSet @ 0x140154238 (MiUnlinkSessionWorkingSet.c)
 *     MiZeroNodePages @ 0x14016FC80 (MiZeroNodePages.c)
 *     MiMappedPageWriter @ 0x140176F10 (MiMappedPageWriter.c)
 *     KiExecuteDpc @ 0x140179020 (KiExecuteDpc.c)
 *     MiFreeUnusedPfnPages @ 0x14017A360 (MiFreeUnusedPfnPages.c)
 *     MiZeroBootLargePages @ 0x140185ED4 (MiZeroBootLargePages.c)
 *     KiEpfStart @ 0x14024B2D4 (KiEpfStart.c)
 *     MiChangingSubsectionProtos @ 0x14025D140 (MiChangingSubsectionProtos.c)
 *     MiWaitForVadDeletion @ 0x14026B614 (MiWaitForVadDeletion.c)
 *     PspSetContextThreadInternal @ 0x1404D0960 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1405B83A0 (PspGetContextThreadInternal.c)
 *     MmScrubMemory @ 0x1407583E4 (MmScrubMemory.c)
 *     PspQueryWorkingSetWatch @ 0x14077AA34 (PspQueryWorkingSetWatch.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14078057C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiFastExitThreadWait @ 0x140088FE4 (KiFastExitThreadWait.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KiCommitThreadWait @ 0x1400F64C0 (KiCommitThreadWait.c)
 *     KiBeginThreadWait @ 0x1401268C0 (KiBeginThreadWait.c)
 */

__int64 __fastcall KeWaitForGate(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  $73ACCD497C6E10005445ED6B0DEFBC9F *v5; // rdi
  unsigned __int8 CurrentIrql; // al
  unsigned int v7; // ebp
  struct _LIST_ENTRY *v8; // rcx

  CurrentThread = KeGetCurrentThread();
  v5 = &CurrentThread->320;
  do
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = CurrentIrql;
    v7 = KiBeginThreadWait(CurrentThread, 0LL, a2, 0LL);
    if ( v7 )
      break;
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = (PVOID)a1;
    KiAcquireKobjectLockSafe(a1);
    if ( *(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 4) = 0;
      _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
      KiFastExitThreadWait(KeGetCurrentPrcb(), CurrentThread, 0LL);
      return v7;
    }
    v8 = *(struct _LIST_ENTRY **)(a1 + 16);
    if ( v8->Flink != (struct _LIST_ENTRY *)(a1 + 8) )
      __fastfail(3u);
    v5->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)(a1 + 8);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = v8;
    v8->Flink = (struct _LIST_ENTRY *)v5;
    *(_QWORD *)(a1 + 16) = v5;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    v7 = KiCommitThreadWait(CurrentThread, &CurrentThread->320, 0LL, 0LL);
  }
  while ( v7 == 256 );
  return v7;
}
