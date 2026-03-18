/*
 * XREFs of MmInitNucleus @ 0x14082CC5C
 * Callers:
 *     MmInitSystem @ 0x140828DC4 (MmInitSystem.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiComputeHash64 @ 0x140107500 (MiComputeHash64.c)
 *     MiInitializeNumaRanges @ 0x1401379AC (MiInitializeNumaRanges.c)
 *     VslGetNestedPageProtectionFlags @ 0x140143BC0 (VslGetNestedPageProtectionFlags.c)
 *     MiFreeUnusedPfnPages @ 0x140144320 (MiFreeUnusedPfnPages.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140146390 (ExInitializeNPagedLookasideListInternal.c)
 *     MiInitializeCommitment @ 0x14014FC00 (MiInitializeCommitment.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     strstr @ 0x14015E110 (strstr.c)
 *     KeKvaShadowingActive @ 0x14017B418 (KeKvaShadowingActive.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MmInitializeProcessor @ 0x140425688 (MmInitializeProcessor.c)
 *     MiInitializeSections @ 0x1405B353C (MiInitializeSections.c)
 *     MiInitializeWsSwapping @ 0x1405B3674 (MiInitializeWsSwapping.c)
 *     MiCreateNodeLists @ 0x1405B3928 (MiCreateNodeLists.c)
 *     MiCreateLargePfnBitMaps @ 0x1405B4DC8 (MiCreateLargePfnBitMaps.c)
 *     MiInitializeSpecialPool @ 0x1405B6FA0 (MiInitializeSpecialPool.c)
 *     MiComputeNodeMemory @ 0x1405E89E4 (MiComputeNodeMemory.c)
 *     MiConvertInitialMemoryBlock @ 0x1405EB6E8 (MiConvertInitialMemoryBlock.c)
 *     MxConsumeLargePageSlush @ 0x140827268 (MxConsumeLargePageSlush.c)
 *     MiCreatePfnDatabase @ 0x140829C3C (MiCreatePfnDatabase.c)
 *     MiInitializePfnsForValidMappings @ 0x140829FE8 (MiInitializePfnsForValidMappings.c)
 *     MxRelocatePageTables @ 0x14082A08C (MxRelocatePageTables.c)
 *     MiInitializeDummyPages @ 0x14082A2CC (MiInitializeDummyPages.c)
 *     MiSwitchToPfns @ 0x14082A50C (MiSwitchToPfns.c)
 *     MiFindLargestLoaderDescriptor @ 0x14082AF6C (MiFindLargestLoaderDescriptor.c)
 *     MiMarkLargePageRanges @ 0x14082D2D8 (MiMarkLargePageRanges.c)
 *     MiInitializeNonPagedPool @ 0x14082D7A8 (MiInitializeNonPagedPool.c)
 *     InitializePool @ 0x14082DEFC (InitializePool.c)
 *     MiInitializeKernelStacks @ 0x14082EA74 (MiInitializeKernelStacks.c)
 *     MiInitializeBootDefaults @ 0x14082F394 (MiInitializeBootDefaults.c)
 *     MiInitializeSystemPtes @ 0x14082F554 (MiInitializeSystemPtes.c)
 *     MiBuildPagedPool @ 0x14082F958 (MiBuildPagedPool.c)
 *     MiFillPfnGaps @ 0x140849A2C (MiFillPfnGaps.c)
 *     MiInitializeGapFrames @ 0x140849A88 (MiInitializeGapFrames.c)
 *     MiZeroBootMappings @ 0x14084A3F8 (MiZeroBootMappings.c)
 *     MiInitializeDecayPfns @ 0x14084A62C (MiInitializeDecayPfns.c)
 *     MiMemoryLicense @ 0x14084D9DC (MiMemoryLicense.c)
 *     MmInitializeMemoryLimits @ 0x14084E07C (MmInitializeMemoryLimits.c)
 *     MiInitializeDynamicVa @ 0x14085227C (MiInitializeDynamicVa.c)
 *     MiCreateTopLevelUltraMappings @ 0x1408525F8 (MiCreateTopLevelUltraMappings.c)
 *     MiInitializeSystemPteTracker @ 0x14085357C (MiInitializeSystemPteTracker.c)
 *     MiInitializeZeroingAttributes @ 0x1408539A0 (MiInitializeZeroingAttributes.c)
 *     MiExamineHalVa @ 0x1408559F8 (MiExamineHalVa.c)
 *     MiCheckLargePageOk @ 0x140856488 (MiCheckLargePageOk.c)
 *     MiMapDummyPages @ 0x140856878 (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x1408574D4 (MiProtectSharedUserPage.c)
 *     MiInitializeChannelRanges @ 0x140858000 (MiInitializeChannelRanges.c)
 */

