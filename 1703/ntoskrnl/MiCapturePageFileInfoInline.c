/*
 * XREFs of MiCapturePageFileInfoInline @ 0x14001DE1C
 * Callers:
 *     MiReleaseWsSwapReservationPfn @ 0x140012054 (MiReleaseWsSwapReservationPfn.c)
 *     MiStoreMarkLockedPagesModified @ 0x140026814 (MiStoreMarkLockedPagesModified.c)
 *     MiStoreWriteModifiedPages @ 0x14005630C (MiStoreWriteModifiedPages.c)
 *     MiOutSwapWorkingSetCallback @ 0x140079C70 (MiOutSwapWorkingSetCallback.c)
 *     MiDeleteTransitionPte @ 0x14007A23C (MiDeleteTransitionPte.c)
 *     MiActOnPte @ 0x14007B8E8 (MiActOnPte.c)
 *     MiLockPageTablePage @ 0x1400B50F0 (MiLockPageTablePage.c)
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 *     MiMigratePfn @ 0x1400C3D80 (MiMigratePfn.c)
 *     MiDeletePteRun @ 0x1400C5B70 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x1400C8490 (MiDeleteBatch.c)
 *     MiWriteCompletePfn @ 0x1400CB520 (MiWriteCompletePfn.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiMoveDirtyBitsToPfns @ 0x1400D10C0 (MiMoveDirtyBitsToPfns.c)
 *     MiWsleFree @ 0x1400D6AB0 (MiWsleFree.c)
 *     MiRevertValidPte @ 0x1400F9CF0 (MiRevertValidPte.c)
 *     MiCaptureDirtyBitToPfn @ 0x140100BFC (MiCaptureDirtyBitToPfn.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1401039D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x1401048E0 (MiReservePageFileSpaceForPage.c)
 *     MiReleasePageFileSpace @ 0x14010AE90 (MiReleasePageFileSpace.c)
 *     MmPurgeSection @ 0x14010B4A0 (MmPurgeSection.c)
 *     MiSetPagesModified @ 0x140210F54 (MiSetPagesModified.c)
 *     MiPurgeImageSection @ 0x140215D80 (MiPurgeImageSection.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCapturePageFileInfoInline(_QWORD *a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // r9
  unsigned __int64 *v6; // r10
  int v7; // r11d

  if ( (*a1 & 4) != 0 )
  {
    result = MI_READ_PTE_LOCK_FREE(a1);
    if ( a2 )
      *v6 = v5 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( !v7 )
      return result & 0xFFFFFFFFFFFFFFFDuLL;
  }
  else if ( a3 && (*a1 & 2) != 0 )
  {
    return MI_READ_PTE_LOCK_FREE(a1);
  }
  else
  {
    return 0LL;
  }
  return result;
}
