/*
 * XREFs of MmInitNucleus @ 0x140813B1C
 * Callers:
 *     MmInitSystem @ 0x140803254 (MmInitSystem.c)
 * Callees:
 *     MiComputeHash64 @ 0x14008B400 (MiComputeHash64.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     InitializeSListHead @ 0x14012F490 (InitializeSListHead.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140134F20 (ExInitializeNPagedLookasideListInternal.c)
 *     VslGetNestedPageProtectionFlags @ 0x140159240 (VslGetNestedPageProtectionFlags.c)
 *     MiInitializeCommitment @ 0x140159A60 (MiInitializeCommitment.c)
 *     MiInitializeNumaRanges @ 0x14015A3AC (MiInitializeNumaRanges.c)
 *     MiFreeUnusedPfnPages @ 0x14015A8A0 (MiFreeUnusedPfnPages.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     strstr @ 0x1401697D0 (strstr.c)
 *     KeKvaShadowingActive @ 0x14017BC94 (KeKvaShadowingActive.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MmInitializeProcessor @ 0x140410F84 (MmInitializeProcessor.c)
 *     MiInitializeSpecialPool @ 0x14057E514 (MiInitializeSpecialPool.c)
 *     MiInitializeSections @ 0x1405A1DA8 (MiInitializeSections.c)
 *     MiInitializeWsSwapping @ 0x1405A1E7C (MiInitializeWsSwapping.c)
 *     MiCreateNodeLists @ 0x1405A2018 (MiCreateNodeLists.c)
 *     MiCreateLargePfnBitMaps @ 0x1405BA7C0 (MiCreateLargePfnBitMaps.c)
 *     MiComputeNodeMemory @ 0x1405BABD8 (MiComputeNodeMemory.c)
 *     MiConvertInitialMemoryBlock @ 0x1405BAD50 (MiConvertInitialMemoryBlock.c)
 *     MxConsumeLargePageSlush @ 0x1407F6284 (MxConsumeLargePageSlush.c)
 *     MiCreatePfnDatabase @ 0x1407FFCB0 (MiCreatePfnDatabase.c)
 *     MiInitializePfnsForValidMappings @ 0x140800028 (MiInitializePfnsForValidMappings.c)
 *     MxRelocatePageTables @ 0x1408000CC (MxRelocatePageTables.c)
 *     MiInitializeDummyPages @ 0x1408002FC (MiInitializeDummyPages.c)
 *     MiSwitchToPfns @ 0x14080053C (MiSwitchToPfns.c)
 *     MiFindLargestLoaderDescriptor @ 0x140800FB0 (MiFindLargestLoaderDescriptor.c)
 *     MiInitializeNonPagedPool @ 0x140803DE4 (MiInitializeNonPagedPool.c)
 *     MiInitializeKernelStacks @ 0x140808E5C (MiInitializeKernelStacks.c)
 *     MmInitializeMemoryLimits @ 0x14080D720 (MmInitializeMemoryLimits.c)
 *     MiExamineHalVa @ 0x1408127FC (MiExamineHalVa.c)
 *     MiInitializeZeroingAttributes @ 0x1408128BC (MiInitializeZeroingAttributes.c)
 *     MiInitializeBootDefaults @ 0x140812ADC (MiInitializeBootDefaults.c)
 *     MiAssignSessionRanges @ 0x140812DC8 (MiAssignSessionRanges.c)
 *     MiInitializeChannelRanges @ 0x140812FB0 (MiInitializeChannelRanges.c)
 *     MiMemoryLicense @ 0x14081302C (MiMemoryLicense.c)
 *     MiCheckLargePageOk @ 0x140813244 (MiCheckLargePageOk.c)
 *     MiProtectSharedUserPage @ 0x14081347C (MiProtectSharedUserPage.c)
 *     MiZeroBootMappings @ 0x14081354C (MiZeroBootMappings.c)
 *     MiInitializeDecayPfns @ 0x140813728 (MiInitializeDecayPfns.c)
 *     MiMapDummyPages @ 0x140813A24 (MiMapDummyPages.c)
 *     MiMarkLargePageRanges @ 0x1408141A8 (MiMarkLargePageRanges.c)
 *     MiBuildPagedPool @ 0x14081450C (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x14081469C (MiInitializeSystemPtes.c)
 *     InitializePool @ 0x140814AC0 (InitializePool.c)
 *     MiFillPfnGaps @ 0x14081654C (MiFillPfnGaps.c)
 *     MiInitializeGapFrames @ 0x1408165A8 (MiInitializeGapFrames.c)
 */

