/*
 * XREFs of MiCapturePageFileInfoInline @ 0x140117280
 * Callers:
 *     MiOutSwapWorkingSetCallback @ 0x140002340 (MiOutSwapWorkingSetCallback.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14002D0C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteTransitionPte @ 0x1400317D0 (MiDeleteTransitionPte.c)
 *     MiCaptureDirtyBitToPfn @ 0x140032400 (MiCaptureDirtyBitToPfn.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     NtResetWriteWatch @ 0x14003D7F0 (NtResetWriteWatch.c)
 *     MiCompleteProtoPteFault @ 0x140045530 (MiCompleteProtoPteFault.c)
 *     MiCompletePrivateZeroFault @ 0x140046F90 (MiCompletePrivateZeroFault.c)
 *     MiMigratePfn @ 0x14004A320 (MiMigratePfn.c)
 *     MiDeleteValidSystemPage @ 0x14004D040 (MiDeleteValidSystemPage.c)
 *     MiDeletePteRun @ 0x14004E1C0 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x140051140 (MiDeleteBatch.c)
 *     MiWsleFree @ 0x140052660 (MiWsleFree.c)
 *     MiReservePageFileSpaceForPage @ 0x14005CFD0 (MiReservePageFileSpaceForPage.c)
 *     MiWriteCompletePfn @ 0x1400A5320 (MiWriteCompletePfn.c)
 *     MiReleaseWsSwapReservationPfn @ 0x1400AD9DC (MiReleaseWsSwapReservationPfn.c)
 *     MiLockCode @ 0x1400BCA50 (MiLockCode.c)
 *     MiLockPageTablePage @ 0x1400BE2E0 (MiLockPageTablePage.c)
 *     MiReleasePageFileSpace @ 0x1400CB9A0 (MiReleasePageFileSpace.c)
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
 *     MiActOnPte @ 0x1400EC4F0 (MiActOnPte.c)
 *     MiSetPagesModified @ 0x140218768 (MiSetPagesModified.c)
 *     MiPurgeImageSection @ 0x14021F0FC (MiPurgeImageSection.c)
 *     MiStoreMarkLockedPagesModified @ 0x14022C9B0 (MiStoreMarkLockedPagesModified.c)
 *     MiStoreWriteModifiedPages @ 0x14022CE80 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

__int64 __fastcall MiCapturePageFileInfoInline(unsigned __int64 *a1, int a2, int a3)
{
  unsigned __int64 v3; // r9
  int v4; // r11d
  unsigned __int64 *v6; // r10
  __int64 PteShadow; // rax
  unsigned __int64 v8; // rcx

  v3 = *a1;
  v4 = a3;
  v6 = a1;
  if ( (*a1 & 4) != 0 )
  {
    PteShadow = *a1;
    if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(a1, v3);
    if ( a2 )
      *v6 = v3 & 0xFFFFFFFFFFFFFFFBuLL;
    v8 = PteShadow & 0xFFFFFFFFFFFFFFFDuLL;
    if ( v4 )
      return PteShadow;
    return v8;
  }
  else if ( a3 && (v3 & 2) != 0 )
  {
    if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
      return MiReadPteShadow(a1, v3);
    return v3;
  }
  else
  {
    return 0LL;
  }
}
