/*
 * XREFs of VfDriverUnlock @ 0x14076730C
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x14024FED8 (VfIsVerificationEnabledForImage.c)
 *     VfTriageAddDrivers @ 0x14083568C (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140835AE4 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140835CA4 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     <none>
 */

LONG VfDriverUnlock()
{
  ViDriversLoadLockOwner = 0LL;
  return KeReleaseMutex(&ViDriversLoadLock, 0);
}
