/*
 * XREFs of ExGenRandom @ 0x1400692A0
 * Callers:
 *     RtlRandomEx @ 0x140071930 (RtlRandomEx.c)
 *     MiGenerateRandomPte @ 0x140084070 (MiGenerateRandomPte.c)
 *     MiInitializeColorTable @ 0x14016228C (MiInitializeColorTable.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x140170804 (RtlpHeapGenerateRandomValue64.c)
 *     MiBuildDynamicRegion @ 0x14017677C (MiBuildDynamicRegion.c)
 *     MiAssignSharedUserRanges @ 0x14017D65C (MiAssignSharedUserRanges.c)
 *     CcBcbProfiler @ 0x140192390 (CcBcbProfiler.c)
 *     IopInitializeInMemoryDumpData @ 0x140234FC0 (IopInitializeInMemoryDumpData.c)
 *     RtlpAllocateHeap @ 0x1402894E0 (RtlpAllocateHeap.c)
 *     RtlpCreateHeapEncoding @ 0x14028A224 (RtlpCreateHeapEncoding.c)
 *     RtlpHpLfhSubsegmentAllocateBlock @ 0x14029B370 (RtlpHpLfhSubsegmentAllocateBlock.c)
 *     sub_1402C0DB0 @ 0x1402C0DB0 (sub_1402C0DB0.c)
 *     sub_140489010 @ 0x140489010 (sub_140489010.c)
 *     MiMapViewOfImageSection @ 0x1404B4E30 (MiMapViewOfImageSection.c)
 *     PspUserThreadStartup @ 0x1404B8600 (PspUserThreadStartup.c)
 *     PspPrepareSystemDllInitBlock @ 0x1404EA008 (PspPrepareSystemDllInitBlock.c)
 *     MiInitializeProcessTopDownEntropy @ 0x1404ED5F4 (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x1404ED6CC (MiInitializeProcessBottomUpEntropy.c)
 *     MiSelectImageBase @ 0x1404F1960 (MiSelectImageBase.c)
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 *     sub_14053A3C8 @ 0x14053A3C8 (sub_14053A3C8.c)
 *     PspWow64InitThreadGuestx86 @ 0x1405633E4 (PspWow64InitThreadGuestx86.c)
 *     RtlRandom @ 0x14057F540 (RtlRandom.c)
 *     PspSetupUserStack @ 0x1405B9C34 (PspSetupUserStack.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1405BA858 (MiAllocateNewSubAllocatedRegion.c)
 *     MiReserveDriverPtes @ 0x1405F6850 (MiReserveDriverPtes.c)
 *     MiProcessLoadConfigForDriver @ 0x1405FA978 (MiProcessLoadConfigForDriver.c)
 *     CmpCmdInit @ 0x140627EE8 (CmpCmdInit.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407B36B0 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampStrideSamplerInitialize @ 0x1407B7350 (EtwpCovSampStrideSamplerInitialize.c)
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 *     MiInitializeNonPagedPool @ 0x14089CAE8 (MiInitializeNonPagedPool.c)
 *     MiInitializeRelocations @ 0x14089DB74 (MiInitializeRelocations.c)
 *     ExpInitSystemPhase0 @ 0x14089EA18 (ExpInitSystemPhase0.c)
 *     ExpTimerInitialization @ 0x1408A0088 (ExpTimerInitialization.c)
 *     CcInitializeCacheManager @ 0x1408A0410 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x1408A15F4 (ObInitSystem.c)
 *     MiInitializeSystemPtes @ 0x1408AC630 (MiInitializeSystemPtes.c)
 *     InitializePool @ 0x1408ACB14 (InitializePool.c)
 *     MiAssignTopLevelRanges @ 0x1408BB5B0 (MiAssignTopLevelRanges.c)
 *     MiAssignSystemVa @ 0x1408BB7D8 (MiAssignSystemVa.c)
 *     MiAddSubRegionEntropy @ 0x1408BB8C4 (MiAddSubRegionEntropy.c)
 *     MiInitializeTopLevelBitmap @ 0x1408BB990 (MiInitializeTopLevelBitmap.c)
 *     MiAssignSessionRanges @ 0x1408C2E40 (MiAssignSessionRanges.c)
 *     ExRngInitializeSystem @ 0x1408C3E74 (ExRngInitializeSystem.c)
 *     MiInitializeUltraSpace @ 0x1408C44CC (MiInitializeUltraSpace.c)
 *     MiInitializeBootDefaults @ 0x1408C69EC (MiInitializeBootDefaults.c)
 *     MiInitializeSharedUserData @ 0x1408C7258 (MiInitializeSharedUserData.c)
 *     MiInitializeVadSecuring @ 0x1408C8EF4 (MiInitializeVadSecuring.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall ExGenRandom(int a1)
{
  __int64 v1; // rdi
  KIRQL v2; // si
  char *v3; // r8
  unsigned int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rax
  int v7; // ebx
  unsigned int v8; // ebx
  int v10; // ecx
  int *v13; // rdi

  v1 = a1;
  v2 = KeAcquireSpinLockRaiseToDpc(&ExpLFGRngLock);
  if ( (_DWORD)v1 == 1 && ExpRemainingLeftoverBootRngData )
  {
    v13 = (int *)((char *)&ExpLeftoverBootRngData + 4 * (unsigned int)--ExpRemainingLeftoverBootRngData);
    v7 = *v13;
    memset(v13, 0, sizeof(int));
  }
  else
  {
    v3 = (char *)&ExpLFGRngState + 228 * v1;
    v4 = 0;
    if ( *((_DWORD *)v3 + 55) != 54 )
      v4 = *((_DWORD *)v3 + 55) + 1;
    v5 = v4;
    v6 = 0LL;
    if ( *((_DWORD *)v3 + 56) != 54 )
      v6 = (unsigned int)(*((_DWORD *)v3 + 56) + 1);
    v7 = *(_DWORD *)&v3[4 * v5] - *(_DWORD *)&v3[4 * v6];
    *(_DWORD *)&v3[4 * v5] = v7;
    *((_DWORD *)v3 + 55) = v5;
    *((_DWORD *)v3 + 56) = v6;
  }
  KxReleaseSpinLock(&ExpLFGRngLock);
  __writecr8(v2);
  v8 = ExpRNGAuxiliarySeed ^ v7;
  if ( (KeFeatureBits & 0x100000000LL) != 0 )
  {
    v10 = 0;
    while ( 1 )
    {
      __asm { rdrand  rdx }
      if ( _CF )
        break;
      if ( (unsigned int)++v10 >= 0xA )
        return v8;
    }
    v8 ^= _RDX;
  }
  return v8;
}
