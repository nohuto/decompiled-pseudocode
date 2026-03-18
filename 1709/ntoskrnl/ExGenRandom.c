/*
 * XREFs of ExGenRandom @ 0x1400C3144
 * Callers:
 *     RtlpAllocateHeap @ 0x14010DCD4 (RtlpAllocateHeap.c)
 *     MiBuildDynamicRegion @ 0x140138F04 (MiBuildDynamicRegion.c)
 *     MiAssignSharedUserRanges @ 0x140143C30 (MiAssignSharedUserRanges.c)
 *     RtlpCreateHeapEncoding @ 0x14014F214 (RtlpCreateHeapEncoding.c)
 *     ExpLicensingWorker @ 0x140158B10 (ExpLicensingWorker.c)
 *     CcBcbProfiler @ 0x1401682E0 (CcBcbProfiler.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x14025BF98 (RtlpHeapGenerateRandomValue64.c)
 *     sub_14043C010 @ 0x14043C010 (sub_14043C010.c)
 *     MiInitializeProcessTopDownEntropy @ 0x14045E728 (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x14045EE48 (MiInitializeProcessBottomUpEntropy.c)
 *     MiCfgInitializeProcess @ 0x14045F104 (MiCfgInitializeProcess.c)
 *     PspPrepareSystemDllInitBlock @ 0x14045F94C (PspPrepareSystemDllInitBlock.c)
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 *     MiMapViewOfImageSection @ 0x1404D1270 (MiMapViewOfImageSection.c)
 *     MmCreateProcessAddressSpace @ 0x1404FB5AC (MmCreateProcessAddressSpace.c)
 *     MiSelectImageBase @ 0x140504474 (MiSelectImageBase.c)
 *     PspSetupUserStack @ 0x140508E04 (PspSetupUserStack.c)
 *     PspUserThreadStartup @ 0x14053F9C0 (PspUserThreadStartup.c)
 *     MiReserveDriverPtes @ 0x140541558 (MiReserveDriverPtes.c)
 *     MiProcessLoadConfigForDriver @ 0x140542FB0 (MiProcessLoadConfigForDriver.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14056A41C (MiAllocateNewSubAllocatedRegion.c)
 *     sub_140576284 @ 0x140576284 (sub_140576284.c)
 *     PspWow64InitThreadGuestx86 @ 0x14058F068 (PspWow64InitThreadGuestx86.c)
 *     RtlRandomEx @ 0x140597790 (RtlRandomEx.c)
 *     CmpCmdInit @ 0x1405CBF00 (CmpCmdInit.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x14070C050 (PopPublishAndPurgePowerRequestStats.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14074F27C (EtwpGetPrivateSessionTraceHandle.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 *     MiInitializeNonPagedPool @ 0x14082D7A8 (MiInitializeNonPagedPool.c)
 *     InitializePool @ 0x14082DEFC (InitializePool.c)
 *     MiInitializeBootDefaults @ 0x14082F394 (MiInitializeBootDefaults.c)
 *     MiInitializeSystemPtes @ 0x14082F554 (MiInitializeSystemPtes.c)
 *     MiAssignTopLevelRanges @ 0x140839D10 (MiAssignTopLevelRanges.c)
 *     MiAssignSystemVa @ 0x140839F54 (MiAssignSystemVa.c)
 *     MiAddSubRegionEntropy @ 0x14083A034 (MiAddSubRegionEntropy.c)
 *     MiInitializeTopLevelBitmap @ 0x14083A100 (MiInitializeTopLevelBitmap.c)
 *     CcInitializeCacheManager @ 0x140842C3C (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x140843034 (ObInitSystem.c)
 *     ExpTimerInitialization @ 0x1408439B8 (ExpTimerInitialization.c)
 *     ExpInitSystemPhase0 @ 0x14084FA14 (ExpInitSystemPhase0.c)
 *     MiAssignSessionRanges @ 0x1408522C4 (MiAssignSessionRanges.c)
 *     MiInitializeUltraSpace @ 0x14085270C (MiInitializeUltraSpace.c)
 *     ExRngInitializeSystem @ 0x140852A54 (ExRngInitializeSystem.c)
 *     MiInitializeRelocations @ 0x140855084 (MiInitializeRelocations.c)
 *     MiInitializeVadSecuring @ 0x140856D5C (MiInitializeVadSecuring.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
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
