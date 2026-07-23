/*
 * XREFs of MiInitNucleus @ 0x140898D68
 * Callers:
 *     MmInitSystem @ 0x14089C070 (MmInitSystem.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiComputeHash64 @ 0x14009EF60 (MiComputeHash64.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x14014B690 (ExInitializeNPagedLookasideListInternal.c)
 *     MiInitializeNumaRanges @ 0x14016F75C (MiInitializeNumaRanges.c)
 *     MiFreeUnusedPfnPages @ 0x14017A360 (MiFreeUnusedPfnPages.c)
 *     VslGetNestedPageProtectionFlags @ 0x14017D610 (VslGetNestedPageProtectionFlags.c)
 *     MiInitializeCommitment @ 0x14017DAD8 (MiInitializeCommitment.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     strstr @ 0x140187E10 (strstr.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExCreateHeap @ 0x1402BD44C (ExCreateHeap.c)
 *     RtlHpKInitializeHeapManager @ 0x1402BD718 (RtlHpKInitializeHeapManager.c)
 *     MmInitializeProcessor @ 0x14047BD90 (MmInitializeProcessor.c)
 *     MiInitializeSpecialPool @ 0x14060AB08 (MiInitializeSpecialPool.c)
 *     MiInitializeSections @ 0x14061BF24 (MiInitializeSections.c)
 *     MiInitializeWsSwapping @ 0x14061C05C (MiInitializeWsSwapping.c)
 *     MiCreateNodeLists @ 0x14061C340 (MiCreateNodeLists.c)
 *     MiCreateLargePfnBitMaps @ 0x14064A598 (MiCreateLargePfnBitMaps.c)
 *     MiConvertInitialMemoryBlock @ 0x14064E09C (MiConvertInitialMemoryBlock.c)
 *     MiComputeNodeMemory @ 0x14064FEE4 (MiComputeNodeMemory.c)
 *     MxConsumeLargePageSlush @ 0x140898030 (MxConsumeLargePageSlush.c)
 *     MmInitializeMemoryLimits @ 0x1408986B4 (MmInitializeMemoryLimits.c)
 *     MiMarkLargePageRanges @ 0x140898B08 (MiMarkLargePageRanges.c)
 *     MiCreatePfnDatabase @ 0x140899444 (MiCreatePfnDatabase.c)
 *     MiInitializePfnsForValidMappings @ 0x1408997A0 (MiInitializePfnsForValidMappings.c)
 *     MxRelocatePageTables @ 0x1408998F4 (MxRelocatePageTables.c)
 *     MiInitializeDummyPages @ 0x140899A78 (MiInitializeDummyPages.c)
 *     MiSwitchToPfns @ 0x140899CB8 (MiSwitchToPfns.c)
 *     MiFindLargestLoaderDescriptor @ 0x14089A57C (MiFindLargestLoaderDescriptor.c)
 *     MiInitializeNonPagedPool @ 0x14089CAE8 (MiInitializeNonPagedPool.c)
 *     MiInitializeKernelStacks @ 0x1408AB5F0 (MiInitializeKernelStacks.c)
 *     MiBuildPagedPool @ 0x1408AC498 (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x1408AC630 (MiInitializeSystemPtes.c)
 *     InitializePool @ 0x1408ACB14 (InitializePool.c)
 *     MiFillPfnGaps @ 0x1408BAA64 (MiFillPfnGaps.c)
 *     MiInitializeGapFrames @ 0x1408BAAB8 (MiInitializeGapFrames.c)
 *     MiZeroBootMappings @ 0x1408BBF64 (MiZeroBootMappings.c)
 *     MiInitializeDecayPfns @ 0x1408BC3FC (MiInitializeDecayPfns.c)
 *     MiMemoryLicense @ 0x1408BF670 (MiMemoryLicense.c)
 *     MiInitializeDynamicVa @ 0x1408C2DDC (MiInitializeDynamicVa.c)
 *     MiCreateTopLevelUltraMappings @ 0x1408C43B8 (MiCreateTopLevelUltraMappings.c)
 *     MiInitializeSystemPteTracker @ 0x1408C5040 (MiInitializeSystemPteTracker.c)
 *     MiInitializeZeroingAttributes @ 0x1408C5B60 (MiInitializeZeroingAttributes.c)
 *     MiInitializeBootDefaults @ 0x1408C69EC (MiInitializeBootDefaults.c)
 *     MiExamineHalVa @ 0x1408C7BCC (MiExamineHalVa.c)
 *     MiMapDummyPages @ 0x1408C7D9C (MiMapDummyPages.c)
 *     MiCheckLargePageOk @ 0x1408C8658 (MiCheckLargePageOk.c)
 *     MiProtectSharedUserPage @ 0x1408CA06C (MiProtectSharedUserPage.c)
 *     MiInitializeChannelRanges @ 0x1408CA1D8 (MiInitializeChannelRanges.c)
 */

