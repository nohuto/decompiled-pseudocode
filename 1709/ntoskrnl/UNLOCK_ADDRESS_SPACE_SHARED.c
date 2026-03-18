/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003DE40
 * Callers:
 *     MmOutSwapWorkingSet @ 0x140014900 (MmOutSwapWorkingSet.c)
 *     MiObtainReferencedVad @ 0x140040AF0 (MiObtainReferencedVad.c)
 *     MiObtainReferencedSecureVad @ 0x1400E9550 (MiObtainReferencedSecureVad.c)
 *     MiLeapPrefetch @ 0x14010A194 (MiLeapPrefetch.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140215448 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapVirtualAddresses @ 0x140230E70 (MmOutSwapVirtualAddresses.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140452B80 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiCfgInitializeProcess @ 0x14045F104 (MiCfgInitializeProcess.c)
 *     MmQueryVirtualMemory @ 0x140497DA0 (MmQueryVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x1404D2F70 (MmCleanProcessAddressSpace.c)
 *     MiAllocateUserStack @ 0x1404D9354 (MiAllocateUserStack.c)
 *     MmGetImageBase @ 0x1404F1500 (MmGetImageBase.c)
 *     MiUnlockVadRange @ 0x1405405F8 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x140540730 (MiLockVadRange.c)
 *     MmCheckForSafeExecution @ 0x1406E4D70 (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x1406E4E4C (MmIsFileMapped.c)
 *     NtAllocateUserPhysicalPages @ 0x1406E5CD8 (NtAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x1406EBC04 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x1406EBEE4 (MiFreeLargePageView.c)
 *     MiScrubProcesses @ 0x1406EEA90 (MiScrubProcesses.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall UNLOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  __int64 result; // rax

  *(_BYTE *)(a1 + 1752) &= ~2u;
  v2 = a2 + 872;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 872), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2 + 872);
  result = KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    return KiCheckForKernelApcDelivery();
  return result;
}
