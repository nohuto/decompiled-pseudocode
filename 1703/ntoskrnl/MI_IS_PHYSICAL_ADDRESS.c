/*
 * XREFs of MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70
 * Callers:
 *     MiUpdateForkMaps @ 0x140002950 (MiUpdateForkMaps.c)
 *     MiSetSystemCodeProtection @ 0x14006C1E0 (MiSetSystemCodeProtection.c)
 *     MiLockPagableImageSection @ 0x14006CCF0 (MiLockPagableImageSection.c)
 *     MmUnmapLockedPages @ 0x1400A3B30 (MmUnmapLockedPages.c)
 *     MiGetPhysicalAddress @ 0x1400A7900 (MiGetPhysicalAddress.c)
 *     MiClearNonPagedPtes @ 0x1400A7AB0 (MiClearNonPagedPtes.c)
 *     MiProbeLockFrame @ 0x1400B3EF0 (MiProbeLockFrame.c)
 *     MiLockCode @ 0x140100CD0 (MiLockCode.c)
 *     MmUnmapIoSpace @ 0x1401238F0 (MmUnmapIoSpace.c)
 *     MiMappingHasIoTracker @ 0x140123A48 (MiMappingHasIoTracker.c)
 *     MiZeroAndFlushPtes @ 0x140123AB4 (MiZeroAndFlushPtes.c)
 *     MiMappingHasIoReferences @ 0x1401253CC (MiMappingHasIoReferences.c)
 *     MmSetPageProtection @ 0x140135210 (MmSetPageProtection.c)
 *     MiCountSystemImageCommitment @ 0x1401443B8 (MiCountSystemImageCommitment.c)
 *     MiPfnRangeIsZero @ 0x14015B174 (MiPfnRangeIsZero.c)
 *     MmProtectMdlSystemAddress @ 0x14020FE00 (MmProtectMdlSystemAddress.c)
 *     MmReplaceImportEntry @ 0x140211B08 (MmReplaceImportEntry.c)
 *     MiAddTriageDumpPtes @ 0x140212FAC (MiAddTriageDumpPtes.c)
 *     MiDbgWriteCheck @ 0x14021B75C (MiDbgWriteCheck.c)
 *     MiLargePageFault @ 0x14021C114 (MiLargePageFault.c)
 *     MiScrubLargeMappedPage @ 0x14022617C (MiScrubLargeMappedPage.c)
 *     MiInitializeShadowPageTable @ 0x14041D49C (MiInitializeShadowPageTable.c)
 *     MiFreeDriverInitialization @ 0x1404B1608 (MiFreeDriverInitialization.c)
 *     MiFreeInitializationCode @ 0x1404B1698 (MiFreeInitializationCode.c)
 *     MiDisablePagingOfDriver @ 0x1404B1880 (MiDisablePagingOfDriver.c)
 *     MiImagePagable @ 0x1404B2468 (MiImagePagable.c)
 *     MmPageEntireDriver @ 0x1404B24D0 (MmPageEntireDriver.c)
 *     MmLockPagableDataSection @ 0x1404B2580 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x1404B2670 (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 *     MiHandleDriverNonPagedSections @ 0x1404B3378 (MiHandleDriverNonPagedSections.c)
 *     MiUnlockDriverCode @ 0x140583054 (MiUnlockDriverCode.c)
 *     MiBackSystemImageWithPagefile @ 0x14059D500 (MiBackSystemImageWithPagefile.c)
 *     MiProtectSystemImage @ 0x1405A22B8 (MiProtectSystemImage.c)
 *     MiCheckLargePageOk @ 0x140813244 (MiCheckLargePageOk.c)
 *     MiMarkBootImagesNonPaged @ 0x14081570C (MiMarkBootImagesNonPaged.c)
 *     MiReloadBootLoadedDrivers @ 0x140815898 (MiReloadBootLoadedDrivers.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x14081628C (MiInitializeBootLoadedDriverPfns.c)
 *     MmDiscardDriverSection @ 0x140825DE0 (MmDiscardDriverSection.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MI_IS_PHYSICAL_ADDRESS(unsigned __int64 a1)
{
  int v1; // r9d
  char v2; // al
  unsigned int v3; // r10d
  unsigned __int64 v5; // [rsp+20h] [rbp-28h]
  unsigned __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  v5 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v6 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v1 = 3;
  v7 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    v2 = MI_READ_PTE_LOCK_FREE(*(&v5 + (unsigned int)(v1 - 1)));
    if ( (v2 & 1) == 0 )
      return 0LL;
    if ( v2 < 0 )
      break;
    if ( !v1 )
      return 0LL;
  }
  return v3;
}