char __fastcall MiInitNucleus(ULONG_PTR BugCheckParameter2)
{
  unsigned int v2; // edx
  int v3; // edx
  unsigned __int64 v4; // rax
  _KPROCESS *Process; // rdx
  __int16 v6; // cx
  int NestedPageProtectionFlags; // eax
  int v8; // ecx
  unsigned int v10; // ebx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rax
  char *v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // r9
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int128 v23; // [rsp+58h] [rbp-9h] BYREF
  __int128 v24; // [rsp+68h] [rbp+7h] BYREF
  _QWORD v25[4]; // [rsp+78h] [rbp+17h] BYREF
  int v26; // [rsp+98h] [rbp+37h]

  v2 = MiFlags ^ (MiFlags ^ (KiKvaShadowMode << 23)) & 0x1800000;
  dword_1403CB6C8 = 48;
  MiFlags = v2;
  if ( ((v2 >> 23) & 3) != 0 )
  {
    if ( ((v2 >> 23) & 3) == 1 )
    {
      word_1403CB7D0 = 0;
    }
    else if ( ((v2 >> 23) & 3) == 2 )
    {
      word_1403CB7D0 = 256;
    }
  }
  else
  {
    word_1403CB7D0 = 1;
  }
  if ( ((v2 >> 23) & 3) != 0 && KiImplementedPhysicalBits > 0 )
    qword_1403CB6E0 = 1LL << ((unsigned __int8)KiImplementedPhysicalBits - 1);
  if ( (KeFeatureBits & 0x100000) == 0 )
    KeBugCheckEx(0x1Au, 0x3030306uLL, KeFeatureBits, 0LL, 0LL);
  if ( KiAccessBitErrata == 1 )
  {
    v3 = v2 | 0x4000000;
  }
  else
  {
    if ( KiAccessBitErrata != 2 )
      goto LABEL_16;
    v3 = v2 | 0x800;
  }
  MiFlags = v3;
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
  v4 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = __readcr3();
  Process->DirectoryTableBase = (((v4 >> 12) & 0xFFFFFFFFFLL) << 12) | v6 & 0xFFF;
  MiLowHalVa = MiExamineHalVa();
  MiInitializeZeroingAttributes();
  MiInitializeBootDefaults(BugCheckParameter2);
  MiInitializeSystemPteTracker();
  qword_1403CC348[0] = 0LL;
  qword_1403CC368 = (__int64)&qword_1403CC360;
  qword_1403CC360 = (__int64)&qword_1403CC360;
  qword_1403CC350 = 0LL;
  qword_1403CC358 = 0LL;
  qword_1403CC3A0 = 0LL;
  MiInitializeDynamicVa();
  if ( dword_14044B190 == 6881367 )
  {
    MEMORY[0xFFFFF78000000264] = 1;
    dword_14044B190 = 0;
  }
  else
  {
    MEMORY[0xFFFFF78000000264] = (dword_14044B190 != 6357068) + 2;
    dword_14044B190 = 1;
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
LABEL_33:
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
        goto LABEL_39;
      }
      v8 |= 0x10000u;
    }
    MiFlags = v8;
    goto LABEL_33;
  }
