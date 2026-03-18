/*
 * XREFs of LOCK_ADDRESS_SPACE_SHARED @ 0x140117300
 * Callers:
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
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall LOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockSharedEx(a2 + 872, 0LL);
  *(_BYTE *)(a1 + 1752) |= 2u;
  return result;
}