char __fastcall MmInitNucleus(ULONG_PTR BugCheckParameter2)
{
  int v2; // edx
  bool v3; // zf
  int v4; // eax
  int v5; // eax
  unsigned __int64 v6; // rax
  _KPROCESS *Process; // rdx
  __int16 v8; // cx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  int NestedPageProtectionFlags; // eax
  int v13; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r8
  _QWORD *v22; // rax
  _DWORD *v23; // rax
  char *v24; // rdi
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r8
  _QWORD *v27; // rax
  unsigned __int64 v28; // rdi
  _QWORD v29[4]; // [rsp+48h] [rbp-38h] BYREF
  int v30; // [rsp+68h] [rbp-18h]

  dword_14036C1E8 = 48;
  MiFlags ^= (MiFlags ^ ((unsigned int)KeKvaShadowingActive() << 23)) & 0x1800000;
  if ( (((unsigned int)MiFlags >> 23) & 3) != 0 )
  {
    if ( (((unsigned int)MiFlags >> 23) & 3) == 1 )
    {
      word_14036C2A8 = 0;
    }
    else if ( (((unsigned int)MiFlags >> 23) & 3) == 2 )
    {
      word_14036C2A8 = 256;
    }
  }
  else
  {
    word_14036C2A8 = 1;
  }
  if ( (((unsigned int)MiFlags >> 23) & 3) != 0 && KiImplementedPhysicalBits > 0 )
    qword_14036C200 = 1LL << ((unsigned __int8)KiImplementedPhysicalBits - 1);
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
  v3 = strstr(*(const char **)(BugCheckParameter2 + 216), "NOACCESSBITREPLACEMENT") == 0LL;
  v4 = MiFlags;
  if ( !v3 )
  {
    v4 = MiFlags | 0x800;
    MiFlags |= 0x800u;
  }
  if ( (KeFeatureBits & 0x200000) != 0 )
  {
    v5 = v4 | 0x100;
LABEL_22:
    MiFlags = v5;
    goto LABEL_23;
  }
  if ( (KeFeatureBits & 0x1000000) != 0 )
  {
    v5 = v4 | 0x200;
    goto LABEL_22;
  }
LABEL_23:
  v6 = MI_GET_PAGE_FRAME_FROM_PTE(0xFFFFF6FB7DBEDF68uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = __readcr3();
  Process->DirectoryTableBase = (v6 << 12) | v8 & 0xFFF;
  MiLowHalVa = MiExamineHalVa();
  MiInitializeZeroingAttributes();
  MiInitializeBootDefaults(BugCheckParameter2);
  InitializeSListHead(&stru_14036CD00);
  v9 = &unk_14036D570;
  qword_14036CD10 = 0LL;
  v10 = 16LL;
  do
  {
    v9[1] = v9;
    *v9 = v9;
    v9 += 2;
    --v10;
  }
  while ( v10 );
  qword_14036CE00 = 0LL;
  qword_14036CE28 = (__int64)&qword_14036CE20;
  qword_14036CE20 = (__int64)&qword_14036CE20;
  stru_14036C5D8.Header.WaitListHead.Blink = &stru_14036C5D8.Header.WaitListHead;
  stru_14036C5D8.Header.WaitListHead.Flink = &stru_14036C5D8.Header.WaitListHead;
  qword_14036CE08[0] = 0LL;
  qword_14036CE10 = 0LL;
  qword_14036CE18 = 0LL;
  qword_14036CE60 = 0LL;
  qword_14036C5F0 = 0LL;
  LOWORD(stru_14036C5D8.Header.Lock) = 0;
  stru_14036C5D8.Header.Size = 6;
  stru_14036C5D8.Header.SignalState = 0;
  MiAssignSessionRanges();
  if ( dword_1403E3134 == 6881367 )
  {
    MEMORY[0xFFFFF78000000264] = 1;
    dword_1403E3134 = 0;
  }
  else
  {
    v11 = 2;
    if ( dword_1403E3134 != 6357068 )
      v11 = 3;
    MEMORY[0xFFFFF78000000264] = v11;
    dword_1403E3134 = 1;
  }
  MiInitializeNumaRanges();
  MiInitializeChannelRanges();
  MmDynamicPfn = 0x1000000000LL;
  NestedPageProtectionFlags = VslGetNestedPageProtectionFlags();
  if ( NestedPageProtectionFlags )
  {
    v13 = MiFlags | 0x2000;
    MiFlags |= 0x2000u;
    if ( (NestedPageProtectionFlags & 4) != 0 )
    {
      v13 |= 0xC000u;
      MiFlags = v13;
    }
    if ( (NestedPageProtectionFlags & 1) != 0 )
    {
      v13 |= 0x50000u;
    }
    else
    {
      if ( (NestedPageProtectionFlags & 2) == 0 )
      {
LABEL_38:
        if ( (NestedPageProtectionFlags & 0x10) == 0 )
        {
          v13 |= 0x20000u;
          MiFlags = v13;
        }
        if ( (NestedPageProtectionFlags & 0x40) != 0 )
        {
          v13 |= 0x100000u;
          MiFlags = v13;
        }
        if ( (NestedPageProtectionFlags & 0x80u) != 0 )
          MiFlags = v13 | 0x80000;
        goto LABEL_44;
      }
      v13 |= 0x10000u;
    }
    MiFlags = v13;
    goto LABEL_38;
  }
LABEL_44:
  MiMemoryLicense(BugCheckParameter2);
  if ( !(unsigned int)MiFindLargestLoaderDescriptor(BugCheckParameter2) )
  {
    byte_14036CA3D = 3;
    return 0;
  }
  if ( (unsigned int)MiCheckLargePageOk(BugCheckParameter2) )
    MiFlags |= 4u;
  qword_14036C218 = -1LL;
  MiProtectSharedUserPage();
  if ( !(unsigned int)MiCreatePfnDatabase(BugCheckParameter2) )
  {
    byte_14036CA3D = 6;
    return 0;
  }
  MiInitializePfnsForValidMappings(BugCheckParameter2);
  MiSwitchToPfns(BugCheckParameter2);
  MxRelocatePageTables(BugCheckParameter2);
  MiZeroBootMappings();
  MiInitializeDecayPfns();
  MiInitializeSections((__int64)&MiSystemPartition);
  MiInitializeCommitment((unsigned __int64)&MiSystemPartition);
  MiInitializeDummyPages();
  if ( !(unsigned int)MiInitializeSystemPtes() )
  {
    byte_14036CA3D = 9;
    return 0;
  }
  if ( !(unsigned int)MiInitializeNonPagedPool() )
  {
    byte_14036CA3D = 7;
    return 0;
  }
  if ( !(unsigned int)MiMapDummyPages(v16, v15, v17) )
  {
    byte_14036CA3D = 5;
    return 0;
  }
  v18 = 0LL;
  if ( (MiFlags & 0x10000) != 0 )
    v18 = 1024LL;
  if ( !(unsigned int)InitializePool(512LL, v18) )
  {
    byte_14036CA3D = 2;
    return 0;
  }
  MiInitializeKernelStacks();
  if ( !(unsigned int)MmInitializeProcessor((__int64)KeGetCurrentPrcb(), v19, v20) )
  {
    byte_14036CA3D = 10;
    return 0;
  }
  v22 = (_QWORD *)MiReservePtes((__int64)&qword_14036D0A0, 1uLL, v21);
  qword_14036CAC8 = (__int64)v22;
  if ( !v22 )
  {
    byte_14036CA3D = 11;
    return 0;
  }
  *v22 = 0LL;
  if ( MiPteInShadowRange((unsigned __int64)v22) )
    MiWritePteShadow();
  MiFreeUnusedPfnPages(0LL);
  v29[0] = 0x100010100010101LL;
  v29[2] = 0x10101010101LL;
  v29[3] = 0x10101010101LL;
  v30 = 16843008;
  v29[1] = 0x101010101010101LL;
  v23 = MmInitializeMemoryLimits(BugCheckParameter2, (__int64)v29);
  if ( !v23 || (v24 = MiConvertInitialMemoryBlock((__int64)&MiSystemPartition, (__int64)v23)) == 0LL )
  {
    byte_14036CA3D = 12;
    return 0;
  }
  MxConsumeLargePageSlush();
  qword_140380240 = (__int64)MiCreateNodeLists((__int64)&MiSystemPartition, (__int64)v24);
  if ( !qword_140380240 )
  {
    byte_14036CA3D = 13;
    return 0;
  }
  MiComputeNodeMemory((__int64)&MiSystemPartition);
  if ( !(unsigned int)MiFillPfnGaps() )
  {
    byte_14036CA3D = 18;
    return 0;
  }
  if ( !(unsigned int)MiInitializeGapFrames(-1LL, &unk_14036CF08) )
  {
    byte_14036CA3D = 19;
    return 0;
  }
  if ( !(unsigned int)MiBuildPagedPool() || !(unsigned int)MiInitializeSpecialPool(0) )
    return 0;
  MmPhysicalMemoryBlock = v24;
  if ( !(unsigned int)MiCreateLargePfnBitMaps((__int64)&MiSystemPartition, v24, v25) )
  {
    byte_14036CA3D = 15;
    return 0;
  }
  MiMarkLargePageRanges();
  v27 = (_QWORD *)MiReservePtes((__int64)&qword_14036D0A0, 1uLL, v26);
  v28 = (unsigned __int64)v27;
  if ( !v27 )
  {
    byte_14036CA3D = 4;
    return 0;
  }
  *v27 = MiMakeValidPte((unsigned __int64)v27, qword_14036CEE0, 536870913);
  if ( MiPteInShadowRange(v28) )
    MiWritePteShadow();
  qword_14036C710 = MiComputeHash64((__int64)(v28 << 25) >> 16);
  MiReleasePtes((__int64)&qword_14036D0A0, (_QWORD *)v28, 1u);
  MiInitializeWsSwapping(&MiSystemPartition);
  MiInitializeNumaRanges();
  ExInitializeNPagedLookasideListInternal((__int64)&Lookaside, 0LL, 0LL, 512, 144, 1800170829, 0, 0);
  return 1;
}
