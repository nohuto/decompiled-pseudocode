/*
 * XREFs of MiLockVad @ 0x1400CE340
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14047ABC0 (MmCleanProcessAddressSpace.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x14047AEF0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiCfgInitializeProcess @ 0x14049A54C (MiCfgInitializeProcess.c)
 *     MiAllocateUserStack @ 0x1404A434C (MiAllocateUserStack.c)
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140512AC0 (MiMapViewOfDataSection.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1405160A8 (MiAllocateFromSubAllocatedRegion.c)
 *     MmQueryVirtualMemory @ 0x14051B090 (MmQueryVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 *     MiLockVadRange @ 0x14054B808 (MiLockVadRange.c)
 *     MiLockVadRangeHelper @ 0x14054B948 (MiLockVadRangeHelper.c)
 *     MiMapLockedPagesInUserSpace @ 0x14056C3D8 (MiMapLockedPagesInUserSpace.c)
 *     NtAreMappedFilesTheSame @ 0x1405833D4 (NtAreMappedFilesTheSame.c)
 *     MiMapViewOfPhysicalSection @ 0x1405C6964 (MiMapViewOfPhysicalSection.c)
 *     MmIsFileMapped @ 0x1406B81CC (MmIsFileMapped.c)
 *     MiAllocateEnclaveVad @ 0x1406BA9FC (MiAllocateEnclaveVad.c)
 *     MiDeleteAllPartialCloneVads @ 0x1406BF284 (MiDeleteAllPartialCloneVads.c)
 *     MiFreeRfgControlStack @ 0x1406BFE90 (MiFreeRfgControlStack.c)
 *     MiScrubProcesses @ 0x1406C0060 (MiScrubProcesses.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall MiLockVad(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockExclusiveEx(a2 + 40, 0LL);
  *(_BYTE *)(a1 + 1744) |= 0x80u;
  return result;
}
