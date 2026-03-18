/*
 * XREFs of MiLockProtoPoolPage @ 0x1400320B0
 * Callers:
 *     MiDeleteSubsectionPages @ 0x140016E90 (MiDeleteSubsectionPages.c)
 *     MiDispatchFault @ 0x14001D2A0 (MiDispatchFault.c)
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 *     MiPfPutPagesInTransition @ 0x140047200 (MiPfPutPagesInTransition.c)
 *     MiSectionCreated @ 0x14004D194 (MiSectionCreated.c)
 *     MiInitializeImageProtos @ 0x14004DF48 (MiInitializeImageProtos.c)
 *     MiWalkVaRange @ 0x14004FC40 (MiWalkVaRange.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140052D00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     MiAllocateInPageSupport @ 0x14005763C (MiAllocateInPageSupport.c)
 *     MiResolveProtoCombine @ 0x140058068 (MiResolveProtoCombine.c)
 *     MiDeleteMergedPte @ 0x1400AD9AC (MiDeleteMergedPte.c)
 *     MiMakeImageReadOnly @ 0x1400C2CC0 (MiMakeImageReadOnly.c)
 *     MmCopyToCachedPage @ 0x1401130D0 (MmCopyToCachedPage.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x14013AB00 (MiLockCode.c)
 *     MiConvertStandbyToProto @ 0x1401433FC (MiConvertStandbyToProto.c)
 *     MiGetPageFileSectionForReservation @ 0x140150C40 (MiGetPageFileSectionForReservation.c)
 *     MiTranslatePageForCopy @ 0x14015B6C0 (MiTranslatePageForCopy.c)
 *     MiPurgeImageSection @ 0x14025ACE0 (MiPurgeImageSection.c)
 *     MiReplaceLockedPage @ 0x14025B7C8 (MiReplaceLockedPage.c)
 *     MiBuildFileOnlyProtos @ 0x14025D034 (MiBuildFileOnlyProtos.c)
 *     MiEliminateStaleExtents @ 0x14025D78C (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14025D860 (MiEnableLargeSubsection.c)
 *     MiInsertLargeVadMapping @ 0x140261C58 (MiInsertLargeVadMapping.c)
 *     MiDeletePerSessionProtos @ 0x140267E68 (MiDeletePerSessionProtos.c)
 *     MiInitializeProtoPfn @ 0x1402681CC (MiInitializeProtoPfn.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAreChargesNeededToLockPage @ 0x140031FE0 (MiAreChargesNeededToLockPage.c)
 *     MiLockOwnedProtoPage @ 0x1400322A0 (MiLockOwnedProtoPage.c)
 *     MiChargeForLockedPage @ 0x140033DD0 (MiChargeForLockedPage.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 */

__int64 __fastcall MiLockProtoPoolPage(unsigned __int64 a1, unsigned __int8 *a2)
{
  unsigned __int64 v3; // r14
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned __int64 v21; // rax
  int v22; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v23; // [rsp+70h] [rbp+18h] BYREF

  v3 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    v4 = MI_READ_PTE_LOCK_FREE(v3);
    v23 = v4;
    v5 = v4;
    if ( (v4 & 1) == 0 || (v4 & 0x200) != 0 )
      return 0LL;
    if ( (unsigned __int64)&v23 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v23 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x1800000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v4 & 1) != 0
      && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
    {
      v12 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 8 * (((unsigned __int64)&v23 >> 3) & 0x1FF));
        v14 = v5 | 0x20;
        if ( (v13 & 0x20) == 0 )
          v14 = v5;
        v5 = v14;
        if ( (v13 & 0x42) != 0 )
          v5 = v14 | 0x42;
      }
    }
    v6 = (v5 >> 12) & 0xFFFFFFFFFLL;
  }
  while ( !(unsigned int)MiIsPfnInline(v6) );
  v7 = 48 * v6 - 0x58000000000LL;
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    MiLockPageAtDpcInline(48 * v6 - 0x58000000000LL);
    *a2 = CurrentIrql;
  }
  else
  {
    v22 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v22);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
  }
  v8 = *(_QWORD *)v3;
  if ( v3 >= 0xFFFFF6FB7DBED000uLL
    && v3 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    v15 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v15 )
    {
      v16 = v8 | 0x20;
      v17 = *(_QWORD *)(v15 + 8 * ((v3 >> 3) & 0x1FF));
      if ( (v17 & 0x20) == 0 )
        v16 = *(_QWORD *)v3;
      v8 = v16;
      if ( (v17 & 0x42) != 0 )
        v8 = v16 | 0x42;
    }
  }
  v23 = v8;
  if ( (v8 & 1) == 0 || (v8 & 0x200) != 0 )
    goto LABEL_58;
  if ( (unsigned __int64)&v23 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v23 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    v18 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 8 * (((unsigned __int64)&v23 >> 3) & 0x1FF));
      v20 = v8 | 0x20;
      if ( (v19 & 0x20) == 0 )
        v20 = v8;
      v8 = v20;
      if ( (v19 & 0x42) != 0 )
        v8 = v20 | 0x42;
    }
  }
  if ( v6 == ((v8 >> 12) & 0xFFFFFFFFFLL) )
  {
    if ( !(unsigned int)MiAreChargesNeededToLockPage(48 * v6 - 0x58000000000LL)
      || (unsigned int)MiChargeForLockedPage(48 * v6 - 0x58000000000LL, 1LL) )
    {
      ++*(_WORD *)(v7 + 32);
    }
    if ( a2 )
      v9 = *a2;
    else
      LOBYTE(v9) = 17;
    MiLockOwnedProtoPage(48 * v6 - 0x58000000000LL, v9);
    return 48 * v6 - 0x58000000000LL;
  }
  else
  {
LABEL_58:
    if ( a2 )
    {
      v21 = *a2;
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v21);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    return 0LL;
  }
}