char __fastcall MmInitNucleus(ULONG_PTR BugCheckParameter2)
{
  int v2; // edx
  __int64 v3; // rax
  _KPROCESS *Process; // rdx
  __int16 v5; // cx
  int v6; // eax
  int NestedPageProtectionFlags; // eax
  int v8; // ecx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // rax
  char *v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r8
  _QWORD *v20; // rax
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // r9
  _QWORD v23[4]; // [rsp+48h] [rbp-38h] BYREF
  int v24; // [rsp+68h] [rbp-18h]

  dword_140388530 = 48;
  MiFlags ^= (MiFlags ^ ((unsigned int)KeKvaShadowingActive() << 23)) & 0x1800000;
  if ( (((unsigned int)MiFlags >> 23) & 3) != 0 )
  {
    if ( (((unsigned int)MiFlags >> 23) & 3) == 1 )
    {
      word_1403885F8 = 0;
    }
    else if ( (((unsigned int)MiFlags >> 23) & 3) == 2 )
    {
      word_1403885F8 = 256;
    }
  }
  else
  {
    word_1403885F8 = 1;
  }
  if ( (((unsigned int)MiFlags >> 23) & 3) != 0 && KiImplementedPhysicalBits > 0 )
    qword_140388548 = 1LL << ((unsigned __int8)KiImplementedPhysicalBits - 1);
  if ( (KeFeatureBits & 0x100000) == 0 )
    KeBugCheckEx(0x1Au, 0x3030306uLL, KeFeatureBits, 0LL, 0LL);
  if ( KiAccessBitErrata == 1 )
  {
    v2 = MiFlags | 0x2000000;
  }
  else
  {
    if ( KiAccessBitErrata != 2 )
      goto LABEL_16;
    v2 = MiFlags | 0x800;
  }
  MiFlags = v2;
LABEL_16:
  if ( strstr(*(const char **)(BugCheckParameter2 + 216), "NOACCESSBITREPLACEMENT") )
    MiFlags |= 0x800u;
  if ( (KeFeatureBits & 0x200000) != 0 )
  {
    MiFlags |= 0x100u;
  }
  else if ( (KeFeatureBits & 0x1000000) != 0 )
  {
    MiFlags |= 0x200u;
  }
  v3 = MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)0xFFFFF6FB7DBEDF68LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  v5 = __readcr3();
  Process->DirectoryTableBase = (v3 << 12) | v5 & 0xFFF;
  MiLowHalVa = MiExamineHalVa();
  MiInitializeZeroingAttributes();
  MiInitializeBootDefaults(BugCheckParameter2);
  MiInitializeSystemPteTracker();
  SpinLock = 0LL;
  qword_1403890E8 = (__int64)&qword_1403890E0;
  qword_1403890E0 = (__int64)&qword_1403890E0;
  qword_1403890C8[0] = 0LL;
  qword_1403890D0 = 0LL;
  qword_1403890D8 = 0LL;
  qword_140389120 = 0LL;
  MiInitializeDynamicVa();
  if ( dword_140400130 == 6881367 )
  {
    MEMORY[0xFFFFF78000000264] = 1;
    dword_140400130 = 0;
  }
  else
  {
    v6 = 2;
    if ( dword_140400130 != 6357068 )
      v6 = 3;
    MEMORY[0xFFFFF78000000264] = v6;
    dword_140400130 = 1;
  }
  MiInitializeNumaRanges();
  MiInitializeChannelRanges();
  MmDynamicPfn = 0x1000000000LL;
  NestedPageProtectionFlags = VslGetNestedPageProtectionFlags();
  if ( NestedPageProtectionFlags )
  {
    v8 = MiFlags | 0x2000;
    MiFlags |= 0x2000u;
    if ( (NestedPageProtectionFlags & 4) != 0 )
    {
      v8 |= 0xC000u;
      MiFlags = v8;
    }
    if ( (NestedPageProtectionFlags & 1) != 0 )
    {
      v8 |= 0x50000u;
    }
    else
    {
      if ( (NestedPageProtectionFlags & 2) == 0 )
      {
LABEL_35:
        if ( (NestedPageProtectionFlags & 0x10) == 0 )
        {
          v8 |= 0x20000u;
          MiFlags = v8;
        }
        if ( (NestedPageProtectionFlags & 0x40) != 0 )
        {
          v8 |= 0x100000u;
          MiFlags = v8;
        }
        if ( (NestedPageProtectionFlags & 0x80u) != 0 )
          MiFlags = v8 | 0x80000;
        goto LABEL_41;
      }
      v8 |= 0x10000u;
    }
    MiFlags = v8;
    goto LABEL_35;
  }
