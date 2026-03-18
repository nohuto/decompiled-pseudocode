/*
 * XREFs of MiCapturePageFileInfoInline @ 0x1400B221C
 * Callers:
 *     MiOutSwapWorkingSetPte @ 0x14000E4B0 (MiOutSwapWorkingSetPte.c)
 *     MiCompletePrivateZeroFault @ 0x140014310 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     MiLockPageTablePage @ 0x1400211A0 (MiLockPageTablePage.c)
 *     MiMoveDirtyBitsToPfns @ 0x140023A70 (MiMoveDirtyBitsToPfns.c)
 *     MiWsleFree @ 0x140027A70 (MiWsleFree.c)
 *     MiDeleteValidSystemPage @ 0x140028710 (MiDeleteValidSystemPage.c)
 *     MiDeletePteRun @ 0x14002A950 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x14002D060 (MiDeleteBatch.c)
 *     MiWriteCompletePfn @ 0x14002F710 (MiWriteCompletePfn.c)
 *     MiActOnPte @ 0x140050360 (MiActOnPte.c)
 *     MiReleasePageFileSpace @ 0x140051890 (MiReleasePageFileSpace.c)
 *     MiDeleteTransitionPte @ 0x140052AA8 (MiDeleteTransitionPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140052D00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x140053840 (MiReservePageFileSpaceForPage.c)
 *     MmPurgeSection @ 0x1400542A0 (MmPurgeSection.c)
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     MiReleaseWsSwapReservationPfn @ 0x1400B330C (MiReleaseWsSwapReservationPfn.c)
 *     MiStoreMarkLockedPagesModified @ 0x1400BEF58 (MiStoreMarkLockedPagesModified.c)
 *     MiStoreWriteModifiedPages @ 0x1400D6708 (MiStoreWriteModifiedPages.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiMigratePfn @ 0x14011B910 (MiMigratePfn.c)
 *     MiCaptureDirtyBitToPfn @ 0x140124940 (MiCaptureDirtyBitToPfn.c)
 *     MiLockCode @ 0x14013AB00 (MiLockCode.c)
 *     MiSetPagesModified @ 0x14025545C (MiSetPagesModified.c)
 *     MiPurgeImageSection @ 0x14025ACE0 (MiPurgeImageSection.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCapturePageFileInfoInline(_QWORD *a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // r9
  unsigned __int64 *v6; // r10
  int v7; // r11d

  if ( (*a1 & 4) != 0 )
  {
    result = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
    if ( a2 )
      *v6 = v5 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( !v7 )
      return result & 0xFFFFFFFFFFFFFFFDuLL;
  }
  else if ( a3 && (*a1 & 2) != 0 )
  {
    return MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  }
  else
  {
    return 0LL;
  }
  return result;
}
