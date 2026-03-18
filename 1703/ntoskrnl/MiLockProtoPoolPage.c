/*
 * XREFs of MiLockProtoPoolPage @ 0x1400A1530
 * Callers:
 *     MiMakeImageReadOnly @ 0x140028ABC (MiMakeImageReadOnly.c)
 *     MiSectionCreated @ 0x14005E604 (MiSectionCreated.c)
 *     MiDeleteMergedPte @ 0x140079374 (MiDeleteMergedPte.c)
 *     MiWalkVaRange @ 0x14007B280 (MiWalkVaRange.c)
 *     MmCheckCachedPageStates @ 0x14009E320 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x14009F980 (MmCopyToCachedPage.c)
 *     MiMakePageAvoidRead @ 0x1400A08D0 (MiMakePageAvoidRead.c)
 *     MiMigratePfn @ 0x1400C3D80 (MiMigratePfn.c)
 *     MiDeleteSubsectionPages @ 0x1400C4590 (MiDeleteSubsectionPages.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiLockCode @ 0x140100CD0 (MiLockCode.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1401039D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiResolveProtoCombine @ 0x140105DB0 (MiResolveProtoCombine.c)
 *     MiAllocateInPageSupport @ 0x1401067C4 (MiAllocateInPageSupport.c)
 *     MiPfPutPagesInTransition @ 0x140108850 (MiPfPutPagesInTransition.c)
 *     MiInitializeImageProtos @ 0x14010A158 (MiInitializeImageProtos.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiConvertStandbyToProto @ 0x140130148 (MiConvertStandbyToProto.c)
 *     MiGetPageFileSectionForReservation @ 0x14013A4BC (MiGetPageFileSectionForReservation.c)
 *     MiTranslatePageForCopy @ 0x1402105E8 (MiTranslatePageForCopy.c)
 *     MiPurgeImageSection @ 0x140215D80 (MiPurgeImageSection.c)
 *     MiReplaceLockedPage @ 0x14021670C (MiReplaceLockedPage.c)
 *     MiBuildFileOnlyProtos @ 0x14021816C (MiBuildFileOnlyProtos.c)
 *     MiEliminateStaleExtents @ 0x140218880 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x140218958 (MiEnableLargeSubsection.c)
 *     MiInsertLargeVadMapping @ 0x14021BFD8 (MiInsertLargeVadMapping.c)
 *     MiDeletePerSessionProtos @ 0x140221048 (MiDeletePerSessionProtos.c)
 *     MiInitializeProtoPfn @ 0x14022136C (MiInitializeProtoPfn.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x14000D798 (MiChargePartitionResidentAvailable.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiWriteValidPteVolatile @ 0x1400FDBE0 (MiWriteValidPteVolatile.c)
 *     MiLockOwnedProtoPage @ 0x14010B370 (MiLockOwnedProtoPage.c)
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiLockProtoPoolPage(unsigned __int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // r9
  __int64 v7; // r11
  unsigned __int64 v8; // r10
  __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v11; // rax
  unsigned __int64 CurrentPrcb; // rdx
  unsigned __int64 v13; // rcx
  __int16 v14; // ax
  bool v15; // di
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  ULONG_PTR *v18; // rsi
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  unsigned __int8 v21; // bp
  unsigned __int64 v22; // r14
  unsigned int v23; // edi
  unsigned __int64 v25; // rax
  __int64 v26; // [rsp+28h] [rbp-40h] BYREF
  int v27; // [rsp+80h] [rbp+18h] BYREF
  int v28; // [rsp+88h] [rbp+20h] BYREF

  v3 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    v4 = MI_READ_PTE_LOCK_FREE(v3);
    v26 = v4;
    if ( (v4 & 1) == 0 || (v4 & 0x200) != 0 )
      return 0LL;
    v5 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v26) >> 12) & 0xFFFFFFFFFLL;
  }
  while ( v5 > v8 || v6 && (*(_QWORD *)(v7 + 48 * v5) & 0x20000000000000LL) == 0 );
  v9 = 48 * v5 - 0x58000000000LL;
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v27 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v27);
      while ( (*(_QWORD *)(v9 + 24) & 0x8000000000000000uLL) != 0 );
    }
    *a2 = CurrentIrql;
  }
  else
  {
    v28 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v28);
      while ( (*(_QWORD *)(v9 + 24) & 0x8000000000000000uLL) != 0 );
    }
  }
  v11 = MI_READ_PTE_LOCK_FREE(v3);
  v26 = v11;
  if ( (v11 & 1) == 0 || (v11 & 0x200) != 0 || v5 != MI_GET_PAGE_FRAME_FROM_PTE(&v26) )
  {
    if ( a2 )
    {
      v25 = *a2;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v25);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    return 0LL;
  }
  CurrentPrcb = *(_QWORD *)(v9 + 24);
  v13 = *(_QWORD *)(v9 + 40);
  if ( (v13 & 0x10000000000000LL) != 0 )
    goto LABEL_42;
  v14 = *(_WORD *)(v9 + 32);
  CurrentPrcb &= 0x3FFFFFFFFFFFFFFFuLL;
  if ( v14 )
  {
    if ( v14 != 1 )
    {
      if ( v14 != 2 || !CurrentPrcb )
        goto LABEL_42;
LABEL_25:
      if ( (*(_BYTE *)(v9 + 34) & 8) == 0 )
        goto LABEL_42;
      goto LABEL_26;
    }
    if ( !CurrentPrcb )
      goto LABEL_25;
  }
LABEL_26:
  v15 = 0;
  if ( (v13 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v9 + 16) & 0x400LL) != 0 )
  {
    v15 = 1;
  }
  else
  {
    v16 = *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL;
    if ( v16 <= 0xFFFFF6BFFFFFFF78uLL && v16 >= 0xFFFFF68000000000uLL )
      v15 = ((*(unsigned __int8 *)(v9 + 35) >> 5) & 1) != 0;
  }
  v17 = (v13 >> 40) & 0x3FF;
  v18 = *(ULONG_PTR **)(qword_14036C8F8 + 8 * v17);
  if ( v15 && !(unsigned int)MiChargeCommit(*(_QWORD *)(qword_14036C8F8 + 8 * v17), 1LL, 4LL) )
    goto LABEL_43;
  if ( v18 == &MiSystemPartition )
  {
    CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
    v19 = *(_DWORD *)(CurrentPrcb + 24764);
    while ( v19 )
    {
      if ( v19 == -1 )
        break;
      v20 = v19;
      v19 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 24764), v19 - 1, v19);
      if ( v20 == v19 )
        goto LABEL_42;
    }
  }
  if ( !(unsigned int)MiChargePartitionResidentAvailable((__int64)v18, 1uLL, 0xFFFFFFFFLL) )
  {
    if ( v15 )
      MiReturnCommit(v18, 1LL);
    goto LABEL_43;
  }
LABEL_42:
  ++*(_WORD *)(v9 + 32);
LABEL_43:
  if ( a2 )
  {
    v21 = *a2;
    v22 = *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL;
    while ( (*(_BYTE *)(v9 + 34) & 0x20) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v21 != 17 )
        __writecr8(v21);
      v23 = 0;
      while ( (*(_BYTE *)(v9 + 34) & 0x20) != 0 )
      {
        if ( (++v23 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v23);
      }
      MiLockPageInline(v9);
    }
    *(_BYTE *)(v9 + 34) |= 0x20u;
    if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) == 0 && (MI_READ_PTE_LOCK_FREE(v22) & 0x20) == 0 )
      MiWriteValidPteVolatile(v22, 1LL);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    LOBYTE(CurrentPrcb) = 17;
    MiLockOwnedProtoPage(v9, CurrentPrcb);
  }
  return v9;
}
