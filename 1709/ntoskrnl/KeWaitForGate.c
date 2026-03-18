/*
 * XREFs of KeWaitForGate @ 0x1400E3F18
 * Callers:
 *     MiDrainControlAreaWrites @ 0x14001F7E0 (MiDrainControlAreaWrites.c)
 *     MiReferenceControlArea @ 0x1400662F8 (MiReferenceControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14009F9C0 (MiCheckPurgeAndUpMapCount.c)
 *     MiUnlinkWorkingSet @ 0x1400B8788 (MiUnlinkWorkingSet.c)
 *     MiZeroInParallel @ 0x1400CFA48 (MiZeroInParallel.c)
 *     MiAttemptSectionDelete @ 0x14010A778 (MiAttemptSectionDelete.c)
 *     MiLockControlAreaSectionExtend @ 0x140110630 (MiLockControlAreaSectionExtend.c)
 *     MmOutSwapProcess @ 0x140111FF0 (MmOutSwapProcess.c)
 *     MiZeroNodePages @ 0x1401370F0 (MiZeroNodePages.c)
 *     KiExecuteDpc @ 0x140143540 (KiExecuteDpc.c)
 *     MiFreeUnusedPfnPages @ 0x140144320 (MiFreeUnusedPfnPages.c)
 *     MiMappedPageWriter @ 0x140148710 (MiMappedPageWriter.c)
 *     MiWaitForPageWriteCompletion @ 0x1401585BC (MiWaitForPageWriteCompletion.c)
 *     MiZeroBootLargePages @ 0x14015A634 (MiZeroBootLargePages.c)
 *     KiEpfStart @ 0x14020CF54 (KiEpfStart.c)
 *     MiUnlinkSessionWorkingSet @ 0x140221CFC (MiUnlinkSessionWorkingSet.c)
 *     MiChangingSubsectionProtos @ 0x1402224DC (MiChangingSubsectionProtos.c)
 *     MiWaitForVadDeletion @ 0x14023032C (MiWaitForVadDeletion.c)
 *     PspGetContextThreadInternal @ 0x14049D7A0 (PspGetContextThreadInternal.c)
 *     PspSetContextThreadInternal @ 0x14049DFC0 (PspSetContextThreadInternal.c)
 *     MmScrubMemory @ 0x1406EEF04 (MmScrubMemory.c)
 *     PspQueryWorkingSetWatch @ 0x1407168B0 (PspQueryWorkingSetWatch.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14071CD5C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiCommitThreadWait @ 0x14006DBD0 (KiCommitThreadWait.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KiBeginThreadWait @ 0x1400E4300 (KiBeginThreadWait.c)
 *     KiFastExitThreadWait @ 0x14011B0BC (KiFastExitThreadWait.c)
 */

__int64 __fastcall KeWaitForGate(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  $1ECCCAC64BBEFA1EE7C7E5BC0BEBC7F8 *v5; // rdi
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
    KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
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
    v7 = KiCommitThreadWait((__int64)CurrentThread, (__int64 *)&CurrentThread->320, 0, 0LL);
  }
  while ( v7 == 256 );
  return v7;
}
