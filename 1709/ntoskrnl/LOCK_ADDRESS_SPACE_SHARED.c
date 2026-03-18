/*
 * XREFs of LOCK_ADDRESS_SPACE_SHARED @ 0x14003D780
 * Callers:
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140452B80 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiCfgInitializeProcess @ 0x14045F104 (MiCfgInitializeProcess.c)
 *     MmQueryVirtualMemory @ 0x140497DA0 (MmQueryVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x1404D2F70 (MmCleanProcessAddressSpace.c)
 *     MiAllocateUserStack @ 0x1404D9354 (MiAllocateUserStack.c)
 *     MmGetImageBase @ 0x1404F1500 (MmGetImageBase.c)
 *     MiLockVadRange @ 0x140540730 (MiLockVadRange.c)
 *     MmCheckForSafeExecution @ 0x1406E4D70 (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x1406E4E4C (MmIsFileMapped.c)
 *     NtAllocateUserPhysicalPages @ 0x1406E5CD8 (NtAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x1406EBC04 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x1406EBEE4 (MiFreeLargePageView.c)
 *     MiScrubProcesses @ 0x1406EEA90 (MiScrubProcesses.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall LOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockSharedEx(a2 + 872, 0LL);
  *(_BYTE *)(a1 + 1752) |= 2u;
  return result;
}
