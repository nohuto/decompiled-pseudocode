/*
 * XREFs of VfDriverUnlock @ 0x140815EE8
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x1402A97FC (VfIsVerificationEnabledForImage.c)
 *     VfTriageAddDrivers @ 0x1408E160C (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x1408E1A64 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x1408E1C34 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 */

LONG VfDriverUnlock()
{
  ViDriversLoadLockOwner = 0LL;
  return KeReleaseMutex(&ViDriversLoadLock, 0);
}
