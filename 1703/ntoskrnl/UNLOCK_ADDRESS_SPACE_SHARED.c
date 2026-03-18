/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400CE380
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x140004100 (MmOutSwapVirtualAddresses.c)
 *     MiLeapPrefetch @ 0x14003A5C0 (MiLeapPrefetch.c)
 *     MmOutSwapWorkingSet @ 0x1400793EC (MmOutSwapWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14007C6D8 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiObtainReferencedSecureVad @ 0x140099160 (MiObtainReferencedSecureVad.c)
 *     MiObtainReferencedVad @ 0x1400BDAC0 (MiObtainReferencedVad.c)
 *     MmGetImageBase @ 0x14044852C (MmGetImageBase.c)
 *     MmCleanProcessAddressSpace @ 0x14047ABC0 (MmCleanProcessAddressSpace.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x14047AEF0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiCfgInitializeProcess @ 0x14049A54C (MiCfgInitializeProcess.c)
 *     MiAllocateUserStack @ 0x1404A434C (MiAllocateUserStack.c)
 *     MmQueryVirtualMemory @ 0x14051B090 (MmQueryVirtualMemory.c)
 *     MiUnlockVadRange @ 0x14054B6D0 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x14054B808 (MiLockVadRange.c)
 *     MmCheckForSafeExecution @ 0x1406B80F0 (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x1406B81CC (MmIsFileMapped.c)
 *     NtAllocateUserPhysicalPages @ 0x1406B8F84 (NtAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x1406BE7A4 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x1406BEB6C (MiFreeLargePageView.c)
 *     MiScrubProcesses @ 0x1406C0060 (MiScrubProcesses.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall UNLOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  __int64 result; // rax

  *(_BYTE *)(a1 + 1744) &= ~2u;
  v2 = a2 + 872;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 872), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2 + 872);
  KeAbPostRelease(v2);
  result = (unsigned int)((__int16)(*(_WORD *)(a1 + 486))++ + 1);
  if ( !(_WORD)result && *(_QWORD *)(a1 + 152) != a1 + 152 )
    return KiCheckForKernelApcDelivery();
  return result;
}
