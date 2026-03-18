/*
 * XREFs of MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300
 * Callers:
 *     ExFreeLargePool @ 0x14002E0E0 (ExFreeLargePool.c)
 *     MiGetPhysicalAddress @ 0x1400BBFF0 (MiGetPhysicalAddress.c)
 *     MiClearNonPagedPtes @ 0x1400BC1C0 (MiClearNonPagedPtes.c)
 *     MiLockCode @ 0x1400BCA50 (MiLockCode.c)
 *     MiProbeLockFrame @ 0x1400BDD10 (MiProbeLockFrame.c)
 *     MiUpdateForkMaps @ 0x1400CC280 (MiUpdateForkMaps.c)
 *     MiSetSystemCodeProtection @ 0x1400DC208 (MiSetSystemCodeProtection.c)
 *     MmUnmapIoSpace @ 0x1401186A0 (MmUnmapIoSpace.c)
 *     MiMappingHasIoTracker @ 0x14011880C (MiMappingHasIoTracker.c)
 *     MiZeroAndFlushPtes @ 0x1401188A4 (MiZeroAndFlushPtes.c)
 *     MiMappingHasIoReferences @ 0x140119C0C (MiMappingHasIoReferences.c)
 *     MmSetPageProtection @ 0x140139650 (MmSetPageProtection.c)
 *     MiPfnRangeIsZero @ 0x140144C40 (MiPfnRangeIsZero.c)
 *     MiDemoteLargePageOneLevel @ 0x140145244 (MiDemoteLargePageOneLevel.c)
 *     MiCountSystemImageCommitment @ 0x14014BA18 (MiCountSystemImageCommitment.c)
 *     MmProtectMdlSystemAddress @ 0x140217160 (MmProtectMdlSystemAddress.c)
 *     MmReplaceImportEntry @ 0x1402193DC (MmReplaceImportEntry.c)
 *     MiAddTriageDumpPtes @ 0x14021AD50 (MiAddTriageDumpPtes.c)
 *     MiDbgWriteCheck @ 0x140228014 (MiDbgWriteCheck.c)
 *     MiLargePageFault @ 0x140228A74 (MiLargePageFault.c)
 *     MiScrubLargeMappedPage @ 0x1402387C4 (MiScrubLargeMappedPage.c)
 *     MiInitializeShadowPageTable @ 0x14043CFEC (MiInitializeShadowPageTable.c)
 *     MmChangeImageProtection @ 0x140515760 (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 *     MmLockPagableDataSection @ 0x140516060 (MmLockPagableDataSection.c)
 *     MmPageEntireDriver @ 0x140516A90 (MmPageEntireDriver.c)
 *     MiImagePagable @ 0x140516BA8 (MiImagePagable.c)
 *     MiDisablePagingOfDriver @ 0x140542B58 (MiDisablePagingOfDriver.c)
 *     MiHandleDriverNonPagedSections @ 0x140543D68 (MiHandleDriverNonPagedSections.c)
 *     MiFreeDriverInitialization @ 0x14058F310 (MiFreeDriverInitialization.c)
 *     MiFreeInitializationCode @ 0x14058F3A0 (MiFreeInitializationCode.c)
 *     MiUnlockDriverCode @ 0x14059BB54 (MiUnlockDriverCode.c)
 *     MiProtectSystemImage @ 0x1405B2D74 (MiProtectSystemImage.c)
 *     MiBackSystemImageWithPagefile @ 0x1405C86AC (MiBackSystemImageWithPagefile.c)
 *     MiReloadBootLoadedDrivers @ 0x140837458 (MiReloadBootLoadedDrivers.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x14084928C (MiInitializeBootLoadedDriverPfns.c)
 *     MiMarkBootImagesNonPaged @ 0x14084994C (MiMarkBootImagesNonPaged.c)
 *     MiCheckLargePageOk @ 0x140856488 (MiCheckLargePageOk.c)
 *     MmDiscardDriverSection @ 0x140857448 (MmDiscardDriverSection.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

__int64 __fastcall MI_IS_PHYSICAL_ADDRESS(unsigned __int64 a1)
{
  __int64 v1; // r9
  unsigned __int64 v2; // r11
  unsigned int v3; // r10d
  _QWORD *v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v7; // [rsp+20h] [rbp-28h]
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v7 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v8 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LODWORD(v1) = 3;
  v2 = 0xFFFFF6FB7DBED7F8uLL;
  while ( 1 )
  {
    v3 = v1;
    v1 = (unsigned int)(v1 - 1);
    v4 = (_QWORD *)*(&v7 + v1);
    v5 = *v4;
    if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v4 <= v2 )
      LOBYTE(v5) = MiReadPteShadow(v4, *v4);
    if ( (v5 & 1) == 0 )
      return 0LL;
    if ( (v5 & 0x80u) != 0LL )
      break;
    if ( !(_DWORD)v1 )
      return 0LL;
  }
  return v3;
}
