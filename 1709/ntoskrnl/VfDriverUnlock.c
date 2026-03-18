/*
 * XREFs of VfDriverUnlock @ 0x1407A8EB0
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x1402766D8 (VfIsVerificationEnabledForImage.c)
 *     VfTriageAddDrivers @ 0x14086C8C4 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x14086CD1C (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x14086CEDC (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 */

LONG VfDriverUnlock()
{
  ViDriversLoadLockOwner = 0LL;
  return KeReleaseMutex(&ViDriversLoadLock, 0);
}
