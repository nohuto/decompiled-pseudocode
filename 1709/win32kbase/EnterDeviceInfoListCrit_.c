/*
 * XREFs of EnterDeviceInfoListCrit_ @ 0x1C008AFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID EnterDeviceInfoListCrit_()
{
  return ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDeviceInfoList);
}
