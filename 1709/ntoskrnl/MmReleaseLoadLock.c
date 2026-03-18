/*
 * XREFs of MmReleaseLoadLock @ 0x140515720
 * Callers:
 *     MiShutdownSystem @ 0x14042EC54 (MiShutdownSystem.c)
 *     MmChangeImageProtection @ 0x140515760 (MmChangeImageProtection.c)
 *     MmLoadSystemImageEx @ 0x1405431E0 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x140543848 (MiObtainSectionForDriver.c)
 *     MmUnloadSystemImage @ 0x14059DFC0 (MmUnloadSystemImage.c)
 *     MmFreeBootDriverInitializationCode @ 0x1405B7FF8 (MmFreeBootDriverInitializationCode.c)
 *     MmBackSystemImageWithPagefile @ 0x1405C861C (MmBackSystemImageWithPagefile.c)
 *     MmAddVerifierSpecialThunks @ 0x1406E0570 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x1406E0670 (MmAddVerifierThunks.c)
 *     MmEnumerateSystemImages @ 0x1406E2040 (MmEnumerateSystemImages.c)
 *     MiSessionUnloadAllImages @ 0x1406ED444 (MiSessionUnloadAllImages.c)
 *     MmEnableVerifierForDriver @ 0x1407A59C4 (MmEnableVerifierForDriver.c)
 *     VfAddVerifierEntry @ 0x1407CA2F4 (VfAddVerifierEntry.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x14082955C (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeReleaseMutant @ 0x1400DB760 (KeReleaseMutant.c)
 */

_QWORD *__fastcall MmReleaseLoadLock(__int64 a1)
{
  KeReleaseMutant(&Mutant, 1, 0, 0);
  return KeLeaveCriticalRegionThread(a1);
}
