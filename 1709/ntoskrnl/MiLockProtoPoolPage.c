/*
 * XREFs of MiLockProtoPoolPage @ 0x140030E90
 * Callers:
 *     MmCopyToCachedPage @ 0x14001CF90 (MmCopyToCachedPage.c)
 *     MiPfPutPagesInTransition @ 0x140025FD0 (MiPfPutPagesInTransition.c)
 *     MiAllocateInPageSupport @ 0x14002A89C (MiAllocateInPageSupport.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14002D0C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiDeleteSubsectionPages @ 0x14004C770 (MiDeleteSubsectionPages.c)
 *     MmCheckCachedPageStates @ 0x14007B8D0 (MmCheckCachedPageStates.c)
 *     MiSectionCreated @ 0x1400B72A4 (MiSectionCreated.c)
 *     MiLockCode @ 0x1400BCA50 (MiLockCode.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiDeleteMergedPte @ 0x1400E4F14 (MiDeleteMergedPte.c)
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
 *     MiWalkVaRange @ 0x1400EBE20 (MiWalkVaRange.c)
 *     MiInitializeImageProtos @ 0x1400ECF10 (MiInitializeImageProtos.c)
 *     MiResolveProtoCombine @ 0x1400EDBF4 (MiResolveProtoCombine.c)
 *     MiMakeImageReadOnly @ 0x140122884 (MiMakeImageReadOnly.c)
 *     MiTranslatePageForCopy @ 0x140217C58 (MiTranslatePageForCopy.c)
 *     MiPurgeImageSection @ 0x14021F0FC (MiPurgeImageSection.c)
 *     MiReplaceLockedPage @ 0x14021FEC0 (MiReplaceLockedPage.c)
 *     MiBuildFileOnlyProtos @ 0x140222428 (MiBuildFileOnlyProtos.c)
 *     MiEliminateStaleExtents @ 0x140222B30 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x140222C04 (MiEnableLargeSubsection.c)
 *     MiGetPageFileSectionForReservation @ 0x140226494 (MiGetPageFileSectionForReservation.c)
 *     MiInsertLargeVadMapping @ 0x140228908 (MiInsertLargeVadMapping.c)
 *     MiDeletePerSessionProtos @ 0x14022DCD4 (MiDeletePerSessionProtos.c)
 *     MiInitializeProtoPfn @ 0x14022E010 (MiInitializeProtoPfn.c)
 *     MiConvertStandbyToProto @ 0x140231350 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiLockOwnedProtoPage @ 0x140031B00 (MiLockOwnedProtoPage.c)
 *     MiChargeForLockedPage @ 0x140032500 (MiChargeForLockedPage.c)
 *     MiAreChargesNeededToLockPage @ 0x1400780A0 (MiAreChargesNeededToLockPage.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiLockProtoPoolPage(unsigned __int64 a1, unsigned __int8 *a2)
{
  __int64 *v3; // rsi
  __int64 v4; // r9
  __int64 PteShadow; // rax
  __int64 v6; // r14
  __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v3 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v4 = *v3;
  do
  {
    PteShadow = v4;
    if ( (unsigned __int64)v3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v3 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v3, v4);
    v17 = PteShadow;
    if ( (PteShadow & 1) == 0 || (PteShadow & 0x200) != 0 )
      return 0LL;
    v6 = MI_GET_PAGE_FRAME_FROM_PTE(&v17);
  }
  while ( !(unsigned int)MiIsPfnInline(v6) );
  v7 = 48 * v6 - 0x58000000000LL;
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    MiLockPageAtDpcInline(v7);
    *a2 = CurrentIrql;
  }
  else
  {
    MiLockPageAtDpcInline(v7);
  }
  v9 = *v3;
  if ( (unsigned __int64)v3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v3 <= 0xFFFFF6FB7DBED7F8uLL )
    v9 = MiReadPteShadow(v3, *v3);
  v17 = v9;
  if ( (v9 & 1) != 0 && (v9 & 0x200) == 0 && v6 == MI_GET_PAGE_FRAME_FROM_PTE(&v17) )
  {
    if ( !(unsigned int)MiAreChargesNeededToLockPage(48 * v6 - 0x58000000000LL, v10, v11, v12)
      || (unsigned int)MiChargeForLockedPage(v14, 1LL) )
    {
      ++*(_WORD *)(v7 + 32);
    }
    if ( a2 )
      v13 = *a2;
    else
      LOBYTE(v13) = 17;
    MiLockOwnedProtoPage(48 * v6 - 0x58000000000LL, v13);
    return 48 * v6 - 0x58000000000LL;
  }
  else
  {
    if ( a2 )
    {
      v16 = *a2;
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v16);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    return 0LL;
  }
}