LABEL_41:
  MiMemoryLicense(BugCheckParameter2);
  if ( !(unsigned int)MiFindLargestLoaderDescriptor(BugCheckParameter2) )
  {
    byte_140388C35 = 3;
    return 0;
  }
  if ( (unsigned int)MiCheckLargePageOk(BugCheckParameter2) )
    MiFlags |= 4u;
  qword_140388568 = -1LL;
  MiProtectSharedUserPage();
  if ( !(unsigned int)MiCreatePfnDatabase(BugCheckParameter2) )
  {
    byte_140388C35 = 6;
    return 0;
  }
  MiInitializePfnsForValidMappings(BugCheckParameter2);
  MiSwitchToPfns(BugCheckParameter2, v10, v11);
  MxRelocatePageTables(BugCheckParameter2);
  MiZeroBootMappings();
  MiInitializeDecayPfns();
  MiInitializeSections((__int64)&MiSystemPartition);
  MiInitializeCommitment((__int64)&MiSystemPartition);
  MiInitializeDummyPages();
  if ( !(unsigned int)MiInitializeSystemPtes() )
  {
    byte_140388C35 = 9;
    return 0;
  }
  if ( !(unsigned int)MiInitializeNonPagedPool() )
  {
    byte_140388C35 = 7;
    return 0;
  }
  if ( !(unsigned int)MiMapDummyPages() )
  {
    byte_140388C35 = 5;
    return 0;
  }
  if ( !(unsigned int)InitializePool(512LL, (HIWORD(MiFlags) & 1) << 10) )
  {
    byte_140388C35 = 2;
    return 0;
  }
  if ( !(unsigned int)MiInitializeKernelStacks() )
  {
    byte_140388C35 = 20;
    return 0;
  }
  if ( !(unsigned int)MmInitializeProcessor((__int64)KeGetCurrentPrcb(), v12, v13) )
  {
    byte_140388C35 = 10;
    return 0;
  }
  v15 = (_QWORD *)MiReservePtes((__int64)&qword_140389360, 1uLL, v14);
  qword_140388CC8 = (__int64)v15;
  if ( !v15 )
  {
    byte_140388C35 = 11;
    return 0;
  }
  *v15 = 0LL;
  if ( (unsigned __int64)v15 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v15 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow();
  MiFreeUnusedPfnPages(0LL);
  v23[0] = 0x100010100010101LL;
  v24 = 16777472;
  v23[2] = 0x10101010101LL;
  v23[3] = 0x10101010101LL;
  v23[1] = 0x101010101010101LL;
  v16 = MmInitializeMemoryLimits(BugCheckParameter2, v23);
  if ( !v16 || (v17 = MiConvertInitialMemoryBlock((__int64)&MiSystemPartition, v16)) == 0LL )
  {
    byte_140388C35 = 12;
    return 0;
  }
  MxConsumeLargePageSlush();
  qword_14038A0E0 = (__int64)MiCreateNodeLists((__int64)&MiSystemPartition, (__int64)v17);
  if ( !qword_14038A0E0 )
  {
    byte_140388C35 = 13;
    return 0;
  }
  MiComputeNodeMemory((__int64)&MiSystemPartition);
  if ( !(unsigned int)MiFillPfnGaps() )
  {
    byte_140388C35 = 18;
    return 0;
  }
  if ( !(unsigned int)MiInitializeGapFrames(-1LL, &unk_1403891C8) || !(unsigned int)MiCreateTopLevelUltraMappings() )
  {
    byte_140388C35 = 19;
    return 0;
  }
  if ( !(unsigned int)MiBuildPagedPool() || !(unsigned int)MiInitializeSpecialPool(0) )
    return 0;
  MmPhysicalMemoryBlock = v17;
  if ( !(unsigned int)MiCreateLargePfnBitMaps((__int64)&MiSystemPartition, v17, v18) )
  {
    byte_140388C35 = 15;
    return 0;
  }
  MiMarkLargePageRanges();
  v20 = (_QWORD *)MiReservePtes((__int64)&qword_140389360, 1uLL, v19);
  v21 = (unsigned __int64)v20;
  if ( !v20 )
  {
    byte_140388C35 = 4;
    return 0;
  }
  *v20 = MiMakeValidPte((unsigned __int64)v20, qword_1403891A0, 536870913);
  if ( v21 >= 0xFFFFF6FB7DBED000uLL && v21 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow();
  qword_140388A90 = MiComputeHash64((__int64)(v21 << 25) >> 16);
  MiReleasePtes((__int64)&qword_140389360, v21, 1u, v22);
  MiInitializeWsSwapping(&MiSystemPartition);
  MiInitializeNumaRanges();
  ExInitializeNPagedLookasideListInternal((__int64)&stru_140388E80, 0LL, 0LL, 512, 144, 1800170829, 0, 0);
  return 1;
}
