/*
 * XREFs of ExGenRandom @ 0x14004F864
 * Callers:
 *     RtlpAllocateHeap @ 0x14000F830 (RtlpAllocateHeap.c)
 *     RtlpCreateHeapEncoding @ 0x1401356B4 (RtlpCreateHeapEncoding.c)
 *     MiAssignSharedUserRanges @ 0x1401592B0 (MiAssignSharedUserRanges.c)
 *     MiBuildDynamicRegion @ 0x14015A518 (MiBuildDynamicRegion.c)
 *     CcBcbProfiler @ 0x140173A20 (CcBcbProfiler.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x14023E1CC (RtlpHeapGenerateRandomValue64.c)
 *     sub_140261AD0 @ 0x140261AD0 (sub_140261AD0.c)
 *     sub_14041C010 @ 0x14041C010 (sub_14041C010.c)
 *     PspWow64InitThreadGuestx86 @ 0x14042669C (PspWow64InitThreadGuestx86.c)
 *     RtlRandomEx @ 0x140459080 (RtlRandomEx.c)
 *     MiSelectImageBase @ 0x140495CE8 (MiSelectImageBase.c)
 *     PspPrepareSystemDllInitBlock @ 0x14049BCB0 (PspPrepareSystemDllInitBlock.c)
 *     MmCreateProcessAddressSpace @ 0x14049C77C (MmCreateProcessAddressSpace.c)
 *     MiInitializeProcessTopDownEntropy @ 0x14049E028 (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x14049E620 (MiInitializeProcessBottomUpEntropy.c)
 *     MiProcessLoadConfigForDriver @ 0x1404B13E8 (MiProcessLoadConfigForDriver.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1404C85E0 (MiAllocateNewSubAllocatedRegion.c)
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 *     PspUserThreadStartup @ 0x1404F8330 (PspUserThreadStartup.c)
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 *     PspSetupUserStack @ 0x140516848 (PspSetupUserStack.c)
 *     MiReserveDriverPtes @ 0x14055D0C4 (MiReserveDriverPtes.c)
 *     CmpCmdInit @ 0x1405A8688 (CmpCmdInit.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14071172C (EtwpGetPrivateSessionTraceHandle.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 *     CcInitializeCacheManager @ 0x1407FE20C (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x1407FE634 (ObInitSystem.c)
 *     ExpTimerInitialization @ 0x1407FEE34 (ExpTimerInitialization.c)
 *     MiInitializeRelocations @ 0x140802B04 (MiInitializeRelocations.c)
 *     MiInitializeNonPagedPool @ 0x140803DE4 (MiInitializeNonPagedPool.c)
 *     MiAssignTopLevelRanges @ 0x1408111C0 (MiAssignTopLevelRanges.c)
 *     MiAssignSystemVa @ 0x14081142C (MiAssignSystemVa.c)
 *     MiAddSubRegionEntropy @ 0x14081150C (MiAddSubRegionEntropy.c)
 *     MiInitializeTopLevelBitmap @ 0x1408115D8 (MiInitializeTopLevelBitmap.c)
 *     MiInitializeBootDefaults @ 0x140812ADC (MiInitializeBootDefaults.c)
 *     MiAssignSessionRanges @ 0x140812DC8 (MiAssignSessionRanges.c)
 *     MiInitializeSystemPtes @ 0x14081469C (MiInitializeSystemPtes.c)
 *     InitializePool @ 0x140814AC0 (InitializePool.c)
 *     ExpInitSystemPhase0 @ 0x14081F114 (ExpInitSystemPhase0.c)
 *     ExRngInitializeSystem @ 0x140821B84 (ExRngInitializeSystem.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
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
  int v9; // ecx
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
    v9 = 0;
    while ( 1 )
    {
      __asm { rdrand  rdx }
      if ( _CF )
        break;
      if ( (unsigned int)++v9 >= 0xA )
        return v8;
    }
    v8 ^= _RDX;
  }
  return v8;
}