LABEL_39:
  MiMemoryLicense(BugCheckParameter2);
  if ( !(unsigned int)MiFindLargestLoaderDescriptor(BugCheckParameter2) )
  {
    byte_1403CBED9 = 3;
    return 0;
  }
  MiCheckLargePageOk(BugCheckParameter2);
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)PsNtosImageBase) )
    MiFlags |= 4u;
  qword_1403CB708 = -1LL;
  MiProtectSharedUserPage();
  if ( !(unsigned int)MiCreatePfnDatabase(BugCheckParameter2) )
  {
    byte_1403CBED9 = 6;
    return 0;
  }
  MiInitializePfnsForValidMappings(BugCheckParameter2);
  MiSwitchToPfns(BugCheckParameter2);
  MxRelocatePageTables(BugCheckParameter2);
  MiZeroBootMappings();
  MiInitializeDecayPfns();
  if ( ((unsigned __int8)&stru_1403CC110 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  stru_1403CC110 = 0uLL;
  MiInitializeSections((__int64)&MiSystemPartition);
  MiInitializeCommitment((__int64)&MiSystemPartition);
  MiInitializeDummyPages();
  if ( !(unsigned int)MiInitializeSystemPtes() )
  {
    byte_1403CBED9 = 9;
    return 0;
  }
  if ( !(unsigned int)MiInitializeNonPagedPool() )
  {
    byte_1403CBED9 = 7;
    return 0;
  }
  if ( !(unsigned int)MiMapDummyPages() )
  {
    byte_1403CBED9 = 5;
    return 0;
  }
  v10 = (HIWORD(MiFlags) & 1) << 10;
  if ( ExpHeapBackedPoolEnabled
    && ((int)RtlHpKInitializeHeapManager() < 0
     || (v23 = xmmword_1403EFA20, (int)ExCreateHeap(&v23, 0LL, &qword_1403EFA50) < 0)
     || (v24 = xmmword_1403EFA20, (int)ExCreateHeap(&v24, 0x40000000LL, &qword_1403EFA58) < 0))
    || !(unsigned int)InitializePool(512LL, v10) )
  {
    byte_1403CBED9 = 2;
    return 0;
  }
  if ( !(unsigned int)MiInitializeKernelStacks() )
  {
    byte_1403CBED9 = 20;
    return 0;
  }
  if ( !(unsigned int)MiCreateTopLevelUltraMappings() )
    goto LABEL_62;
  if ( !(unsigned int)MmInitializeProcessor((__int64)KeGetCurrentPrcb()) )
  {
    byte_1403CBED9 = 10;
    return 0;
  }
  v11 = (_QWORD *)MiReservePtes((__int64)&qword_1403CC5E0, 1u);
  qword_1403CBF88 = (__int64)v11;
  if ( !v11 )
  {
    byte_1403CBED9 = 11;
    return 0;
  }
  *v11 = ZeroPte;
  if ( MiPteInShadowRange((unsigned __int64)v11) )
    MiWritePteShadow(v13, v12, v14);
  MiFreeUnusedPfnPages(0LL);
  v25[0] = 0x100010100010101LL;
  v26 = 16777472;
  v25[2] = 0x10101010101LL;
  v25[3] = 0x10101010101LL;
  v25[1] = 0x101010101010101LL;
  v15 = MmInitializeMemoryLimits(BugCheckParameter2, (__int64)v25);
  if ( !v15 || (v16 = MiConvertInitialMemoryBlock((__int64)&MiSystemPartition, (__int64)v15)) == 0LL )
  {
    byte_1403CBED9 = 12;
    return 0;
  }
  MxConsumeLargePageSlush();
  qword_1403CDF60 = (__int64)MiCreateNodeLists((__int64)&MiSystemPartition, (__int64)v16);
  if ( !qword_1403CDF60 )
  {
    byte_1403CBED9 = 13;
    return 0;
  }
  MiComputeNodeMemory((__int64)&MiSystemPartition);
  if ( !(unsigned int)MiFillPfnGaps() )
  {
    byte_1403CBED9 = 18;
    return 0;
  }
  if ( !(unsigned int)MiInitializeGapFrames(-1LL, &unk_1403CC448) )
  {
LABEL_62:
    byte_1403CBED9 = 19;
    return 0;
  }
  if ( !(unsigned int)MiBuildPagedPool() || !(unsigned int)MiInitializeSpecialPool(0) )
    return 0;
  MmPhysicalMemoryBlock = v16;
  if ( !(unsigned int)MiCreateLargePfnBitMaps((__int64)&MiSystemPartition, v16) )
  {
    byte_1403CBED9 = 15;
    return 0;
  }
  MiMarkLargePageRanges();
  v17 = (_QWORD *)MiReservePtes((__int64)&qword_1403CC5E0, 1u);
  v19 = (unsigned __int64)v17;
  if ( !v17 )
  {
    byte_1403CBED9 = 4;
    return 0;
  }
  *v17 = MiMakeValidPte((unsigned __int64)v17, qword_1403CC420, 536870913LL, v18);
  if ( MiPteInShadowRange(v19) )
    MiWritePteShadow(v21, v20, v22);
  qword_1403CBD10 = MiComputeHash64((__int64)(v19 << 25) >> 16);
  MiReleasePtes((__int64)&qword_1403CC5E0, v19, 1uLL);
  MiInitializeWsSwapping(&MiSystemPartition);
  MiInitializeNumaRanges();
  ExInitializeNPagedLookasideListInternal((__int64)&stru_1403CC140, 0LL, 0LL, 512, 144, 1800170829, 0, 0);
  return 1;
}
