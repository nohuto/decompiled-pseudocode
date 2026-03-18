/*
 * XREFs of MmReleaseLoadLock @ 0x1404B2930
 * Callers:
 *     MiShutdownSystem @ 0x1404193D0 (MiShutdownSystem.c)
 *     MmEnumerateSystemImages @ 0x1404B0CF8 (MmEnumerateSystemImages.c)
 *     MmLoadSystemImageEx @ 0x1404B191C (MmLoadSystemImageEx.c)
 *     MmChangeImageProtection @ 0x1404B2670 (MmChangeImageProtection.c)
 *     MiObtainSectionForDriver @ 0x1404F7528 (MiObtainSectionForDriver.c)
 *     MiSessionUnloadAllImages @ 0x14057A5E0 (MiSessionUnloadAllImages.c)
 *     MmUnloadSystemImage @ 0x1405856E0 (MmUnloadSystemImage.c)
 *     MmBackSystemImageWithPagefile @ 0x14059D470 (MmBackSystemImageWithPagefile.c)
 *     MmFreeBootDriverInitializationCode @ 0x1405A8064 (MmFreeBootDriverInitializationCode.c)
 *     MmAddVerifierSpecialThunks @ 0x1406B4580 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x1406B4680 (MmAddVerifierThunks.c)
 *     MmEnableVerifierForDriver @ 0x140763C68 (MmEnableVerifierForDriver.c)
 *     VfAddVerifierEntry @ 0x140787E8C (VfAddVerifierEntry.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1408039CC (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     KeReleaseMutant @ 0x1400E3270 (KeReleaseMutant.c)
 */

__int64 __fastcall MmReleaseLoadLock(__int64 a1)
{
  KeReleaseMutant(&Mutant, 1, 0, 0);
  return KeLeaveCriticalRegionThread(a1);
}
