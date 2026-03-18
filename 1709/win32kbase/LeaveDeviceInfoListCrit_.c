/*
 * XREFs of LeaveDeviceInfoListCrit_ @ 0x1C008AFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void LeaveDeviceInfoListCrit_()
{
  ExReleaseResourceAndLeaveCriticalRegion(gpresDeviceInfoList);
}
