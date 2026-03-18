/*
 * XREFs of MiIsProcessCfgEnabled @ 0x1400A53F4
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x140498B10 (MmProtectVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x1404CEDF0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1404D1270 (MiMapViewOfImageSection.c)
 *     MiCommitVadCfgBits @ 0x1404D1EE4 (MiCommitVadCfgBits.c)
 *     MiCfgMarkValidEntries @ 0x1404D3370 (MiCfgMarkValidEntries.c)
 *     MiMapViewOfPhysicalSection @ 0x1405D96D4 (MiMapViewOfPhysicalSection.c)
 *     MmValidateUserCallTarget @ 0x1406EA620 (MmValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiIsProcessCfgEnabled()
{
  return *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 280LL) != 0LL;
}
