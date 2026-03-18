/*
 * XREFs of KeWaitForGate @ 0x140017A68
 * Callers:
 *     MiUnlinkWorkingSet @ 0x1400178A8 (MiUnlinkWorkingSet.c)
 *     MiWaitForPageWriteCompletion @ 0x1400179B0 (MiWaitForPageWriteCompletion.c)
 *     MiAttemptSectionDelete @ 0x14002DB88 (MiAttemptSectionDelete.c)
 *     MmOutSwapProcess @ 0x140040CE4 (MmOutSwapProcess.c)
 *     MiLockControlAreaSectionExtend @ 0x14005E338 (MiLockControlAreaSectionExtend.c)
 *     MiZeroInParallel @ 0x14007CE14 (MiZeroInParallel.c)
 *     MiReferenceControlArea @ 0x1400949E0 (MiReferenceControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14009A340 (MiCheckPurgeAndUpMapCount.c)
 *     MiDrainControlAreaWrites @ 0x140119240 (MiDrainControlAreaWrites.c)
 *     MiUnlinkSessionWorkingSet @ 0x14013E1D4 (MiUnlinkSessionWorkingSet.c)
 *     MiZeroNodePages @ 0x1401585A0 (MiZeroNodePages.c)
 *     MiInitializePageZeroing @ 0x140158C2C (MiInitializePageZeroing.c)
 *     MiFreeUnusedPfnPages @ 0x14015A8A0 (MiFreeUnusedPfnPages.c)
 *     KiExecuteDpc @ 0x14015D830 (KiExecuteDpc.c)
 *     MiMappedPageWriter @ 0x14015DC00 (MiMappedPageWriter.c)
 *     MiChangingSubsectionProtos @ 0x140218224 (MiChangingSubsectionProtos.c)
 *     MiWaitForVadDeletion @ 0x1402238D8 (MiWaitForVadDeletion.c)
 *     PspSetContextThreadInternal @ 0x14053B080 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x14053B2A0 (PspGetContextThreadInternal.c)
 *     MmScrubMemory @ 0x1406C04B8 (MmScrubMemory.c)
 *     PspQueryWorkingSetWatch @ 0x1406E05B4 (PspQueryWorkingSetWatch.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1406E496C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiFastExitThreadWait @ 0x140017F24 (KiFastExitThreadWait.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiCommitThreadWait @ 0x1400EAB20 (KiCommitThreadWait.c)
 *     KiBeginThreadWait @ 0x1400FC780 (KiBeginThreadWait.c)
 */

__int64 __fastcall KeWaitForGate(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  $6E77A2FF3C783A4EBEFA8B287A08A468 *v5; // rdi
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
