/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400FE990
 * Callers:
 *     MiObtainReferencedVadEx @ 0x14001B0F0 (MiObtainReferencedVadEx.c)
 *     MmOutSwapWorkingSet @ 0x140062868 (MmOutSwapWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140083858 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapVirtualAddresses @ 0x14009C194 (MmOutSwapVirtualAddresses.c)
 *     MiObtainReferencedSecureVad @ 0x1400E45B0 (MiObtainReferencedSecureVad.c)
 *     MiUnlockVadRange @ 0x1404BFFA8 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1404C010C (MiLockVadRange.c)
 *     MiAllocateUserStack @ 0x1404E88F4 (MiAllocateUserStack.c)
 *     MiCfgInitializeProcess @ 0x1404E95B8 (MiCfgInitializeProcess.c)
 *     MmGetImageBase @ 0x14058C804 (MmGetImageBase.c)
 *     MmCleanProcessAddressSpace @ 0x140595928 (MmCleanProcessAddressSpace.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140595C30 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x1405B5C20 (MmQueryVirtualMemory.c)
 *     MmCheckForSafeExecution @ 0x14074F190 (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x14074F26C (MmIsFileMapped.c)
 *     NtAllocateUserPhysicalPages @ 0x14074FE5C (NtAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x140755658 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x14075595C (MiFreeLargePageView.c)
 *     MiScrubProcesses @ 0x140757F60 (MiScrubProcesses.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 */

__int64 __fastcall UNLOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  __int64 result; // rax

  *(_BYTE *)(a1 + 1752) &= ~2u;
  v2 = a2 + 872;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 872), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 872));
  result = KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    return KiCheckForKernelApcDelivery();
  return result;
}
