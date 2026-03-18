/*
 * XREFs of MiCheckForConflictingVadExistence @ 0x140064450
 * Callers:
 *     MiIsVaRangeAvailable @ 0x14049E3E4 (MiIsVaRangeAvailable.c)
 *     MiMapViewOfDataSection @ 0x140512AC0 (MiMapViewOfDataSection.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 *     MiMapLockedPagesInUserSpace @ 0x14056C3D8 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1405C6964 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x1406BA9FC (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x140064470 (MiCheckForConflictingVad.c)
 */

_BOOL8 MiCheckForConflictingVadExistence()
{
  return MiCheckForConflictingVad() != 0;
}
